/*
 * XREFs of PpmCheckInitProcessors @ 0x1407A6EC8
 * Callers:
 *     PpmReapplyPerfPolicy @ 0x1407A7AB0 (PpmReapplyPerfPolicy.c)
 *     PopNewProcessorCallback @ 0x1408DD8A0 (PopNewProcessorCallback.c)
 *     PoInitSystem @ 0x140A3BD5C (PoInitSystem.c)
 * Callees:
 *     KeIsEmptyAffinityEx @ 0x14021D300 (KeIsEmptyAffinityEx.c)
 *     KeGetPrcb @ 0x14021DBD0 (KeGetPrcb.c)
 *     KeEnumerateNextProcessor @ 0x14021E1A0 (KeEnumerateNextProcessor.c)
 *     PpmReleaseLock @ 0x14021F630 (PpmReleaseLock.c)
 *     KeSubtractAffinityEx @ 0x1402201A0 (KeSubtractAffinityEx.c)
 *     KeOrAffinityEx @ 0x1402204E0 (KeOrAffinityEx.c)
 *     PpmConvertTime @ 0x14029857C (PpmConvertTime.c)
 *     PpmAcquireLock @ 0x1402DF294 (PpmAcquireLock.c)
 *     PopExecuteOnTargetProcessors @ 0x1402E3AE0 (PopExecuteOnTargetProcessors.c)
 *     PpmParkRegisterParking @ 0x1403BF590 (PpmParkRegisterParking.c)
 *     PpmCheckApplyParkConstraints @ 0x1403C0178 (PpmCheckApplyParkConstraints.c)
 *     KeQueryActiveProcessorAffinity @ 0x1403C0430 (KeQueryActiveProcessorAffinity.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     memset @ 0x14040A280 (memset.c)
 *     HvlIsRootPowerSchedulerQosPresent @ 0x1404EC754 (HvlIsRootPowerSchedulerQosPresent.c)
 *     PpmUpdateProcessorPolicy @ 0x14077A4F0 (PpmUpdateProcessorPolicy.c)
 *     PpmReinitializeHeteroEngine @ 0x1407A6E98 (PpmReinitializeHeteroEngine.c)
 *     PpmAllocatePerfCheck @ 0x1407A7A44 (PpmAllocatePerfCheck.c)
 *     PpmCheckReInit @ 0x1407A7B94 (PpmCheckReInit.c)
 */

char __fastcall PpmCheckInitProcessors(int a1)
{
  __int64 Prcb; // rax
  struct _KPRCB *CurrentPrcb; // rax
  __int64 v4; // rax
  unsigned int v5; // edx
  int v7; // [rsp+28h] [rbp-E0h] BYREF
  unsigned int v8; // [rsp+2Ch] [rbp-DCh] BYREF
  __int64 v9; // [rsp+30h] [rbp-D8h] BYREF
  unsigned __int16 *v10[2]; // [rsp+38h] [rbp-D0h] BYREF
  __int16 v11; // [rsp+48h] [rbp-C0h]
  int v12; // [rsp+4Ah] [rbp-BEh]
  __int16 v13; // [rsp+4Eh] [rbp-BAh]
  unsigned __int16 *v14[2]; // [rsp+50h] [rbp-B8h] BYREF
  _WORD v15[4]; // [rsp+60h] [rbp-A8h]
  _QWORD v16[22]; // [rsp+68h] [rbp-A0h] BYREF
  unsigned __int16 v17[88]; // [rsp+118h] [rbp+10h] BYREF

  memset(v17, 0, 0xA8uLL);
  v12 = 0;
  v13 = 0;
  v8 = 0;
  memset(v16, 0, 0xA8uLL);
  v7 = 0;
  if ( a1 )
  {
    LODWORD(v16[0]) = 1310721;
    memset((char *)v16 + 4, 0, 0xA4uLL);
  }
  else
  {
    PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
    KeQueryActiveProcessorAffinity((__int64)v17);
    if ( !(unsigned __int8)KeSubtractAffinityEx(v17, (unsigned __int16 *)PpmCheckRegistered, v16) )
    {
      LOBYTE(CurrentPrcb) = PpmReleaseLock(&PpmPerfPolicyLock);
      return (char)CurrentPrcb;
    }
  }
  KeOrAffinityEx((unsigned __int16 *)PpmCheckRegistered, (unsigned __int16 *)v16, PpmCheckRegistered);
  if ( !(unsigned int)KeIsEmptyAffinityEx(v16) )
  {
    v10[1] = (unsigned __int16 *)v16[1];
    v10[0] = (unsigned __int16 *)v16;
    v11 = 0;
    while ( !(unsigned int)KeEnumerateNextProcessor(&v8, v10) )
    {
      Prcb = KeGetPrcb(v8);
      PpmAllocatePerfCheck(Prcb + 33128);
    }
    PopExecuteOnTargetProcessors((__int64)v16, (__int64)PpmCheckProcessorInit, 0LL, 0LL);
  }
  PpmParkRegisterParking();
  if ( (KeGetCurrentPrcb()->FeatureBits & 0x8000000000LL) != 0 )
  {
    PpmAllowedActions |= 0x400u;
    v7 |= 0x400u;
    PpmUpdateProcessorPolicy(&v7, 0LL);
  }
  PpmCheckReInit();
  PpmCheckApplyParkConstraints();
  CurrentPrcb = KeGetCurrentPrcb();
  *(_DWORD *)&v15[1] = 0;
  v15[3] = 0;
  LODWORD(v9) = 0;
  if ( CurrentPrcb->PowerState.Hypervisor == ProcHypervisorPresent )
  {
    LOBYTE(CurrentPrcb) = HvlIsRootPowerSchedulerQosPresent();
    if ( (_BYTE)CurrentPrcb )
    {
      if ( !PpmPerfVmQosSupported )
      {
        PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
        v14[1] = (unsigned __int16 *)qword_140C11258[0];
        v15[0] = 0;
        v14[0] = (unsigned __int16 *)PpmCheckRegistered;
        while ( !(unsigned int)KeEnumerateNextProcessor(&v9, v14) )
        {
          v4 = KeGetPrcb(v9);
          v5 = PpmPerfQosTransitionHysteresisOverride;
          if ( PpmPerfQosTransitionHysteresisOverride == -1 )
            v5 = PpmPerfQosTransitionHysteresis;
          *(_QWORD *)(v4 + 33256) = PpmConvertTime(v5, 1000000LL, 1000000LL * *(unsigned int *)(v4 + 68));
        }
        PpmPerfQosManageIdleProcessors = 0;
        PpmPerfVmQosSupported = 1;
        LOBYTE(CurrentPrcb) = PpmReinitializeHeteroEngine(1);
      }
    }
  }
  return (char)CurrentPrcb;
}
