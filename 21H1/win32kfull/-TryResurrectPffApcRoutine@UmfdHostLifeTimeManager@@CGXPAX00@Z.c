/*
 * XREFs of ?TryResurrectPffApcRoutine@UmfdHostLifeTimeManager@@CGXPAX00@Z @ 0x22904B
 * Callers:
 *     ?OnHostReady@UmfdHostLifeTimeManager@@SGXXZ @ 0xEC3BC (-OnHostReady@UmfdHostLifeTimeManager@@SGXXZ.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QAEXXZ @ 0x98AE4 (-vUnlock@SEMOBJ@@QAEXXZ.c)
 *     ?EnsureUmfdHost@UmfdHostLifeTimeManager@@SG_NXZ @ 0xDE13E (-EnsureUmfdHost@UmfdHostLifeTimeManager@@SG_NXZ.c)
 *     ?HFFToPPFF@PFTOBJ@@QAEPAVPFF@@K@Z @ 0x1D043E (-HFFToPPFF@PFTOBJ@@QAEPAVPFF@@K@Z.c)
 *     ?TryResurrectHff@UmfdHostLifeTimeManager@@CG_NKPAVPFF@@@Z @ 0x228F12 (-TryResurrectHff@UmfdHostLifeTimeManager@@CG_NKPAVPFF@@@Z.c)
 *     ?TryResurrectUmfdAllocations@UmfdHostLifeTimeManager@@CG_NKPAVPFF@@@Z @ 0x22911D (-TryResurrectUmfdAllocations@UmfdHostLifeTimeManager@@CG_NKPAVPFF@@@Z.c)
 */

void __userpurge UmfdHostLifeTimeManager::TryResurrectPffApcRoutine(
        struct PFF *a1@<ebx>,
        unsigned int a2@<edi>,
        void *a3,
        struct _FONTHASH **a4,
        struct PFF *a5)
{
  struct _FONTHASH **v5; // esi
  struct _ETHREAD *CurrentThread; // eax
  struct PFF *v7; // edi
  int v9; // [esp+4h] [ebp-4h] BYREF

  v5 = a4;
  if ( a4 )
  {
    v9 = _ghsemPublicPFT;
    GreAcquireSemaphore(_ghsemPublicPFT);
    CurrentThread = KeGetCurrentThread();
    v7 = a5;
    UmfdHostLifeTimeManager::s_UmfdHostResurrectionThread = CurrentThread;
    if ( a5
      || gpPFTPublic && (a4 = gpPFTPublic, (v7 = PFTOBJ::HFFToPPFF((PFTOBJ *)&a4, (unsigned int)v5)) != 0)
      || gpPFTPrivate
      && (a4 = (struct _FONTHASH **)gpPFTPrivate, (v7 = PFTOBJ::HFFToPPFF((PFTOBJ *)&a4, (unsigned int)v5)) != 0) )
    {
      if ( *((_BYTE *)v5 + 8)
        && *((_BYTE *)v5 + 9) != 1
        && UmfdHostLifeTimeManager::EnsureUmfdHost()
        && UmfdHostLifeTimeManager::TryResurrectHff(v5, (int)v7) )
      {
        if ( (*(int (__stdcall **)(struct _FONTHASH **, int, _DWORD, _DWORD))(*((_DWORD *)v7 + 15) + 2104))(v5, 2, 0, 0) == *((_DWORD *)v7 + 31) )
        {
          if ( UmfdHostLifeTimeManager::TryResurrectUmfdAllocations(a2, a1) )
            *((_BYTE *)v5 + 8) = 0;
        }
        else
        {
          *((_BYTE *)v5 + 9) = 1;
        }
      }
    }
    UmfdHostLifeTimeManager::s_UmfdHostResurrectionThread = 0;
    SEMOBJ::vUnlock((SEMOBJ *)&v9);
  }
}
