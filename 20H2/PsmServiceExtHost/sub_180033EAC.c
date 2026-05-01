/*
 * XREFs of sub_180033EAC @ 0x180033EAC
 * Callers:
 *     sub_180033D90 @ 0x180033D90 (sub_180033D90.c)
 *     sub_1800737F0 @ 0x1800737F0 (sub_1800737F0.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall sub_180033EAC(void *a1)
{
  __int64 ProcessInformation; // [rsp+48h] [rbp+10h] BYREF

  NtQueryInformationProcess(a1, ProcessDebugPort, &ProcessInformation, 8u, 0LL);
  return ProcessInformation != 0;
}
