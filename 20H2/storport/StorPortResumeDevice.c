/*
 * XREFs of StorPortResumeDevice @ 0x1C0002CE0
 * Callers:
 *     StorPortResumeDeviceVrfy @ 0x1C007F740 (StorPortResumeDeviceVrfy.c)
 * Callees:
 *     DbgLogRequest @ 0x1C0002BF8 (DbgLogRequest.c)
 *     RaidQueueDeferredItem @ 0x1C0002E10 (RaidQueueDeferredItem.c)
 *     RaidAdapterFindUnit @ 0x1C00065E4 (RaidAdapterFindUnit.c)
 *     WPP_SF_ddd @ 0x1C003330C (WPP_SF_ddd.c)
 *     McTemplateK0pquuu_EtwWriteTransfer @ 0x1C00372C8 (McTemplateK0pquuu_EtwWriteTransfer.c)
 */

char __fastcall StorPortResumeDevice(__int64 a1, unsigned __int8 a2, unsigned __int8 a3, unsigned __int8 a4)
{
  int v4; // edi
  int v5; // r15d
  int v6; // ebp
  unsigned int v7; // r14d
  __int64 v8; // rsi
  int v9; // ecx
  __int64 Unit; // rax
  __int64 v11; // rdx
  __int64 retaddr; // [rsp+58h] [rbp+0h]
  unsigned int v14; // [rsp+60h] [rbp+8h]

  v4 = a4;
  v5 = a1;
  v6 = a3;
  v7 = a2;
  v8 = **(_QWORD **)(a1 - 16);
  HIBYTE(v14) = 0;
  if ( (qword_1C0069310 & 0x200) != 0 )
    DbgLogRequest(v8, 17, retaddr, v8, 0LL, a4 | (unsigned __int64)((a3 | (a2 << 8)) << 8), 0LL);
  v9 = 255;
  if ( v8 )
    v9 = *(_DWORD *)(v8 + 56);
  if ( (Microsoft_Windows_StorPortEnableBits & 4) != 0 )
    McTemplateK0pquuu_EtwWriteTransfer(v9, a2, a3, v5, v9, v7, v6, v4);
  if ( v8 )
  {
    LOBYTE(v14) = v7;
    BYTE1(v14) = v6;
    BYTE2(v14) = v4;
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u )
    {
      WPP_SF_ddd(WPP_GLOBAL_Control->AttachedDevice, 18LL, &WPP_42621249f2c9312d441c8bf8760aa631_Traceguids, v7, v6, v4);
    }
    Unit = RaidAdapterFindUnit(v8, v14);
    if ( Unit )
    {
      v11 = Unit + 1376;
      if ( _InterlockedCompareExchange((volatile signed __int32 *)(Unit + 1392), 134684676, 134684677) != 134684677 )
        v11 = 0LL;
      if ( v11 )
      {
        *(_DWORD *)(v11 + 32) = 6;
        *(_DWORD *)(v11 + 36) = v14;
        RaidQueueDeferredItem((PVOID)(v8 + 1152));
        return 1;
      }
      _InterlockedIncrement(&RaidUnloggedErrors);
      if ( (qword_1C0069310 & 0x800) != 0 )
        DbgLogRequest(v8, 22, retaddr, 650LL, 0LL, 0LL, 0LL);
    }
  }
  return 0;
}
