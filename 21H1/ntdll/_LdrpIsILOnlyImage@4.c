/*
 * XREFs of _LdrpIsILOnlyImage@4 @ 0x4B331085
 * Callers:
 *     _LdrpRelocateImage@16 @ 0x4B2ED3BF (_LdrpRelocateImage@16.c)
 * Callees:
 *     _RtlImageDirectoryEntryToData@16 @ 0x4B2BDDE0 (_RtlImageDirectoryEntryToData@16.c)
 */

bool __fastcall LdrpIsILOnlyImage(void *a1)
{
  _BYTE *v1; // eax
  unsigned int v3; // [esp+0h] [ebp-4h] BYREF

  v3 = (unsigned int)a1;
  v1 = RtlImageDirectoryEntryToData(a1, (int)a1, 1, 14, (int)&v3);
  return v1 && v3 >= 0x48 && (v1[16] & 1) != 0;
}
