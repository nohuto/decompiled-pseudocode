/*
 * XREFs of ?vUnlinkAllEudcFromRFONTList@@YAXHH@Z @ 0x1C012A560
 * Callers:
 *     bDeleteAllFlEntry @ 0x1C0011ABC (bDeleteAllFlEntry.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C000F68C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C008502C (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?prfntInactive@PDEVOBJ@@QEAAPEAVRFONT@@XZ @ 0x1C00DC3D8 (-prfntInactive@PDEVOBJ@@QEAAPEAVRFONT@@XZ.c)
 *     ?prfntActive@PDEVOBJ@@QEAAPEAVRFONT@@XZ @ 0x1C00DDD20 (-prfntActive@PDEVOBJ@@QEAAPEAVRFONT@@XZ.c)
 *     vMakeInactiveHelper @ 0x1C029917C (vMakeInactiveHelper.c)
 */

void __fastcall vUnlinkAllEudcFromRFONTList()
{
  struct PDEV *i; // rdi
  struct RFONT *v1; // rbx
  struct RFONT *v2; // rbx
  struct RFONT *v3; // rcx
  unsigned int v4; // esi
  struct RFONT *v5; // rcx
  unsigned int v6; // esi
  __int64 v7; // [rsp+20h] [rbp-28h] BYREF
  _QWORD v8[4]; // [rsp+28h] [rbp-20h] BYREF
  struct PDEV *v9; // [rsp+60h] [rbp+18h] BYREF
  __int64 v10; // [rsp+68h] [rbp+20h] BYREF

  v8[0] = ghsemDriverMgmt;
  GreAcquireSemaphore(ghsemDriverMgmt);
  v7 = ghsemRFONTList;
  GreAcquireSemaphore(ghsemRFONTList);
  for ( i = gppdevList; i; i = *(struct PDEV **)i )
  {
    v9 = i;
    v1 = PDEVOBJ::prfntActive((PDEVOBJ *)&v9);
    if ( v1 )
    {
      v10 = 0LL;
      do
      {
        vMakeInactiveHelper((char *)v1 + 728);
        if ( *((_QWORD *)v1 + 92) )
          vMakeInactiveHelper((char *)v1 + 736);
        v3 = (struct RFONT *)*((_QWORD *)v1 + 93);
        if ( v3 )
        {
          v4 = 0;
          if ( *((_DWORD *)v1 + 210) )
          {
            do
              vMakeInactiveHelper(*((_QWORD *)v1 + 93) + 8LL * v4++);
            while ( v4 < *((_DWORD *)v1 + 210) );
            v3 = (struct RFONT *)*((_QWORD *)v1 + 93);
          }
          if ( v3 != (struct RFONT *)((char *)v1 + 752) )
            Win32FreePool(v3);
          *(_QWORD *)((char *)v1 + 836) = 0LL;
          *((_QWORD *)v1 + 93) = 0LL;
          *((_DWORD *)v1 + 208) = 0;
        }
        *(_QWORD *)(*((_QWORD *)v1 + 15) + 120LL) = 0LL;
        RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v10);
        v1 = (struct RFONT *)*((_QWORD *)v1 + 84);
      }
      while ( v1 );
    }
    v2 = PDEVOBJ::prfntInactive((PDEVOBJ *)&v9);
    if ( v2 )
    {
      v9 = 0LL;
      do
      {
        vMakeInactiveHelper((char *)v2 + 728);
        if ( *((_QWORD *)v2 + 92) )
          vMakeInactiveHelper((char *)v2 + 736);
        v5 = (struct RFONT *)*((_QWORD *)v2 + 93);
        if ( v5 )
        {
          v6 = 0;
          if ( *((_DWORD *)v2 + 210) )
          {
            do
              vMakeInactiveHelper(*((_QWORD *)v2 + 93) + 8LL * v6++);
            while ( v6 < *((_DWORD *)v2 + 210) );
            v5 = (struct RFONT *)*((_QWORD *)v2 + 93);
          }
          if ( v5 != (struct RFONT *)((char *)v2 + 752) )
            Win32FreePool(v5);
          *(_QWORD *)((char *)v2 + 836) = 0LL;
          *((_QWORD *)v2 + 93) = 0LL;
          *((_DWORD *)v2 + 208) = 0;
        }
        *(_QWORD *)(*((_QWORD *)v2 + 15) + 120LL) = 0LL;
        RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v9);
        v2 = (struct RFONT *)*((_QWORD *)v2 + 84);
      }
      while ( v2 );
    }
  }
  SEMOBJ::vUnlock((SEMOBJ *)&v7);
  SEMOBJ::vUnlock((SEMOBJ *)v8);
}
