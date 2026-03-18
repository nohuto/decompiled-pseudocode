/*
 * XREFs of Isoch_RetrieveNextStage @ 0x1C0002D30
 * Callers:
 *     Isoch_MappingLoop @ 0x1C0001D7C (Isoch_MappingLoop.c)
 *     Isoch_ProcessTransferEventWithED1 @ 0x1C0001F10 (Isoch_ProcessTransferEventWithED1.c)
 *     Isoch_WdfEvtIoQueueReadyNotification @ 0x1C0002AE0 (Isoch_WdfEvtIoQueueReadyNotification.c)
 * Callees:
 *     WPP_RECORDER_SF_DDqDDDD @ 0x1C00029C0 (WPP_RECORDER_SF_DDqDDDD.c)
 *     Isoch_TransferData_Initialize @ 0x1C00035F0 (Isoch_TransferData_Initialize.c)
 *     WPP_RECORDER_SF_DDqq @ 0x1C0004F80 (WPP_RECORDER_SF_DDqq.c)
 *     WPP_RECORDER_SF_dd @ 0x1C0005520 (WPP_RECORDER_SF_dd.c)
 *     WPP_RECORDER_SF_DDqd @ 0x1C000568C (WPP_RECORDER_SF_DDqd.c)
 *     WPP_RECORDER_SF_d @ 0x1C000F118 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ddL @ 0x1C0015850 (WPP_RECORDER_SF_ddL.c)
 *     _guard_dispatch_icall_nop @ 0x1C001BCF0 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_DDi @ 0x1C00406CC (WPP_RECORDER_SF_DDi.c)
 *     Isoch_GetPacketLength @ 0x1C00424A8 (Isoch_GetPacketLength.c)
 *     Isoch_Stage_Acquire @ 0x1C00430D8 (Isoch_Stage_Acquire.c)
 *     Isoch_TransferUrb_MarkLatePackets @ 0x1C0043294 (Isoch_TransferUrb_MarkLatePackets.c)
 *     Isoch_Transfer_Complete @ 0x1C0043390 (Isoch_Transfer_Complete.c)
 *     Isoch_Transfer_CompleteCancelable @ 0x1C0043460 (Isoch_Transfer_CompleteCancelable.c)
 */

