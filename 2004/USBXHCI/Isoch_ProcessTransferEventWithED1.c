/*
 * XREFs of Isoch_ProcessTransferEventWithED1 @ 0x1C0001F10
 * Callers:
 *     Isoch_EP_TransferEventHandler @ 0x1C0001EE0 (Isoch_EP_TransferEventHandler.c)
 * Callees:
 *     Isoch_MapTransfers @ 0x1C0001D00 (Isoch_MapTransfers.c)
 *     TR_AttemptStateChange @ 0x1C0001E00 (TR_AttemptStateChange.c)
 *     Isoch_Stage_CompleteTD @ 0x1C00021E0 (Isoch_Stage_CompleteTD.c)
 *     Isoch_Stage_Find @ 0x1C0002730 (Isoch_Stage_Find.c)
 *     Isoch_RetrieveNextStage @ 0x1C0002D30 (Isoch_RetrieveNextStage.c)
 *     Isoch_MapStage @ 0x1C0003760 (Isoch_MapStage.c)
 *     Isoch_PrepareStage @ 0x1C00038A0 (Isoch_PrepareStage.c)
 *     ESM_AddEvent @ 0x1C0007E70 (ESM_AddEvent.c)
 *     StageQueue_ForwardScanGetNextStage @ 0x1C000BC60 (StageQueue_ForwardScanGetNextStage.c)
 *     StageQueue_Release @ 0x1C000BCA4 (StageQueue_Release.c)
 *     TR_ReleaseSegments @ 0x1C000BCDC (TR_ReleaseSegments.c)
 *     WPP_RECORDER_SF_ddL @ 0x1C0016684 (WPP_RECORDER_SF_ddL.c)
 *     _guard_dispatch_icall_nop @ 0x1C00191C0 (_guard_dispatch_icall_nop.c)
 *     Controller_HwVerifierBreakIfEnabled @ 0x1C00314E4 (Controller_HwVerifierBreakIfEnabled.c)
 *     Controller_ReportFatalError @ 0x1C00323C0 (Controller_ReportFatalError.c)
 *     WPP_RECORDER_SF_DDi @ 0x1C003F1EC (WPP_RECORDER_SF_DDi.c)
 *     WPP_RECORDER_SF_DDqD @ 0x1C004019C (WPP_RECORDER_SF_DDqD.c)
 *     Isoch_Stage_FreeScatterGatherList @ 0x1C0041C28 (Isoch_Stage_FreeScatterGatherList.c)
 *     Isoch_Transfer_CompleteCancelable @ 0x1C0041F6C (Isoch_Transfer_CompleteCancelable.c)
 *     WPP_RECORDER_SF_DDLDDi @ 0x1C0042D78 (WPP_RECORDER_SF_DDLDDi.c)
 */

