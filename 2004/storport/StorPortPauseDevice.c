/*
 * XREFs of StorPortPauseDevice @ 0x1C00100D0
 * Callers:
 *     StorPortPauseDeviceVrfy @ 0x1C007E6E0 (StorPortPauseDeviceVrfy.c)
 * Callees:
 *     RaidAdapterFindUnit @ 0x1C00075A4 (RaidAdapterFindUnit.c)
 *     RaidQueueDeferredItem @ 0x1C0010370 (RaidQueueDeferredItem.c)
 *     RaidPauseUnitQueue @ 0x1C00103AC (RaidPauseUnitQueue.c)
 *     DbgLogRequest @ 0x1C00104E8 (DbgLogRequest.c)
 *     WPP_SF_ddd @ 0x1C003248C (WPP_SF_ddd.c)
 *     McTemplateK0pqquuu_EtwWriteTransfer @ 0x1C00362B0 (McTemplateK0pqquuu_EtwWriteTransfer.c)
 */

char __fastcall StorPortPauseDevice(
        __int64 a1,
        unsigned __int8 a2,
        unsigned __int8 a3,
        unsigned __int8 a4,
        unsigned int a5)
{
  int v5; // edi
  int v6; // esi
  int v7; // r15d
  __int64 v8; // rbp
  unsigned int v9; // r12d
  int v10; // ecx
  __int64 Unit; // rax
  __int64 v12; // r14
  _DWORD *v13; // rsi
  _UNKNOWN *retaddr; // [rsp+78h] [rbp+0h]
  int v16; // [rsp+80h] [rbp+8h]

  v5 = a1;
  v6 = a4;
  v7 = a3;
  v8 = **(_QWORD **)(a1 - 16);
  v9 = a2;
  HIBYTE(v16) = 0;
  if ( (qword_1C0068350 & 0x200) != 0 )
    DbgLogRequest(v8, 16, (_DWORD)retaddr, v8, a5, a4 | (unsigned __int64)((a3 | (a2 << 8)) << 8), 0LL);
  v10 = 255;
  if ( v8 )
    v10 = *(_DWORD *)(v8 + 56);
  if ( (Microsoft_Windows_StorPortEnableBits & 4) != 0 )
    McTemplateK0pqquuu_EtwWriteTransfer(v10, a2, a3, v5, a5, v10, v9, v7, v6);
  if ( v8 )
  {
    LOBYTE(v16) = v9;
    BYTE1(v16) = v7;
    BYTE2(v16) = v6;
    Unit = RaidAdapterFindUnit(v8, v16);
    v12 = Unit;
    if ( Unit )
    {
      ++*(_DWORD *)(Unit + 2144);
      if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20) != 0
        && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u )
      {
        WPP_SF_ddd(
          WPP_GLOBAL_Control->AttachedDevice,
          17LL,
          &WPP_0339ead6ae7834b95301b0e1e35a0c26_Traceguids,
          v9,
          v7,
          v6);
      }
      v13 = (_DWORD *)(v12 + 1296);
      if ( _InterlockedCompareExchange((volatile signed __int32 *)(v12 + 1312), 134684676, 134684677) != 134684677 )
        v13 = 0LL;
      if ( v13 )
      {
        v13[8] = 5;
        v13[9] = v16;
        v13[10] = a5;
        RaidPauseUnitQueue(v12);
        RaidQueueDeferredItem((PVOID)(v8 + 1152));
        return 1;
      }
      _InterlockedIncrement(&RaidUnloggedErrors);
      if ( (qword_1C0068350 & 0x800) != 0 )
        DbgLogRequest(v8, 22, (_DWORD)retaddr, 537, 0LL, 0LL, 0LL);
    }
    else if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
           && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20) != 0
           && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u )
    {
      WPP_SF_ddd(WPP_GLOBAL_Control->AttachedDevice, 16LL, &WPP_0339ead6ae7834b95301b0e1e35a0c26_Traceguids, v9, v7, v6);
    }
  }
  return 0;
}
