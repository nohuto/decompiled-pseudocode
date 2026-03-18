/*
 * XREFs of _ResetEdgyDataOwnershipForCurrentThread@0 @ 0xF3622
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __stdcall ResetEdgyDataOwnershipForCurrentThread()
{
  int result; // eax
  int v1; // edx

  result = _grpdeskRitInput;
  if ( _grpdeskRitInput )
  {
    v1 = *(_DWORD *)(_grpdeskRitInput + 140);
    if ( v1 )
    {
      result = _gptiCurrent;
      if ( *(_DWORD *)(v1 + 248) == _gptiCurrent )
      {
        *(_DWORD *)(v1 + 248) = 0;
        result = *(_DWORD *)(_grpdeskRitInput + 140);
        *(_DWORD *)(result + 12) = 0;
      }
    }
  }
  return result;
}
