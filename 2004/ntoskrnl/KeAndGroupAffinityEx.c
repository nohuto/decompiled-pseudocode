/*
 * XREFs of KeAndGroupAffinityEx @ 0x1403725C0
 * Callers:
 *     HalpInterruptSendIpi @ 0x1402150D0 (HalpInterruptSendIpi.c)
 *     PnpSetDeviceAffinityThread @ 0x140271698 (PnpSetDeviceAffinityThread.c)
 *     HalRequestSoftwareInterrupt @ 0x140273DE0 (HalRequestSoftwareInterrupt.c)
 *     KeQueryLogicalProcessorRelationship @ 0x1402DD500 (KeQueryLogicalProcessorRelationship.c)
 *     PpmEventDomainPerfStateChange @ 0x140397D18 (PpmEventDomainPerfStateChange.c)
 *     HalSendNMI @ 0x1404B8E90 (HalSendNMI.c)
 *     PpmEventTraceProcessorPerformanceDomainRundown @ 0x1408F0778 (PpmEventTraceProcessorPerformanceDomainRundown.c)
 * Callees:
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 */

__int64 __fastcall KeAndGroupAffinityEx(_WORD *a1, __int64 a2, char *a3)
{
  unsigned int v3; // r9d
  __int64 v4; // rax
  __int64 v5; // rcx
  char v7; // [rsp+0h] [rbp-28h] BYREF

  v3 = 0;
  if ( a3 )
  {
    *(_DWORD *)(a3 + 10) = 0;
    *((_WORD *)a3 + 7) = 0;
    *((_WORD *)a3 + 4) = *(_WORD *)(a2 + 8);
  }
  else
  {
    a3 = &v7;
  }
  v4 = *(unsigned __int16 *)(a2 + 8);
  if ( *a1 <= (unsigned __int16)v4 )
    v5 = 0LL;
  else
    v5 = *(_QWORD *)a2 & *(_QWORD *)&a1[4 * v4 + 4];
  *(_QWORD *)a3 = v5;
  LOBYTE(v3) = v5 != 0;
  return v3;
}
