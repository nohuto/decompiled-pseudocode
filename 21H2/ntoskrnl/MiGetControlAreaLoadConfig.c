/*
 * XREFs of MiGetControlAreaLoadConfig @ 0x140281A3C
 * Callers:
 *     MmGetSectionInformation @ 0x14066C980 (MmGetSectionInformation.c)
 *     MiMarkPrivateImageCfgBits @ 0x1406CF50C (MiMarkPrivateImageCfgBits.c)
 *     MiMarkSharedImageCfgBits @ 0x1406F77DC (MiMarkSharedImageCfgBits.c)
 *     MiAllowImageMap @ 0x1406F884C (MiAllowImageMap.c)
 *     MiRelocateImageAgain @ 0x1406FF49C (MiRelocateImageAgain.c)
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