char __fastcall Isoch_ProcessTransferEventWithED1(__int64 a1, __int64 a2)
{
  __int64 v3; // rsi
  KIRQL v4; // al
  int v5; // edx
  __int64 v6; // rax
  KIRQL v7; // dl
  KSPIN_LOCK *v8; // rcx
  unsigned __int8 **v9; // r15
  int v10; // r13d
  unsigned __int8 *v11; // rdi
  int v12; // r13d
  __int64 v13; // rax
  unsigned __int8 *v14; // r12
  int v15; // r9d
  __int64 *v16; // r12
  unsigned __int8 v17; // al
  int v18; // ecx
  int v19; // eax
  __int64 v20; // r10
  char v22; // r15
  char i; // r14
  int v24; // eax
  __int64 v25; // rcx
  int v26; // edx
  int v27; // edx
  volatile signed __int32 *v28; // r10
  unsigned __int8 *v29; // r8
  unsigned __int8 *v30; // rcx
  __int64 v31; // rdx
  int v32; // eax
  unsigned __int8 **v33; // rdx
  unsigned __int8 **v34; // rcx
  __int64 *v35; // rax
  __int64 NextStage; // rax
  __int64 v37; // r8
  __int64 v38; // r9
  int v39; // esi
  __int64 v40; // r15
  __int64 v41; // r8
  bool v42; // zf
  int v43; // edx
  int v44; // edx
  int v45; // eax
  int v46; // eax
  __int64 v47; // rdx
  __int64 v48; // rcx
  int v49; // [rsp+60h] [rbp-19h]
  unsigned __int8 **v50; // [rsp+70h] [rbp-9h]
  __int64 *v51; // [rsp+78h] [rbp-1h] BYREF
  unsigned __int8 *v52; // [rsp+80h] [rbp+7h]
  __int64 v53; // [rsp+E0h] [rbp+67h] BYREF
  char v54; // [rsp+E8h] [rbp+6Fh] BYREF
  unsigned __int8 *v55; // [rsp+F0h] [rbp+77h] BYREF
  int v56; // [rsp+F8h] [rbp+7Fh] BYREF

  v53 = a1;
  v56 = 0;
  v3 = a1;
  v54 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    v25 = *(_QWORD *)(a2 + 56);
    v26 = HIWORD(*(_DWORD *)(v3 + 12)) & 0x1F;
    LOBYTE(v26) = 5;
    WPP_RECORDER_SF_DDLDDi(*(_QWORD *)(v25 + 80), v26, *(_DWORD *)(v3 + 8) & 0xFFFFFF, 27);
  }
  if ( (*(_QWORD *)v3 & 3) != 1 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v27 = HIBYTE(*(_DWORD *)(v3 + 12));
      LOBYTE(v27) = 2;
      WPP_RECORDER_SF_DDi(
        *(_QWORD *)(*(_QWORD *)(a2 + 56) + 80LL),
        v27,
        *(_QWORD *)v3,
        28,
        (__int64)&WPP_fe7147ca1260387a70ac7753034ead38_Traceguids,
        HIBYTE(*(_DWORD *)(v3 + 12)),
        HIWORD(*(_DWORD *)(v3 + 12)) & 0x1F,
        *(_QWORD *)v3);
    }
    Controller_ReportFatalError(*(_QWORD *)(a2 + 40), 2, 4126, 0, *(_QWORD *)(a2 + 48), *(_QWORD *)(a2 + 56), a2);
    return 0;
  }
  v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 96));
  v5 = *(_DWORD *)(a2 + 328);
  *(_BYTE *)(a2 + 104) = v4;
  if ( (v5 & 0x40) != 0 )
  {
    KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 96), v4);
    return 0;
  }
  v6 = Isoch_Stage_Find(a2, v3, v3);
  v7 = *(_BYTE *)(a2 + 104);
  v50 = (unsigned __int8 **)v6;
  v8 = (KSPIN_LOCK *)(a2 + 96);
  v9 = (unsigned __int8 **)v6;
  if ( (unsigned __int8)(*(_BYTE *)(v3 + 11) - 26) <= 2u )
  {
    *(_DWORD *)(a2 + 328) |= 0x40u;
    KeReleaseSpinLock(v8, v7);
    Isoch_Stage_CompleteTD(
      (_DWORD)v9,
      HIBYTE(*(_DWORD *)(v3 + 8)),
      *(_DWORD *)(v3 + 8) & 0xFFFFFF,
      0,
      (__int64)&v54,
      (__int64)&v56);
    v28 = *(volatile signed __int32 **)(a2 + 56);
    _m_prefetchw((const void *)(v28 + 8));
    if ( (_InterlockedOr(v28 + 8, 0x10u) & 0x10) != 0 )
    {
      Controller_HwVerifierBreakIfEnabled(
        *(_QWORD *)v28,
        *((_QWORD *)v28 + 1),
        *((_QWORD *)v28 + 3),
        0x2000000,
        (__int64)"Received duplicate Stopped Transfer Events",
        0LL,
        0LL);
    }
    else
    {
      _m_prefetchw((const void *)(v28 + 8));
      if ( (_InterlockedXor(v28 + 8, 8u) & 8) != 0 )
        ESM_AddEvent((PVOID)(v28 + 72));
    }
  }
  else
  {
    KeReleaseSpinLock(v8, v7);
    if ( !v9 )
      return 0;
    v10 = *(_DWORD *)(v3 + 8);
    v11 = *v9;
    v52 = (unsigned __int8 *)&v51;
    v12 = v10 & 0xFFFFFF;
    v49 = v12;
    v51 = (__int64 *)&v51;
    *(_BYTE *)(a2 + 104) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 96));
    v13 = a2 + 384;
    v14 = *(unsigned __int8 **)(a2 + 384);
    if ( v14 != (unsigned __int8 *)(a2 + 384) )
    {
      while ( 1 )
      {
        if ( v14 == v11 )
          goto LABEL_10;
        v29 = *(unsigned __int8 **)v14;
        v55 = v29;
        v30 = v29;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v31 = *((_QWORD *)v14 + 6);
          v32 = *(_DWORD *)(v31 + 128);
          LOBYTE(v31) = 4;
          WPP_RECORDER_SF_DDqD(
            *(_QWORD *)(*(_QWORD *)(a2 + 56) + 80LL),
            v31,
            *(unsigned __int8 *)(*(_QWORD *)(a2 + 48) + 135LL),
            23,
            (__int64)&WPP_fe7147ca1260387a70ac7753034ead38_Traceguids,
            *(_BYTE *)(*(_QWORD *)(a2 + 48) + 135LL),
            *(_DWORD *)(*(_QWORD *)(a2 + 56) + 144LL),
            *((_QWORD *)v14 + 3),
            v32);
          v30 = *(unsigned __int8 **)v14;
          v13 = a2 + 384;
          v29 = v55;
        }
        if ( *((unsigned __int8 **)v30 + 1) != v14 )
          break;
        v33 = (unsigned __int8 **)*((_QWORD *)v14 + 1);
        if ( *v33 != v14 )
          break;
        *v33 = v30;
        *((_QWORD *)v30 + 1) = v33;
        v34 = (unsigned __int8 **)v52;
        if ( *(__int64 ***)v52 != &v51 )
          break;
        *((_QWORD *)v14 + 1) = v52;
        *(_QWORD *)v14 = &v51;
        *v34 = v14;
        v52 = v14;
        v14 = v29;
        if ( v29 == (unsigned __int8 *)v13 )
          goto LABEL_10;
      }
