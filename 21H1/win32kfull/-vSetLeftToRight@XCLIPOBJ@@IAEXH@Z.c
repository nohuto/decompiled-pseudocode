/*
 * XREFs of ?vSetLeftToRight@XCLIPOBJ@@IAEXH@Z @ 0x23842A
 * Callers:
 *     ?bSetup@XCLIPOBJ@@IAEHXZ @ 0x23808A (-bSetup@XCLIPOBJ@@IAEHXZ.c)
 * Callees:
 *     <none>
 */

void __thiscall XCLIPOBJ::vSetLeftToRight(XCLIPOBJ *this, int a2)
{
  int v2; // edx
  int v3; // eax
  int v4; // esi
  unsigned int v5; // eax

  v2 = *((_DWORD *)this + 30);
  v3 = *(_DWORD *)(v2 + 16);
  if ( a2 )
  {
    v4 = 1;
    v5 = v3 | 0x400000;
  }
  else
  {
    v4 = -1;
    v5 = v3 & 0xFFBFFFFF;
  }
  *(_DWORD *)(v2 + 16) = v5;
  *((_DWORD *)this + 21) = v4;
}
