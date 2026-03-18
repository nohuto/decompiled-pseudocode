/*
 * XREFs of MiGetControlAreaLoadConfig @ 0x140253B54
 * Callers:
 *     MiAllowImageMap @ 0x140601DB0 (MiAllowImageMap.c)
 *     MiRelocateImageAgain @ 0x14060666C (MiRelocateImageAgain.c)
 *     MiMarkSharedImageCfgBits @ 0x140608258 (MiMarkSharedImageCfgBits.c)
 *     MmGetSectionInformation @ 0x140661AB0 (MmGetSectionInformation.c)
 *     MiMarkPrivateImageCfgBits @ 0x1407005F4 (MiMarkPrivateImageCfgBits.c)
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
