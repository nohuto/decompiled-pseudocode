/*
 * XREFs of prfntKillList @ 0xCE282
 * Callers:
 *     ?bUnloadWorkhorse@PFTOBJ@@QAEHPAVPFF@@PAPAV2@K@Z @ 0xCDA6C (-bUnloadWorkhorse@PFTOBJ@@QAEHPAVPFF@@PAPAV2@K@Z.c)
 *     ?bUnloadAllButPermanentFonts@PFTOBJ@@QAEHH@Z @ 0xCDD06 (-bUnloadAllButPermanentFonts@PFTOBJ@@QAEHH@Z.c)
 * Callees:
 *     ?vInsert@RFONTOBJ@@QAEXPAPAVRFONT@@W4_RFL_TYPE@@@Z @ 0x851B6 (-vInsert@RFONTOBJ@@QAEXPAPAVRFONT@@W4_RFL_TYPE@@@Z.c)
 *     ??1RFONTOBJ@@QAE@XZ @ 0x86B86 (--1RFONTOBJ@@QAE@XZ.c)
 *     ?vUnlock@SEMOBJ@@QAEXXZ @ 0x98AE4 (-vUnlock@SEMOBJ@@QAEXXZ.c)
 *     ?vRemove@RFONTOBJ@@QAEXPAPAVRFONT@@W4_RFL_TYPE@@@Z @ 0xA3954 (-vRemove@RFONTOBJ@@QAEXPAPAVRFONT@@W4_RFL_TYPE@@@Z.c)
 *     ?cInactive@PDEVOBJ@@QAEII@Z @ 0xD0B3A (-cInactive@PDEVOBJ@@QAEII@Z.c)
 *     ?cInactive@PDEVOBJ@@QAEIXZ @ 0xF5D4F (-cInactive@PDEVOBJ@@QAEIXZ.c)
 */

int __thiscall prfntKillList(void *this)
{
  int v1; // ebx
  struct PDEV *v2; // esi
  int v3; // ecx
  int v5; // edi
  int v6; // eax
  struct PDEV *v7; // eax
  int v8; // edi
  int v9; // eax
  struct PDEV *v10; // eax
  unsigned int v11; // eax
  PDEVOBJ *v12; // ecx
  int v13; // [esp+8h] [ebp-1Ch] BYREF
  int v14; // [esp+Ch] [ebp-18h] BYREF
  struct PDEV *v15; // [esp+10h] [ebp-14h] BYREF
  int v16; // [esp+14h] [ebp-10h] BYREF
  int v17; // [esp+18h] [ebp-Ch] BYREF
  void *v18; // [esp+1Ch] [ebp-8h]
  int v19; // [esp+20h] [ebp-4h] BYREF

  v18 = this;
  v1 = 0;
  v17 = 0;
  v13 = _ghsemDriverMgmt;
  GreAcquireSemaphore(_ghsemDriverMgmt);
  v14 = _ghsemRFONTList;
  GreAcquireSemaphore(_ghsemRFONTList);
  GreAcquireHmgrSemaphore();
  v2 = gppdevList;
  if ( gppdevList )
  {
    do
    {
      v3 = *((_DWORD *)v2 + 6);
      if ( (v3 & 1) != 0 )
      {
        v15 = v2;
        if ( (v3 & 0x800000) != 0 )
          v5 = *(_DWORD *)(*((_DWORD *)v2 + 579) + 940);
        else
          v5 = *((_DWORD *)v2 + 235);
        if ( v5 )
        {
          do
          {
            v6 = v5;
            v5 = *(_DWORD *)(v5 + 668);
            v19 = v6;
            if ( *(_DWORD *)(v6 + 84) == *(_DWORD *)v18 && !*(_DWORD *)(v6 + 660) )
            {
              v16 = *(_DWORD *)(*(_DWORD *)v18 + 52);
              RFONTOBJ::vRemove(&v19, &v16, 0);
              *(_DWORD *)(*(_DWORD *)v18 + 52) = v16;
              if ( (*((_DWORD *)v2 + 6) & 0x800000) != 0 )
                v7 = (struct PDEV *)*((_DWORD *)v2 + 579);
              else
                v7 = v2;
              RFONTOBJ::vRemove(&v19, (_DWORD *)v7 + 235, 1);
              RFONTOBJ::vInsert(&v19, &v17, 1);
            }
            v19 = 0;
            RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v19);
          }
          while ( v5 );
          v3 = *((_DWORD *)v2 + 6);
        }
        if ( (v3 & 0x800000) != 0 )
          v8 = *(_DWORD *)(*((_DWORD *)v2 + 579) + 944);
        else
          v8 = *((_DWORD *)v2 + 236);
        while ( v8 )
        {
          v9 = v8;
          v8 = *(_DWORD *)(v8 + 668);
          v19 = v9;
          if ( *(_DWORD *)(v9 + 84) == *(_DWORD *)v18 )
          {
            v16 = *(_DWORD *)(*(_DWORD *)v18 + 52);
            RFONTOBJ::vRemove(&v19, &v16, 0);
            *(_DWORD *)(*(_DWORD *)v18 + 52) = v16;
            if ( (*((_DWORD *)v2 + 6) & 0x800000) != 0 )
              v10 = (struct PDEV *)*((_DWORD *)v2 + 579);
            else
              v10 = v2;
            RFONTOBJ::vRemove(&v19, (_DWORD *)v10 + 236, 1);
            RFONTOBJ::vInsert(&v19, &v17, 1);
            v11 = PDEVOBJ::cInactive((PDEVOBJ *)&v15);
            PDEVOBJ::cInactive(v12, v11 - 1);
          }
          v19 = 0;
          RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v19);
        }
      }
      v2 = *(struct PDEV **)v2;
    }
    while ( v2 );
    v1 = v17;
  }
  GreReleaseHmgrSemaphore();
  SEMOBJ::vUnlock((SEMOBJ *)&v14);
  SEMOBJ::vUnlock((SEMOBJ *)&v13);
  return v1;
}
