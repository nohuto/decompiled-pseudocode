/*
 * XREFs of ??0AutoAttachFonDrvProcess@UmfdHostLifeTimeManager@@QAE@XZ @ 0xF6DDC
 * Callers:
 *     ?bCreateFontFileView@@YGHPBU_FONTFILEVIEW@@PBUtagDOWNLOADFONTHEADER@@KPAPAPAU1@K@Z @ 0x1E8DAB (-bCreateFontFileView@@YGHPBU_FONTFILEVIEW@@PBUtagDOWNLOADFONTHEADER@@KPAPAPAU1@K@Z.c)
 * Callees:
 *     <none>
 */

UmfdHostLifeTimeManager::AutoAttachFonDrvProcess *__thiscall UmfdHostLifeTimeManager::AutoAttachFonDrvProcess::AutoAttachFonDrvProcess(
        UmfdHostLifeTimeManager::AutoAttachFonDrvProcess *this)
{
  UmfdHostLifeTimeManager::AutoAttachFonDrvProcess *result; // eax

  *(_DWORD *)this = &UmfdHostLifeTimeManager::s_ReadyLock;
  KeEnterCriticalRegion();
  GreAcquirePushLockShared(&UmfdHostLifeTimeManager::s_ReadyLock);
  *((_DWORD *)this + 8) = 0;
  result = this;
  *((_BYTE *)this + 28) = 0;
  return result;
}
