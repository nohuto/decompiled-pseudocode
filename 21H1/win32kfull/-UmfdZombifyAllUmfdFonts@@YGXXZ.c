/*
 * XREFs of ?UmfdZombifyAllUmfdFonts@@YGXXZ @ 0xCFC12
 * Callers:
 *     ?UninitializeProcess@UmfdHostLifeTimeManager@@SGXXZ @ 0xCFB96 (-UninitializeProcess@UmfdHostLifeTimeManager@@SGXXZ.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QAEXXZ @ 0x98AE4 (-vUnlock@SEMOBJ@@QAEXXZ.c)
 *     _lambda_c975384ad750ea8561ee337cac10d044_::operator() @ 0xCFD16 (_lambda_c975384ad750ea8561ee337cac10d044_--operator().c)
 */

void __stdcall UmfdZombifyAllUmfdFonts()
{
  struct PDEV *v0; // ecx
  int v1; // esi
  int v2; // edx
  _DWORD *v3; // eax
  _DWORD *v4; // eax
  int v5; // [esp+4h] [ebp-8h] BYREF
  int v6; // [esp+8h] [ebp-4h] BYREF

  v6 = _ghsemPublicPFT;
  GreAcquireSemaphore(_ghsemPublicPFT);
  GreAcquireFastMutex(_ghfmMemory);
  lambda_c975384ad750ea8561ee337cac10d044_::operator()(gpPFTPublic);
  lambda_c975384ad750ea8561ee337cac10d044_::operator()(gpPFTPrivate);
  GreReleaseFastMutex(_ghfmMemory);
  SEMOBJ::vUnlock((SEMOBJ *)&v6);
  v5 = _ghsemDriverMgmt;
  GreAcquireSemaphore(_ghsemDriverMgmt);
  v6 = _ghsemRFONTList;
  GreAcquireSemaphore(_ghsemRFONTList);
  v0 = gppdevList;
  if ( gppdevList )
  {
    v1 = dword_2785B8;
    while ( v0 )
    {
      v2 = *((_DWORD *)v0 + 6);
      if ( (v2 & 0x800000) != 0 )
        v3 = *(_DWORD **)(*((_DWORD *)v0 + 579) + 940);
      else
        v3 = (_DWORD *)*((_DWORD *)v0 + 235);
      if ( v3 )
      {
        do
        {
          if ( v3[17] == v1 )
            v3[10] = 0;
          v3 = (_DWORD *)v3[167];
        }
        while ( v3 );
        v2 = *((_DWORD *)v0 + 6);
      }
      if ( (v2 & 0x800000) != 0 )
        v4 = *(_DWORD **)(*((_DWORD *)v0 + 579) + 944);
      else
        v4 = (_DWORD *)*((_DWORD *)v0 + 236);
      while ( v4 )
      {
        if ( v4[17] == v1 )
          v4[10] = 0;
        v4 = (_DWORD *)v4[167];
      }
      v0 = *(struct PDEV **)v0;
    }
  }
  SEMOBJ::vUnlock((SEMOBJ *)&v6);
  SEMOBJ::vUnlock((SEMOBJ *)&v5);
}