_BOOL8 __fastcall Isoch_RetrieveNextStage(__int64 a1)
{
  __int16 v1; // bp
  KSPIN_LOCK *v2; // r15
  int v4; // ebx
  KIRQL v5; // al
  int v6; // edx
  bool v7; // zf
  _QWORD *v8; // r14
  __int64 v9; // rsi
  int v11; // eax
  __int64 v12; // r9
  int v13; // r11d
  __int64 v14; // rsi
  __int64 v15; // rax
  _DWORD *v16; // r12
  __int64 v17; // r10
  __int64 v18; // rdx
  unsigned int v19; // r8d
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rtt
  unsigned int v22; // ebx
  unsigned int v23; // eax
  __int64 v24; // rdx
  unsigned int v25; // edx
  unsigned int v26; // ecx
  int v27; // r8d
  unsigned int v28; // ecx
  unsigned int v29; // eax
  unsigned int v30; // edx
  __int64 v31; // rax
  __int64 v32; // r10
  __int64 v33; // rdx
  unsigned int v34; // r8d
  unsigned __int64 v35; // rax
  unsigned __int64 v36; // rtt
  unsigned int v37; // ebx
  unsigned int v38; // eax
  __int64 v39; // rdx
  int v40; // eax
  __int64 v41; // r12
  __int64 v42; // r8
  __int64 v43; // r13
  int v44; // r12d
  __int64 v45; // r10
  unsigned int v46; // r9d
  __int64 v47; // rdx
  unsigned int v48; // r8d
  unsigned __int64 v49; // rax
  unsigned __int64 v50; // rtt
  unsigned int v51; // ebx
  unsigned int v52; // eax
  __int64 v53; // rdx
  unsigned int v54; // ecx
  __int64 v55; // rsi
  unsigned int v56; // r12d
  unsigned int v57; // r15d
  unsigned int v58; // r10d
  unsigned int v59; // r11d
  int v60; // r8d
  char v61; // dl
  unsigned int v62; // r9d
  int v63; // ecx
  __int64 v64; // rax
  __int64 v65; // r8
  __int64 v66; // rcx
  int v67; // edx
  _QWORD *v68; // rax
  __int64 v69; // rax
  int v70; // edx
  int v71; // edx
  int v72; // r8d
  int v73; // edx
  __int64 v74; // rax
  int v75; // r8d
  __int64 v76; // rdx
  int v77; // r8d
  int v78; // edx
  __int64 v79; // rdx
  int v80; // r8d
  unsigned int v81; // r8d
  unsigned int v82; // eax
  int v83; // r9d
  int v84; // r8d
  int v85; // edx
  int v86; // r8d
  int v87; // edx
  __int64 v88; // rax
  int v89; // edx
  unsigned int v90; // eax
  unsigned int v91; // r14d
  __int64 v92; // r10
  int v93; // edx
  int v94; // edx
  __int64 v95; // rcx
  int v96; // edx
  int v97; // [rsp+20h] [rbp-A8h]
  __int64 v98; // [rsp+60h] [rbp-68h] BYREF
  __int64 v99; // [rsp+68h] [rbp-60h]
  __int64 v100; // [rsp+70h] [rbp-58h]
  int v101; // [rsp+D0h] [rbp+8h]
  unsigned int v102; // [rsp+D0h] [rbp+8h]
  int v103; // [rsp+D8h] [rbp+10h]
  unsigned int v104; // [rsp+E0h] [rbp+18h]
  __int64 v105; // [rsp+E8h] [rbp+20h] BYREF

  v1 = 0;
  v2 = (KSPIN_LOCK *)(a1 + 96);
  *(_QWORD *)(a1 + 368) = 0LL;
  v105 = 0LL;
  v98 = 0LL;
  v4 = -1073741823;
  v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
  v7 = *(_DWORD *)(a1 + 376) == 5;
  *(_BYTE *)(a1 + 104) = v5;
  if ( v7 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      v71 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL);
      LOBYTE(v71) = 5;
      WPP_RECORDER_SF_ddL(
        *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
        v71,
        14,
        52,
        (__int64)&WPP_fe7147ca1260387a70ac7753034ead38_Traceguids,
        *(_BYTE *)(*(_QWORD *)(a1 + 48) + 135LL),
        *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL),
        5);
    }
    goto LABEL_77;
  }
  v8 = (_QWORD *)(a1 + 384);
  if ( (_QWORD *)*v8 == v8 )
    goto LABEL_5;
  v7 = *(_DWORD *)(a1 + 336) == 3;
  v9 = *(_QWORD *)(a1 + 392);
  v105 = v9;
  if ( v7 )
  {
    if ( *(_DWORD *)(v9 + 112) == *(_DWORD *)(v9 + 116) )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v6) = 2;
        WPP_RECORDER_SF_dd(
          *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
          v6,
          14,
          53,
          (__int64)&WPP_fe7147ca1260387a70ac7753034ead38_Traceguids,
          *(_BYTE *)(*(_QWORD *)(a1 + 48) + 135LL),
          *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL));
      }
      Isoch_Transfer_CompleteCancelable(a1, v9, -1, -1073737728, 0, 0);
      goto LABEL_5;
    }
    *(_DWORD *)(v9 + 108) = *(_DWORD *)(v9 + 96) - *(_DWORD *)(v9 + 104);
    goto LABEL_77;
  }
  if ( (unsigned int)(*(_DWORD *)(v9 + 108) + *(_DWORD *)(v9 + 104)) < *(_DWORD *)(v9 + 96) )
  {
    Isoch_TransferUrb_MarkLatePackets(a1, v9);
    v72 = *(_DWORD *)(v9 + 96);
    if ( *(_DWORD *)(*(_QWORD *)(v9 + 48) + 12LL * (unsigned int)(v72 - 1) + 148) != -1073414144 )
    {
      v74 = Isoch_Stage_Acquire(v9);
      *(_QWORD *)(a1 + 368) = v74;
      if ( v74 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v76 = *(_QWORD *)(a1 + 48);
          v77 = *(unsigned __int8 *)(v76 + 135);
          LOBYTE(v76) = 4;
          WPP_RECORDER_SF_DDqq(
            *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
            v76,
            v77,
            55,
            (__int64)&WPP_fe7147ca1260387a70ac7753034ead38_Traceguids,
            v77,
            *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL),
            *(_QWORD *)(v9 + 24),
            v74);
        }
        v4 = 0;
      }
      else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
             && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        v78 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL);
        LOBYTE(v78) = 5;
        WPP_RECORDER_SF_DDi(
          *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
          v78,
          v75,
          56,
          (__int64)&WPP_fe7147ca1260387a70ac7753034ead38_Traceguids,
          *(_BYTE *)(*(_QWORD *)(a1 + 48) + 135LL),
          *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL),
          *(_QWORD *)(v9 + 24));
      }
      goto LABEL_77;
    }
    if ( *(_DWORD *)(v9 + 112) == *(_DWORD *)(v9 + 116) )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        v73 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL);
        LOBYTE(v73) = 5;
        WPP_RECORDER_SF_dd(
          *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
          v73,
          14,
          54,
          (__int64)&WPP_fe7147ca1260387a70ac7753034ead38_Traceguids,
          *(_BYTE *)(*(_QWORD *)(a1 + 48) + 135LL),
          *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL));
      }
      Isoch_Transfer_CompleteCancelable(a1, v9, 0, 0, 1, 1);
      goto LABEL_5;
    }
    *(_DWORD *)(v9 + 108) = v72 - *(_DWORD *)(v9 + 104);
