/*
 * XREFs of PopExecutePowerAction @ 0x140775388
 * Callers:
 *     PopCheckAndHandleThermalConditions @ 0x1403C5528 (PopCheckAndHandleThermalConditions.c)
 *     PopPolicySystemIdle @ 0x14066D1E0 (PopPolicySystemIdle.c)
 *     NtInitiatePowerAction @ 0x140775170 (NtInitiatePowerAction.c)
 *     PopBatteryApplyCompositeState @ 0x14077FDDC (PopBatteryApplyCompositeState.c)
 *     PoEnableCriticalShutdown @ 0x14079194C (PoEnableCriticalShutdown.c)
 *     PopCriticalShutdown @ 0x1408E7854 (PopCriticalShutdown.c)
 *     PopStartStopTtmSxTranstion @ 0x1408E7A20 (PopStartStopTtmSxTranstion.c)
 *     PdcPoSetPowerAction @ 0x1408EFC50 (PdcPoSetPowerAction.c)
 *     PopExecuteSystemIdleAction @ 0x1408F0F54 (PopExecuteSystemIdleAction.c)
 *     PopIdleAoAcDozeToS4 @ 0x1408F56A0 (PopIdleAoAcDozeToS4.c)
 *     PopTransitionSystemPowerStateEx @ 0x1409920F4 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     PopGetPolicyWorker @ 0x14026FD50 (PopGetPolicyWorker.c)
 *     PopSetNotificationWork @ 0x1402700D0 (PopSetNotificationWork.c)
 *     EtwWrite @ 0x14027F7C0 (EtwWrite.c)
 *     EtwTraceKernelEvent @ 0x14029BFE0 (EtwTraceKernelEvent.c)
 *     EtwEventEnabled @ 0x1402C0830 (EtwEventEnabled.c)
 *     KeQueryPerformanceCounter @ 0x1402D0BC0 (KeQueryPerformanceCounter.c)
 *     PopSetPowerActionState @ 0x140382D1C (PopSetPowerActionState.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     PopDiagTraceShutdownAction @ 0x1405731C4 (PopDiagTraceShutdownAction.c)
 *     PopCompleteAction @ 0x140773F34 (PopCompleteAction.c)
 *     PopPromoteActionFlag @ 0x14077576C (PopPromoteActionFlag.c)
 *     PopCompareActions @ 0x1407757BC (PopCompareActions.c)
 *     PopVerifyPowerActionPolicy @ 0x14078B98C (PopVerifyPowerActionPolicy.c)
 *     PopVerifySystemPowerState @ 0x14078BAE8 (PopVerifySystemPowerState.c)
 *     PopResetActionDefaults @ 0x14078EB88 (PopResetActionDefaults.c)
 */

