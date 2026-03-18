/*
 * XREFs of _ComputeFileviewCheckSum@8 @ 0xDFA40
 * Callers:
 *     _EngCloseFNTCache@0 @ 0xD742A (_EngCloseFNTCache@0.c)
 *     ??0PFFMEMOBJ@@QAE@IPBGKKPAUtagDESIGNVECTOR@@KKPAUHDEV__@@PAUDHPDEV__@@PAVPFT@@KKPAU_FNTCHECKSUM@@PAPAU_FONTFILEVIEW@@PAU_UNIVERSAL_FONT_ID@@H@Z @ 0xDEC04 (--0PFFMEMOBJ@@QAE@IPBGKKPAUtagDESIGNVECTOR@@KKPAUHDEV__@@PAUDHPDEV__@@PAVPFT@@KKPAU_FNTCHECKSUM@.c)
 *     _InitFNTCache@0 @ 0xDF48C (_InitFNTCache@0.c)
 *     ?ComputeFileviewCheckSumInFontDriverAddressSpace@@YGKPAPAU_FONTFILEVIEW@@I@Z @ 0xECF16 (-ComputeFileviewCheckSumInFontDriverAddressSpace@@YGKPAPAU_FONTFILEVIEW@@I@Z.c)
 *     _GreGetUFI@28 @ 0x1D8D94 (_GreGetUFI@28.c)
 * Callees:
 *     <none>
 */

unsigned int __fastcall ComputeFileviewCheckSum(_DWORD *a1, unsigned int a2)
{
  unsigned int result; // eax
  _DWORD *v3; // edx

  result = 0;
  v3 = &a1[a2 >> 2];
  while ( a1 < v3 )
    result = *a1++ + 257 * result;
  if ( result < 2 )
    return 2;
  return result;
}
