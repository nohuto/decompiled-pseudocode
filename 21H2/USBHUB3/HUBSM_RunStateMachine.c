/*
 * XREFs of HUBSM_RunStateMachine @ 0x1C000B90C
 * Callers:
 *     HUBSM_EvtSmWorkItem @ 0x1C000B2B0 (HUBSM_EvtSmWorkItem.c)
 *     HUBSM_AddEvent @ 0x1C000B3FC (HUBSM_AddEvent.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0002130 (WPP_RECORDER_SF_.c)
 *     HUBSM_FindAndSetTargetState @ 0x1C000A49C (HUBSM_FindAndSetTargetState.c)
 *     HUBSM_ExecuteEntryFunctionsAndPushPopStateMachinesForCurrentState @ 0x1C000AA98 (HUBSM_ExecuteEntryFunctionsAndPushPopStateMachinesForCurrentState.c)
 *     HUBMISC_DbgBreak @ 0x1C00302F4 (HUBMISC_DbgBreak.c)
 *     _guard_dispatch_icall_nop @ 0x1C00437E0 (_guard_dispatch_icall_nop.c)
 */

KIRQL __fastcall HUBSM_RunStateMachine(__int64 a1, int a2, KIRQL *a3, char a4)
{
  unsigned int v4; // r12d
  KSPIN_LOCK *v5; // r13
  KSPIN_LOCK *i; // r14
  __int64 j; // rdx
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
  KSPIN_LOCK *v21; // rsi
  __int64 v22; // r14
  KIRQL v23; // si
  __int64 v24; // rax
  __int64 v25; // rcx
  int v26; // r8d
  volatile signed __int32 *v27; // rdi
  __int64 k; // rdx
  __int64 v29; // rcx
  __int64 v30; // rax
  __int64 v31; // rax
  KIRQL result; // al
  KIRQL v33; // cl
  KIRQL v34; // r9
  KIRQL v35; // r8
  KIRQL v36; // dl
  bool v37; // zf
  __int64 v38; // rcx
  __int64 v39; // rdx
  __int64 v40; // rax
  __int64 v41; // [rsp+20h] [rbp-58h]
  KSPIN_LOCK *v42; // [rsp+80h] [rbp+8h]
  char v43; // [rsp+88h] [rbp+10h] BYREF
  char v44; // [rsp+98h] [rbp+20h]

  v44 = a4;
  v4 = 0;
  v5 = (KSPIN_LOCK *)(a1 + 840);
  v43 = 0;
  for ( i = (KSPIN_LOCK *)(a1 + 840); ; i = v21 )
  {
    v42 = i;
    if ( a2 == 1000 )
    {
      for ( j = *(unsigned int *)(a1 + 880); ; j = (unsigned int)(j - 1) )
      {
        v11 = *(_QWORD *)(*(_QWORD *)(a1 + 976)
                        + 8LL * (unsigned int)(*(_DWORD *)(a1 + 4 * j + 852) - *(_DWORD *)(a1 + 984)));
        if ( !(_DWORD)j || (*(_DWORD *)(v11 + 16) & 4) == 0 )
          break;
      }
      v12 = *(_BYTE *)(a1 + 948);
      v13 = 1000;
      v14 = *(_BYTE *)(a1 + 949);
      LOBYTE(j) = v12;
      v15 = *(_DWORD *)(v11 + 16);
      if ( v12 != v14 )
      {
        while ( 1 )
        {
          v16 = *(_DWORD *)(a1 + 4LL * (unsigned __int8)j + 884) & 3;
          if ( !v16 )
            break;
          if ( (v16 != 2 || (v15 & 1) != 0) && (v16 != 3 || (v15 & 2) == 0) )
          {
            LOBYTE(j) = (j + 1) & 0xF;
            if ( (_BYTE)j != v14 )
              continue;
          }
          if ( (_BYTE)j == v14 )
            goto LABEL_19;
          break;
        }
        v13 = *(_DWORD *)(a1 + 4LL * (unsigned __int8)j + 884);
        while ( (_BYTE)j != v12 )
        {
          v17 = (unsigned __int8)j;
          LOBYTE(j) = (j - 1) & 0xF;
          *(_DWORD *)(a1 + 4 * v17 + 884) = *(_DWORD *)(a1 + 4LL * (((_BYTE)v17 - 1) & 0xF) + 884);
          v12 = *(_BYTE *)(a1 + 948);
        }
        *(_DWORD *)(a1 + 4LL * v12 + 884) = 1000;
        *(_BYTE *)(a1 + 948) = (*(_BYTE *)(a1 + 948) + 1) & 0xF;
      }
LABEL_19:
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
                 1520LL,
                 "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\smengine.c");
      }
      if ( ++v4 == -1 )
        HUBMISC_DbgBreak("State machine running for too long", j);
      KeReleaseSpinLock(v5, *a3);
      if ( v13 > 0xFC7 )
      {
        if ( v13 != 4043 && v13 != 4047 )
        {
          if ( v13 != 4067 && v13 != 4071 && v13 != 4099 )
            goto LABEL_36;
          v18 = *(_QWORD *)(a1 + 960);
          if ( (*(_DWORD *)(v18 + 1636) & 0x80u) == 0 )
            goto LABEL_36;
          v20 = a1 + 1012;
          *(_OWORD *)(a1 + 1012) = *(_OWORD *)(v18 + 2176);
          goto LABEL_31;
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
                  (__int64)&WPP_0cc843adf6153b7d46bf14e0910357bd_Traceguids);
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
          goto LABEL_36;
      }
      v18 = *(_QWORD *)(a1 + 960);
      v19 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2280))(
              WdfDriverGlobals,
              *(_QWORD *)(v18 + 456));
      if ( !*(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters )
      {
LABEL_36:
        *a3 = KeAcquireSpinLockRaiseToDpc(v5);
        v21 = v5;
        goto LABEL_53;
      }
      v20 = a1 + 1012;
      if ( (*(int (__fastcall **)(__int64, __int64))&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters)(v19, a1 + 1012) < 0 )
      {
LABEL_35:
        i = v42;
        goto LABEL_36;
      }
LABEL_31:
      if ( g_IoSetActivityIdIrp )
      {
        g_IoSetActivityIdIrp(*(_QWORD *)(v18 + 264), v20);
        if ( g_IoSetActivityIdIrp )
          g_IoSetActivityIdIrp(*(_QWORD *)(v18 + 424), v20);
      }
      _InterlockedOr((volatile signed __int32 *)(v18 + 1636), 0x40u);
      goto LABEL_35;
    }
    v13 = a2;
    v21 = i;
    a2 = 1000;
