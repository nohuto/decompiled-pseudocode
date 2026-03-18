/*
 * XREFs of Isoch_CompleteStaleTransfers @ 0x1C0041D04
 * Callers:
 *     Isoch_ProcessTransferEventWithED0 @ 0x1C000AB84 (Isoch_ProcessTransferEventWithED0.c)
 * Callees:
 *     StageQueue_Release @ 0x1C000E344 (StageQueue_Release.c)
 *     TR_ReleaseSegments @ 0x1C000E380 (TR_ReleaseSegments.c)
 *     StageQueue_ForwardScanGetNextStage @ 0x1C000FA58 (StageQueue_ForwardScanGetNextStage.c)
 *     WPP_RECORDER_SF_DDqD @ 0x1C004196C (WPP_RECORDER_SF_DDqD.c)
 *     Isoch_Stage_FreeScatterGatherList @ 0x1C0042EC8 (Isoch_Stage_FreeScatterGatherList.c)
 *     Isoch_Transfer_CompleteCancelable @ 0x1C004320C (Isoch_Transfer_CompleteCancelable.c)
 */

__int64 **__fastcall Isoch_CompleteStaleTransfers(__int64 a1, __int64 ***a2)
{
  KSPIN_LOCK *v3; // r14
  __int64 ****v5; // r15
  __int64 ***v6; // rbx
  __int64 **v7; // rsi
  __int64 **v8; // rax
  __int64 v9; // rcx
  __int64 ****v10; // rcx
  _QWORD *v11; // rax
  __int64 *v12; // rbx
  __int64 **result; // rax
  int v14; // r15d
  __int64 *v15; // rax
  __int64 v16; // r13
  unsigned __int8 *NextStage; // rax
  unsigned __int8 *v18; // rsi
  __int64 v19; // [rsp+28h] [rbp-38h]
  __int64 v20; // [rsp+30h] [rbp-30h]
  __int64 v21; // [rsp+40h] [rbp-20h]
  __int64 *v22; // [rsp+50h] [rbp-10h] BYREF
  __int64 **v23; // [rsp+58h] [rbp-8h]

  v23 = &v22;
  v3 = (KSPIN_LOCK *)(a1 + 96);
  v22 = (__int64 *)&v22;
  v5 = (__int64 ****)(a1 + 384);
  *(_BYTE *)(a1 + 104) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
  v6 = *v5;
  if ( *v5 != (__int64 ***)v5 )
  {
    while ( 1 )
    {
      if ( v6 == a2 )
        goto LABEL_9;
      v7 = *v6;
      v8 = *v6;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v9 = *(_QWORD *)(a1 + 56);
        LODWORD(v21) = *((_DWORD *)v6[6] + 32);
        LODWORD(v20) = *(_DWORD *)(v9 + 144);
        LODWORD(v19) = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL);
        WPP_RECORDER_SF_DDqD(
          *(_QWORD *)(v9 + 80),
          4u,
          *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL),
          0x17u,
          (__int64)&WPP_fe7147ca1260387a70ac7753034ead38_Traceguids,
          v19,
          v20,
          v6[3],
          v21);
        v8 = *v6;
      }
      if ( v8[1] != (__int64 *)v6 )
        break;
      v10 = (__int64 ****)v6[1];
      if ( *v10 != v6 )
        break;
      *v10 = (__int64 ***)v8;
      v8[1] = (__int64 *)v10;
      v11 = v23;
      if ( *v23 != (__int64 *)&v22 )
        break;
      v6[1] = v23;
      *v6 = &v22;
      *v11 = v6;
      v23 = (__int64 **)v6;
      v6 = (__int64 ***)v7;
      if ( v7 == (__int64 **)v5 )
        goto LABEL_9;
    }
LABEL_18:
    __fastfail(3u);
  }
LABEL_9:
  while ( 1 )
  {
    KeReleaseSpinLock(v3, *(_BYTE *)(a1 + 104));
    v12 = v22;
    result = &v22;
    if ( v22 == (__int64 *)&v22 )
      return result;
    v14 = 0;
    if ( (__int64 **)v22[1] != &v22 )
      goto LABEL_18;
    v15 = (__int64 *)*v22;
    if ( *(__int64 **)(*v22 + 8) != v22 )
      goto LABEL_18;
    v22 = (__int64 *)*v22;
    v15[1] = (__int64)&v22;
    *((_BYTE *)v12 + 133) = *((_BYTE *)v12 + 132);
    *((_BYTE *)v12 + 134) = *((_BYTE *)v12 + 130);
    v12[1] = (__int64)v12;
    *v12 = (__int64)v12;
    while ( 1 )
    {
      NextStage = StageQueue_ForwardScanGetNextStage((unsigned __int8 *)v12 + 128);
      v18 = NextStage;
      if ( !NextStage )
        break;
      Isoch_Stage_FreeScatterGatherList(a1, NextStage);
      *(_BYTE *)(a1 + 104) = KeAcquireSpinLockRaiseToDpc(v3);
      v16 = *(_QWORD *)v18;
      if ( v18[56] )
      {
        IoFreeMdl(*((PMDL *)v18 + 8));
        *((_QWORD *)v18 + 8) = 0LL;
        v18[56] = 0;
      }
      TR_ReleaseSegments(a1, (unsigned __int64 *)v18 + 1, 1);
      TR_ReleaseSegments(a1, (unsigned __int64 *)v18 + 3, 0);
      StageQueue_Release((unsigned __int8 *)(v16 + 128), v18);
      KeReleaseSpinLock(v3, *(_BYTE *)(a1 + 104));
      ++v14;
    }
    *(_BYTE *)(a1 + 104) = KeAcquireSpinLockRaiseToDpc(v3);
    Isoch_Transfer_CompleteCancelable(a1, (_DWORD)v12, -1, -1, 1, 0);
    *(_DWORD *)(a1 + 376) -= v14;
  }
}
