/*
 * XREFs of ComputeFileviewCheckSum @ 0x1C00F5CDC
 * Callers:
 *     EngCloseFNTCache @ 0x1C0022BA0 (EngCloseFNTCache.c)
 *     ??0PFFMEMOBJ@@QEAA@IPEBGKKPEAUtagDESIGNVECTOR@@K_KPEAUHDEV__@@PEAUDHPDEV__@@PEAVPFT@@KKPEAU_FNTCHECKSUM@@PEAPEAU_FONTFILEVIEW@@PEAU_UNIVERSAL_FONT_ID@@H@Z @ 0x1C0072D20 (--0PFFMEMOBJ@@QEAA@IPEBGKKPEAUtagDESIGNVECTOR@@K_KPEAUHDEV__@@PEAUDHPDEV__@@PEAVPFT@@KKPEAU_FNTC.c)
 *     InitFNTCache @ 0x1C00F58F0 (InitFNTCache.c)
 *     GreGetUFI @ 0x1C0144D40 (GreGetUFI.c)
 *     ?ComputeFileviewCheckSumInFontDriverAddressSpace@@YAKPEAPEAU_FONTFILEVIEW@@I@Z @ 0x1C02B9CF8 (-ComputeFileviewCheckSumInFontDriverAddressSpace@@YAKPEAPEAU_FONTFILEVIEW@@I@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ComputeFileviewCheckSum(_DWORD *a1, unsigned int a2)
{
  unsigned int v2; // r8d
  _DWORD *v3; // rdx

  v2 = 0;
  v3 = &a1[(unsigned __int64)a2 >> 2];
  while ( a1 < v3 )
    v2 = *a1++ + 257 * v2;
  if ( v2 < 2 )
    return 2;
  return v2;
}
