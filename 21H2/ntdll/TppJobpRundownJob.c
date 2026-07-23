/*
 * XREFs of TppJobpRundownJob @ 0x18007FCD8
 * Callers:
 *     TpWaitForJobNotification @ 0x18007FC30 (TpWaitForJobNotification.c)
 *     TpReleaseJobNotification @ 0x18007FC70 (TpReleaseJobNotification.c)
 *     TppJobpStopCallbackGeneration @ 0x180111CA0 (TppJobpStopCallbackGeneration.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180012C70 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x1800290A0 (RtlAcquireSRWLockExclusive.c)
 *     NtQueryInformationJobObject @ 0x18009FF50 (NtQueryInformationJobObject.c)
 *     ZwSetInformationJobObject @ 0x1800A0910 (ZwSetInformationJobObject.c)
 *     _guard_dispatch_icall_nop @ 0x1800A1120 (_guard_dispatch_icall_nop.c)
 *     TppRaiseHandleStatus @ 0x1801123EC (TppRaiseHandleStatus.c)
 */

void __fastcall TppJobpRundownJob(__int64 a1)
{
  _RTL_SRWLOCK *v2; // rsi
  void *v3; // rcx
  NTSTATUS v4; // eax
  unsigned __int64 v5; // rax
  signed __int64 v6; // rbx
  unsigned __int64 v7; // rbx
  __int128 JobObjectInformation; // [rsp+30h] [rbp-18h] BYREF
  unsigned __int64 v9; // [rsp+50h] [rbp+8h] BYREF

  if ( *(_QWORD *)(a1 + 272) )
  {
    v2 = (_RTL_SRWLOCK *)(a1 + 288);
    RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a1 + 288));
    v3 = *(void **)(a1 + 272);
    if ( v3 )
    {
      JobObjectInformation = 0LL;
      v4 = ZwSetInformationJobObject(v3, JobObjectAssociateCompletionPortInformation, &JobObjectInformation, 0x10u);
      if ( v4 < 0
        || (v4 = NtQueryInformationJobObject(*(HANDLE *)(a1 + 272), JobObjectCompletionCounter, &v9, 8u, 0LL), v4 < 0) )
      {
        TppRaiseHandleStatus((unsigned int)v4, *(_QWORD *)(a1 + 272), 0LL);
      }
      else
      {
        v5 = (-2LL * v9) | 1;
        v9 = v5;
        v6 = _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 280), v5);
        *(_QWORD *)(a1 + 272) = 0LL;
        v7 = v5 + v6;
        RtlReleaseSRWLockExclusive(v2);
        if ( v7 == 1 && _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 72), 0xFFFFFFFF) == 1 )
          (**(void (***)(void))(a1 + 80))();
      }
    }
    else
    {
      RtlReleaseSRWLockExclusive(v2);
    }
  }
}