LABEL_53:
    KeReleaseSpinLock(v21, *a3);
    if ( !HUBSM_FindAndSetTargetState(a1, v13, &v43) )
      goto LABEL_83;
    v26 = *(_DWORD *)(a1 + 984);
    if ( v26 == 3000 || v26 == 5000 )
    {
      v27 = *(volatile signed __int32 **)(a1 + 960);
      for ( k = *(unsigned int *)(a1 + 880); ; k = (unsigned int)(k - 1) )
      {
        v29 = *(_QWORD *)(*(_QWORD *)(a1 + 976) + 8LL * (unsigned int)(*(_DWORD *)(a1 + 4 * k + 852) - v26));
        if ( !(_DWORD)k || (*(_DWORD *)(v29 + 16) & 4) == 0 )
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
            1588LL,
            "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\smengine.c");
          _InterlockedAnd(v27 + 66, 0xFFFFFFDF);
        }
      }
      else if ( (*(_DWORD *)(*(_QWORD *)v27 + 40LL) & 0x20000) != 0 && (v27[66] & 0x20) == 0 )
      {
        v31 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1632))(WdfDriverGlobals);
        LODWORD(v41) = 1603;
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
    if ( v43 )
    {
      v43 = 0;
      if ( v13 != 1002 && !(unsigned __int8)ExCancelTimer(*(_QWORD *)(a1 + 1040), 0LL) )
      {
        result = KeAcquireSpinLockRaiseToDpc(v21);
        v33 = *(_BYTE *)(a1 + 948);
        v34 = result;
        v35 = *(_BYTE *)(a1 + 949);
        v36 = v33;
        v37 = v33 == v35;
        *a3 = result;
        while ( 1 )
        {
          if ( v37 )
          {
            *(_BYTE *)(a1 + 1048) = 1;
            return result;
          }
          result = v36;
          if ( *(_DWORD *)(a1 + 4LL * v36 + 884) == 1002 )
            break;
          v36 = (v36 + 1) & 0xF;
          v37 = v36 == v35;
        }
        if ( v36 != v35 )
        {
          while ( v36 != v33 )
          {
            v38 = v36;
            v36 = (v36 - 1) & 0xF;
            *(_DWORD *)(a1 + 4 * v38 + 884) = *(_DWORD *)(a1 + 4LL * (((_BYTE)v38 - 1) & 0xF) + 884);
            v33 = *(_BYTE *)(a1 + 948);
          }
          *(_DWORD *)(a1 + 4LL * v33 + 884) = 1000;
          *(_BYTE *)(a1 + 948) = (*(_BYTE *)(a1 + 948) + 1) & 0xF;
        }
        KeReleaseSpinLock(v21, v34);
      }
    }
    if ( !v44 && v4 > 0x64 )
      break;
    a2 = HUBSM_ExecuteEntryFunctionsAndPushPopStateMachinesForCurrentState(a1);
    if ( a2 == 1003 )
      goto LABEL_87;
LABEL_83:
    *a3 = KeAcquireSpinLockRaiseToDpc(v21);
  }
  (*(void (__fastcall **)(_QWORD, void (__fastcall *)(__int64, __int64), __int64, _QWORD))(*(_QWORD *)(a1 + 1000) + 512LL))(
    *(_QWORD *)(a1 + 992),
    HUBSM_EvtSmWorkItem,
    a1,
    (unsigned int)(-(*(_BYTE *)(a1 + 1008) != 0) - 892338175));
LABEL_87:
  result = KeAcquireSpinLockRaiseToDpc(i);
  *a3 = result;
  return result;
}
