/*
 * XREFs of _FCallerOk@4 @ 0x1A5FD7
 * Callers:
 *     ?xxxSetWindowWord@@YGGPAUtagWND@@HG@Z @ 0x1A5BF6 (-xxxSetWindowWord@@YGGPAUtagWND@@HG@Z.c)
 * Callees:
 *     <none>
 */

BOOL __thiscall FCallerOk(_DWORD *this)
{
  int v2; // eax
  BOOL result; // eax
  int CurrentProcess; // eax
  int v5; // edx
  int v6; // ecx

  v2 = this[2];
  result = 0;
  if ( ((*(_BYTE *)(v2 + 264) & 0xC) == 0 || (*(_BYTE *)(_gptiCurrent + 264) & 0xC) != 0)
    && (PsGetThreadProcessId(*(PETHREAD *)v2) != (HANDLE)_gpidLogon
     || PsGetThreadProcessId((PETHREAD)*_gptiCurrent) == (HANDLE)_gpidLogon) )
  {
    if ( (unsigned __int8)Enforced() )
      return 1;
    CurrentProcess = PsGetCurrentProcess();
    if ( IsProcessDwm(CurrentProcess) )
      return 1;
    v5 = *(_DWORD *)(_gptiCurrent + 232);
    v6 = *(_DWORD *)(this[2] + 232);
    if ( *(_DWORD *)(v5 + 424) == *(_DWORD *)(v6 + 424) && *(_DWORD *)(v5 + 428) == *(_DWORD *)(v6 + 428) )
      return 1;
  }
  return result;
}
