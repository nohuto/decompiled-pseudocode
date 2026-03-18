/*
 * XREFs of Bulk_ProcessTransferEventWithED1 @ 0x1C000E0D4
 * Callers:
 *     Endpoint_TransferEventHandler @ 0x1C0003980 (Endpoint_TransferEventHandler.c)
 *     Bulk_EP_TransferEventHandler @ 0x1C000E0B0 (Bulk_EP_TransferEventHandler.c)
 *     TR_TransferEventHandler @ 0x1C003FED4 (TR_TransferEventHandler.c)
 * Callees:
 *     ESM_AddEvent @ 0x1C0005174 (ESM_AddEvent.c)
 *     Endpoint_HaltedCompletionCode @ 0x1C0006D5C (Endpoint_HaltedCompletionCode.c)
 *     WPP_RECORDER_SF_DDDD @ 0x1C000B300 (WPP_RECORDER_SF_DDDD.c)
 *     Bulk_ProcessTransferEventWithStoppedCompletion @ 0x1C000B3F8 (Bulk_ProcessTransferEventWithStoppedCompletion.c)
 *     Bulk_FindStage @ 0x1C000B5B0 (Bulk_FindStage.c)
 *     StageQueue_Release @ 0x1C000E344 (StageQueue_Release.c)
 *     TR_ReleaseSegments @ 0x1C000E380 (TR_ReleaseSegments.c)
 *     Bulk_Transfer_CompleteCancelable @ 0x1C000E3C8 (Bulk_Transfer_CompleteCancelable.c)
 *     Bulk_MapTransfers @ 0x1C000E85C (Bulk_MapTransfers.c)
 *     Bulk_Stage_FreeScatterGatherList @ 0x1C000F744 (Bulk_Stage_FreeScatterGatherList.c)
 *     WPP_RECORDER_SF_DDDqqq @ 0x1C000F794 (WPP_RECORDER_SF_DDDqqq.c)
 *     WPP_RECORDER_SF_DDDqLDDi @ 0x1C000F880 (WPP_RECORDER_SF_DDDqLDDi.c)
 *     Bulk_ValidateStagePointer @ 0x1C000F994 (Bulk_ValidateStagePointer.c)
 *     memmove @ 0x1C0019A00 (memmove.c)
 *     Controller_HwVerifierBreakIfEnabled @ 0x1C0031C54 (Controller_HwVerifierBreakIfEnabled.c)
 *     Controller_ReportFatalError @ 0x1C0032C20 (Controller_ReportFatalError.c)
 *     WPP_RECORDER_SF_DDDDD @ 0x1C003FF60 (WPP_RECORDER_SF_DDDDD.c)
 *     Bulk_ProcessTransferEventWithHaltedCompletion @ 0x1C0044A5C (Bulk_ProcessTransferEventWithHaltedCompletion.c)
 *     WPP_RECORDER_SF_DDDi @ 0x1C00453DC (WPP_RECORDER_SF_DDDi.c)
 */

