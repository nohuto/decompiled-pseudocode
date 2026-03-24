/*
 * XREFs of HUBSM_RunStateMachine @ 0x1C000B50C
 * Callers:
 *     HUBSM_EvtSmWorkItem @ 0x1C000AEB0 (HUBSM_EvtSmWorkItem.c)
 *     HUBSM_AddEvent @ 0x1C000AFFC (HUBSM_AddEvent.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001F54 (WPP_RECORDER_SF_.c)
 *     HUBSM_FindAndSetTargetState @ 0x1C0009F9C (HUBSM_FindAndSetTargetState.c)
 *     HUBSM_ExecuteEntryFunctionsAndPushPopStateMachinesForCurrentState @ 0x1C000A6B0 (HUBSM_ExecuteEntryFunctionsAndPushPopStateMachinesForCurrentState.c)
 *     HUBMISC_DbgBreak @ 0x1C002FC54 (HUBMISC_DbgBreak.c)
 *     _guard_dispatch_icall_nop @ 0x1C0042A60 (_guard_dispatch_icall_nop.c)
 */

KIRQL __fastcall HUBSM_RunStateMachine(__int64 a1, int a2, KIRQL *a3, char a4)
{
  unsigned int v4; // r13d
  KSPIN_LOCK *v5; // r15
  char v6; // si
  __int64 i; // rdx
  __int64 v11; // rcx
  unsigned __int8 v12; // r8
  unsigned int v13; // ebx
  char v14; // r9
  int v15; // r10d
  int v16; // ecx
  __int64 v17; // rcx
  __int64 v18; // rsi
  __int64 v19; // rcx
  __int64 v20; // r14
  KIRQL v21; // al
  __int64 v22; // r14
  KIRQL v23; // si
  __int64 v24; // rax
  __int64 v25; // rcx
  int v26; // r8d
  volatile signed __int32 *v27; // rdi
  __int64 j; // rdx
  __int64 v29; // rcx
  __int64 v30; // rax
  __int64 v31; // rax
  KIRQL result; // al
  KIRQL v33; // cl
  char v34; // r9
  char v35; // r8
  KIRQL v36; // r10
  KIRQL v37; // dl
  __int64 v38; // rcx
  __int64 v39; // rdx
  __int64 v40; // rax
  __int64 v41; // [rsp+20h] [rbp-58h]
  char v42; // [rsp+88h] [rbp+10h] BYREF
  char v43; // [rsp+98h] [rbp+20h]

  v43 = a4;
  v4 = 0;
  v5 = (KSPIN_LOCK *)(a1 + 840);
  v42 = 0;
  v6 = a4;
  while ( 1 )
  {
    if ( a2 == 1000 )
    {
      for ( i = *(unsigned int *)(a1 + 880); ; i = (unsigned int)(i - 1) )
      {
        v11 = *(_QWORD *)(*(_QWORD *)(a1 + 976)
                        + 8LL * (unsigned int)(*(_DWORD *)(a1 + 4 * i + 852) - *(_DWORD *)(a1 + 984)));
        if ( !(_DWORD)i || (*(_DWORD *)(v11 + 16) & 4) == 0 )
          break;
      }
      v12 = *(_BYTE *)(a1 + 948);
      v13 = 1000;
      v14 = *(_BYTE *)(a1 + 949);
      LOBYTE(i) = v12;
      v15 = *(_DWORD *)(v11 + 16);
      if ( v12 != v14 )
      {
        do
        {
          v16 = *(_DWORD *)(a1 + 4LL * (unsigned __int8)i + 884) & 3;
          if ( !v16 || v16 == 2 && (v15 & 1) == 0 )
            break;
          if ( v16 == 3 && (v15 & 2) != 0 )
            break;
          LOBYTE(i) = (i + 1) & 0xF;
        }
        while ( (_BYTE)i != v14 );
        if ( (_BYTE)i != v14 )
        {
          v13 = *(_DWORD *)(a1 + 4LL * (unsigned __int8)i + 884);
          while ( (_BYTE)i != v12 )
          {
            v17 = (unsigned __int8)i;
            LOBYTE(i) = (i - 1) & 0xF;
            *(_DWORD *)(a1 + 4 * v17 + 884) = *(_DWORD *)(a1 + 4LL * (((_BYTE)v17 - 1) & 0xF) + 884);
            v12 = *(_BYTE *)(a1 + 948);
          }
          *(_DWORD *)(a1 + 4LL * v12 + 884) = 1000;
          *(_BYTE *)(a1 + 948) = (*(_BYTE *)(a1 + 948) + 1) & 0xF;
        }
      }
      if ( v13 == 1000 )
      {
        v39 = *(_QWORD *)(a1 + 960);
        *(_BYTE *)(a1 + 848) = 0;
        v40 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1632))(
                WdfDriverGlobals,
                v39);
        return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const char *, __int64, const char *))(WdfFunctions_01015 + 1648))(
                 WdfDriverGlobals,
                 v40,
                 "State Machine Tag",
                 1506LL,
                 "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\smengine.c");
      }
      if ( ++v4 == -1 )
        HUBMISC_DbgBreak("State machine running for too long", i);
      KeReleaseSpinLock(v5, *a3);
      if ( v13 > 0xFC7 )
      {
        if ( v13 != 4043 && v13 != 4047 )
        {
          if ( v13 == 4067 || v13 == 4071 || v13 == 4099 )
          {
            v18 = *(_QWORD *)(a1 + 960);
            if ( (*(_DWORD *)(v18 + 1636) & 0x80u) != 0 )
            {
              v20 = a1 + 1012;
              *(_OWORD *)(a1 + 1012) = *(_OWORD *)(v18 + 2176);
LABEL_31:
              if ( g_IoSetActivityIdIrp )
              {
                g_IoSetActivityIdIrp(*(_QWORD *)(v18 + 264), v20);
                if ( g_IoSetActivityIdIrp )
                  g_IoSetActivityIdIrp(*(_QWORD *)(v18 + 424), v20);
              }
              _InterlockedOr((volatile signed __int32 *)(v18 + 1636), 0x40u);
            }
          }
LABEL_35:
          v21 = KeAcquireSpinLockRaiseToDpc(v5);
          v6 = v43;
          *a3 = v21;
          goto LABEL_52;
        }
      }
      else if ( v13 != 4039 )
      {
        if ( v13 == 3006 )
        {
          v22 = *(_QWORD *)(a1 + 960);
          if ( (*(_DWORD *)(v22 + 1336) & 2) != 0 )
          {
            v25 = *(_QWORD *)(v22 + 1328);
            if ( (*(_DWORD *)(v25 + 1636) & 0x400) != 0 )
            {
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                WPP_RECORDER_SF_(
                  *(_QWORD *)(v22 + 1432),
                  4u,
                  5u,
                  0xEu,
                  (__int64)&WPP_191605d54a133acb5ded6f763c07215a_Traceguids);
                v25 = *(_QWORD *)(v22 + 1328);
              }
              _InterlockedAnd((volatile signed __int32 *)(v25 + 1636), 0xFFFFFBFF);
            }
          }
          else
          {
            v23 = KfRaiseIrql(2u);
            v24 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 1632))(
                    WdfDriverGlobals,
                    *(_QWORD *)(v22 + 1328));
            (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1664))(WdfDriverGlobals, v24);
            KeLowerIrql(v23);
            *(_QWORD *)(v22 + 1328) = 0LL;
          }
          _InterlockedAnd((volatile signed __int32 *)(v22 + 1336), 0xFFFFFFFE);
          if ( *(_DWORD *)(v22 + 1424) != 4 )
            *(_DWORD *)(v22 + 1424) = 0;
          goto LABEL_35;
        }
        if ( v13 != 4023 && v13 != 4027 && v13 != 4031 && v13 != 4035 )
          goto LABEL_35;
      }
      v18 = *(_QWORD *)(a1 + 960);
      v19 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2280))(
              WdfDriverGlobals,
              *(_QWORD *)(v18 + 456));
      if ( *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters )
      {
        v20 = a1 + 1012;
        if ( (*(int (__fastcall **)(__int64, __int64))&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters)(v19, a1 + 1012) >= 0 )
          goto LABEL_31;
      }
      goto LABEL_35;
    }
    v13 = a2;
    a2 = 1000;
