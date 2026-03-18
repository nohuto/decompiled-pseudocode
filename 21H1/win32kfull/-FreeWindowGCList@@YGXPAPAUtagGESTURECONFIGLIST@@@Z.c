/*
 * XREFs of ?FreeWindowGCList@@YGXPAPAUtagGESTURECONFIGLIST@@@Z @ 0xD2CFC
 * Callers:
 *     _FreeWindowGCData@4 @ 0x717D2 (_FreeWindowGCData@4.c)
 *     _SetGestureConfigSettings@20 @ 0xE3454 (_SetGestureConfigSettings@20.c)
 * Callees:
 *     <none>
 */

void __thiscall FreeWindowGCList(_DWORD *this)
{
  unsigned int i; // edi
  _DWORD *v3; // eax
  _DWORD *v4; // esi

  for ( i = 0; i < 8; ++i )
  {
    v3 = (_DWORD *)this[i];
    if ( v3 )
    {
      do
      {
        v4 = (_DWORD *)*v3;
        Win32FreePool(v3);
        v3 = v4;
      }
      while ( v4 );
    }
    this[i] = 0;
  }
}