LABEL_77:
    KeReleaseSpinLock(v2, *(_BYTE *)(a1 + 104));
    return v4 >= 0;
  }
LABEL_5:
  KeReleaseSpinLock(v2, *(_BYTE *)(a1 + 104));
  while ( 1 )
  {
    v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64 *))(WdfFunctions_01023 + 1264))(
           WdfDriverGlobals,
           *(_QWORD *)(a1 + 72),
           &v98);
    if ( v4 < 0 )
      break;
    v11 = Isoch_TransferData_Initialize(a1, v98, &v105);
    if ( v11 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v79 = *(_QWORD *)(a1 + 48);
        v80 = *(unsigned __int8 *)(v79 + 135);
        LOBYTE(v79) = 2;
        WPP_RECORDER_SF_DDqd(
          *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
          v79,
          v80,
          59,
          (__int64)&WPP_fe7147ca1260387a70ac7753034ead38_Traceguids,
          v80,
          *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL),
          v98,
          v11);
      }
      Isoch_Transfer_Complete(a1, v105, -1, -1073737728, 0);
    }
    else
    {
      v12 = v105;
      v13 = 0;
      v101 = 0;
      v99 = v105;
      v14 = *(_QWORD *)(v105 + 48);
      if ( *(_WORD *)(v14 + 2) == 10 )
      {
LABEL_14:
        v15 = 36LL;
      }
      else
      {
        switch ( *(_WORD *)(v14 + 2) )
        {
          case '9':
          case ':':
            v15 = 52LL;
            break;
          default:
            goto LABEL_14;
        }
      }
      v16 = (_DWORD *)(v14 + v15);
      if ( (*(_DWORD *)(v14 + 32) & 4) != 0 )
      {
        v17 = *(_QWORD *)(a1 + 40);
        v18 = MEMORY[0xFFFFF78000000320] * *(unsigned int *)(v17 + 444) / 10000LL;
        v19 = ((unsigned int)(**(_DWORD **)(*(_QWORD *)(v17 + 88) + 40LL) + 1) >> 3) & 0x7FF;
        _m_prefetchw((const void *)(v17 + 432));
        v20 = *(_QWORD *)(v17 + 432);
        do
        {
          v21 = v20;
          v20 = _InterlockedCompareExchange64((volatile signed __int64 *)(v17 + 432), v20, v20);
        }
        while ( v21 != v20 );
        v22 = v19 | (v18 + ((_DWORD)v20 << 11) - (v20 >> 21)) & 0xFFFFF800;
        v23 = ((_WORD)v18 + ((_WORD)v20 << 11) - (unsigned __int16)(v20 >> 21)) & 0x7FF;
        if ( v23 < v19 )
        {
          v81 = v19 - v23;
          v82 = v22 - 2048;
          if ( v81 <= 0x400 )
            v82 = v22;
          v22 = v82;
        }
        else if ( v23 - v19 > 0x400 )
        {
          v22 += 2048;
        }
        v24 = _InterlockedExchange64(
                (volatile __int64 *)(v17 + 432),
                ((unsigned __int64)v22 >> 11) | ((v18 - (v22 & 0x7FF)) << 21));
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
        {
          LOBYTE(v24) = 5;
          WPP_RECORDER_SF_d(
            *(_QWORD *)(v17 + 72),
            v24,
            4,
            174,
            (__int64)&WPP_1fced1a270be39d344e698c349d4a9f8_Traceguids,
            v22);
          v12 = v99;
          v13 = 0;
        }
        if ( *(_BYTE *)(a1 + 334)
          || ((v25 = *(_DWORD *)(a1 + 360),
               *(_DWORD *)(v14 + 128) = v25,
               (unsigned int)(*(_DWORD *)(*(_QWORD *)(a1 + 48) + 20LL) - 2) <= 1)
            ? (v26 = 1024)
            : (v26 = 255),
              v22 > v25 && v22 - v25 > v26) )
        {
          *(_BYTE *)(a1 + 333) = 1;
          *(_DWORD *)(v14 + 128) = v22 + 5;
          *(_DWORD *)(a1 + 360) = v22 + 5;
        }
        v27 = *(_DWORD *)(a1 + 360);
      }
      else
      {
        v27 = *(_DWORD *)(v14 + 128);
        *(_DWORD *)(a1 + 360) = v27;
      }
      v28 = *(_DWORD *)(a1 + 356);
      v29 = v28 + *(_DWORD *)(v14 + 132) - 1;
      if ( v28 != 1 )
        v29 /= v28;
      v30 = 0;
      *(_DWORD *)(a1 + 360) = v27 + v29;
      *v16 = 0;
      for ( *(_DWORD *)(v14 + 136) = 0; v30 < *(_DWORD *)(v14 + 132); *(_DWORD *)(v14 + 12 * v31 + 148) = -1 )
        v31 = v30++;
      v32 = *(_QWORD *)(a1 + 40);
      v33 = MEMORY[0xFFFFF78000000320] * *(unsigned int *)(v32 + 444) / 10000LL;
      v34 = ((unsigned int)(**(_DWORD **)(*(_QWORD *)(v32 + 88) + 40LL) + 2) >> 3) & 0x7FF;
      _m_prefetchw((const void *)(v32 + 432));
      v35 = *(_QWORD *)(v32 + 432);
      do
      {
        v36 = v35;
        v35 = _InterlockedCompareExchange64((volatile signed __int64 *)(v32 + 432), v35, v35);
      }
      while ( v36 != v35 );
      v37 = v34 | (v33 + ((_DWORD)v35 << 11) - (v35 >> 21)) & 0xFFFFF800;
      v38 = ((_WORD)v33 + ((_WORD)v35 << 11) - (unsigned __int16)(v35 >> 21)) & 0x7FF;
      if ( v38 < v34 )
      {
        v34 -= v38;
        if ( v34 > 0x400 )
          v37 -= 2048;
      }
      else if ( v38 - v34 > 0x400 )
      {
        v37 += 2048;
      }
      v39 = _InterlockedExchange64(
              (volatile __int64 *)(v32 + 432),
              ((unsigned __int64)v37 >> 11) | ((v33 - (v37 & 0x7FF)) << 21));
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        LOBYTE(v39) = 5;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(v32 + 72),
          v39,
          4,
          174,
          (__int64)&WPP_1fced1a270be39d344e698c349d4a9f8_Traceguids,
          v37);
        v12 = v99;
        v13 = 0;
      }
      v40 = *(_DWORD *)(v14 + 128) - v37;
      if ( v40 <= 0 )
        v40 = v37 - *(_DWORD *)(v14 + 128);
      if ( v40 > 1024 )
      {
        v13 = -1073741823;
        v101 = -1073741823;
      }
      else
      {
        *(_BYTE *)(a1 + 334) = 0;
      }
      v41 = v105;
      v100 = v105;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        WPP_RECORDER_SF_DDqDDDD(
          *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
          *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL),
          v34,
          v12,
          v97,
          *(_BYTE *)(*(_QWORD *)(a1 + 48) + 135LL),
          *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL),
          *(_QWORD *)(v105 + 24),
          *(_DWORD *)(v14 + 132),
          v37,
          *(_DWORD *)(v14 + 128),
          *(_DWORD *)(a1 + 360));
        v13 = v101;
        v12 = v99;
      }
      if ( v13 < 0 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v39) = 2;
          WPP_RECORDER_SF_DDqd(
            *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
            v39,
            *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL),
            60,
            (__int64)&WPP_fe7147ca1260387a70ac7753034ead38_Traceguids,
            *(_BYTE *)(*(_QWORD *)(a1 + 48) + 135LL),
            *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL),
            v98,
            v13);
        }
        v83 = -1073739264;
        v84 = -1073414144;
