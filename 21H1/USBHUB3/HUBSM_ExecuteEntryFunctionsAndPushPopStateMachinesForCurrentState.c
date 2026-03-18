/*
 * XREFs of HUBSM_ExecuteEntryFunctionsAndPushPopStateMachinesForCurrentState @ 0x1C000A6B0
 * Callers:
 *     HUBSM_EvtSmWorkItem @ 0x1C000AEB0 (HUBSM_EvtSmWorkItem.c)
 *     HUBSM_AddEvent @ 0x1C000AFFC (HUBSM_AddEvent.c)
 *     HUBSM_RunStateMachine @ 0x1C000B50C (HUBSM_RunStateMachine.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001F54 (WPP_RECORDER_SF_.c)
 *     McTemplateK0ppqqqq_EtwWriteTransfer @ 0x1C0009C84 (McTemplateK0ppqqqq_EtwWriteTransfer.c)
 *     WPP_RECORDER_SF_qLLL @ 0x1C0009E2C (WPP_RECORDER_SF_qLLL.c)
 *     _guard_dispatch_icall_nop @ 0x1C0042A60 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBSM_ExecuteEntryFunctionsAndPushPopStateMachinesForCurrentState(__int64 a1)
{
  int v1; // ebp
  unsigned int *v3; // r12
  __int64 v4; // r15
  int v5; // edx
  char v6; // cl
  __int64 v7; // r14
  int v8; // eax
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rdx
  _DWORD *v12; // rax
  KSPIN_LOCK *v13; // rbx
  __int64 v14; // rdx
  unsigned int *v15; // rcx
  __int64 v16; // r8
  KIRQL v17; // r12
  int v18; // edi
  __int64 v19; // rbp
  unsigned int v20; // ebx
  char v21; // r9
  unsigned __int8 v22; // cl
  char v23; // al
  unsigned __int8 i; // dl
  __int64 v25; // rax
  int v26; // ebx
  int v27; // eax
  unsigned __int16 v28; // r9
  __int64 v29; // rcx
  char v30; // cl
  int v31; // eax
  __int64 v32; // rax
  unsigned int v33; // ebx
  unsigned int v34; // ebx
  unsigned int v35; // ebx
  unsigned int v36; // ebx
  __int64 v37; // rbx
  __int64 v38; // rcx
  __int64 v39; // rbp
  __int64 v40; // rbp
  KIRQL v41; // bl
  __int64 v42; // rax
  __int64 v43; // rcx
  unsigned int v44; // ebx
  unsigned int v45; // ebx
  unsigned int v46; // ebx
  unsigned int v47; // ebx
  int v48; // eax
  int v49; // ebx
  unsigned __int16 v50; // r9
  __int64 v51; // rax
  unsigned int v52; // edi
  int v54; // [rsp+20h] [rbp-78h]
  __int64 v55; // [rsp+28h] [rbp-70h]
  __int64 v56; // [rsp+30h] [rbp-68h]
  __int64 v57; // [rsp+38h] [rbp-60h]
  __int64 v58; // [rsp+40h] [rbp-58h]
  int v59; // [rsp+A0h] [rbp+8h]
  int v60; // [rsp+A8h] [rbp+10h]
  int v61; // [rsp+B0h] [rbp+18h]
  unsigned int *v62; // [rsp+B8h] [rbp+20h]

  v1 = *(_DWORD *)(a1 + 984);
  v3 = *(unsigned int **)(a1 + 976);
  v4 = *(unsigned int *)(a1 + 880);
  v62 = v3;
  v61 = v1;
  v5 = *(_DWORD *)(a1 + 4 * v4 + 852);
  v6 = *(_BYTE *)(a1 + 1050);
  v7 = *(_QWORD *)&v3[2 * (v5 - v1)];
  if ( (*(_DWORD *)(v7 + 16) & 0x80u) != 0 )
  {
    v6 = v6 == 0;
    *(_BYTE *)(a1 + 1050) = v6;
  }
  if ( v6 || (*(_DWORD *)(v7 + 16) & 0x10) != 0 && KeGetCurrentIrql() )
  {
LABEL_98:
    (*(void (__fastcall **)(_QWORD, __int64 (__fastcall *)(), __int64, _QWORD))(*(_QWORD *)(a1 + 1000) + 512LL))(
      *(_QWORD *)(a1 + 992),
      HUBSM_EvtSmWorkItem,
      a1,
      (unsigned int)(-(*(_BYTE *)(a1 + 1008) != 0) - 892338175));
    return 1003;
  }
  v8 = (*(__int64 (__fastcall **)(__int64))(v7 + 8))(a1);
  v9 = *(_QWORD *)(v7 + 24);
  v60 = v8;
  if ( v9 )
  {
    while ( 1 )
    {
      v10 = 0LL;
      if ( *(_DWORD *)(v9 + 4) == 1002 )
        goto LABEL_11;
      v11 = 0LL;
      v12 = (_DWORD *)v9;
      while ( (*(_DWORD *)(a1 + 952) & *v12) != *(_DWORD *)(a1 + 952) )
      {
        v10 = (unsigned int)(v10 + 1);
        v11 = (unsigned int)v10;
        v12 = (_DWORD *)(v9 + 8 * v10);
        if ( v12[1] == 1002 )
          goto LABEL_11;
      }
      v26 = *(_DWORD *)(v9 + 8 * v11 + 4);
      if ( v26 == 1002 )
      {
LABEL_11:
        v60 = 1001;
        goto LABEL_12;
      }
      v4 = (unsigned int)(v4 + 1);
      *(_DWORD *)(a1 + 4 * v4 + 852) = v26;
      v27 = *(_DWORD *)(a1 + 984);
      *(_DWORD *)(a1 + 880) = v4;
      if ( v27 == 2000 )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_33;
        v28 = 16;
        goto LABEL_32;
      }
      if ( v27 == 3000 )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_33;
        v28 = 17;
        goto LABEL_32;
      }
      if ( v27 == 4000 )
        break;
      if ( v27 == 5000 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v28 = 18;
LABEL_32:
        v55 = *(_QWORD *)(a1 + 960);
        WPP_RECORDER_SF_qLLL(v9, v11, v10, v28, v54);
      }
LABEL_33:
      *(_DWORD *)(a1 + 12LL * *(unsigned __int8 *)(a1 + 832) + 4) = v26;
      *(_DWORD *)(a1 + 12LL * *(unsigned __int8 *)(a1 + 832) + 8) = v4;
      *(_DWORD *)(a1 + 12LL * *(unsigned __int8 *)(a1 + 832)) = 1000;
      *(_BYTE *)(a1 + 832) = (*(_BYTE *)(a1 + 832) + 1) & 0x3F;
      if ( SBYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) < 0 )
      {
        LODWORD(v58) = v4;
        v29 = (unsigned int)(v26 - *(_DWORD *)(a1 + 984));
        LODWORD(v57) = 1000;
        LODWORD(v56) = **(_DWORD **)(*(_QWORD *)(a1 + 976) + 8 * v29);
        LODWORD(v55) = *(_DWORD *)(a1 + 984);
        McTemplateK0ppqqqq_EtwWriteTransfer(
          v29,
          &USBHUB3_ETW_EVENT_STATE_MACHINE,
          (const GUID *)(a1 + 1012),
          *(_QWORD *)(a1 + 1032),
          *(_QWORD *)(a1 + 960),
          v55,
          v56,
          v57,
          v58);
      }
      v30 = *(_BYTE *)(a1 + 1050);
      v7 = *(_QWORD *)&v3[2 * (v26 - v1)];
      if ( (*(_DWORD *)(v7 + 16) & 0x80u) != 0 )
      {
        v30 = v30 == 0;
        *(_BYTE *)(a1 + 1050) = v30;
      }
      if ( v30 || (*(_DWORD *)(v7 + 16) & 0x10) != 0 && KeGetCurrentIrql() )
        goto LABEL_98;
      v31 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(v7 + 8))(a1, v11, v10);
      v9 = *(_QWORD *)(v7 + 24);
      v60 = v31;
      if ( !v9 )
        goto LABEL_12;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_33;
    v28 = 15;
    goto LABEL_32;
  }
LABEL_12:
  v13 = (KSPIN_LOCK *)(a1 + 840);
  v17 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 840));
  v18 = v1;
  while ( 2 )
  {
    LODWORD(v19) = 0;
    v59 = 0;
    if ( *(_DWORD *)(v7 + 32) == 1000 )
      goto LABEL_80;
    v15 = (unsigned int *)(v7 + 32);
    while ( v15[1] == 1000 )
    {
      v20 = *v15;
      v21 = 0;
      v22 = *(_BYTE *)(a1 + 948);
      v23 = *(_BYTE *)(a1 + 949);
      for ( i = v22; i != v23; i = (i + 1) & 0xF )
      {
        v16 = *(unsigned int *)(a1 + 4LL * i + 884);
        if ( (_DWORD)v16 == v20 )
        {
          v21 = 1;
        }
        else
        {
          v25 = v22;
          v22 = (v22 + 1) & 0xF;
          *(_DWORD *)(a1 + 4 * v25 + 884) = v16;
        }
        v23 = *(_BYTE *)(a1 + 949);
      }
      LOBYTE(v14) = v22;
      if ( v22 != v23 )
      {
        do
        {
          v32 = v14 & 0xF;
          LOBYTE(v14) = (v14 + 1) & 0xF;
          *(_DWORD *)(a1 + 4 * v32 + 884) = 1000;
        }
        while ( (_BYTE)v14 != *(_BYTE *)(a1 + 949) );
      }
      *(_BYTE *)(a1 + 949) = v22;
      if ( !v21 )
      {
        v13 = (KSPIN_LOCK *)(a1 + 840);
        goto LABEL_78;
      }
      KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 840), v17);
      if ( v20 > 0xFC7 )
      {
        v44 = v20 - 4043;
        if ( v44 )
        {
          v45 = v44 - 4;
          if ( v45 )
          {
            v46 = v45 - 20;
            if ( v46 )
            {
              v47 = v46 - 4;
              if ( v47 )
              {
                if ( v47 != 28 )
                  goto LABEL_61;
              }
            }
            v37 = *(_QWORD *)(a1 + 960);
            if ( (*(_DWORD *)(v37 + 1636) & 0x80u) == 0 )
              goto LABEL_61;
            v39 = a1 + 1012;
            *(_OWORD *)(a1 + 1012) = *(_OWORD *)(v37 + 2176);
LABEL_56:
            if ( g_IoSetActivityIdIrp )
            {
              g_IoSetActivityIdIrp(*(_QWORD *)(v37 + 264), v39);
              if ( g_IoSetActivityIdIrp )
                g_IoSetActivityIdIrp(*(_QWORD *)(v37 + 424), v39);
            }
            _InterlockedOr((volatile signed __int32 *)(v37 + 1636), 0x40u);
LABEL_60:
            LODWORD(v19) = v59;
            goto LABEL_61;
          }
        }
      }
      else if ( v20 != 4039 )
      {
        v33 = v20 - 3006;
        if ( !v33 )
        {
          v40 = *(_QWORD *)(a1 + 960);
          if ( (*(_DWORD *)(v40 + 1336) & 2) != 0 )
          {
            v43 = *(_QWORD *)(v40 + 1328);
            if ( (*(_DWORD *)(v43 + 1636) & 0x400) != 0 )
            {
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                WPP_RECORDER_SF_(
                  *(_QWORD *)(v40 + 1432),
                  4u,
                  5u,
                  0xEu,
                  (__int64)&WPP_191605d54a133acb5ded6f763c07215a_Traceguids);
                v43 = *(_QWORD *)(v40 + 1328);
              }
              _InterlockedAnd((volatile signed __int32 *)(v43 + 1636), 0xFFFFFBFF);
            }
          }
          else
          {
            v41 = KfRaiseIrql(2u);
            v42 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 1632))(
                    WdfDriverGlobals,
                    *(_QWORD *)(v40 + 1328));
            (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1664))(WdfDriverGlobals, v42);
            KeLowerIrql(v41);
            *(_QWORD *)(v40 + 1328) = 0LL;
          }
          _InterlockedAnd((volatile signed __int32 *)(v40 + 1336), 0xFFFFFFFE);
          if ( *(_DWORD *)(v40 + 1424) != 4 )
            *(_DWORD *)(v40 + 1424) = 0;
          goto LABEL_60;
        }
        v34 = v33 - 1017;
        if ( v34 )
        {
          v35 = v34 - 4;
          if ( v35 )
          {
            v36 = v35 - 4;
            if ( v36 )
            {
              if ( v36 != 4 )
                goto LABEL_61;
            }
          }
        }
      }
      v37 = *(_QWORD *)(a1 + 960);
      v38 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2280))(
              WdfDriverGlobals,
              *(_QWORD *)(v37 + 456));
      if ( *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters )
      {
        v39 = a1 + 1012;
        if ( (*(int (__fastcall **)(__int64, __int64))&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters)(v38, a1 + 1012) >= 0 )
          goto LABEL_56;
        goto LABEL_60;
      }
LABEL_61:
      v13 = (KSPIN_LOCK *)(a1 + 840);
      v17 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 840));
LABEL_78:
      v19 = (unsigned int)(v19 + 1);
      v59 = v19;
      v15 = (unsigned int *)(v7 + 32 + 8 * v19);
      if ( *v15 == 1000 )
        break;
    }
    v18 = v61;
LABEL_80:
    if ( (*(_DWORD *)(v7 + 16) & 8) != 0 )
    {
      v48 = *(_DWORD *)(a1 + 984);
      v4 = (unsigned int)(v4 - 1);
      v49 = *(_DWORD *)(a1 + 4 * v4 + 852);
      switch ( v48 )
      {
        case 2000:
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_94;
          v50 = 16;
          break;
        case 3000:
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_94;
          v50 = 17;
          break;
        case 4000:
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_94;
          v50 = 15;
          break;
        default:
          if ( v48 == 5000 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v50 = 18;
            break;
          }
LABEL_94:
          *(_DWORD *)(a1 + 12LL * *(unsigned __int8 *)(a1 + 832) + 4) = v49;
          *(_DWORD *)(a1 + 12LL * *(unsigned __int8 *)(a1 + 832) + 8) = v4;
          v51 = *(unsigned __int8 *)(a1 + 832);
          *(_DWORD *)(a1 + 12 * v51) = 1000;
          *(_BYTE *)(a1 + 832) = (*(_BYTE *)(a1 + 832) + 1) & 0x3F;
          if ( SBYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) < 0 )
          {
            LODWORD(v58) = v4;
            LODWORD(v57) = 1000;
            LODWORD(v56) = **(_DWORD **)(*(_QWORD *)(a1 + 976) + 8LL * (unsigned int)(v49 - *(_DWORD *)(a1 + 984)));
            LODWORD(v55) = *(_DWORD *)(a1 + 984);
            McTemplateK0ppqqqq_EtwWriteTransfer(
              3 * v51,
              &USBHUB3_ETW_EVENT_STATE_MACHINE,
              (const GUID *)(a1 + 1012),
              *(_QWORD *)(a1 + 1032),
              *(_QWORD *)(a1 + 960),
              v55,
              v56,
              v57,
              v58);
          }
          v13 = (KSPIN_LOCK *)(a1 + 840);
          v15 = v62;
          v7 = *(_QWORD *)&v62[2 * (*(_DWORD *)(a1 + 4 * v4 + 852) - v18)];
          continue;
      }
      v55 = *(_QWORD *)(a1 + 960);
      WPP_RECORDER_SF_qLLL((__int64)v15, v14, v16, v50, v54);
      goto LABEL_94;
    }
    break;
  }
  KeReleaseSpinLock(v13, v17);
  v52 = v60;
  *(_DWORD *)(a1 + 880) = v4;
  return v52;
}
