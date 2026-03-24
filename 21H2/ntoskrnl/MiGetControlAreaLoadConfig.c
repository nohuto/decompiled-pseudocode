/*
 * XREFs of MiGetControlAreaLoadConfig @ 0x14035F2D8
 * Callers:
 *     MiAllowImageMap @ 0x14061D9F0 (MiAllowImageMap.c)
 *     MmGetSectionInformation @ 0x140620F30 (MmGetSectionInformation.c)
 *     MiMarkSharedImageCfgBits @ 0x1406E9604 (MiMarkSharedImageCfgBits.c)
 *     MiMarkPrivateImageCfgBits @ 0x140713DA4 (MiMarkPrivateImageCfgBits.c)
 *     MiRelocateImageAgain @ 0x1407142BC (MiRelocateImageAgain.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetControlAreaLoadConfig(__int64 a1)
{
  __int64 result; // rax

  result = *(_QWORD *)(*(_QWORD *)(a1 + 96) + 32LL);
  if ( result )
    result += 72LL;
  return result;
}