LABEL_55:
      __fastfail(3u);
    }
LABEL_10:
    while ( 1 )
    {
      KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 96), *(_BYTE *)(a2 + 104));
      v16 = v51;
      LODWORD(v55) = 0;
      if ( v51 == (__int64 *)&v51 )
        break;
      if ( (__int64 **)v51[1] != &v51 )
        goto LABEL_55;
      v35 = (__int64 *)*v51;
      if ( *(__int64 **)(*v51 + 8) != v51 )
        goto LABEL_55;
      v51 = (__int64 *)*v51;
      v35[1] = (__int64)&v51;
      *((_BYTE *)v16 + 133) = *((_BYTE *)v16 + 132);
      *((_BYTE *)v16 + 134) = *((_BYTE *)v16 + 130);
      v16[1] = (__int64)v16;
      *v16 = (__int64)v16;
      NextStage = StageQueue_ForwardScanGetNextStage(v16 + 16);
      if ( NextStage )
      {
        v39 = (int)v55;
        v40 = NextStage;
        do
        {
          Isoch_Stage_FreeScatterGatherList(a2, v40, v37, v38);
          *(_BYTE *)(a2 + 104) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 96));
          v42 = *(_BYTE *)(v40 + 56) == 0;
          v55 = *(unsigned __int8 **)v40;
          if ( !v42 )
          {
            IoFreeMdl(*(PMDL *)(v40 + 64));
            *(_QWORD *)(v40 + 64) = 0LL;
            *(_BYTE *)(v40 + 56) = 0;
          }
          LOBYTE(v41) = 1;
          TR_ReleaseSegments(a2, v40 + 8, v41);
          TR_ReleaseSegments(a2, v40 + 24, 0LL);
          StageQueue_Release(v55 + 128, v40);
          KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 96), *(_BYTE *)(a2 + 104));
          ++v39;
          v40 = StageQueue_ForwardScanGetNextStage(v16 + 16);
        }
        while ( v40 );
        v9 = v50;
        v12 = v49;
        LODWORD(v55) = v39;
        v3 = v53;
      }
      *(_BYTE *)(a2 + 104) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 96));
      Isoch_Transfer_CompleteCancelable(a2, (_DWORD)v16, -1, -1, 1, 0);
      *(_DWORD *)(a2 + 376) -= (_DWORD)v55;
    }
    v17 = v11[130];
    v18 = v11[132];
    LOBYTE(v53) = 0;
    v11[133] = v18;
    v11[134] = v17;
    if ( v17 )
    {
      v19 = v11[128];
      --v11[134];
      v20 = (__int64)&v11[v18 * v19 + 144];
      for ( v11[133] = (v18 + 1) % (unsigned int)v11[129]; v20; v20 = StageQueue_ForwardScanGetNextStage(v11 + 128) )
      {
        if ( (unsigned __int8 **)v20 == v9 )
          break;
        LOBYTE(v15) = 1;
        *(_DWORD *)(v20 + 48) = *(_DWORD *)(v20 + 44) + 1;
        Isoch_Stage_CompleteTD(v20, 23, 0, v15, (__int64)&v53, (__int64)&v55);
      }
    }
    LOBYTE(v15) = 1;
    Isoch_Stage_CompleteTD((_DWORD)v9, *(unsigned __int8 *)(v3 + 11), v12, v15, (__int64)&v54, (__int64)&v56);
  }
  if ( !v54 )
    return 0;
  _InterlockedExchange((volatile __int32 *)(a2 + 344), 1);
  if ( _InterlockedCompareExchange((volatile signed __int32 *)(a2 + 108), 3, 2) != 2 )
  {
    if ( !v56 && _InterlockedCompareExchange((volatile signed __int32 *)(a2 + 108), 3, 4) == 4 )
    {
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01023 + 2560))(
        WdfDriverGlobals,
        *(_QWORD *)(a2 + 320),
        0LL);
      Isoch_MapTransfers(a2);
    }
    return 0;
  }
  v22 = 0;
  while ( 2 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      v43 = *(unsigned __int8 *)(*(_QWORD *)(a2 + 48) + 135LL);
      LOBYTE(v43) = 5;
      WPP_RECORDER_SF_ddL(
        *(_QWORD *)(*(_QWORD *)(a2 + 56) + 80LL),
        v43,
        14,
        67,
        (__int64)&WPP_fe7147ca1260387a70ac7753034ead38_Traceguids,
        *(_BYTE *)(*(_QWORD *)(a2 + 48) + 135LL),
        *(_DWORD *)(*(_QWORD *)(a2 + 56) + 144LL),
        v22);
    }
    for ( i = 0; ; ++i )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        v44 = *(unsigned __int8 *)(*(_QWORD *)(a2 + 48) + 135LL);
        LOBYTE(v44) = 5;
        WPP_RECORDER_SF_ddL(
          *(_QWORD *)(*(_QWORD *)(a2 + 56) + 80LL),
          v44,
          14,
          66,
          (__int64)&WPP_fe7147ca1260387a70ac7753034ead38_Traceguids,
          *(_BYTE *)(*(_QWORD *)(a2 + 48) + 135LL),
          *(_DWORD *)(*(_QWORD *)(a2 + 56) + 144LL),
          i);
      }
      *(_QWORD *)(a2 + 344) = 0LL;
      if ( !(unsigned __int8)Isoch_RetrieveNextStage(a2) )
      {
        if ( _InterlockedCompareExchange((volatile signed __int32 *)(a2 + 108), 2, 3) != 3
          && _InterlockedCompareExchange((volatile signed __int32 *)(a2 + 108), 0, 1) == 1 )
        {
          v47 = *(_QWORD *)(a2 + 56);
          if ( !*(_BYTE *)(v47 + 37)
            || (v48 = *(_QWORD *)(v47 + 136),
                _InterlockedIncrement((volatile signed __int32 *)(v48 + 20)) == *(_DWORD *)(v48 + 8)) )
          {
            ESM_AddEvent((PVOID)(v47 + 288));
          }
        }
        goto LABEL_28;
      }
      v45 = Isoch_PrepareStage(a2);
      if ( v45 != 1 )
        break;
