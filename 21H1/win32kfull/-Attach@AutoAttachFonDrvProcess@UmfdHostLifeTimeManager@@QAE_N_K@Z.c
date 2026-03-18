/*
 * XREFs of ?Attach@AutoAttachFonDrvProcess@UmfdHostLifeTimeManager@@QAE_N_K@Z @ 0xECFE0
 * Callers:
 *     ?ComputeFileviewCheckSumInFontDriverAddressSpace@@YGKPAPAU_FONTFILEVIEW@@I@Z @ 0xECF16 (-ComputeFileviewCheckSumInFontDriverAddressSpace@@YGKPAPAU_FONTFILEVIEW@@I@Z.c)
 *     ?bCreateFontFileView@@YGHPBU_FONTFILEVIEW@@PBUtagDOWNLOADFONTHEADER@@KPAPAPAU1@K@Z @ 0x1E8DAB (-bCreateFontFileView@@YGHPBU_FONTFILEVIEW@@PBUtagDOWNLOADFONTHEADER@@KPAPAPAU1@K@Z.c)
 * Callees:
 *     <none>
 */

bool __thiscall UmfdHostLifeTimeManager::AutoAttachFonDrvProcess::Attach(
        UmfdHostLifeTimeManager::AutoAttachFonDrvProcess *this,
        unsigned __int64 a2)
{
  if ( UmfdHostLifeTimeManager::s_Ready && a2 == UmfdHostLifeTimeManager::s_UmfdHostGenerationId )
  {
    KeStackAttachProcess((PRKPROCESS)UmfdHostLifeTimeManager::s_UmfdHostProcess, (PRKAPC_STATE)((char *)this + 4));
    *((_BYTE *)this + 28) = 1;
  }
  return *((_BYTE *)this + 28);
}
