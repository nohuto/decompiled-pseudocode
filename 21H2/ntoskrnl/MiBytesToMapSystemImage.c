/*
 * XREFs of MiBytesToMapSystemImage @ 0x1406F57B8
 * Callers:
 *     MiSessionInsertImage @ 0x1402D9A54 (MiSessionInsertImage.c)
 *     MiUnloadSystemImage @ 0x1406F4FB8 (MiUnloadSystemImage.c)
 *     MiSelectImageBase @ 0x1407092C0 (MiSelectImageBase.c)
 *     MiMapSystemImage @ 0x140761714 (MiMapSystemImage.c)
 *     MiGetSystemAddressForImage @ 0x140761A2C (MiGetSystemAddressForImage.c)
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
  v2 = (((unsigned int)dword_140C4F478 + 3LL) & 0xFFFFFFFFFFFFFFFCuLL) + v1;
  if ( v2 < a1 )
    return 0LL;
  result = (unsigned int)(dword_140C4F404 << 12) + v2;
  if ( result < a1 )
    return 0LL;
  return result;
}
