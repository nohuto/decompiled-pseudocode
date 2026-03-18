/*
 * XREFs of Bulk_CompleteTransfers @ 0x1C000C2F0
 * Callers:
 *     Bulk_ProcessTransferCompletion @ 0x1C000BA38 (Bulk_ProcessTransferCompletion.c)
 * Callees:
 *     StageQueue_ForwardScanGetNextStage @ 0x1C000C530 (StageQueue_ForwardScanGetNextStage.c)
 *     StageQueue_Release @ 0x1C000C574 (StageQueue_Release.c)
 *     TR_ReleaseSegments @ 0x1C000C5AC (TR_ReleaseSegments.c)
 *     Bulk_Transfer_Complete @ 0x1C000C840 (Bulk_Transfer_Complete.c)
 *     TR_ReleaseDoubleBuffer @ 0x1C000CA48 (TR_ReleaseDoubleBuffer.c)
 *     Bulk_Stage_FreeScatterGatherList @ 0x1C000DBA8 (Bulk_Stage_FreeScatterGatherList.c)
 *     _guard_dispatch_icall_nop @ 0x1C001BCF0 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_DDDqd @ 0x1C0045E68 (WPP_RECORDER_SF_DDDqd.c)
 */

_QWORD **__fastcall Bulk_CompleteTransfers(__int64 a1, __int64 ****a2)
{
  KSPIN_LOCK *v3; // r12
  __int64 ***v5; // rbx
  __int64 **v6; // rax
  __int64 i; // rax
  __int64 v8; // rsi
  __int64 v9; // r8
  __int64 v10; // r13
  _QWORD *v11; // rax
  __int64 *v12; // rdx
  __int64 *v13; // rax
  __int64 *v14; // rdx
  _QWORD **result; // rax
  __int64 v16; // rdx
  int v17; // r8d
  __int64 **v18; // rcx
  int v19; // eax
  __int64 ****v20; // rax
  _QWORD *v21; // rax
  __int64 *v22; // rax
  __int64 ***v23; // rbx
  __int64 ****v24; // rax
  int v25; // eax
  __int64 **v26; // rdx
  struct _MDL *v27; // rcx
  __int64 **v28; // rdx
  unsigned __int16 v29; // ax
  bool v30; // cc
  struct _MDL *v31; // rax
  __int64 v32; // rdx
  int v33; // r8d
  _QWORD *v34; // [rsp+50h] [rbp-30h] BYREF
  __int64 ***v35; // [rsp+58h] [rbp-28h]
  __int64 *v36; // [rsp+60h] [rbp-20h] BYREF
  __int64 **v37; // [rsp+68h] [rbp-18h]
  __int64 *v38; // [rsp+70h] [rbp-10h] BYREF
  __int64 **v39; // [rsp+78h] [rbp-8h]

  v37 = &v36;
  v3 = (KSPIN_LOCK *)(a1 + 96);
  v36 = (__int64 *)&v36;
  v39 = &v38;
  v38 = (__int64 *)&v38;
  v35 = (__int64 ***)&v34;
  v34 = &v34;
  *(_BYTE *)(a1 + 104) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
  while ( 1 )
  {
    v5 = *a2;
    if ( *a2 == (__int64 ***)a2 )
      break;
    if ( v5[1] != (__int64 **)a2 )
      goto LABEL_51;
    v6 = *v5;
    if ( (*v5)[1] != (__int64 *)v5 )
      goto LABEL_51;
    *a2 = (__int64 ***)v6;
    v6[1] = (__int64 *)a2;
    *((_BYTE *)v5 + 133) = *((_BYTE *)v5 + 132);
    *((_BYTE *)v5 + 134) = *((_BYTE *)v5 + 130);
    v5[1] = (__int64 **)v5;
    *v5 = (__int64 **)v5;
    for ( i = StageQueue_ForwardScanGetNextStage(v5 + 16); ; i = StageQueue_ForwardScanGetNextStage(v5 + 16) )
    {
      v8 = i;
      if ( !i )
        break;
      KeReleaseSpinLock(v3, *(_BYTE *)(a1 + 104));
      Bulk_Stage_FreeScatterGatherList(a1, v8);
      *(_BYTE *)(a1 + 104) = KeAcquireSpinLockRaiseToDpc(v3);
      v10 = *(_QWORD *)v8;
      if ( *(_BYTE *)(v8 + 44) )
      {
        IoFreeMdl(*(PMDL *)(v8 + 48));
        *(_QWORD *)(v8 + 48) = 0LL;
        *(_BYTE *)(v8 + 44) = 0;
      }
      LOBYTE(v9) = 1;
      TR_ReleaseSegments(a1, v8 + 8, v9);
      TR_ReleaseSegments(a1, v8 + 24, 0LL);
      StageQueue_Release(v10 + 128, v8);
      ++*((_DWORD *)v5 + 29);
      --*(_DWORD *)(a1 + 348);
    }
    if ( *((_DWORD *)v5 + 16) == 3 )
    {
      v11 = v37;
      if ( *v37 != (__int64 *)&v36 )
        goto LABEL_51;
      v5[1] = v37;
      *v5 = &v36;
      *v11 = v5;
      v37 = (__int64 **)v5;
    }
    else if ( (*(int (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64 **))(WdfFunctions_01023 + 2048))(
                WdfDriverGlobals,
                v5[3]) >= 0 )
    {
      v19 = *((_DWORD *)v5 + 17);
      *((_DWORD *)v5 + 16) = 0;
      if ( v19 == 1 || v19 == 28 )
      {
        v21 = v39;
        if ( *v39 != (__int64 *)&v38 )
          goto LABEL_51;
        v5[1] = v39;
        *v5 = &v38;
        *v21 = v5;
        v39 = (__int64 **)v5;
      }
      else
      {
        v20 = (__int64 ****)v35;
        if ( *v35 != &v34 )
          goto LABEL_51;
        v5[1] = (__int64 **)v35;
        *v5 = &v34;
        *v20 = v5;
        v35 = v5;
      }
    }
    else
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v16 = *(_QWORD *)(a1 + 48);
        v17 = *(unsigned __int8 *)(v16 + 135);
        LOBYTE(v16) = 4;
        WPP_RECORDER_SF_DDDqd(*(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL), v16, v17, 14);
      }
      *((_DWORD *)v5 + 16) = 2;
      v18 = *(__int64 ***)(a1 + 392);
      if ( *v18 != (__int64 *)(a1 + 384) )
LABEL_51:
        __fastfail(3u);
      *v5 = (__int64 **)(a1 + 384);
      v5[1] = v18;
      *v18 = (__int64 *)v5;
      *(_QWORD *)(a1 + 392) = v5;
    }
  }
  KeReleaseSpinLock(v3, *(_BYTE *)(a1 + 104));
  while ( 1 )
  {
    v12 = v36;
    if ( v36 == (__int64 *)&v36 )
      break;
    if ( (__int64 **)v36[1] != &v36 )
      goto LABEL_51;
    v13 = (__int64 *)*v36;
    if ( *(__int64 **)(*v36 + 8) != v36 )
      goto LABEL_51;
    v36 = (__int64 *)*v36;
    v13[1] = (__int64)&v36;
    v12[1] = (__int64)v12;
    *v12 = (__int64)v12;
    if ( *(_DWORD *)(a1 + 64) && !*((_DWORD *)v12 + 17) )
      *((_DWORD *)v12 + 17) = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 56) + 136LL) + 24LL);
    Bulk_Transfer_Complete(a1, v12, 3221291008LL);
  }
  while ( 1 )
  {
    v14 = v38;
    if ( v38 == (__int64 *)&v38 )
      break;
    if ( (__int64 **)v38[1] != &v38 )
      goto LABEL_51;
    v22 = (__int64 *)*v38;
    if ( *(__int64 **)(*v38 + 8) != v38 )
      goto LABEL_51;
    v38 = (__int64 *)*v38;
    v22[1] = (__int64)&v38;
    v14[1] = (__int64)v14;
    *v14 = (__int64)v14;
    Bulk_Transfer_Complete(a1, v14, 0xFFFFFFFFLL);
  }
  while ( 1 )
  {
    result = &v34;
    if ( v34 == &v34 )
      return result;
    v23 = v35;
    if ( *v35 != &v34 )
      goto LABEL_51;
    v24 = (__int64 ****)v35[1];
    if ( *v24 != v35 )
      goto LABEL_51;
    v35 = (__int64 ***)v35[1];
    *v24 = (__int64 ***)&v34;
    v25 = *((_DWORD *)v23 + 27);
    v23[1] = (__int64 **)v23;
    *v23 = (__int64 **)v23;
    v26 = v23[12];
    *((_DWORD *)v23 + 28) = v25;
    if ( v26 )
    {
      TR_ReleaseDoubleBuffer(a1);
      v23[12] = 0LL;
    }
    v27 = (struct _MDL *)v23[10];
    if ( v27 )
    {
      v28 = v23[6];
      v29 = *((_WORD *)v28 + 1);
      if ( v29 <= 0x38u || (v30 = v29 <= 0x3Au, v31 = 0LL, !v30) )
        v31 = (struct _MDL *)v28[6];
      if ( v27 != v31 && v27 != (struct _MDL *)v23[7][15] )
      {
        IoFreeMdl(v27);
        v23[10] = 0LL;
      }
    }
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64 **))(WdfFunctions_01023 + 2264))(WdfDriverGlobals, v23[3]);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v32 = *(_QWORD *)(a1 + 48);
      v33 = *(unsigned __int8 *)(v32 + 135);
      LOBYTE(v32) = 4;
      WPP_RECORDER_SF_DDDqd(*(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL), v32, v33, 15);
    }
  }
}
