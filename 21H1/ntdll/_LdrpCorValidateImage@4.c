/*
 * XREFs of _LdrpCorValidateImage@4 @ 0x4B2A6D90
 * Callers:
 *     _LdrpCompleteMapModule@12 @ 0x4B2D14E4 (_LdrpCompleteMapModule@12.c)
 *     _LdrpInitializeProcess@8 @ 0x4B32A2D0 (_LdrpInitializeProcess@8.c)
 * Callees:
 *     _RtlImageDirectoryEntryToData@16 @ 0x4B2BDDE0 (_RtlImageDirectoryEntryToData@16.c)
 */

unsigned int __thiscall LdrpCorValidateImage(PVOID BaseOfImage)
{
  ULONG Size; // [esp+0h] [ebp-4h] BYREF

  Size = (ULONG)BaseOfImage;
  return RtlImageDirectoryEntryToData(BaseOfImage, 1u, 9u, &Size) != 0 ? 0xC000007B : 0;
}