LABEL_65:
      ;
    }
    if ( v45 == 3 )
      goto LABEL_28;
    if ( v45 != 2 )
    {
      if ( v45 == 4 )
      {
        TR_AttemptStateChange(a2, 3, 2);
        goto LABEL_28;
      }
      v46 = Isoch_MapStage(a2);
      if ( v46 == 2 )
        goto LABEL_28;
      if ( v46 == 4 )
      {
        if ( (unsigned int)TR_AttemptStateChange(a2, 3, 4) != 3 )
          goto LABEL_28;
        goto LABEL_67;
      }
      if ( (unsigned int)TR_AttemptStateChange(a2, 3, 3) != 3 )
        goto LABEL_28;
      goto LABEL_65;
    }
    if ( (unsigned int)TR_AttemptStateChange(a2, 3, 4) == 3 )
LABEL_67:
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64))(WdfFunctions_01023 + 2552))(
        WdfDriverGlobals,
        *(_QWORD *)(a2 + 320),
        -100000000LL);
LABEL_28:
    v24 = *(_DWORD *)(a2 + 108);
    if ( v24 == 2 )
    {
      if ( *(_DWORD *)(a2 + 344) && _InterlockedCompareExchange((volatile signed __int32 *)(a2 + 108), 3, 2) == 2 )
        goto LABEL_81;
    }
    else if ( v24 == 4
           && *(_DWORD *)(a2 + 348)
           && _InterlockedCompareExchange((volatile signed __int32 *)(a2 + 108), 3, 4) == 4 )
    {
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01023 + 2560))(
        WdfDriverGlobals,
        *(_QWORD *)(a2 + 320),
        0LL);
LABEL_81:
      ++v22;
      continue;
    }
    return 0;
  }
}
