/*
 * XREFs of _ui64toa_s @ 0x1403D6070
 * Callers:
 *     <none>
 * Callees:
 *     x64toa_s @ 0x1403D60AC (x64toa_s.c)
 */

errno_t __cdecl ui64toa_s(unsigned __int64 Val, char *DstBuf, size_t Size, int Radix)
{
  return x64toa_s(Val, (_DWORD)DstBuf, Size, Radix, 0);
}
