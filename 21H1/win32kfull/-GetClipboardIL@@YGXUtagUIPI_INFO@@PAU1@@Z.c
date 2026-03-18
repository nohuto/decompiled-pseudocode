/*
 * XREFs of ?GetClipboardIL@@YGXUtagUIPI_INFO@@PAU1@@Z @ 0x181B16
 * Callers:
 *     ?CheckClipboardAccessForIntegrityLevel@@YGHUtagUIPI_INFO@@0@Z @ 0x1818DE (-CheckClipboardAccessForIntegrityLevel@@YGHUtagUIPI_INFO@@0@Z.c)
 * Callees:
 *     <none>
 */

int __thiscall GetClipboardIL(_DWORD *this, unsigned int a2, int a3)
{
  unsigned int v4; // eax
  unsigned int i; // edx
  int *v6; // ecx
  int result; // eax

  v4 = 0;
  for ( i = 0; i < 25; i += 5 )
  {
    if ( a2 >= dword_266034[i] && a2 < dword_266048[i] )
      break;
    ++v4;
  }
  if ( v4 >= 5 )
  {
LABEL_9:
    *this = dword_266098;
    result = dword_26609C;
  }
  else
  {
    v6 = &dword_266054[5 * v4];
    while ( !*v6 )
    {
      ++v4;
      v6 += 5;
      if ( v4 >= 5 )
        goto LABEL_9;
    }
    *this = dword_266034[5 * v4];
    result = dword_266038[5 * v4];
  }
  this[1] = result;
  return result;
}