int __fastcall PopExecutePowerAction(__int64 a1, unsigned int a2, __int64 *a3, int a4, unsigned int a5)
{
  int v5; // esi
  int v7; // r13d
  char v10; // r13
  int v11; // edi
  int v12; // eax
  REGHANDLE v13; // r14
  unsigned int v14; // edi
  unsigned int v15; // r14d
  int v16; // eax
  int v17; // edx
  int v18; // r11d
  int v19; // r12d
  int v20; // r9d
  int v21; // r9d
  int v22; // r14d
  int v23; // edx
  int v24; // r9d
  char v25; // dl
  int v26; // r11d
  int v27; // r9d
  int v28; // r9d
  int v29; // edx
  int v30; // r9d
  int v31; // edx
  int v32; // r9d
  unsigned int v33; // r9d
  int v34; // r11d
  unsigned int v35; // r11d
  unsigned int v36; // r9d
  char v37; // r8
  char v38; // r8
  int v39; // ecx
  __int64 v40; // rax
  __int64 *v41; // rdx
  LONG v42; // edx
  int v43; // eax
  char v45; // [rsp+30h] [rbp-D0h] BYREF
  int v46; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v47; // [rsp+40h] [rbp-C0h] BYREF
  int v48; // [rsp+48h] [rbp-B8h]
  int v49; // [rsp+50h] [rbp-B0h] BYREF
  int v50; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int v51; // [rsp+60h] [rbp-A0h] BYREF
  int v52; // [rsp+68h] [rbp-98h] BYREF
  int v53; // [rsp+70h] [rbp-90h] BYREF
  int v54; // [rsp+78h] [rbp-88h] BYREF
  int v55; // [rsp+80h] [rbp-80h] BYREF
  unsigned int v56; // [rsp+88h] [rbp-78h] BYREF
  __int64 v57; // [rsp+90h] [rbp-70h] BYREF
  int v58; // [rsp+98h] [rbp-68h]
  int v59; // [rsp+9Ch] [rbp-64h]
  __int64 *v60; // [rsp+A0h] [rbp-60h] BYREF
  int v61; // [rsp+A8h] [rbp-58h]
  int v62; // [rsp+ACh] [rbp-54h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+B0h] [rbp-50h] BYREF
  int *v64; // [rsp+C0h] [rbp-40h]
  __int64 v65; // [rsp+C8h] [rbp-38h]
  unsigned int *v66; // [rsp+D0h] [rbp-30h]
  __int64 v67; // [rsp+D8h] [rbp-28h]
  int *v68; // [rsp+E0h] [rbp-20h]
  __int64 v69; // [rsp+E8h] [rbp-18h]
  int *v70; // [rsp+F0h] [rbp-10h]
  __int64 v71; // [rsp+F8h] [rbp-8h]
  int *v72; // [rsp+100h] [rbp+0h]
  __int64 v73; // [rsp+108h] [rbp+8h]
  int *v74; // [rsp+110h] [rbp+10h]
  __int64 v75; // [rsp+118h] [rbp+18h]
  int *v76; // [rsp+120h] [rbp+20h]
  __int64 v77; // [rsp+128h] [rbp+28h]

  v5 = 0;
  v7 = *((_DWORD *)a3 + 2);
  v47 = *a3;
  v46 = a4;
  v48 = v7;
  if ( (xmmword_140CFC490 & 0x8000) != 0 )
  {
    v62 = 0;
    v60 = &v57;
    v58 = v47;
    v59 = a4;
    v57 = a1;
    v61 = 16;
    EtwTraceKernelEvent((int)&v60, 1, 0x80008000, 4642, 4200450);
  }
  v54 = v7;
  v10 = 0;
  v55 = a4;
  v11 = *(_DWORD *)(a1 + 4);
  v53 = HIDWORD(v47);
  v12 = *(_DWORD *)a1;
  v56 = a5;
  v52 = v47;
  v51 = a2;
  v50 = v11;
  v49 = v12;
  if ( PopDiagHandleRegistered )
  {
    v13 = PopDiagHandle;
    if ( EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_EXECUTE_POWER_ACTION) )
    {
      *(_QWORD *)&UserData.Size = 4LL;
      UserData.Ptr = (ULONGLONG)&v49;
      v65 = 4LL;
      v64 = &v50;
      v67 = 4LL;
      v66 = &v51;
      v69 = 4LL;
      v68 = &v52;
      v71 = 4LL;
      v70 = &v53;
      v72 = &v54;
      v74 = &v55;
      v76 = (int *)&v56;
      v73 = 4LL;
      v75 = 4LL;
      v77 = 4LL;
      EtwWrite(v13, &POP_ETW_EVENT_EXECUTE_POWER_ACTION, 0LL, 8u, &UserData);
      v11 = *(_DWORD *)(a1 + 4);
    }
  }
  if ( (v11 & 0x80u) == 0 )
  {
LABEL_53:
    v42 = 0;
LABEL_55:
    LODWORD(v40) = PopCompleteAction(a1, v42);
    return v40;
  }
  PopVerifySystemPowerState(&v46, a5);
  if ( (unsigned __int8)PopVerifyPowerActionPolicy(&v47) )
  {
    v42 = -1073741637;
    goto LABEL_55;
  }
  v14 = v47;
  v15 = HIDWORD(v47);
  if ( (unsigned int)(v47 - 2) <= 1 )
  {
    v15 = HIDWORD(v47) | 0x80000000;
    HIDWORD(v47) |= 0x80000000;
  }
  v16 = *(_DWORD *)(a1 + 4);
  if ( (v16 & 2) == 0 )
  {
    v17 = 6;
    *(_DWORD *)(a1 + 4) = v16 | 2;
    if ( v14 == 6 && PsWin32CalloutsEstablished )
    {
      v43 = *(_DWORD *)a1;
      if ( *(_DWORD *)a1 == 2 )
      {
        LODWORD(v47) = 0;
        v14 = 0;
        v5 = (v15 & 0x10) != 0 ? 16 : 32;
        goto LABEL_13;
      }
      if ( !v43 )
      {
        v14 = 0;
        LODWORD(v47) = 0;
        v5 = byte_140C23364 != 0 ? 32 : 16;
        PopShutdownButtonPressTime = KeQueryPerformanceCounter(0LL).QuadPart;
LABEL_65:
        v17 = 6;
        goto LABEL_13;
      }
      if ( v43 == 15 )
      {
        if ( (v15 & 0x2000000) != 0 )
        {
          v5 = 16;
LABEL_64:
          PopDiagTraceShutdownAction(v14, v5, *(_DWORD *)a1);
          goto LABEL_65;
        }
        v5 = 32;
      }
    }
    if ( v14 - 4 > 2 )
    {
LABEL_13:
      if ( !byte_140C23A61 )
        PopResetActionDefaults();
      if ( v14 )
      {
        v18 = v46;
        v45 = 0;
        v19 = v15 | 0x10000000;
        if ( v14 != 7 )
          v19 = v15;
        if ( v14 == 3 )
          v18 = 5;
        if ( v14 == 4 )
          v18 = v17;
        v46 = v18;
        if ( (int)PopCompareActions(v14, (unsigned int)qword_140C23A64) < 0 )
        {
          v22 = 2;
        }
        else
        {
          PopPromoteActionFlag((unsigned int)&v45, 1, v19, 0, 1);
          v22 = v21 + 2;
          PopPromoteActionFlag((unsigned int)&v45, v23, v19, v21, v21 + 2);
          PopPromoteActionFlag((unsigned int)&v45, v24 + 4, v19, v24, 0x10000000);
          if ( v14 == v22 )
          {
            if ( v26 < *((_DWORD *)PopPolicy + 17) )
              v26 = *((_DWORD *)PopPolicy + 17);
            v46 = v26;
          }
          if ( v26 > SHIDWORD(qword_140C23A64) )
          {
            v45 |= v25;
            HIDWORD(qword_140C23A64) = v26;
          }
        }
        LOBYTE(v20) = 1;
        PopPromoteActionFlag((unsigned int)&v45, 1, v19, v20, 4);
        PopPromoteActionFlag((unsigned int)&v45, 5, v19, v27, 0x80000000);
        PopPromoteActionFlag((unsigned int)&v45, 0, v19, v28, 0x40000000);
        PopPromoteActionFlag((unsigned int)&v45, v29, v19, v30, v29 + 8);
        PopPromoteActionFlag((unsigned int)&v45, v31, v19, v32, 32);
        if ( (int)PopCompareActions(v14, (unsigned int)qword_140C23A64) <= 0 )
        {
          v38 = v45;
        }
        else
        {
          PopCompareActions(v14, (unsigned int)(v34 - 5));
          if ( !(unsigned int)PopCompareActions(v36, v35) )
            v37 |= v22;
          LODWORD(qword_140C23A64) = v14;
          v38 = v37 | 5;
          v33 = v14;
          dword_140C23A74 = *(_DWORD *)a1;
          dword_140C23A78 = 0;
          v45 = v38;
          if ( !*(_DWORD *)a1 )
            dword_140C23A78 = *(_DWORD *)(a1 + 16);
        }
        if ( v33 == 3 )
          LODWORD(qword_140C23A64) = v22;
        if ( v38 )
        {
          if ( TtmpEnabled == 1 )
            PopTtmIsSxTransitionInProgress = 1;
          v10 = 1;
          if ( (unsigned __int8)byte_140C23A61 < (unsigned __int8)v22 )
          {
            PopSetPowerActionState(1);
            v39 = v22;
            dword_140C23A70 = 0;
          }
          else
          {
            LOBYTE(PopAction) = v38 | PopAction;
            v39 = 1;
          }
          PopGetPolicyWorker(v39);
        }
      }
      goto LABEL_42;
    }
    goto LABEL_64;
  }
LABEL_42:
  LODWORD(v40) = *(_DWORD *)(a1 + 4);
  if ( (v40 & 1) == 0 )
  {
    *(_DWORD *)(a1 + 4) = v40 | 1;
    if ( v5 == 32 )
    {
      if ( !_InterlockedExchange(&PopShutdownEventCode, 32) )
        a2 |= 0x10u;
    }
    else if ( v5 == 16 && !_InterlockedCompareExchange(&PopShutdownEventCode, 16, 0) )
    {
      a2 |= 0x10u;
    }
    PopSetNotificationWork(a2);
    LODWORD(v40) = *(_DWORD *)(a1 + 4);
  }
  if ( (v40 & 0x20) != 0 )
  {
    if ( v10 )
    {
      v41 = (__int64 *)qword_140C233D8;
      v40 = *(_QWORD *)(a1 + 8) + 32LL;
      if ( *(__int64 **)qword_140C233D8 != &PopActionWaiters )
        __fastfail(3u);
      *(_QWORD *)v40 = &PopActionWaiters;
      *(_QWORD *)(v40 + 8) = v41;
      *v41 = v40;
      qword_140C233D8 = v40;
      return v40;
    }
    goto LABEL_53;
  }
  return v40;
}
