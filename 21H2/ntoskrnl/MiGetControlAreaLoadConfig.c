/*
 * XREFs of MiGetControlAreaLoadConfig @ 0x1402A4208
 * Callers:
 *     MiAllowImageMap @ 0x140687660 (MiAllowImageMap.c)
 *     MmGetSectionInformation @ 0x14068ABA0 (MmGetSectionInformation.c)
 *     MiMarkPrivateImageCfgBits @ 0x1406C23F4 (MiMarkPrivateImageCfgBits.c)
 *     MiRelocateImageAgain @ 0x1406C290C (MiRelocateImageAgain.c)
 *     MiMarkSharedImageCfgBits @ 0x1407009E4 (MiMarkSharedImageCfgBits.c)
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
