/*
 * XREFs of prfntKillList @ 0x1C001DA20
 * Callers:
 *     ?bUnloadAllButPermanentFonts@PFTOBJ@@QEAAHH@Z @ 0x1C001D490 (-bUnloadAllButPermanentFonts@PFTOBJ@@QEAAHH@Z.c)
 *     ?bUnloadWorkhorse@PFTOBJ@@QEAAHPEAVPFF@@PEAPEAV2@K@Z @ 0x1C002050C (-bUnloadWorkhorse@PFTOBJ@@QEAAHPEAVPFF@@PEAPEAV2@K@Z.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C002120C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?cInactive@PDEVOBJ@@QEAAIXZ @ 0x1C0026F28 (-cInactive@PDEVOBJ@@QEAAIXZ.c)
 *     ?vInsert@RFONTOBJ@@QEAAXPEAPEAVRFONT@@W4_RFL_TYPE@@@Z @ 0x1C006395C (-vInsert@RFONTOBJ@@QEAAXPEAPEAVRFONT@@W4_RFL_TYPE@@@Z.c)
 *     ?prfntActive@PDEVOBJ@@QEAAPEAVRFONT@@XZ @ 0x1C00639F4 (-prfntActive@PDEVOBJ@@QEAAPEAVRFONT@@XZ.c)
 *     ?vRemove@RFONTOBJ@@QEAAXPEAPEAVRFONT@@W4_RFL_TYPE@@@Z @ 0x1C0064544 (-vRemove@RFONTOBJ@@QEAAXPEAPEAVRFONT@@W4_RFL_TYPE@@@Z.c)
 *     ?prfntInactive@PDEVOBJ@@QEAAPEAVRFONT@@XZ @ 0x1C00656B8 (-prfntInactive@PDEVOBJ@@QEAAPEAVRFONT@@XZ.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C00AFAAC (--1RFONTOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall prfntKillList(__int64 *a1)
{
  __int64 v2; // rdi
  struct PDEV *v3; // rbx
  struct RFONT *v5; // rsi
  __int64 v6; // rcx
  struct RFONT *v7; // rax
  struct PDEV *v8; // rdx
  struct RFONT *v9; // rsi
  __int64 v10; // rcx
  struct RFONT *v11; // rax
  struct PDEV *v12; // rdx
  unsigned int v13; // ecx
  __int64 v14; // [rsp+20h] [rbp-20h] BYREF
  __int64 v15; // [rsp+28h] [rbp-18h] BYREF
  __int64 v16; // [rsp+30h] [rbp-10h] BYREF
  struct RFONT *v17; // [rsp+78h] [rbp+38h] BYREF
  struct PDEV *v18; // [rsp+80h] [rbp+40h] BYREF
  __int64 v19; // [rsp+88h] [rbp+48h] BYREF

  v2 = 0LL;
  v19 = 0LL;
  v16 = ghsemDriverMgmt;
  GreAcquireSemaphore(ghsemDriverMgmt);
  v15 = ghsemRFONTList;
  GreAcquireSemaphore(ghsemRFONTList);
  GreAcquireHmgrSemaphore();
  v3 = gppdevList;
  if ( gppdevList )
  {
    do
    {
      if ( (*((_DWORD *)v3 + 10) & 1) != 0 )
      {
        v18 = v3;
        v5 = PDEVOBJ::prfntActive((PDEVOBJ *)&v18);
        while ( v5 )
        {
          v6 = *a1;
          v7 = v5;
          v5 = (struct RFONT *)*((_QWORD *)v5 + 84);
          v17 = v7;
          if ( *((_QWORD *)v7 + 16) == v6 && !*((_DWORD *)v7 + 165) )
          {
            v14 = *(_QWORD *)(v6 + 72);
            RFONTOBJ::vRemove(&v17, &v14, 0LL);
            *(_QWORD *)(*a1 + 72) = v14;
            if ( (*((_DWORD *)v3 + 10) & 0x800000) != 0 )
              v8 = (struct PDEV *)*((_QWORD *)v3 + 440);
            else
              v8 = v3;
            RFONTOBJ::vRemove(&v17, (char *)v8 + 1520, 1LL);
            RFONTOBJ::vInsert(&v17, &v19, 1LL);
          }
          v17 = 0LL;
          RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v17);
        }
        v9 = PDEVOBJ::prfntInactive((PDEVOBJ *)&v18);
        while ( v9 )
        {
          v10 = *a1;
          v11 = v9;
          v9 = (struct RFONT *)*((_QWORD *)v9 + 84);
          v17 = v11;
          if ( *((_QWORD *)v11 + 16) == v10 )
          {
            v14 = *(_QWORD *)(v10 + 72);
            RFONTOBJ::vRemove(&v17, &v14, 0LL);
            *(_QWORD *)(*a1 + 72) = v14;
            if ( (*((_DWORD *)v3 + 10) & 0x800000) != 0 )
              v12 = (struct PDEV *)*((_QWORD *)v3 + 440);
            else
              v12 = v3;
            RFONTOBJ::vRemove(&v17, (char *)v12 + 1528, 1LL);
            RFONTOBJ::vInsert(&v17, &v19, 1LL);
            v13 = PDEVOBJ::cInactive((PDEVOBJ *)&v18) - 1;
            if ( (*((_DWORD *)v3 + 10) & 0x800000) != 0 )
              *(_DWORD *)(*((_QWORD *)v3 + 440) + 1536LL) = v13;
            else
              *((_DWORD *)v3 + 384) = v13;
          }
          v17 = 0LL;
          RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v17);
        }
      }
      v3 = *(struct PDEV **)v3;
    }
    while ( v3 );
    v2 = v19;
  }
  GreReleaseHmgrSemaphore();
  SEMOBJ::vUnlock((SEMOBJ *)&v15);
  SEMOBJ::vUnlock((SEMOBJ *)&v16);
  return v2;
}
