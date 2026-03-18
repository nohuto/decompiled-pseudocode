/*
 * XREFs of _anonymous_namespace_::UpdateKeyStateFlag @ 0x9DE02
 * Callers:
 *     ?xxxSetForegroundWindow2@@YGHPAUtagWND@@PAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x17936 (-xxxSetForegroundWindow2@@YGHPAUtagWND@@PAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 * Callees:
 *     <none>
 */

int anonymous_namespace_::UpdateKeyStateFlag()
{
  int result; // eax
  _DWORD *v1; // ebx
  _DWORD *v2; // edx
  int v3; // edi
  int v4; // esi
  int i; // ecx

  result = _gptiCurrent;
  if ( *(_DWORD *)(_gptiCurrent + 248) == _grpdeskRitInput )
  {
    v1 = (_DWORD *)(_grpdeskRitInput + 92);
    v2 = *(_DWORD **)(_grpdeskRitInput + 92);
    if ( (_DWORD *)*v1 != v1 )
    {
      do
      {
        v3 = *(v2 - 42);
        v4 = v3;
        for ( i = 3; i; --i )
          v4 += 4;
        *(_DWORD *)(v3 + 284) |= 1u;
        result = -1;
        memset((void *)(v3 + 120), 0xFFu, 0x20u);
        v2 = (_DWORD *)*v2;
      }
      while ( v2 != v1 );
    }
  }
  return result;
}
