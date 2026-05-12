/*
 * XREFs of StorPortDeviceReady @ 0x1C00381E0
 * Callers:
 *     StorPortDeviceReadyVrfy @ 0x1C007E1B0 (StorPortDeviceReadyVrfy.c)
 * Callees:
 *     RaidAdapterFindUnit @ 0x1C00075A4 (RaidAdapterFindUnit.c)
 *     RaidQueueDeferredItem @ 0x1C0010370 (RaidQueueDeferredItem.c)
 *     DbgLogRequest @ 0x1C00104E8 (DbgLogRequest.c)
 *     WPP_SF_ddd @ 0x1C003248C (WPP_SF_ddd.c)
 */

char __fastcall StorPortDeviceReady(__int64 a1, unsigned __int8 a2, unsigned __int8 a3, unsigned __int8 a4)
{
  int v4; // ebp
  int v5; // r15d
  int v6; // r14d
  __int64 v7; // rsi
  __int64 Unit; // rax
  __int64 v9; // rdx
  __int64 v11; // [rsp+20h] [rbp-38h]
  __int64 v12; // [rsp+28h] [rbp-30h]
  __int64 retaddr; // [rsp+58h] [rbp+0h]
  int v14; // [rsp+60h] [rbp+8h]

  v4 = a4;
  v5 = a3;
  v6 = a2;
  v7 = **(_QWORD **)(a1 - 16);
  HIBYTE(v14) = 0;
  if ( (qword_1C0068350 & 0x200) != 0 )
    DbgLogRequest(v7, 21, retaddr, v7, 0LL, a4 | (unsigned __int64)((a3 | (a2 << 8)) << 8), 0LL);
  if ( !v7 )
    return 0;
  LOBYTE(v14) = v6;
  BYTE1(v14) = v5;
  BYTE2(v14) = v4;
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u )
  {
    LODWORD(v12) = v4;
    LODWORD(v11) = v5;
    WPP_SF_ddd(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      0x14u,
      (__int64)&WPP_0339ead6ae7834b95301b0e1e35a0c26_Traceguids,
      v6,
      v11,
      v12);
  }
  Unit = RaidAdapterFindUnit(v7, v14);
  if ( !Unit )
    return 0;
  v9 = Unit + 1536;
  if ( _InterlockedCompareExchange((volatile signed __int32 *)(Unit + 1552), 134684676, 134684677) != 134684677 )
    v9 = 0LL;
  if ( !v9 )
  {
    _InterlockedIncrement(&RaidUnloggedErrors);
    if ( (qword_1C0068350 & 0x800) != 0 )
      DbgLogRequest(v7, 22, retaddr, 944LL, 0LL, 0LL, 0LL);
    return 0;
  }
  *(_DWORD *)(v9 + 32) = 10;
  *(_DWORD *)(v9 + 36) = v14;
  RaidQueueDeferredItem((char *)(v7 + 1152), (struct _SLIST_ENTRY *)v9);
  return 1;
}
