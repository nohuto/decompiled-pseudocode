/*
 * XREFs of InitMonitorMWaitSupport @ 0x1C00219A0
 * Callers:
 *     InitAcpiIdleStateSupport @ 0x1C0021960 (InitAcpiIdleStateSupport.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00044F0 (__security_check_cookie.c)
 *     GetCpuIdInfo @ 0x1C00047C0 (GetCpuIdInfo.c)
 *     IsMonitorMWaitSupported @ 0x1C0021A5C (IsMonitorMWaitSupported.c)
 */

__int64 __fastcall InitMonitorMWaitSupport(__int64 a1)
{
  unsigned int v2; // ebx
  __int64 ContiguousNodeMemory; // rax
  __int128 v5; // [rsp+30h] [rbp-28h] BYREF

  v5 = 0LL;
  v2 = 0;
  if ( !(unsigned __int8)IsMonitorMWaitSupported() )
    return (unsigned int)-1073741823;
  GetCpuIdInfo(5u, &v5);
  if ( (_WORD)v5 )
  {
    ContiguousNodeMemory = MmAllocateContiguousNodeMemory((unsigned __int16)v5, 0LL, -1LL, 0LL, 4, 0x80000000);
    if ( !ContiguousNodeMemory )
      return (unsigned int)-1073741670;
    *(_QWORD *)(a1 + 200) = ContiguousNodeMemory;
  }
  if ( (BYTE8(v5) & 1) != 0 && (BYTE8(v5) & 2) != 0 )
    *(_DWORD *)(a1 + 280) |= 0x80000u;
  return v2;
}
