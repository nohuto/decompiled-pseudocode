/*
 * XREFs of IoQueryVhdBootInformation @ 0x140863390
 * Callers:
 *     ExpQuerySystemInformation @ 0x14073B5A0 (ExpQuerySystemInformation.c)
 * Callees:
 *     memmove @ 0x140435B40 (memmove.c)
 */

__int64 __fastcall IoQueryVhdBootInformation(__int64 a1, void *a2, unsigned int a3, _DWORD *a4)
{
  unsigned int v5; // ebx
  int v6; // edi

  v5 = 0;
  *a4 = 0;
  v6 = dword_140C0CA00;
  if ( a3 < (unsigned int)dword_140C0CA00 )
    v5 = -1073741789;
  else
    memmove(a2, off_140C07278, (unsigned int)dword_140C0CA00);
  *a4 = v6;
  return v5;
}
