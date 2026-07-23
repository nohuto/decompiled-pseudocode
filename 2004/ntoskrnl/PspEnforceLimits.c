/*
 * XREFs of PspEnforceLimits @ 0x14065775C
 * Callers:
 *     PspJobTimeLimitsWork @ 0x1406576A0 (PspJobTimeLimitsWork.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140208290 (ObfDereferenceObjectWithTag.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     ZwUpdateWnfStateData @ 0x1403F6F80 (ZwUpdateWnfStateData.c)
 *     memset @ 0x14040A280 (memset.c)
 *     PspGetNextJob @ 0x140657860 (PspGetNextJob.c)
 *     PspEnumJobsAndProcessesInJobHierarchy @ 0x14068A3B8 (PspEnumJobsAndProcessesInJobHierarchy.c)
 */

__int64 __fastcall PspEnforceLimits(char a1)
{
  void *i; // rcx
  __int64 result; // rax
  void *v4; // rbx
  _DWORD Buffer[4]; // [rsp+40h] [rbp-68h] BYREF
  __int64 v6[8]; // [rsp+50h] [rbp-58h] BYREF

  memset(v6, 0, sizeof(v6));
  _InterlockedIncrement(&PspEnforcementSequenceNumber);
  if ( !a1 && PspNoWakeChargeReferencedProcess )
  {
    Buffer[0] = 0;
    ZwUpdateWnfStateData(&WNF_PS_WAKE_CHARGE_RESOURCE_POLICY, Buffer, 4u, 0LL, 0LL, 0, 0);
    ObfDereferenceObjectWithTag(PspNoWakeChargeReferencedProcess, 0x624A7350u);
    PspNoWakeChargeReferencedProcess = 0LL;
  }
  for ( i = 0LL; ; i = v4 )
  {
    result = PspGetNextJob(i);
    v4 = (void *)result;
    if ( !result )
      break;
    if ( !*(_QWORD *)(result + 1072) && (!a1 || (*(_DWORD *)(result + 1320) & 0x100000) != 0) )
    {
      _InterlockedAnd((volatile signed __int32 *)(result + 1320), 0xFFEFFFFF);
      memset(v6, 0, sizeof(v6));
      PspEnumJobsAndProcessesInJobHierarchy(v4, (__int64)v6, 6);
    }
  }
  return result;
}
