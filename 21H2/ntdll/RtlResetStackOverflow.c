/*
 * XREFs of RtlResetStackOverflow @ 0x1800DE804
 * Callers:
 *     RtlQueryWnfStateData @ 0x180044F30 (RtlQueryWnfStateData.c)
 *     TppWorkerThread @ 0x18004D110 (TppWorkerThread.c)
 *     EtwpWriteToPrivateBuffers @ 0x18005064C (EtwpWriteToPrivateBuffers.c)
 *     RtlQueryWnfStateDataWithExplicitScope @ 0x1800840F0 (RtlQueryWnfStateDataWithExplicitScope.c)
 *     EtwpCheckForEnoughStackSpace @ 0x180110DD4 (EtwpCheckForEnoughStackSpace.c)
 * Callees:
 *     __security_check_cookie @ 0x18008C940 (__security_check_cookie.c)
 *     ZwAllocateVirtualMemory @ 0x18009D940 (ZwAllocateVirtualMemory.c)
 *     ZwQueryVirtualMemory @ 0x18009DAA0 (ZwQueryVirtualMemory.c)
 *     NtQuerySystemInformation @ 0x18009DD00 (NtQuerySystemInformation.c)
 *     ZwProtectVirtualMemory @ 0x18009E040 (ZwProtectVirtualMemory.c)
 */

char *RtlResetStackOverflow()
{
  char *result; // rax
  unsigned __int64 v1; // r8
  unsigned __int64 v2; // rdx
  unsigned __int64 v3; // rcx
  char v4; // [rsp+48h] [rbp-31h] BYREF
  __int64 v5; // [rsp+50h] [rbp-29h]
  _BYTE SystemInformation[8]; // [rsp+80h] [rbp+7h] BYREF
  unsigned int v7; // [rsp+88h] [rbp+Fh]

  result = (char *)ZwQueryVirtualMemory();
  if ( (int)result >= 0 )
  {
    NtQuerySystemInformation(SystemBasicInformation, SystemInformation, 0x40u, 0LL);
    v1 = ~(unsigned __int64)(v7 - 1);
    v2 = v1 & (NtCurrentTeb()->GuaranteedStackBytes + v7 - 1LL);
    if ( v2 )
      v2 += v7;
    v3 = 3 * v7;
    if ( v2 < v3 )
      v2 = (unsigned int)v3;
    result = &v4;
    if ( ((unsigned __int64)&v4 & v1) - v2 >= v5 + (unsigned __int64)(17 * v7) )
    {
      result = (char *)ZwAllocateVirtualMemory();
      if ( (int)result >= 0 )
        return (char *)ZwProtectVirtualMemory();
    }
  }
  return result;
}
