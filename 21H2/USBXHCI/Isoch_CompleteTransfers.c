/*
 * XREFs of Isoch_CompleteTransfers @ 0x1C0041F9C
 * Callers:
 *     Isoch_ProcessTransferCompletion @ 0x1C0042CD0 (Isoch_ProcessTransferCompletion.c)
 * Callees:
 *     StageQueue_Release @ 0x1C000E344 (StageQueue_Release.c)
 *     TR_ReleaseSegments @ 0x1C000E380 (TR_ReleaseSegments.c)
 *     StageQueue_ForwardScanGetNextStage @ 0x1C000FA58 (StageQueue_ForwardScanGetNextStage.c)
 *     _guard_dispatch_icall_nop @ 0x1C00199B0 (_guard_dispatch_icall_nop.c)
 *     Isoch_Stage_FreeScatterGatherList @ 0x1C0042EC8 (Isoch_Stage_FreeScatterGatherList.c)
 *     Isoch_Transfer_CompleteCancelable @ 0x1C004320C (Isoch_Transfer_CompleteCancelable.c)
 */

void __fastcall Isoch_CompleteTransfers(__int64 a1, _QWORD *a2)
{
  _QWORD *v4; // rdi
  __int64 v5; // rax
  KIRQL v6; // bl
  int v7; // r12d
  unsigned __int8 *i; // rax
  __int64 v9; // r13
  unsigned __int8 *v10; // rbx
  KIRQL v11; // dl

  while ( 1 )
  {
    v4 = (_QWORD *)*a2;
    if ( (_QWORD *)*a2 == a2 )
      break;
    if ( (_QWORD *)v4[1] != a2 || (v5 = *v4, *(_QWORD **)(*v4 + 8LL) != v4) )
      __fastfail(3u);
    *a2 = v5;
    *(_QWORD *)(v5 + 8) = a2;
    v4[1] = v4;
    *v4 = v4;
    if ( *((_DWORD *)v4 + 17) == 259 )
    {
      *((_BYTE *)v4 + 133) = *((_BYTE *)v4 + 132);
      v7 = 0;
      *((_BYTE *)v4 + 134) = *((_BYTE *)v4 + 130);
      for ( i = StageQueue_ForwardScanGetNextStage((unsigned __int8 *)v4 + 128);
            ;
            i = StageQueue_ForwardScanGetNextStage((unsigned __int8 *)v4 + 128) )
      {
        v10 = i;
        if ( !i )
          break;
        Isoch_Stage_FreeScatterGatherList(a1, i);
        *(_BYTE *)(a1 + 104) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
        v9 = *(_QWORD *)v10;
        if ( v10[56] )
        {
          IoFreeMdl(*((PMDL *)v10 + 8));
          *((_QWORD *)v10 + 8) = 0LL;
          v10[56] = 0;
        }
        TR_ReleaseSegments(a1, (unsigned __int64 *)v10 + 1, 1);
        TR_ReleaseSegments(a1, (unsigned __int64 *)v10 + 3, 0);
        StageQueue_Release((unsigned __int8 *)(v9 + 128), v10);
        KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), *(_BYTE *)(a1 + 104));
        ++*((_DWORD *)v4 + 28);
        ++v7;
      }
      *(_BYTE *)(a1 + 104) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
      Isoch_Transfer_CompleteCancelable(a1, (_DWORD)v4, -1, -1073676288, 1, 0);
      v11 = *(_BYTE *)(a1 + 104);
      *(_DWORD *)(a1 + 376) -= v7;
      KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), v11);
    }
    else
    {
      v6 = KfRaiseIrql(2u);
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01023 + 2104))(
        WdfDriverGlobals,
        v4[3],
        *((unsigned int *)v4 + 17));
      KeLowerIrql(v6);
    }
  }
}
