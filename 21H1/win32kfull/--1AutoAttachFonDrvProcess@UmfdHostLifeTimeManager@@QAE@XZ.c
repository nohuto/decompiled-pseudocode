/*
 * XREFs of ??1AutoAttachFonDrvProcess@UmfdHostLifeTimeManager@@QAE@XZ @ 0xECFA2
 * Callers:
 *     ?ComputeFileviewCheckSumInFontDriverAddressSpace@@YGKPAPAU_FONTFILEVIEW@@I@Z @ 0xECF16 (-ComputeFileviewCheckSumInFontDriverAddressSpace@@YGKPAPAU_FONTFILEVIEW@@I@Z.c)
 *     ?bCreateFontFileView@@YGHPBU_FONTFILEVIEW@@PBUtagDOWNLOADFONTHEADER@@KPAPAPAU1@K@Z @ 0x1E8DAB (-bCreateFontFileView@@YGHPBU_FONTFILEVIEW@@PBUtagDOWNLOADFONTHEADER@@KPAPAPAU1@K@Z.c)
 * Callees:
 *     <none>
 */

void __thiscall UmfdHostLifeTimeManager::AutoAttachFonDrvProcess::~AutoAttachFonDrvProcess(
        UmfdHostLifeTimeManager::AutoAttachFonDrvProcess *this)
{
  if ( *((_BYTE *)this + 28) )
  {
    KeUnstackDetachProcess((PRKAPC_STATE)((char *)this + 4));
    if ( *((_DWORD *)this + 8) )
      EngSetLastError(*((_DWORD *)this + 8));
  }
  if ( *(_DWORD *)this )
  {
    GreReleasePushLockShared(*(_DWORD *)this);
    KeLeaveCriticalRegion();
    *(_DWORD *)this = 0;
  }
}
