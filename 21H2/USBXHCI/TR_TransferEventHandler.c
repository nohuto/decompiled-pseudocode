/*
 * XREFs of TR_TransferEventHandler @ 0x1C003FED4
 * Callers:
 *     Interrupter_DeferredWorkProcessor @ 0x1C0002BB0 (Interrupter_DeferredWorkProcessor.c)
 *     Endpoint_TransferEventHandler @ 0x1C0003980 (Endpoint_TransferEventHandler.c)
 * Callees:
 *     Control_ProcessTransferEventWithED1 @ 0x1C0006B04 (Control_ProcessTransferEventWithED1.c)
 *     Bulk_ProcessTransferEventWithED0 @ 0x1C000AE90 (Bulk_ProcessTransferEventWithED0.c)
 *     Bulk_ProcessTransferEventWithED1 @ 0x1C000E0D4 (Bulk_ProcessTransferEventWithED1.c)
 *     _guard_dispatch_icall_nop @ 0x1C00199B0 (_guard_dispatch_icall_nop.c)
 *     Control_ProcessTransferEventWithED0 @ 0x1C0040AA8 (Control_ProcessTransferEventWithED0.c)
 */

char __fastcall TR_TransferEventHandler(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  if ( a2 )
    return (*(__int64 (**)(void))(*(_QWORD *)(a2 + 32) + 88LL))();
  if ( (*(_DWORD *)a1 & 3) != 0 )
  {
    if ( (*(_DWORD *)a1 & 3u) <= 1uLL )
    {
      return 0;
    }
    else if ( (*(_DWORD *)(a1 + 12) & 4) != 0 )
    {
      return Bulk_ProcessTransferEventWithED1(a1, 0LL, a3, a4);
    }
    else
    {
      return Bulk_ProcessTransferEventWithED0(a1, 0LL);
    }
  }
  else if ( (*(_DWORD *)(a1 + 12) & 4) != 0 )
  {
    return Control_ProcessTransferEventWithED1((__int64 *)a1, 0LL);
  }
  else
  {
    return Control_ProcessTransferEventWithED0(a1, 0LL);
  }
}
