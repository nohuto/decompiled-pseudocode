/*
 * XREFs of FCallerOk @ 0x1C00F04EC
 * Callers:
 *     xxxSetWindowLong @ 0x1C00F0128 (xxxSetWindowLong.c)
 *     ?xxxSetWindowWord@@YAGPEAUtagWND@@HG@Z @ 0x1C0150A8C (-xxxSetWindowWord@@YAGPEAUtagWND@@HG@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FCallerOk(__int64 a1)
{
  __int64 v2; // rcx
  HANDLE ThreadProcessId; // rax
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  unsigned int v8; // ebx
  __int64 CurrentProcess; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  HANDLE v13; // rax

  v2 = *(_QWORD *)(a1 + 16);
  if ( (*(_DWORD *)(v2 + 488) & 0xC) != 0 && (*(_DWORD *)(gptiCurrent + 488LL) & 0xC) == 0 )
    return 0LL;
  ThreadProcessId = PsGetThreadProcessId(*(PETHREAD *)v2);
  v4 = gpidLogon;
  if ( ThreadProcessId == (HANDLE)gpidLogon )
  {
    v13 = PsGetThreadProcessId((PETHREAD)*gptiCurrent);
    v4 = gpidLogon;
    if ( v13 != (HANDLE)gpidLogon )
      return 0LL;
  }
  v8 = 0;
  if ( (unsigned __int8)Enforced(v4) )
    return 1LL;
  CurrentProcess = PsGetCurrentProcess(v6, v5, v7);
  if ( (unsigned int)IsProcessDwm(CurrentProcess) )
    return 1LL;
  v11 = *(_QWORD *)(gptiCurrent + 424LL);
  v12 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 424LL);
  if ( *(_DWORD *)(v11 + 780) == *(_DWORD *)(v12 + 780) )
    return *(_DWORD *)(v11 + 784) == *(_DWORD *)(v12 + 784);
  return v8;
}
