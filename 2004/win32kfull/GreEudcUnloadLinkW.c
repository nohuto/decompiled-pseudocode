/*
 * XREFs of GreEudcUnloadLinkW @ 0x1C02988B0
 * Callers:
 *     NtGdiEudcLoadUnloadLink @ 0x1C02995F0 (NtGdiEudcLoadUnloadLink.c)
 * Callees:
 *     bUnloadEudcFont @ 0x1C0011CF8 (bUnloadEudcFont.c)
 *     ?GetSessionTextStackStatus@UmfdHostLifeTimeManager@@SAJXZ @ 0x1C00A1DD4 (-GetSessionTextStackStatus@UmfdHostLifeTimeManager@@SAJXZ.c)
 *     vUnlinkAllEudcRFONTsAndPFEs @ 0x1C01145F0 (vUnlinkAllEudcRFONTsAndPFEs.c)
 *     bDeleteFlEntry @ 0x1C0298E50 (bDeleteFlEntry.c)
 *     bWriteUserSystemEUDCRegistry @ 0x1C029906C (bWriteUserSystemEUDCRegistry.c)
 */

__int64 __fastcall GreEudcUnloadLinkW(wchar_t *Str1, __int64 a2, unsigned __int16 *a3)
{
  int v5; // edi
  unsigned int v6; // ebx
  __int64 v8; // rcx

  v5 = 1;
  v6 = 0;
  if ( (unsigned int)UmfdHostLifeTimeManager::GetSessionTextStackStatus() )
    return 0LL;
  GreAcquireSemaphore(ghsemEUDC1);
  if ( gcEUDCCount <= 0 )
  {
    if ( Str1 )
    {
      v5 = bDeleteFlEntry(Str1, a3);
      if ( !v5 )
        v5 = bDeleteFlEntry(Str1, a3);
    }
    else if ( *(_OWORD *)&gappfeSysEUDC != 0LL )
    {
      vUnlinkAllEudcRFONTsAndPFEs(v8, 0);
      bUnloadEudcFont((__int64 *)&gappfeSysEUDC);
      ++dword_1C03419F0;
      Dst[0] = 0;
      *(_OWORD *)&gappfeSysEUDC = 0LL;
      bWriteUserSystemEUDCRegistry(&unk_1C02FA284);
    }
    v6 = v5;
  }
  else
  {
    EngSetLastError(0xA7u);
  }
  EtwTraceGreLockReleaseSemaphore(L"ghsemEUDC1", ghsemEUDC1);
  GreReleaseSemaphoreInternal(ghsemEUDC1);
  return v6;
}
