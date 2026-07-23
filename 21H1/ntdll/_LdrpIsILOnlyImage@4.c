/*
 * XREFs of _LdrpIsILOnlyImage@4 @ 0x4B331085
 * Callers:
 *     _LdrpRelocateImage@16 @ 0x4B2ED3BF (_LdrpRelocateImage@16.c)
 * Callees:
 *     _RtlImageDirectoryEntryToData@16 @ 0x4B2BDDE0 (_RtlImageDirectoryEntryToData@16.c)
 */

bool __thiscall LdrpIsILOnlyImage(PVOID BaseOfImage)
{
  _BYTE *v1; // eax
  ULONG Size; // [esp+0h] [ebp-4h] BYREF

  Size = (ULONG)BaseOfImage;
  v1 = RtlImageDirectoryEntryToData(BaseOfImage, 1u, 0xEu, &Size);
  return v1 && Size >= 0x48 && (v1[16] & 1) != 0;
}
