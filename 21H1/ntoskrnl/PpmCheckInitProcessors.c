/*
 * XREFs of PpmCheckInitProcessors @ 0x1407A4778
 * Callers:
 *     PpmReapplyPerfPolicy @ 0x1407A5360 (PpmReapplyPerfPolicy.c)
 *     PopNewProcessorCallback @ 0x1408DC530 (PopNewProcessorCallback.c)
 *     PoInitSystem @ 0x140A3BEEC (PoInitSystem.c)
 * Callees:
 *     PopExecuteOnTargetProcessors @ 0x140204F30 (PopExecuteOnTargetProcessors.c)
 *     PpmConvertTime @ 0x140205BBC (PpmConvertTime.c)
 *     KeIsEmptyAffinityEx @ 0x140276350 (KeIsEmptyAffinityEx.c)
 *     KeGetPrcb @ 0x140276C20 (KeGetPrcb.c)
 *     KeEnumerateNextProcessor @ 0x1402771F0 (KeEnumerateNextProcessor.c)
 *     PpmReleaseLock @ 0x140278680 (PpmReleaseLock.c)
 *     KeSubtractAffinityEx @ 0x1402791F0 (KeSubtractAffinityEx.c)
 *     KeOrAffinityEx @ 0x140279530 (KeOrAffinityEx.c)
 *     PpmAcquireLock @ 0x14035D3A4 (PpmAcquireLock.c)
 *     PpmParkRegisterParking @ 0x1403BE600 (PpmParkRegisterParking.c)
 *     PpmCheckApplyParkConstraints @ 0x1403BF1E8 (PpmCheckApplyParkConstraints.c)
 *     KeQueryActiveProcessorAffinity @ 0x1403BF4A0 (KeQueryActiveProcessorAffinity.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     memset @ 0x140408F80 (memset.c)
 *     HvlIsRootPowerSchedulerQosPresent @ 0x1404EC10C (HvlIsRootPowerSchedulerQosPresent.c)
 *     PpmUpdateProcessorPolicy @ 0x1407780E0 (PpmUpdateProcessorPolicy.c)
 *     PpmReinitializeHeteroEngine @ 0x1407A4748 (PpmReinitializeHeteroEngine.c)
 *     PpmAllocatePerfCheck @ 0x1407A52F4 (PpmAllocatePerfCheck.c)
 *     PpmCheckReInit @ 0x1407A5444 (PpmCheckReInit.c)
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
        v14[1] = (unsigned __int16 *)qword_140C11248[0];
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
