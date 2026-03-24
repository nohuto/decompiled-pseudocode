/*
 * XREFs of DxgNotifyInterruptCB @ 0x1C000D8A0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0028C00 (_guard_dispatch_icall_nop.c)
 *     DpiProcessMiracastNotifyInterrupt @ 0x1C0055204 (DpiProcessMiracastNotifyInterrupt.c)
 *     ?NotifyInterrupt@DXGDODPRESENT@@QEAAXPEAVDXGADAPTER@@PEAU_DXGKARGCB_NOTIFY_INTERRUPT_DATA@@@Z @ 0x1C005EF78 (-NotifyInterrupt@DXGDODPRESENT@@QEAAXPEAVDXGADAPTER@@PEAU_DXGKARGCB_NOTIFY_INTERRUPT_DATA@@@Z.c)
 */

void __fastcall DxgNotifyInterruptCB(__int64 a1, struct _DXGKARGCB_NOTIFY_INTERRUPT_DATA *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rax
  struct DXGADAPTER *v6; // rdx
  __int64 v7; // rax
  __int64 v8; // rax
  DXGDODPRESENT *v9; // rcx
  __int64 v10; // rax

  if ( KeGetCurrentIrql() < 2u )
  {
    v8 = WdLogNewEntry5_WdAssertion(a1, a2);
    *(_QWORD *)(v8 + 24) = 28LL;
    WdLogEvent5_WdAssertion(v8);
  }
  if ( a2->InterruptType == DXGK_INTERRUPT_MICACAST_CHUNK_PROCESSING_COMPLETE )
  {
    DpiProcessMiracastNotifyInterrupt(a1, a2);
  }
  else
  {
    v4 = *(_QWORD *)(a1 + 64);
    if ( (_InterlockedCompareExchange((volatile signed __int32 *)(v4 + 3916), 0, 0) & 2) != 0 )
    {
      v5 = *(_QWORD *)(a1 + 64);
      if ( v5 && *(_DWORD *)(v5 + 16) == 1953656900 && *(_DWORD *)(v5 + 20) == 2 )
      {
        v6 = *(struct DXGADAPTER **)(v5 + 3896);
        if ( v6 )
        {
          v7 = *((_QWORD *)v6 + 338);
          if ( v7 )
          {
            (*(void (__fastcall **)(__int64, struct _DXGKARGCB_NOTIFY_INTERRUPT_DATA *))(*(_QWORD *)(*(_QWORD *)(v7 + 616) + 8LL)
                                                                                       + 8LL))(
              a1,
              a2);
          }
          else
          {
            v9 = *(DXGDODPRESENT **)(*((_QWORD *)v6 + 337) + 392LL);
            if ( v9 )
              DXGDODPRESENT::NotifyInterrupt(v9, v6, a2);
          }
        }
      }
      else
      {
        v10 = WdLogNewEntry5_WdError(v4, 0LL);
        *(_QWORD *)(v10 + 24) = a1;
        WdLogEvent5_WdError(v10);
      }
    }
  }
}
