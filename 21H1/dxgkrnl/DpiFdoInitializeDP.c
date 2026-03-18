/*
 * XREFs of DpiFdoInitializeDP @ 0x1C002219C
 * Callers:
 *     DpiFdoStartAdapter @ 0x1C0171310 (DpiFdoStartAdapter.c)
 * Callees:
 *     memset @ 0x1C0026840 (memset.c)
 *     DpiFdoCleanupDP @ 0x1C0050E08 (DpiFdoCleanupDP.c)
 *     DpiQueryMiniportInterface @ 0x1C01759A8 (DpiQueryMiniportInterface.c)
 */

__int64 __fastcall DpiFdoInitializeDP(__int64 a1)
{
  __int64 v1; // rsi
  __int64 v2; // rdi
  int MiniportInterface; // eax
  __int64 v4; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rax

  v1 = *(_QWORD *)(a1 + 64);
  LODWORD(v2) = 0;
  if ( !*(_WORD *)(v1 + 5584) )
  {
    MiniportInterface = DpiQueryMiniportInterface(a1, (unsigned int)&GUID_DXGK_DP_INTERFACE, 72, 1);
    v2 = MiniportInterface;
    if ( MiniportInterface >= 0 )
    {
      if ( *(_WORD *)(v1 + 5584) != 72
        || !*(_QWORD *)(v1 + 5616)
        || !*(_QWORD *)(v1 + 5624)
        || !*(_QWORD *)(v1 + 5632)
        || !*(_QWORD *)(v1 + 5640)
        || !*(_QWORD *)(v1 + 5648) )
      {
        DpiFdoCleanupDP(v1);
        LODWORD(v2) = -1073741823;
        v8 = WdLogNewEntry5_WdError(v7, v6);
        *(_QWORD *)(v8 + 24) = -1073741823LL;
        WdLogEvent5_WdError(v8);
      }
    }
    else
    {
      memset((void *)(v1 + 5584), 0, 0x48uLL);
      v4 = WdLogNewEntry5_WdEvent();
      *(_QWORD *)(v4 + 24) = v2;
      WdLogEvent5_WdEvent(v4);
    }
  }
  return (unsigned int)v2;
}
