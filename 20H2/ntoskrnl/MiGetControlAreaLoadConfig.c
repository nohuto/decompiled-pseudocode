/*
 * XREFs of MiGetControlAreaLoadConfig @ 0x140236A20
 * Callers:
 *     MiAllowImageMap @ 0x140627820 (MiAllowImageMap.c)
 *     MiMarkSharedImageCfgBits @ 0x14062A758 (MiMarkSharedImageCfgBits.c)
 *     MiRelocateImageAgain @ 0x14062B714 (MiRelocateImageAgain.c)
 *     MmGetSectionInformation @ 0x140636810 (MmGetSectionInformation.c)
 *     MiMarkPrivateImageCfgBits @ 0x1406D3888 (MiMarkPrivateImageCfgBits.c)
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
