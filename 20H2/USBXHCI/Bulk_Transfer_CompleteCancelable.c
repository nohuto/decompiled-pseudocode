/*
 * XREFs of Bulk_Transfer_CompleteCancelable @ 0x1C000C124
 * Callers:
 *     Bulk_ProcessTransferEventWithED1 @ 0x1C000BEB4 (Bulk_ProcessTransferEventWithED1.c)
 *     Bulk_RetrieveNextStage @ 0x1C000CD50 (Bulk_RetrieveNextStage.c)
 *     Bulk_MapStage @ 0x1C000D4EC (Bulk_MapStage.c)
 *     Bulk_PrepareStage @ 0x1C000D984 (Bulk_PrepareStage.c)
 *     Bulk_ProcessTransferEventWithHaltedCompletion @ 0x1C00450BC (Bulk_ProcessTransferEventWithHaltedCompletion.c)
 * Callees:
 *     Bulk_Transfer_PrepareForCompletion @ 0x1C000C920 (Bulk_Transfer_PrepareForCompletion.c)
 *     _guard_dispatch_icall_nop @ 0x1C001BCF0 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_DDDqd @ 0x1C0045E68 (WPP_RECORDER_SF_DDDqd.c)
 */

void __fastcall Bulk_Transfer_CompleteCancelable(__int64 a1, __int64 *a2, unsigned int a3, char a4)
{
  unsigned int v5; // ebx
  int v7; // edx
  __int64 *v8; // rcx
  __int64 **v9; // rax
  KIRQL v10; // bl
  __int64 *v11; // rcx
  __int64 **v12; // rax
  __int64 v13; // rdx
  int v14; // r8d
  __int64 **v15; // rcx

  v5 = a3;
  v7 = *((_DWORD *)a2 + 16) - 1;
  if ( !v7 )
  {
    v8 = (__int64 *)*a2;
    v9 = (__int64 **)a2[1];
    if ( *(__int64 **)(*a2 + 8) == a2 && *v9 == a2 )
    {
      *v9 = v8;
      v8[1] = (__int64)v9;
      if ( (*(int (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01023 + 2048))(WdfDriverGlobals, a2[3]) >= 0 )
      {
        *((_DWORD *)a2 + 16) = 0;
LABEL_6:
        KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), *(_BYTE *)(a1 + 104));
        Bulk_Transfer_PrepareForCompletion(a1, a2, v5);
        v10 = KfRaiseIrql(2u);
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01023 + 2104))(
          WdfDriverGlobals,
          a2[3],
          *((unsigned int *)a2 + 18));
        KeLowerIrql(v10);
        *(_BYTE *)(a1 + 104) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
        return;
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v13 = *(_QWORD *)(a1 + 48);
        v14 = *(unsigned __int8 *)(v13 + 135);
        LOBYTE(v13) = 4;
        WPP_RECORDER_SF_DDDqd(*(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL), v13, v14, 42);
      }
      *((_DWORD *)a2 + 16) = 2;
      v15 = *(__int64 ***)(a1 + 392);
      if ( *v15 == (__int64 *)(a1 + 384) )
      {
        *a2 = a1 + 384;
        a2[1] = (__int64)v15;
        *v15 = a2;
        *(_QWORD *)(a1 + 392) = a2;
        return;
      }
    }
LABEL_19:
    __fastfail(3u);
  }
  if ( v7 != 2 )
    goto LABEL_6;
  if ( a4 )
  {
    v11 = (__int64 *)*a2;
    v12 = (__int64 **)a2[1];
    v5 = -1073676288;
    if ( a3 != -1 )
      v5 = a3;
    if ( (__int64 *)v11[1] == a2 && *v12 == a2 )
    {
      *v12 = v11;
      v11[1] = (__int64)v12;
      goto LABEL_6;
    }
    goto LABEL_19;
  }
}
