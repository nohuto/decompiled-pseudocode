/*
 * XREFs of FCallerOk @ 0x1C00A47B8
 * Callers:
 *     xxxSetWindowLong @ 0x1C00A488C (xxxSetWindowLong.c)
 *     ?xxxSetWindowWord@@YAGPEAUtagWND@@HG@Z @ 0x1C014E27C (-xxxSetWindowWord@@YAGPEAUtagWND@@HG@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FCallerOk(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  unsigned int v6; // ebx
  __int64 CurrentProcess; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx

  v2 = *(_QWORD *)(a1 + 16);
  if ( (*(_DWORD *)(v2 + 480) & 0xC) != 0 && (*(_DWORD *)(gptiCurrent + 480LL) & 0xC) == 0
    || PsGetThreadProcessId(*(PETHREAD *)v2) == (HANDLE)gpidLogon
    && PsGetThreadProcessId((PETHREAD)*gptiCurrent) != (HANDLE)gpidLogon )
  {
    return 0LL;
  }
  v6 = 0;
  if ( (unsigned __int8)Enforced() )
    return 1LL;
  CurrentProcess = PsGetCurrentProcess(v4, v3, v5);
  if ( (unsigned int)IsProcessDwm(CurrentProcess) )
    return 1LL;
  v9 = *(_QWORD *)(gptiCurrent + 416LL);
  v10 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 416LL);
  if ( *(_DWORD *)(v9 + 780) == *(_DWORD *)(v10 + 780) )
    return *(_DWORD *)(v9 + 784) == *(_DWORD *)(v10 + 784);
  return v6;
}
