/*
 * XREFs of _LdrpCorValidateImage@4 @ 0x4B2A6D90
 * Callers:
 *     _LdrpCompleteMapModule@12 @ 0x4B2D14E4 (_LdrpCompleteMapModule@12.c)
 *     _LdrpInitializeProcess@8 @ 0x4B32A2D0 (_LdrpInitializeProcess@8.c)
 * Callees:
 *     _RtlImageDirectoryEntryToData@16 @ 0x4B2BDDE0 (_RtlImageDirectoryEntryToData@16.c)
 */

unsigned int __thiscall LdrpCorValidateImage(void *this)
{
  void *v2; // [esp+0h] [ebp-4h] BYREF

  v2 = this;
  return RtlImageDirectoryEntryToData(this, 1, 9, &v2) != 0 ? 0xC000007B : 0;
}
