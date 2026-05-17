/*
 * XREFs of RtlResetStackOverflow @ 0x1800DE6B4
 * Callers:
 *     RtlQueryWnfStateData @ 0x180044F20 (RtlQueryWnfStateData.c)
 *     EtwpWriteToPrivateBuffers @ 0x18004F4EC (EtwpWriteToPrivateBuffers.c)
 *     TppWorkerThread @ 0x180052AD0 (TppWorkerThread.c)
 *     RtlQueryWnfStateDataWithExplicitScope @ 0x180083BF0 (RtlQueryWnfStateDataWithExplicitScope.c)
 *     EtwpCheckForEnoughStackSpace @ 0x180110A24 (EtwpCheckForEnoughStackSpace.c)
 * Callees:
 *     __security_check_cookie @ 0x18008C240 (__security_check_cookie.c)
 *     ZwAllocateVirtualMemory @ 0x18009D110 (ZwAllocateVirtualMemory.c)
 *     ZwQueryVirtualMemory @ 0x18009D270 (ZwQueryVirtualMemory.c)
 *     NtQuerySystemInformation @ 0x18009D4D0 (NtQuerySystemInformation.c)
 *     ZwProtectVirtualMemory @ 0x18009D810 (ZwProtectVirtualMemory.c)
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
