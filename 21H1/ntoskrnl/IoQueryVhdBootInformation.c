/*
 * XREFs of IoQueryVhdBootInformation @ 0x1407BD6D4
 * Callers:
 *     ExpQuerySystemInformation @ 0x1405E5DF0 (ExpQuerySystemInformation.c)
 * Callees:
 *     memmove @ 0x140408CC0 (memmove.c)
 */

__int64 __fastcall IoQueryVhdBootInformation(__int64 a1, void *a2, unsigned int a3, _DWORD *a4)
{
  unsigned int v5; // ebx
  int v6; // edi

  v5 = 0;
  *a4 = 0;
  v6 = dword_140C122B0;
  if ( a3 < (unsigned int)dword_140C122B0 )
    v5 = -1073741789;
  else
    memmove(a2, off_140C050D8, (unsigned int)dword_140C122B0);
  *a4 = v6;
  return v5;
}
