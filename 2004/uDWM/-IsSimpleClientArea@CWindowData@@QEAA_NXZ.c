/*
 * XREFs of ?IsSimpleClientArea@CWindowData@@QEAA_NXZ @ 0x180027CFC
 * Callers:
 *     ?OnRepresentationUpdated@CSecondaryWindowRepresentation@@QEAAJXZ @ 0x180027A38 (-OnRepresentationUpdated@CSecondaryWindowRepresentation@@QEAAJXZ.c)
 *     ?Initialize@CWindowSnapshot@@IEAAJPEAVCTopLevelWindow@@@Z @ 0x18002AC84 (-Initialize@CWindowSnapshot@@IEAAJPEAVCTopLevelWindow@@@Z.c)
 * Callees:
 *     ?GetShellWindowForDesktop@CWindowList@@QEAAPEAUHWND__@@_K@Z @ 0x180029B88 (-GetShellWindowForDesktop@CWindowList@@QEAAPEAUHWND__@@_K@Z.c)
 */

char __fastcall CWindowData::IsSimpleClientArea(CWindowData *this)
{
  char v1; // di

  v1 = 0;
  if ( (*((_BYTE *)this + 609) & 0x10) == 0
    && (*((_BYTE *)this + 611) & 0x40) == 0
    && !*((_DWORD *)this + 124)
    && (!*((_QWORD *)this + 46)
     || *((HWND *)this + 5) == CWindowList::GetShellWindowForDesktop(
                                 *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 61),
                                 *((_QWORD *)this + 15))) )
  {
    return 1;
  }
  return v1;
}
