/*
 * XREFs of ?PopFirstPendingDelegateCapture@@YGKPAUtagTHREADINPUTPOINTERLIST@@@Z @ 0x15B20E
 * Callers:
 *     _xxxProcessDelegateCapturedPointers@4 @ 0xF1CCE (_xxxProcessDelegateCapturedPointers@4.c)
 * Callees:
 *     <none>
 */

unsigned int __thiscall PopFirstPendingDelegateCapture(_DWORD *this)
{
  _DWORD *v1; // edx
  int v2; // eax
  _DWORD *v3; // esi

  if ( (_DWORD *)*this == this )
    return 0;
  v1 = (_DWORD *)this[1];
  if ( v1 == this )
    return 0;
  do
  {
    v2 = v1[7];
    v3 = v1;
    if ( (v2 & 4) != 0 )
      break;
    v1 = (_DWORD *)v1[1];
  }
  while ( v1 != this );
  if ( v1 == this )
    return 0;
  v3[7] = v2 & 0xFFFFFFFB;
  return v3[4];
}
