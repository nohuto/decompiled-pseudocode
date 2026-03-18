/*
 * XREFs of GreEudcUnloadLinkW @ 0x1F7CCC
 * Callers:
 *     _NtGdiEudcLoadUnloadLink@28 @ 0x1F93F9 (_NtGdiEudcLoadUnloadLink@28.c)
 * Callees:
 *     ?GetSessionTextStackStatus@UmfdHostLifeTimeManager@@SGJXZ @ 0x49AEE (-GetSessionTextStackStatus@UmfdHostLifeTimeManager@@SGJXZ.c)
 *     bUnloadEudcFont @ 0xCD8F6 (bUnloadEudcFont.c)
 *     vUnlinkAllEudcRFONTsAndPFEs @ 0xCE766 (vUnlinkAllEudcRFONTsAndPFEs.c)
 *     bDeleteFlEntry @ 0x1F84B8 (bDeleteFlEntry.c)
 *     bWriteUserSystemEUDCRegistry @ 0x1F8DC4 (bWriteUserSystemEUDCRegistry.c)
 */

int __thiscall GreEudcUnloadLinkW(void *this, int a2, int a3)
{
  int v4; // esi
  int v6; // ecx

  v4 = 1;
  if ( UmfdHostLifeTimeManager::GetSessionTextStackStatus() )
    return 0;
  GreAcquireSemaphore(ghsemEUDC1);
  if ( gcEUDCCount <= 0 )
  {
    if ( this )
    {
      v4 = bDeleteFlEntry(this, a2, 1);
      if ( !v4 )
        v4 = bDeleteFlEntry(this, a2, 0);
    }
    else if ( gappfeSysEUDC || dword_27569C )
    {
      vUnlinkAllEudcRFONTsAndPFEs(v6, 0);
      bUnloadEudcFont((unsigned __int16 **)&gappfeSysEUDC);
      gappfeSysEUDC = 0;
      dword_27569C = 0;
      ++dword_2785AC;
      Dst[0] = 0;
      bWriteUserSystemEUDCRegistry(&word_101F32, 1);
    }
  }
  else
  {
    EngSetLastError(0xA7u);
    v4 = 0;
  }
  EtwTraceGreLockReleaseSemaphore(L"ghsemEUDC1", ghsemEUDC1);
  GreReleaseSemaphoreInternal(ghsemEUDC1);
  return v4;
}
