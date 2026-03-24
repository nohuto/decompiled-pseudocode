/*
 * XREFs of KeAndGroupAffinityEx @ 0x1403746A0
 * Callers:
 *     HalpInterruptSendIpi @ 0x140220210 (HalpInterruptSendIpi.c)
 *     HalRequestSoftwareInterrupt @ 0x140293E90 (HalRequestSoftwareInterrupt.c)
 *     KeQueryLogicalProcessorRelationship @ 0x1402AFA30 (KeQueryLogicalProcessorRelationship.c)
 *     PnpSetDeviceAffinityThread @ 0x140361E70 (PnpSetDeviceAffinityThread.c)
 *     PpmEventDomainPerfStateChange @ 0x14039A608 (PpmEventDomainPerfStateChange.c)
 *     HalSendNMI @ 0x1404BDD70 (HalSendNMI.c)
 *     PpmEventTraceProcessorPerformanceDomainRundown @ 0x1408F3B68 (PpmEventTraceProcessorPerformanceDomainRundown.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
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
