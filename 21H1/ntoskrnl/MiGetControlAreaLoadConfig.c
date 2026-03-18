/*
 * XREFs of MiGetControlAreaLoadConfig @ 0x1402ACB84
 * Callers:
 *     MmGetSectionInformation @ 0x1405DB7B0 (MmGetSectionInformation.c)
 *     MiAllowImageMap @ 0x140636DF0 (MiAllowImageMap.c)
 *     MiRelocateImageAgain @ 0x14063B7B0 (MiRelocateImageAgain.c)
 *     MiMarkSharedImageCfgBits @ 0x14063D3A8 (MiMarkSharedImageCfgBits.c)
 *     MiMarkPrivateImageCfgBits @ 0x1406DD8D4 (MiMarkPrivateImageCfgBits.c)
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
