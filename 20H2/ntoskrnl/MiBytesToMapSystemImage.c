/*
 * XREFs of MiBytesToMapSystemImage @ 0x1406CC058
 * Callers:
 *     MiSessionInsertImage @ 0x1403A20B4 (MiSessionInsertImage.c)
 *     MiSelectImageBase @ 0x14062B97C (MiSelectImageBase.c)
 *     MiUnloadSystemImage @ 0x1406CB9B0 (MiUnloadSystemImage.c)
 *     MiMapSystemImage @ 0x140756210 (MiMapSystemImage.c)
 *     MiGetSystemAddressForImage @ 0x140757814 (MiGetSystemAddressForImage.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiBytesToMapSystemImage(unsigned __int64 a1)
{
  unsigned __int64 v1; // rax
  unsigned __int64 v2; // rax
  unsigned __int64 result; // rax

  v1 = (a1 + 4095) & 0xFFFFFFFFFFFFF000uLL;
  if ( v1 < a1 )
    return 0LL;
  v2 = (((unsigned int)dword_140C4CB30 + 3LL) & 0xFFFFFFFFFFFFFFFCuLL) + v1;
  if ( v2 < a1 )
    return 0LL;
  result = (unsigned int)(dword_140C4CACC << 12) + v2;
  if ( result < a1 )
    return 0LL;
  return result;
}
