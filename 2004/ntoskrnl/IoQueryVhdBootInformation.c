/*
 * XREFs of IoQueryVhdBootInformation @ 0x1407C0844
 * Callers:
 *     ExpQuerySystemInformation @ 0x14068F290 (ExpQuerySystemInformation.c)
 * Callees:
 *     memmove @ 0x140409FC0 (memmove.c)
 */

__int64 __fastcall IoQueryVhdBootInformation(__int64 a1, void *a2, unsigned int a3, _DWORD *a4)
{
  unsigned int v5; // ebx
  int v6; // edi

  v5 = 0;
  *a4 = 0;
  v6 = dword_140C122C0;
  if ( a3 < (unsigned int)dword_140C122C0 )
    v5 = -1073741789;
  else
    memmove(a2, off_140C050D0, (unsigned int)dword_140C122C0);
  *a4 = v6;
  return v5;
}
