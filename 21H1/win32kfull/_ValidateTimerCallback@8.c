/*
 * XREFs of _ValidateTimerCallback@8 @ 0x981D0
 * Callers:
 *     _xxxDispatchMessage@4 @ 0x45B62 (_xxxDispatchMessage@4.c)
 *     _NtUserValidateTimerCallback@4 @ 0x9819A (_NtUserValidateTimerCallback@4.c)
 * Callees:
 *     <none>
 */

BOOL __thiscall ValidateTimerCallback(int this)
{
  int v1; // eax

  if ( *(_DWORD *)(this + 340) <= 0x501u )
    v1 = *(_DWORD *)(this + 352);
  else
    v1 = 0;
  return (v1 & 0x1000000) != 0
      && (*(_BYTE *)(this + 264) & 0xC) == 0
      && PsGetProcessId(**(PEPROCESS **)(this + 232)) != (HANDLE)_gpidLogon;
}
