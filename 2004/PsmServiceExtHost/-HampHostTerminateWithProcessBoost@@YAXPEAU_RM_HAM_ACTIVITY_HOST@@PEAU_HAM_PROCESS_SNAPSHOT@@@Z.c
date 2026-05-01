/*
 * XREFs of ?HampHostTerminateWithProcessBoost@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_PROCESS_SNAPSHOT@@@Z @ 0x180005694
 * Callers:
 *     ?HampHostTerminateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x1800058F0 (-HampHostTerminateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 * Callees:
 *     ?HampProcessBoostPriority@@YAJPEAXKW4_RM_EXECUTION_SPEED@@@Z @ 0x180004A48 (-HampProcessBoostPriority@@YAJPEAXKW4_RM_EXECUTION_SPEED@@@Z.c)
 *     CempLockSleepConditionVariableExclusive @ 0x180005898 (CempLockSleepConditionVariableExclusive.c)
 *     ?HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180009020 (-HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180009D90 (-HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostComputeStaticEnforcementSettings@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTINGS@@PEAU_RM_COMMIT_THRESHOLDS@@2PEAPEAU_HAM_ACTIVITY@@@Z @ 0x18001D320 (-HampHostComputeStaticEnforcementSettings@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SET.c)
 */

void __fastcall HampHostTerminateWithProcessBoost(HANDLE *a1, struct _HAM_PROCESS_SNAPSHOT *a2)
{
  NTSTATUS v4; // r13d
  int i; // r14d
  unsigned __int64 v6; // r12
  unsigned int v7; // ebx
  unsigned int v8; // edx
  int v9; // esi
  __int64 *v10; // rbp
  HANDLE v11; // rcx
  unsigned int v12; // edx
  unsigned int v13; // edx
  unsigned int v14; // edx
  int v15; // ebx
  __int64 v16; // rsi
  _BYTE v17[24]; // [rsp+30h] [rbp-58h] BYREF
  int v18; // [rsp+48h] [rbp-40h]
  unsigned __int64 v19; // [rsp+90h] [rbp+8h] BYREF
  __int64 v20; // [rsp+A0h] [rbp+18h] BYREF
  _LARGE_INTEGER Timeout; // [rsp+A8h] [rbp+20h] BYREF

  v4 = 1;
  i = -1;
  RtlQueryUnbiasedInterruptTime(&v19);
  v6 = v19 / 0x2710;
  while ( 1 )
  {
    v7 = -1;
    NtSetInformationJobObject(a1[72], JobObjectExtendedLimitInformation|0x10, 0LL, 0);
    NtTerminateJobObject(a1[72], v4);
    RtlQueryUnbiasedInterruptTime(&v19);
    v8 = v19 / 0x2710 - v6;
    if ( v8 >= 0x7D0 )
      v4 = 1073807364;
    else
      v7 = 2000 - v8;
    if ( v8 < 0x96 )
    {
      v9 = 0;
      if ( v7 >= 150 - v8 )
        v7 = 150 - v8;
    }
    else
    {
      v9 = 1;
    }
    if ( v7 == -1 )
    {
      v10 = 0LL;
    }
    else
    {
      v10 = &v20;
      v20 = -10000LL * v7;
    }
    HampHostAcquireLockExclusiveEx((struct _RM_HAM_ACTIVITY_HOST *)a1, 0);
    v11 = a1[72];
    Timeout.QuadPart = 0LL;
    if ( NtWaitForSingleObject(v11, 0, &Timeout) != 258 )
      break;
    if ( v9
      && ((HampHostComputeStaticEnforcementSettings(
             (struct _RM_HAM_ACTIVITY_HOST *)a1,
             (struct _RM_ENFORCEMENT_SETTINGS *)v17,
             0LL,
             0LL,
             0LL),
           v15 = v18,
           i == -1)
       || i < v18) )
    {
      HampHostReleaseLockExclusiveEx((struct _RM_HAM_ACTIVITY_HOST *)a1, v14);
      v16 = 0LL;
      for ( i = v15; (unsigned int)v16 < *((_DWORD *)a2 + 4); v16 = (unsigned int)(v16 + 1) )
        HampProcessBoostPriority(*(void **)(*(_QWORD *)a2 + 8 * v16), *(_DWORD *)(*((_QWORD *)a2 + 1) + 4 * v16), v15);
    }
    else
    {
      CempLockSleepConditionVariableExclusive(a1, a1 + 85, v10);
      HampHostReleaseLockExclusiveEx((struct _RM_HAM_ACTIVITY_HOST *)a1, v13);
    }
  }
  HampHostReleaseLockExclusiveEx((struct _RM_HAM_ACTIVITY_HOST *)a1, v12);
}