LABEL_52:
    KeReleaseSpinLock(v5, *a3);
    if ( !HUBSM_FindAndSetTargetState(a1, v13, &v42) )
      goto LABEL_84;
    v26 = *(_DWORD *)(a1 + 984);
    if ( v26 == 3000 || v26 == 5000 )
    {
      v27 = *(volatile signed __int32 **)(a1 + 960);
      for ( j = *(unsigned int *)(a1 + 880); ; j = (unsigned int)(j - 1) )
      {
        v29 = *(_QWORD *)(*(_QWORD *)(a1 + 976) + 8LL * (unsigned int)(*(_DWORD *)(a1 + 4 * j + 852) - v26));
        if ( !(_DWORD)j || (*(_DWORD *)(v29 + 16) & 4) == 0 )
          break;
      }
      if ( (*(_BYTE *)(v29 + 16) & 0x20) != 0 )
      {
        if ( (v27[66] & 0x20) != 0 )
        {
          v30 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 1632))(
                  WdfDriverGlobals,
                  *(_QWORD *)v27);
          (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD, __int64, const char *))(WdfFunctions_01015 + 3512))(
            WdfDriverGlobals,
            v30,
            0LL,
            1574LL,
            "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\smengine.c");
          _InterlockedAnd(v27 + 66, 0xFFFFFFDF);
        }
      }
      else if ( (*(_DWORD *)(*(_QWORD *)v27 + 40LL) & 0x20000) != 0 && (v27[66] & 0x20) == 0 )
      {
        v31 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1632))(WdfDriverGlobals);
        LODWORD(v41) = 1589;
        if ( (*(int (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD, _QWORD, __int64, const char *))(WdfFunctions_01015 + 3504))(
               WdfDriverGlobals,
               v31,
               0LL,
               0LL,
               v41,
               "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\smengine.c") >= 0 )
          _InterlockedOr(v27 + 66, 0x20u);
      }
    }
    if ( v42 )
    {
      v42 = 0;
      if ( v13 != 1002 && !(unsigned __int8)ExCancelTimer(*(_QWORD *)(a1 + 1040), 0LL) )
      {
        result = KeAcquireSpinLockRaiseToDpc(v5);
        v33 = *(_BYTE *)(a1 + 948);
        v34 = 0;
        v35 = *(_BYTE *)(a1 + 949);
        v36 = result;
        *a3 = result;
        v37 = v33;
        if ( v33 == v35 )
          goto LABEL_86;
        while ( 1 )
        {
          result = v37;
          if ( *(_DWORD *)(a1 + 4LL * v37 + 884) == 1002 )
            break;
          v37 = (v37 + 1) & 0xF;
          if ( v37 == v35 )
            goto LABEL_74;
        }
        v34 = 1;
LABEL_74:
        if ( v37 != v35 )
        {
          while ( v37 != v33 )
          {
            v38 = v37;
            v37 = (v37 - 1) & 0xF;
            *(_DWORD *)(a1 + 4 * v38 + 884) = *(_DWORD *)(a1 + 4LL * (((_BYTE)v38 - 1) & 0xF) + 884);
            v33 = *(_BYTE *)(a1 + 948);
          }
          *(_DWORD *)(a1 + 4LL * v33 + 884) = 1000;
          result = (*(_BYTE *)(a1 + 948) + 1) & 0xF;
          *(_BYTE *)(a1 + 948) = result;
        }
        if ( !v34 )
        {
LABEL_86:
          *(_BYTE *)(a1 + 1048) = 1;
          return result;
        }
        KeReleaseSpinLock(v5, v36);
      }
    }
    if ( !v6 && v4 > 0x64 )
      break;
    a2 = HUBSM_ExecuteEntryFunctionsAndPushPopStateMachinesForCurrentState(a1);
    if ( a2 == 1003 )
      goto LABEL_88;
LABEL_84:
    *a3 = KeAcquireSpinLockRaiseToDpc(v5);
  }
  (*(void (__fastcall **)(_QWORD, void (__fastcall *)(__int64, __int64), __int64, _QWORD))(*(_QWORD *)(a1 + 1000) + 512LL))(
    *(_QWORD *)(a1 + 992),
    HUBSM_EvtSmWorkItem,
    a1,
    (unsigned int)(-(*(_BYTE *)(a1 + 1008) != 0) - 892338175));
LABEL_88:
  result = KeAcquireSpinLockRaiseToDpc(v5);
  *a3 = result;
  return result;
}
