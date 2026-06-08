/*
 * XREFs of InitializeEnergyEstimationForEfficiencyClass @ 0x1C00257B0
 * Callers:
 *     InitializeEnergyEstimation @ 0x1C0026544 (InitializeEnergyEstimation.c)
 * Callees:
 *     InitializeEnumerationContext @ 0x1C0001524 (InitializeEnumerationContext.c)
 *     EnumerateNextDevice @ 0x1C00039EC (EnumerateNextDevice.c)
 *     ResetEnumerationContext @ 0x1C0003A38 (ResetEnumerationContext.c)
 *     _guard_dispatch_icall_nop @ 0x1C00047F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0004AC0 (memset.c)
 *     EnableEnergyEstimation @ 0x1C00262B0 (EnableEnergyEstimation.c)
 *     DisableEnergyEstimation @ 0x1C003A168 (DisableEnergyEstimation.c)
 *     EnablePerformanceMonitoringCounters @ 0x1C003A230 (EnablePerformanceMonitoringCounters.c)
 */

__int64 __fastcall InitializeEnergyEstimationForEfficiencyClass(unsigned int a1)
{
  unsigned __int64 v1; // rbx
  __int64 result; // rax
  int v4; // r11d
  __int64 v5; // rdi
  __int64 v6; // r9
  char *v7; // r8
  __int64 v8; // rcx
  int v9; // r11d
  __int64 v10; // rdi
  _QWORD *v11; // rsi
  _OWORD v12[2]; // [rsp+20h] [rbp-20h] BYREF
  __int64 v13; // [rsp+78h] [rbp+38h] BYREF

  v13 = 0LL;
  v1 = (unsigned __int64)a1 << 8;
  memset(v12, 0, sizeof(v12));
  InitializeEnumerationContext((__int64)&qword_1C001C400, 32, (__int64)v12);
  ResetEnumerationContext((__int64 *)v12);
  result = EnumerateNextDevice((__int64 *)v12, &v13);
  if ( !(_DWORD)result )
  {
    while ( (*(_QWORD *)(v13 + 272) & 0x2000000000LL) == 0
         || *(unsigned __int8 *)(v13 + 368) != a1
         || (int)EnableEnergyEstimation() >= 0 )
    {
      result = EnumerateNextDevice((__int64 *)v12, &v13);
      if ( (_DWORD)result )
      {
        if ( v4 >= 0 )
          goto LABEL_7;
        break;
      }
    }
    InitializeEnumerationContext((__int64)&qword_1C001C400, 32, (__int64)v12);
    ResetEnumerationContext((__int64 *)v12);
    while ( !(unsigned int)EnumerateNextDevice((__int64 *)v12, &v13) )
    {
      if ( (*(_QWORD *)(v13 + 272) & 0x2000000000LL) != 0 && *(unsigned __int8 *)(v13 + 368) == a1 )
        DisableEnergyEstimation();
    }
    *(__int64 *)((char *)&Globals + v1 + 1800) = 0LL;
    v5 = 0LL;
    *(__int64 *)((char *)&Globals + v1 + 1792) = 0LL;
    v6 = 0LL;
    result = *(unsigned int *)((char *)&Globals + v1 + 1592);
    if ( (_DWORD)result )
    {
      do
      {
        if ( (*(_DWORD *)((_BYTE *)&Globals + 12 * v6 + v1 + 1600) & 1) == 0 )
        {
          if ( (_DWORD)v6 != (_DWORD)v5 )
          {
            v7 = (char *)&Globals + v1;
            v8 = 3 * v5;
            *(_QWORD *)&v7[4 * v8 + 1596] = *(__int64 *)((char *)&Globals + 12 * v6 + v1 + 1596);
            *(_DWORD *)&v7[4 * v8 + 1604] = *(_DWORD *)((char *)&Globals + 12 * v6 + v1 + 1604);
          }
          v5 = (unsigned int)(v5 + 1);
        }
        result = *(unsigned int *)((char *)&Globals + v1 + 1592);
        v6 = (unsigned int)(v6 + 1);
      }
      while ( (unsigned int)v6 < (unsigned int)result );
    }
    if ( (_DWORD)result != (_DWORD)v5 )
    {
      result = (__int64)memset((char *)&unk_1C001CA0C + 12 * v5 + v1, 0, 12LL * (unsigned int)(result - v5));
      *(_DWORD *)((char *)&Globals + v1 + 1592) = v5;
    }
    if ( (_DWORD)v5 )
    {
      ResetEnumerationContext((__int64 *)v12);
      result = EnumerateNextDevice((__int64 *)v12, &v13);
      if ( (_DWORD)result )
      {
LABEL_30:
        if ( *(__int64 *)((char *)&Globals + v1 + 1792) )
          return result;
      }
      else
      {
        while ( (*(_QWORD *)(v13 + 272) & 0x2000000000LL) == 0
             || *(unsigned __int8 *)(v13 + 368) != a1
             || (int)EnablePerformanceMonitoringCounters() >= 0 )
        {
          result = EnumerateNextDevice((__int64 *)v12, &v13);
          if ( (_DWORD)result )
          {
            if ( v9 < 0 )
              break;
            goto LABEL_30;
          }
        }
      }
      InitializeEnumerationContext((__int64)&qword_1C001C400, 32, (__int64)v12);
      ResetEnumerationContext((__int64 *)v12);
      while ( 1 )
      {
        result = EnumerateNextDevice((__int64 *)v12, &v13);
        if ( (_DWORD)result )
          break;
        v10 = v13;
        if ( (*(_QWORD *)(v13 + 272) & 0x2000000000LL) != 0 && *(unsigned __int8 *)(v13 + 368) == a1 )
        {
          v11 = *(_QWORD **)(v13 + 360);
          if ( v11 )
          {
            if ( v11[1] )
            {
              ((void (*)(void))HalPrivateDispatchTable[74])();
              v11[1] = 0LL;
            }
            ExFreePoolWithTag(v11, 0x72637250u);
            *(_QWORD *)(v10 + 360) = 0LL;
          }
        }
      }
      *(__int64 *)((char *)&Globals + v1 + 1800) = 0LL;
      *(__int64 *)((char *)&Globals + v1 + 1792) = 0LL;
    }
  }
LABEL_7:
  if ( !*(__int64 *)((char *)&Globals + v1 + 1792) )
  {
    result = (__int64)ComputeProcessorEnergy;
    *(__int64 *)((char *)&Globals + v1 + 1792) = (__int64)ComputeProcessorEnergy;
  }
  return result;
}
