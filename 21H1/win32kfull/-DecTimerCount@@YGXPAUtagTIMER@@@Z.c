/*
 * XREFs of ?DecTimerCount@@YGXPAUtagTIMER@@@Z @ 0x92FF2
 * Callers:
 *     _InternalSetTimer@24 @ 0x2CB62 (_InternalSetTimer@24.c)
 *     _FreeTimer@4 @ 0x92F66 (_FreeTimer@4.c)
 * Callees:
 *     <none>
 */

void __thiscall DecTimerCount(_DWORD *this)
{
  int v1; // edx
  _DWORD *v2; // ecx
  int v3; // esi
  _DWORD *v4; // eax

  v1 = this[3];
  v2 = this + 9;
  v3 = *v2;
  if ( *(_DWORD **)(*v2 + 4) != v2 || (v4 = (_DWORD *)v2[1], (_DWORD *)*v4 != v2) )
    __fastfail(3u);
  *v4 = v3;
  *(_DWORD *)(v3 + 4) = v4;
  if ( (*(_DWORD *)(v1 + 324))-- == 1 )
    *(_WORD *)(*(_DWORD *)(v1 + 244) + 6) &= ~0x10u;
}
