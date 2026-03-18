/*
 * XREFs of HUBSM_ExecuteEntryFunctionsAndPushPopStateMachinesForCurrentState @ 0x1C000AA98
 * Callers:
 *     HUBSM_EvtSmWorkItem @ 0x1C000B2B0 (HUBSM_EvtSmWorkItem.c)
 *     HUBSM_AddEvent @ 0x1C000B3FC (HUBSM_AddEvent.c)
 *     HUBSM_RunStateMachine @ 0x1C000B90C (HUBSM_RunStateMachine.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0002130 (WPP_RECORDER_SF_.c)
 *     McTemplateK0ppqqqq_EtwWriteTransfer @ 0x1C0009F84 (McTemplateK0ppqqqq_EtwWriteTransfer.c)
 *     WPP_RECORDER_SF_qLLL @ 0x1C000A12C (WPP_RECORDER_SF_qLLL.c)
 *     _guard_dispatch_icall_nop @ 0x1C00437E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBSM_ExecuteEntryFunctionsAndPushPopStateMachinesForCurrentState(__int64 a1)
{
  int v1; // ebp
  unsigned int *v3; // r12
  __int64 v4; // r15
  __int64 v5; // r14
  char v6; // al
  int v7; // eax
  __int64 v8; // rcx
  __int64 v9; // r9
  __int64 v10; // r8
  _DWORD *v11; // rdx
  KSPIN_LOCK *v12; // rbx
  __int64 v13; // rdx
  unsigned int *v14; // rcx
  __int64 v15; // r8
  KIRQL v16; // r12
  int v17; // edi
  __int64 v18; // rbp
  unsigned int v19; // ebx
  char v20; // r9
  unsigned __int8 v21; // cl
  char v22; // al
  unsigned __int8 i; // dl
  __int64 v24; // rax
  int v25; // ebx
  int v26; // eax
  unsigned __int16 v27; // r9
  __int64 v28; // rcx
  char v29; // cl
  int v30; // eax
  __int64 v31; // rax
  unsigned int v32; // ebx
  unsigned int v33; // ebx
  unsigned int v34; // ebx
  unsigned int v35; // ebx
  __int64 v36; // rbx
  __int64 v37; // rcx
  __int64 v38; // rbp
  __int64 v39; // rbp
  KIRQL v40; // bl
  __int64 v41; // rax
  __int64 v42; // rcx
  unsigned int v43; // ebx
  unsigned int v44; // ebx
  unsigned int v45; // ebx
  unsigned int v46; // ebx
  int v47; // eax
  int v48; // ebx
  unsigned __int16 v49; // r9
  __int64 v50; // rax
  unsigned int v51; // edi
  int v53; // [rsp+20h] [rbp-78h]
  __int64 v54; // [rsp+28h] [rbp-70h]
  __int64 v55; // [rsp+30h] [rbp-68h]
  __int64 v56; // [rsp+38h] [rbp-60h]
  __int64 v57; // [rsp+40h] [rbp-58h]
  int v58; // [rsp+A0h] [rbp+8h]
  int v59; // [rsp+A8h] [rbp+10h]
  int v60; // [rsp+B0h] [rbp+18h]
  unsigned int *v61; // [rsp+B8h] [rbp+20h]

  v1 = *(_DWORD *)(a1 + 984);
  v3 = *(unsigned int **)(a1 + 976);
  v4 = *(unsigned int *)(a1 + 880);
  v61 = v3;
  v60 = v1;
  v5 = *(_QWORD *)&v3[2 * (*(_DWORD *)(a1 + 4 * v4 + 852) - v1)];
  if ( (*(_DWORD *)(v5 + 16) & 0x80u) == 0 )
  {
    v6 = *(_BYTE *)(a1 + 1050);
  }
  else
  {
    v6 = *(_BYTE *)(a1 + 1050) == 0;
    *(_BYTE *)(a1 + 1050) = v6;
  }
  if ( v6 || (*(_DWORD *)(v5 + 16) & 0x10) != 0 && KeGetCurrentIrql() )
  {
LABEL_99:
    (*(void (__fastcall **)(_QWORD, __int64 (__fastcall *)(), __int64, _QWORD))(*(_QWORD *)(a1 + 1000) + 512LL))(
      *(_QWORD *)(a1 + 992),
      HUBSM_EvtSmWorkItem,
      a1,
      (unsigned int)(-(*(_BYTE *)(a1 + 1008) != 0) - 892338175));
    return 1003;
  }
  v7 = (*(__int64 (__fastcall **)(__int64))(v5 + 8))(a1);
  v8 = *(_QWORD *)(v5 + 24);
  v59 = v7;
  if ( v8 )
  {
    while ( 1 )
    {
      v9 = 0LL;
      if ( *(_DWORD *)(v8 + 4) == 1002 )
        goto LABEL_12;
      v10 = 0LL;
      v11 = (_DWORD *)v8;
      while ( (*v11 & *(_DWORD *)(a1 + 952)) != *(_DWORD *)(a1 + 952) )
      {
        v9 = (unsigned int)(v9 + 1);
        v10 = (unsigned int)v9;
        v11 = (_DWORD *)(v8 + 8 * v9);
        if ( v11[1] == 1002 )
          goto LABEL_12;
      }
      v25 = *(_DWORD *)(v8 + 8 * v10 + 4);
      if ( v25 == 1002 )
      {
LABEL_12:
        v59 = 1001;
        goto LABEL_13;
      }
      v4 = (unsigned int)(v4 + 1);
      *(_DWORD *)(a1 + 4 * v4 + 852) = v25;
      v26 = *(_DWORD *)(a1 + 984);
      *(_DWORD *)(a1 + 880) = v4;
      if ( v26 == 2000 )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_34;
        v27 = 16;
        goto LABEL_33;
      }
      if ( v26 == 3000 )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_34;
        v27 = 17;
        goto LABEL_33;
      }
      if ( v26 == 4000 )
        break;
      if ( v26 == 5000 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v27 = 18;
LABEL_33:
        v54 = *(_QWORD *)(a1 + 960);
        WPP_RECORDER_SF_qLLL(v8, (__int64)v11, v10, v27, v53);
      }
LABEL_34:
      *(_DWORD *)(a1 + 12LL * *(unsigned __int8 *)(a1 + 832) + 4) = v25;
      *(_DWORD *)(a1 + 12LL * *(unsigned __int8 *)(a1 + 832) + 8) = v4;
      *(_DWORD *)(a1 + 12LL * *(unsigned __int8 *)(a1 + 832)) = 1000;
      *(_BYTE *)(a1 + 832) = (*(_BYTE *)(a1 + 832) + 1) & 0x3F;
      if ( SBYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) < 0 )
      {
        LODWORD(v57) = v4;
        v28 = (unsigned int)(v25 - *(_DWORD *)(a1 + 984));
        LODWORD(v56) = 1000;
        LODWORD(v55) = **(_DWORD **)(*(_QWORD *)(a1 + 976) + 8 * v28);
        LODWORD(v54) = *(_DWORD *)(a1 + 984);
        McTemplateK0ppqqqq_EtwWriteTransfer(
          v28,
          &USBHUB3_ETW_EVENT_STATE_MACHINE,
          (const GUID *)(a1 + 1012),
          *(_QWORD *)(a1 + 1032),
          *(_QWORD *)(a1 + 960),
          v54,
          v55,
          v56,
          v57);
      }
      v29 = *(_BYTE *)(a1 + 1050);
      v5 = *(_QWORD *)&v3[2 * (v25 - v1)];
      if ( (*(_DWORD *)(v5 + 16) & 0x80u) != 0 )
      {
        v29 = v29 == 0;
        *(_BYTE *)(a1 + 1050) = v29;
      }
      if ( v29 || (*(_DWORD *)(v5 + 16) & 0x10) != 0 && KeGetCurrentIrql() )
        goto LABEL_99;
      v30 = (*(__int64 (__fastcall **)(__int64, _DWORD *, __int64, __int64))(v5 + 8))(a1, v11, v10, v9);
      v8 = *(_QWORD *)(v5 + 24);
      v59 = v30;
      if ( !v8 )
        goto LABEL_13;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_34;
    v27 = 15;
    goto LABEL_33;
  }
LABEL_13:
  v12 = (KSPIN_LOCK *)(a1 + 840);
  v16 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 840));
  v17 = v1;
  while ( 2 )
  {
    LODWORD(v18) = 0;
    v58 = 0;
    if ( *(_DWORD *)(v5 + 32) == 1000 )
      goto LABEL_81;
    v14 = (unsigned int *)(v5 + 32);
    while ( v14[1] == 1000 )
    {
      v19 = *v14;
      v20 = 0;
      v21 = *(_BYTE *)(a1 + 948);
      v22 = *(_BYTE *)(a1 + 949);
      for ( i = v21; i != v22; i = (i + 1) & 0xF )
      {
        v15 = *(unsigned int *)(a1 + 4LL * i + 884);
        if ( (_DWORD)v15 == v19 )
        {
          v20 = 1;
        }
        else
        {
          v24 = v21;
          v21 = (v21 + 1) & 0xF;
          *(_DWORD *)(a1 + 4 * v24 + 884) = v15;
        }
        v22 = *(_BYTE *)(a1 + 949);
      }
      LOBYTE(v13) = v21;
      if ( v21 != v22 )
      {
        do
        {
          v31 = v13 & 0xF;
          LOBYTE(v13) = (v13 + 1) & 0xF;
          *(_DWORD *)(a1 + 4 * v31 + 884) = 1000;
        }
        while ( (_BYTE)v13 != *(_BYTE *)(a1 + 949) );
      }
      *(_BYTE *)(a1 + 949) = v21;
      if ( !v20 )
      {
        v12 = (KSPIN_LOCK *)(a1 + 840);
        goto LABEL_79;
      }
      KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 840), v16);
      if ( v19 > 0xFC7 )
      {
        v43 = v19 - 4043;
        if ( v43 )
        {
          v44 = v43 - 4;
          if ( v44 )
          {
            v45 = v44 - 20;
            if ( v45 )
            {
              v46 = v45 - 4;
              if ( v46 )
              {
                if ( v46 != 28 )
                  goto LABEL_62;
              }
            }
            v36 = *(_QWORD *)(a1 + 960);
            if ( (*(_DWORD *)(v36 + 1636) & 0x80u) == 0 )
              goto LABEL_62;
            v38 = a1 + 1012;
            *(_OWORD *)(a1 + 1012) = *(_OWORD *)(v36 + 2176);
LABEL_57:
            if ( g_IoSetActivityIdIrp )
            {
              g_IoSetActivityIdIrp(*(_QWORD *)(v36 + 264), v38);
              if ( g_IoSetActivityIdIrp )
                g_IoSetActivityIdIrp(*(_QWORD *)(v36 + 424), v38);
            }
            _InterlockedOr((volatile signed __int32 *)(v36 + 1636), 0x40u);
LABEL_61:
            LODWORD(v18) = v58;
            goto LABEL_62;
          }
        }
      }
      else if ( v19 != 4039 )
      {
        v32 = v19 - 3006;
        if ( !v32 )
        {
          v39 = *(_QWORD *)(a1 + 960);
          if ( (*(_DWORD *)(v39 + 1336) & 2) != 0 )
          {
            v42 = *(_QWORD *)(v39 + 1328);
            if ( (*(_DWORD *)(v42 + 1636) & 0x400) != 0 )
            {
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                WPP_RECORDER_SF_(
                  *(_QWORD *)(v39 + 1432),
                  4u,
                  5u,
                  0xEu,
                  (__int64)&WPP_0cc843adf6153b7d46bf14e0910357bd_Traceguids);
                v42 = *(_QWORD *)(v39 + 1328);
              }
              _InterlockedAnd((volatile signed __int32 *)(v42 + 1636), 0xFFFFFBFF);
            }
          }
          else
          {
            v40 = KfRaiseIrql(2u);
            v41 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 1632))(
                    WdfDriverGlobals,
                    *(_QWORD *)(v39 + 1328));
            (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1664))(WdfDriverGlobals, v41);
            KeLowerIrql(v40);
            *(_QWORD *)(v39 + 1328) = 0LL;
          }
          _InterlockedAnd((volatile signed __int32 *)(v39 + 1336), 0xFFFFFFFE);
          if ( *(_DWORD *)(v39 + 1424) != 4 )
            *(_DWORD *)(v39 + 1424) = 0;
          goto LABEL_61;
        }
        v33 = v32 - 1017;
        if ( v33 )
        {
          v34 = v33 - 4;
          if ( v34 )
          {
            v35 = v34 - 4;
            if ( v35 )
            {
              if ( v35 != 4 )
                goto LABEL_62;
            }
          }
        }
      }
      v36 = *(_QWORD *)(a1 + 960);
      v37 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2280))(
              WdfDriverGlobals,
              *(_QWORD *)(v36 + 456));
      if ( *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters )
      {
        v38 = a1 + 1012;
        if ( (*(int (__fastcall **)(__int64, __int64))&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters)(v37, a1 + 1012) >= 0 )
          goto LABEL_57;
        goto LABEL_61;
      }
LABEL_62:
      v12 = (KSPIN_LOCK *)(a1 + 840);
      v16 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 840));
LABEL_79:
      v18 = (unsigned int)(v18 + 1);
      v58 = v18;
      v14 = (unsigned int *)(v5 + 32 + 8 * v18);
      if ( *v14 == 1000 )
        break;
    }
    v17 = v60;
LABEL_81:
    if ( (*(_DWORD *)(v5 + 16) & 8) != 0 )
    {
      v47 = *(_DWORD *)(a1 + 984);
      v4 = (unsigned int)(v4 - 1);
      v48 = *(_DWORD *)(a1 + 4 * v4 + 852);
      switch ( v47 )
      {
        case 2000:
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_95;
          v49 = 16;
          break;
        case 3000:
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_95;
          v49 = 17;
          break;
        case 4000:
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_95;
          v49 = 15;
          break;
        default:
          if ( v47 == 5000 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v49 = 18;
            break;
          }
LABEL_95:
          *(_DWORD *)(a1 + 12LL * *(unsigned __int8 *)(a1 + 832) + 4) = v48;
          *(_DWORD *)(a1 + 12LL * *(unsigned __int8 *)(a1 + 832) + 8) = v4;
          v50 = *(unsigned __int8 *)(a1 + 832);
          *(_DWORD *)(a1 + 12 * v50) = 1000;
          *(_BYTE *)(a1 + 832) = (*(_BYTE *)(a1 + 832) + 1) & 0x3F;
          if ( SBYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) < 0 )
          {
            LODWORD(v57) = v4;
            LODWORD(v56) = 1000;
            LODWORD(v55) = **(_DWORD **)(*(_QWORD *)(a1 + 976) + 8LL * (unsigned int)(v48 - *(_DWORD *)(a1 + 984)));
            LODWORD(v54) = *(_DWORD *)(a1 + 984);
            McTemplateK0ppqqqq_EtwWriteTransfer(
              3 * v50,
              &USBHUB3_ETW_EVENT_STATE_MACHINE,
              (const GUID *)(a1 + 1012),
              *(_QWORD *)(a1 + 1032),
              *(_QWORD *)(a1 + 960),
              v54,
              v55,
              v56,
              v57);
          }
          v12 = (KSPIN_LOCK *)(a1 + 840);
          v14 = v61;
          v5 = *(_QWORD *)&v61[2 * (*(_DWORD *)(a1 + 4 * v4 + 852) - v17)];
          continue;
      }
      v54 = *(_QWORD *)(a1 + 960);
      WPP_RECORDER_SF_qLLL((__int64)v14, v13, v15, v49, v53);
      goto LABEL_95;
    }
    break;
  }
  KeReleaseSpinLock(v12, v16);
  v51 = v59;
  *(_DWORD *)(a1 + 880) = v4;
  return v51;
}
