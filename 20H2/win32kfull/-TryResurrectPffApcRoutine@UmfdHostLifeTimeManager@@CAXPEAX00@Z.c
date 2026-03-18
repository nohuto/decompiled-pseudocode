/*
 * XREFs of ?TryResurrectPffApcRoutine@UmfdHostLifeTimeManager@@CAXPEAX00@Z @ 0x1C02C0E30
 * Callers:
 *     ?OnHostReady@UmfdHostLifeTimeManager@@SAXXZ @ 0x1C012D0A4 (-OnHostReady@UmfdHostLifeTimeManager@@SAXXZ.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C002120C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?EnsureUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ @ 0x1C008D344 (-EnsureUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ.c)
 *     ?QueryFontFile@PDEVOBJ@@QEAAJ_KKKPEAK@Z @ 0x1C011C310 (-QueryFontFile@PDEVOBJ@@QEAAJ_KKKPEAK@Z.c)
 *     ?HFFToPPFF@PFTOBJ@@QEAAPEAVPFF@@_K@Z @ 0x1C0271EB4 (-HFFToPPFF@PFTOBJ@@QEAAPEAVPFF@@_K@Z.c)
 *     ?TryResurrectHff@UmfdHostLifeTimeManager@@CA_N_KPEAVPFF@@@Z @ 0x1C02C0CA0 (-TryResurrectHff@UmfdHostLifeTimeManager@@CA_N_KPEAVPFF@@@Z.c)
 *     ?TryResurrectUmfdAllocations@UmfdHostLifeTimeManager@@CA_N_KPEAVPFF@@@Z @ 0x1C02C0F58 (-TryResurrectUmfdAllocations@UmfdHostLifeTimeManager@@CA_N_KPEAVPFF@@@Z.c)
 */

void __fastcall UmfdHostLifeTimeManager::TryResurrectPffApcRoutine(void *a1, _BYTE *a2, struct PFF *a3)
{
  __int64 v5; // [rsp+30h] [rbp-18h] BYREF
  __int64 v6; // [rsp+38h] [rbp-10h] BYREF
  struct _FONTHASH **v7; // [rsp+58h] [rbp+10h] BYREF
  struct PFT **v8; // [rsp+68h] [rbp+20h] BYREF

  if ( a2 )
  {
    v6 = ghsemPublicPFT;
    GreAcquireSemaphore(ghsemPublicPFT);
    UmfdHostLifeTimeManager::s_UmfdHostResurrectionThread = KeGetCurrentThread();
    if ( a3
      || gpPFTPublic && (v7 = gpPFTPublic, (a3 = PFTOBJ::HFFToPPFF((PFTOBJ *)&v7, (__int64)a2)) != 0LL)
      || gpPFTPrivate && (v8 = gpPFTPrivate, (a3 = PFTOBJ::HFFToPPFF((PFTOBJ *)&v8, (__int64)a2)) != 0LL) )
    {
      if ( a2[12]
        && a2[13] != 1
        && UmfdHostLifeTimeManager::EnsureUmfdHost()
        && UmfdHostLifeTimeManager::TryResurrectHff(a2, a3) )
      {
        v5 = *((_QWORD *)a3 + 11);
        if ( (unsigned int)PDEVOBJ::QueryFontFile((PDEVOBJ *)&v5, (__int64)a2, 2u, 0, 0LL) == *((_DWORD *)a3 + 52) )
        {
          if ( UmfdHostLifeTimeManager::TryResurrectUmfdAllocations((unsigned __int64)a2, a3) )
            a2[12] = 0;
        }
        else
        {
          a2[13] = 1;
        }
      }
    }
    UmfdHostLifeTimeManager::s_UmfdHostResurrectionThread = 0LL;
    SEMOBJ::vUnlock((SEMOBJ *)&v6);
  }
}