char __fastcall Bulk_ProcessTransferEventWithED1(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  unsigned __int64 v4; // rsi
  char v5; // r13
  __int64 v6; // rdi
  char v8; // bl
  __int64 v9; // rbx
  unsigned int v10; // r8d
  unsigned int v11; // ebp
  int v12; // edx
  __int64 v13; // r10
  __int64 v14; // rax
  __int64 v15; // r8
  __int64 v16; // r14
  int v17; // eax
  int v19; // edx
  __int64 v20; // rax
  __int64 v21; // rbx
  __int64 v22; // rbx
  _QWORD *v23; // r10
  KSPIN_LOCK *v24; // rcx
  int v25; // edx
  int v26; // edx
  int v27; // eax
  __int64 v28; // rdx
  __int64 v29; // rcx
  int v30; // [rsp+20h] [rbp-88h]
  __int64 v31; // [rsp+28h] [rbp-80h]
  __int64 v32; // [rsp+30h] [rbp-78h]
  __int64 v33; // [rsp+38h] [rbp-70h]
  __int64 v34; // [rsp+40h] [rbp-68h]
  unsigned int v35; // [rsp+B8h] [rbp+10h] BYREF
  __int64 v36; // [rsp+C0h] [rbp+18h] BYREF

  v4 = *(_QWORD *)a1 & 0xFFFFFFFFFFFFFFFCuLL;
  v36 = 0LL;
  v5 = 0;
  v6 = a2;
  v8 = 0;
  if ( !a2 )
  {
    v9 = *(_QWORD *)v4;
    v6 = *(_QWORD *)(*(_QWORD *)v4 + 56LL);
LABEL_4:
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      HIDWORD(v34) = HIDWORD(a1);
      WPP_RECORDER_SF_DDDqLDDi(
        *(_QWORD *)(*(_QWORD *)(v6 + 56) + 80LL),
        *(unsigned __int8 *)(a1 + 15),
        *(unsigned __int8 *)(a1 + 11),
        *(_DWORD *)(a1 + 8) & 0xFFFFFF);
    }
    v10 = *(_DWORD *)(v4 + 40);
    v11 = *(_DWORD *)(a1 + 8) & 0xFFFFFF;
    if ( v11 > v10 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_DDDDD(
          *(_QWORD *)(*(_QWORD *)(v6 + 56) + 80LL),
          3,
          v10,
          56,
          (__int64)&WPP_f900c8e8530d3ebbc4303e7a1e3d0cbe_Traceguids,
          *(_BYTE *)(*(_QWORD *)(v6 + 48) + 135LL),
          *(_DWORD *)(*(_QWORD *)(v6 + 56) + 144LL),
          *(_DWORD *)(v6 + 64),
          *(_BYTE *)(a1 + 8),
          *(_DWORD *)(v4 + 40));
      v11 = 0;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_DDDqqq(
        *(_QWORD *)(*(_QWORD *)(v6 + 56) + 80LL),
        *(unsigned __int8 *)(*(_QWORD *)(v6 + 48) + 135LL),
        v10,
        a4,
        v30,
        *(_BYTE *)(*(_QWORD *)(v6 + 48) + 135LL),
        *(_DWORD *)(*(_QWORD *)(v6 + 56) + 144LL),
        *(_DWORD *)(v6 + 64),
        *(_QWORD *)(v9 + 24),
        v9,
        v4);
    if ( Endpoint_HaltedCompletionCode(*(__m128i ***)(v6 + 56), *(unsigned __int8 *)(a1 + 11)) )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v34) = v12;
        LODWORD(v33) = *(_DWORD *)(v6 + 64);
        LODWORD(v32) = *(_DWORD *)(v13 + 144);
        LODWORD(v31) = *(unsigned __int8 *)(*(_QWORD *)(v6 + 48) + 135LL);
        WPP_RECORDER_SF_DDDD(
          *(_QWORD *)(v13 + 80),
          2u,
          0xEu,
          0x3Au,
          (__int64)&WPP_f900c8e8530d3ebbc4303e7a1e3d0cbe_Traceguids,
          v31,
          v32,
          v33,
          v34);
        LOBYTE(v12) = *(_BYTE *)(a1 + 11);
      }
      Bulk_ProcessTransferEventWithHaltedCompletion(v6, v4, (unsigned __int8)v12, v11);
      goto LABEL_21;
    }
    if ( (unsigned __int8)(v12 - 26) > 2u )
    {
      *(_DWORD *)(v9 + 108) += v11;
      v14 = *(_QWORD *)(v9 + 48);
      *(_DWORD *)(v9 + 68) = v12;
      if ( (*(_DWORD *)(v14 + 32) & 1) != 0 && *(_DWORD *)(v9 + 76) == 2 )
        memmove(*(void **)(v4 + 64), *(const void **)(*(_QWORD *)(v4 + 72) + 16LL), v11);
      Bulk_Stage_FreeScatterGatherList(v6, v4);
      *(_BYTE *)(v6 + 104) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v6 + 96));
      v16 = *(_QWORD *)v4;
      if ( *(_BYTE *)(v4 + 44) )
      {
        IoFreeMdl(*(PMDL *)(v4 + 48));
        *(_QWORD *)(v4 + 48) = 0LL;
        *(_BYTE *)(v4 + 44) = 0;
      }
      LOBYTE(v15) = 1;
      TR_ReleaseSegments(v6, v4 + 8, v15);
      TR_ReleaseSegments(v6, v4 + 24, 0LL);
      StageQueue_Release(v16 + 128, v4);
      ++*(_DWORD *)(v9 + 116);
      if ( *(_DWORD *)(v9 + 68) == 13 || *(_DWORD *)(v9 + 112) == *(_DWORD *)(v9 + 104) )
        Bulk_Transfer_CompleteCancelable(v6, v9, 0xFFFFFFFFLL, 0LL);
      --*(_DWORD *)(v6 + 348);
      v17 = *(_DWORD *)(v6 + 352);
      if ( v17 )
      {
        v26 = v17 - 1;
        v27 = *(_DWORD *)(v6 + 324);
        *(_DWORD *)(v6 + 352) = v26;
        if ( (v27 & 2) != 0 && !v26 )
          v5 = 1;
      }
      KeReleaseSpinLock((PKSPIN_LOCK)(v6 + 96), *(_BYTE *)(v6 + 104));
      if ( !v5 )
        goto LABEL_21;
      v28 = *(_QWORD *)(v6 + 56);
      if ( *(_BYTE *)(v28 + 37) )
      {
        v29 = *(_QWORD *)(v28 + 136);
        if ( _InterlockedIncrement((volatile signed __int32 *)(v29 + 20)) != *(_DWORD *)(v29 + 8) )
          goto LABEL_21;
      }
      v24 = (KSPIN_LOCK *)(v28 + 288);
      v25 = 150;
      goto LABEL_50;
    }
    v20 = *(_QWORD *)(v4 + 96);
    v21 = 16LL * *(unsigned int *)(v4 + 104);
    v35 = 0;
    v22 = *(_QWORD *)(v20 + 24) + v21;
    *(_BYTE *)(v6 + 104) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v6 + 96));
    if ( Bulk_FindStage(v6, v22, &v36, &v35) && v36 == v4 )
      Bulk_ProcessTransferEventWithStoppedCompletion(v6, v4, *(unsigned __int8 *)(a1 + 11), v11, v35);
    *(_DWORD *)(v6 + 324) |= 8u;
    KeReleaseSpinLock((PKSPIN_LOCK)(v6 + 96), *(_BYTE *)(v6 + 104));
    v23 = *(_QWORD **)(v6 + 56);
    _m_prefetchw(v23 + 4);
    if ( (_InterlockedOr((volatile signed __int32 *)v23 + 8, 0x10u) & 0x10) != 0 )
    {
      Controller_HwVerifierBreakIfEnabled(
        *v23,
        v23[1],
        v23[3],
        0x2000000,
        (__int64)"Received duplicate Stopped Transfer Events",
        0LL,
        0LL);
    }
    else
    {
      _m_prefetchw(v23 + 4);
      if ( (_InterlockedXor((volatile signed __int32 *)v23 + 8, 8u) & 8) != 0 )
      {
        v24 = v23 + 36;
        v25 = 118;
LABEL_50:
        ESM_AddEvent(v24, v25);
      }
    }
LABEL_21:
    v8 = 1;
    goto LABEL_22;
  }
  if ( (unsigned __int8)Bulk_ValidateStagePointer(a2, v4) )
  {
    v9 = *(_QWORD *)v4;
    goto LABEL_4;
  }
  if ( !*(_DWORD *)(v6 + 64) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v19 = *(unsigned __int8 *)(a1 + 15);
      LOBYTE(v19) = 2;
      WPP_RECORDER_SF_DDDi(*(_QWORD *)(*(_QWORD *)(v6 + 56) + 80LL), v19, *(_WORD *)(a1 + 14) & 0x1F, 54);
    }
    Controller_ReportFatalError(*(_QWORD *)(v6 + 40), 2, 4126, 0, *(_QWORD *)(v6 + 48), *(_QWORD *)(v6 + 56), v6);
  }
LABEL_22:
  _InterlockedExchange((volatile __int32 *)(v6 + 340), 1);
  if ( _InterlockedCompareExchange((volatile signed __int32 *)(v6 + 108), 3, 2) == 2 )
    Bulk_MapTransfers(v6);
  return v8;
}
