/*
 * XREFs of ?Attach@AutoAttachFonDrvProcess@UmfdHostLifeTimeManager@@QEAA_N_K@Z @ 0x1C02886E8
 * Callers:
 *     ?bCreateFontFileView@@YAHPEBU_FONTFILEVIEW@@PEBUtagDOWNLOADFONTHEADER@@KPEAPEAPEAU1@K@Z @ 0x1C02891FC (-bCreateFontFileView@@YAHPEBU_FONTFILEVIEW@@PEBUtagDOWNLOADFONTHEADER@@KPEAPEAPEAU1@K@Z.c)
 *     ?ComputeFileviewCheckSumInFontDriverAddressSpace@@YAKPEAPEAU_FONTFILEVIEW@@I@Z @ 0x1C02B9CF8 (-ComputeFileviewCheckSumInFontDriverAddressSpace@@YAKPEAPEAU_FONTFILEVIEW@@I@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall UmfdHostLifeTimeManager::AutoAttachFonDrvProcess::Attach(
        UmfdHostLifeTimeManager::AutoAttachFonDrvProcess *this,
        __int64 a2)
{
  if ( UmfdHostLifeTimeManager::s_Ready && a2 == UmfdHostLifeTimeManager::s_UmfdHostGenerationId )
  {
    KeStackAttachProcess((PRKPROCESS)UmfdHostLifeTimeManager::s_UmfdHostProcess, (PRKAPC_STATE)((char *)this + 8));
    *((_BYTE *)this + 56) = 1;
  }
  return *((_BYTE *)this + 56);
}