LABEL_129:
        Isoch_Transfer_Complete(a1, v41, v84, v83, 0);
      }
      else
      {
        v42 = *(_QWORD *)(v12 + 48);
        v43 = v42;
        if ( *(_WORD *)(v42 + 2) != 10 )
        {
          switch ( *(_WORD *)(v42 + 2) )
          {
            case '9':
            case ':':
              if ( !*(_BYTE *)(a1 + 280) )
              {
                if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                {
                  v85 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL);
                  LOBYTE(v85) = 2;
                  WPP_RECORDER_SF_DDi(
                    *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
                    v85,
                    v42,
                    30,
                    (__int64)&WPP_cd4ef2b1b5c53df0a5e2b7b6906ad1d0_Traceguids,
                    *(_BYTE *)(*(_QWORD *)(a1 + 48) + 135LL),
                    *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL),
                    v42);
                  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                  {
                    v87 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL);
                    LOBYTE(v87) = 2;
                    WPP_RECORDER_SF_DDqd(
                      *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
                      v87,
                      v86,
                      61,
                      (__int64)&WPP_fe7147ca1260387a70ac7753034ead38_Traceguids,
                      *(_BYTE *)(*(_QWORD *)(a1 + 48) + 135LL),
                      *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL),
                      v98,
                      13);
                  }
                }
                v83 = -2147482880;
                v84 = -1;
                goto LABEL_129;
              }
              v88 = *(_QWORD *)(a1 + 48);
              if ( !*(_BYTE *)(v88 + 672) && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                v89 = *(unsigned __int8 *)(v88 + 135);
                LOBYTE(v89) = 3;
                WPP_RECORDER_SF_DDi(
                  *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
                  v89,
                  v42,
                  32,
                  (__int64)&WPP_cd4ef2b1b5c53df0a5e2b7b6906ad1d0_Traceguids,
                  *(_BYTE *)(v88 + 135),
                  *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL),
                  v42);
                v43 = *(_QWORD *)(v99 + 48);
              }
              break;
            default:
              break;
          }
        }
        v44 = *(_DWORD *)(v100 + 108) + *(_DWORD *)(v41 + 104);
        v103 = v44;
        v45 = *(_QWORD *)(a1 + 40);
        v46 = (unsigned int)(v44 + *(_DWORD *)(a1 + 356) - 1) / *(_DWORD *)(a1 + 356) + *(_DWORD *)(v43 + 128);
        v102 = v46;
        v47 = MEMORY[0xFFFFF78000000320] * *(unsigned int *)(v45 + 444) / 10000LL;
        v48 = ((unsigned int)(**(_DWORD **)(*(_QWORD *)(v45 + 88) + 40LL) + 2) >> 3) & 0x7FF;
        _m_prefetchw((const void *)(v45 + 432));
        v49 = *(_QWORD *)(v45 + 432);
        do
        {
          v50 = v49;
          v49 = _InterlockedCompareExchange64((volatile signed __int64 *)(v45 + 432), v49, v49);
        }
        while ( v50 != v49 );
        v51 = v48 | (v47 + ((_DWORD)v49 << 11) - (v49 >> 21)) & 0xFFFFF800;
        v52 = ((_WORD)v47 + ((_WORD)v49 << 11) - (unsigned __int16)(v49 >> 21)) & 0x7FF;
        if ( v52 < v48 )
        {
          v48 -= v52;
          v90 = v51 - 2048;
          if ( v48 <= 0x400 )
            v90 = v51;
          v51 = v90;
        }
        else if ( v52 - v48 > 0x400 )
        {
          v51 += 2048;
        }
        v53 = _InterlockedExchange64(
                (volatile __int64 *)(v45 + 432),
                ((unsigned __int64)v51 >> 11) | ((v47 - (v51 & 0x7FF)) << 21));
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
        {
          LOBYTE(v53) = 5;
          WPP_RECORDER_SF_d(
            *(_QWORD *)(v45 + 72),
            v53,
            4,
            174,
            (__int64)&WPP_1fced1a270be39d344e698c349d4a9f8_Traceguids,
            v51);
          v46 = v102;
        }
        v54 = *(_DWORD *)(a1 + 356);
        v55 = v105;
        v56 = *(_DWORD *)(v105 + 96) - v44 + v54 - 1;
        if ( v54 != 1 )
        {
          LODWORD(v53) = v56 % v54;
          v56 /= v54;
        }
        if ( v56 )
        {
          v57 = v103;
          v58 = v46 - v51;
          v59 = 0;
          v104 = v46 - v51;
          do
          {
            if ( v46 + v59 > v51 && v58 + v59 < 0x7FFFFFFF )
              break;
            v91 = 0;
            if ( *(_DWORD *)(a1 + 356) )
            {
              do
              {
                *(_DWORD *)(v43 + 12LL * v57 + 148) = -1073414144;
                *(_DWORD *)(v55 + 92) += Isoch_GetPacketLength(v55, v57++);
                ++*(_DWORD *)(v92 + 108);
                ++v91;
              }
              while ( v91 < *(_DWORD *)(a1 + 356) );
              v58 = v104;
              v46 = v102;
            }
            ++v59;
          }
          while ( v59 < v56 );
          v8 = (_QWORD *)(a1 + 384);
          v2 = (KSPIN_LOCK *)(a1 + 96);
        }
        if ( *(_DWORD *)(*(_QWORD *)(v99 + 48) + 12LL * (unsigned int)(*(_DWORD *)(v55 + 96) - 1) + 148) == -1073414144 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v53) = 4;
            WPP_RECORDER_SF_dd(
              *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
              v53,
              14,
              62,
              (__int64)&WPP_fe7147ca1260387a70ac7753034ead38_Traceguids,
              *(_BYTE *)(*(_QWORD *)(a1 + 48) + 135LL),
              *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL));
          }
          Isoch_Transfer_Complete(a1, v55, 0, 0, 1);
        }
        else if ( *(_DWORD *)(v55 + 80) )
        {
          *(_DWORD *)(v55 + 64) = 1;
          v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64 (__fastcall *)()))(WdfFunctions_01023
                                                                                                + 3144))(
                 WdfDriverGlobals,
                 *(_QWORD *)(v55 + 24),
                 Isoch_WdfEvtRequestCancel);
          if ( v4 >= 0 )
          {
            v61 = *(_BYTE *)(v55 + 130);
            v62 = *(unsigned __int8 *)(v55 + 129);
            if ( v61 == (_BYTE)v62 )
            {
              v65 = 0LL;
            }
            else
            {
              v63 = *(unsigned __int8 *)(v55 + 131);
              v64 = v63 * (unsigned int)*(unsigned __int8 *)(v55 + 128);
              *(_BYTE *)(v55 + 130) = v61 + 1;
              v65 = v64 + v55 + 144;
              *(_BYTE *)(v55 + 131) = (v63 + 1) % v62;
              if ( v65 )
              {
                v66 = *(_QWORD *)(v55 + 56);
                *(_QWORD *)(v65 + 16) = v65 + 8;
                *(_QWORD *)(v65 + 8) = v65 + 8;
                *(_QWORD *)(v65 + 32) = v65 + 24;
                *(_QWORD *)(v65 + 24) = v65 + 24;
                *(_QWORD *)(v65 + 72) = 0LL;
                *(_QWORD *)v65 = v55;
                *(_DWORD *)(v65 + 40) = -2;
                *(_DWORD *)(v65 + 44) = -2;
                *(_QWORD *)(v65 + 48) = 1LL;
                *(_BYTE *)(v65 + 56) = 0;
                *(_QWORD *)(v65 + 64) = 0LL;
                *(_QWORD *)(v65 + 80) = *(_QWORD *)(v66 + 176);
                *(_DWORD *)(v65 + 88) = *(_DWORD *)(v66 + 192);
                *(_QWORD *)(v65 + 96) = *(_QWORD *)(v66 + 176);
                *(_DWORD *)(v65 + 104) = *(_DWORD *)(v66 + 192);
                *(_QWORD *)(v65 + 112) = *(_QWORD *)(v66 + 176);
                *(_DWORD *)(v65 + 120) = *(_DWORD *)(v66 + 192);
                *(_DWORD *)(v65 + 160) = 0;
                if ( *(_BYTE *)(v66 + 280) )
                {
                  *(_QWORD *)(v65 + 184) = 0LL;
                  *(_DWORD *)(v65 + 168) = 1;
                  *(_QWORD *)(v65 + 72) = v65 + 168;
                  *(_DWORD *)(v65 + 192) = 0;
                }
                *(_OWORD *)(v65 + 128) = 0LL;
                *(_OWORD *)(v65 + 144) = 0LL;
              }
            }
            *(_QWORD *)(a1 + 368) = v65;
            if ( !*(_DWORD *)(a1 + 376) )
            {
              v69 = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 128LL);
              if ( *(_DWORD *)(v69 + 24) > 1u )
              {
                v95 = *(unsigned int *)(*(_QWORD *)(v55 + 48) + 64LL);
                if ( (unsigned int)v95 < *(_DWORD *)(v69 + 48) )
                  v1 = *(_WORD *)(*(_QWORD *)(v69 + 56) + 2 * v95);
              }
              *(_WORD *)(a1 + 112) = v1;
            }
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              v67 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL);
              LOBYTE(v67) = 4;
              WPP_RECORDER_SF_DDqq(
                *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
                v67,
                v65,
                65,
                (__int64)&WPP_fe7147ca1260387a70ac7753034ead38_Traceguids,
                *(_BYTE *)(*(_QWORD *)(a1 + 48) + 135LL),
                *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL),
                *(_QWORD *)(v55 + 24),
                v65);
            }
            *(_BYTE *)(a1 + 104) = KeAcquireSpinLockRaiseToDpc(v2);
            v68 = (_QWORD *)v8[1];
            if ( (_QWORD *)*v68 != v8 )
              __fastfail(3u);
            *(_QWORD *)v55 = v8;
            *(_QWORD *)(v55 + 8) = v68;
            *v68 = v55;
            v8[1] = v55;
            goto LABEL_77;
          }
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v94 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL);
            LOBYTE(v94) = 4;
            WPP_RECORDER_SF_DDqd(
              *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
              v94,
              v60,
              64,
              (__int64)&WPP_fe7147ca1260387a70ac7753034ead38_Traceguids,
              *(_BYTE *)(*(_QWORD *)(a1 + 48) + 135LL),
              *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL),
              *(_QWORD *)(v55 + 24),
              v4);
          }
          *(_DWORD *)(v55 + 64) = 3;
          Isoch_Transfer_Complete(a1, v55, -1, -1073676288, 0);
        }
        else
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v93 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL);
            LOBYTE(v93) = 4;
            WPP_RECORDER_SF_DDi(
              *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
              v93,
              v48,
              63,
              (__int64)&WPP_fe7147ca1260387a70ac7753034ead38_Traceguids,
              *(_BYTE *)(*(_QWORD *)(a1 + 48) + 135LL),
              *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL),
              v98);
          }
          Isoch_Transfer_Complete(a1, v55, -1, -1, 1);
        }
      }
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    v96 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL);
    LOBYTE(v96) = 5;
    WPP_RECORDER_SF_ddL(
      *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
      v96,
      14,
      57,
      (__int64)&WPP_fe7147ca1260387a70ac7753034ead38_Traceguids,
      *(_BYTE *)(*(_QWORD *)(a1 + 48) + 135LL),
      *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL),
      v4);
  }
  if ( !*(_DWORD *)(a1 + 376) && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v70 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL);
    LOBYTE(v70) = 3;
    WPP_RECORDER_SF_dd(
      *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
      v70,
      14,
      58,
      (__int64)&WPP_fe7147ca1260387a70ac7753034ead38_Traceguids,
      *(_BYTE *)(*(_QWORD *)(a1 + 48) + 135LL),
      *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL));
  }
  return v4 >= 0;
}
