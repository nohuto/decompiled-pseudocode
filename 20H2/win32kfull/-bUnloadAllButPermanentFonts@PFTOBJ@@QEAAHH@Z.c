/*
 * XREFs of ?bUnloadAllButPermanentFonts@PFTOBJ@@QEAAHH@Z @ 0x1C001D490
 * Callers:
 *     ?bCleanupFontTable@@YAHPEAPEAVPFT@@@Z @ 0x1C001C378 (-bCleanupFontTable@@YAHPEAPEAVPFT@@@Z.c)
 * Callees:
 *     ?vCleanupFontFile@@YAXPEAVPFFCLEANUP@@@Z @ 0x1C001D6A0 (-vCleanupFontFile@@YAXPEAVPFFCLEANUP@@@Z.c)
 *     bKillPFFOBJ @ 0x1C001D6D4 (bKillPFFOBJ.c)
 *     prfntKillList @ 0x1C001DA20 (prfntKillList.c)
 *     ?vRemoveHash@PFFOBJ@@QEAAXXZ @ 0x1C001DED4 (-vRemoveHash@PFFOBJ@@QEAAXXZ.c)
 *     ?vKill@PFFOBJ@@QEAAXXZ @ 0x1C0020B44 (-vKill@PFFOBJ@@QEAAXXZ.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C002120C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     PALLOCMEM2 @ 0x1C00673AC (PALLOCMEM2.c)
 *     vKillRFONTList @ 0x1C0272A78 (vKillRFONTList.c)
 */

__int64 __fastcall PFTOBJ::bUnloadAllButPermanentFonts(PFTOBJ *this)
{
  int v2; // r13d
  __int64 v3; // rdx
  unsigned int v4; // ebx
  unsigned int v5; // eax
  char *v6; // rsi
  __int64 *v7; // rdi
  char *v8; // r14
  unsigned __int64 i; // rcx
  __int64 v10; // r12
  int v11; // ebp
  __int64 v12; // r9
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // r9
  __int64 v18; // rbp
  unsigned __int64 v19; // r14
  unsigned __int64 v20; // r14
  _DWORD *v21; // rdi
  _QWORD v23[7]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v24; // [rsp+60h] [rbp+8h] BYREF

  v2 = 0;
  v24 = ghsemPublicPFT;
  GreAcquireSemaphore(ghsemPublicPFT);
  v3 = *(_QWORD *)this;
  v4 = 1;
  v5 = *(_DWORD *)(*(_QWORD *)this + 28LL);
  if ( !v5 )
    goto LABEL_30;
  if ( v5 > 0x40 )
  {
    v6 = (char *)PALLOCMEM2(48 * v5);
    if ( v6 )
    {
      v3 = *(_QWORD *)this;
      v2 = 1;
      goto LABEL_5;
    }
    v4 = 0;
LABEL_30:
    SEMOBJ::vUnlock((SEMOBJ *)&v24);
    return v4;
  }
  v6 = (char *)&gFntVict;
LABEL_5:
  v7 = (__int64 *)(v3 + 40);
  v8 = v6;
  for ( i = v3 + 8 * (*(unsigned int *)(v3 + 24) + 5LL);
        (unsigned __int64)v7 < i;
        i = *(_QWORD *)this + 8LL * *(unsigned int *)(*(_QWORD *)this + 24LL) + 40 )
  {
    v17 = *v7;
    if ( *v7 )
    {
      do
      {
        v10 = *(_QWORD *)(v17 + 8);
        v11 = *(_DWORD *)(v17 + 52) & 0x200;
        *(_DWORD *)(v17 + 56) = 0;
        *(_DWORD *)(v17 + 60) = 0;
        v23[0] = v17;
        PFFOBJ::vKill((PFFOBJ *)v23);
        if ( *v7 == v12 )
          *v7 = *(_QWORD *)(v12 + 8);
        v13 = *(_QWORD *)(v12 + 8);
        if ( v13 )
          *(_QWORD *)(v13 + 16) = *(_QWORD *)(v12 + 16);
        v14 = *(_QWORD *)(v12 + 16);
        if ( v14 )
          *(_QWORD *)(v14 + 8) = *(_QWORD *)(v12 + 8);
        *(_QWORD *)v8 = v12;
        PFFOBJ::vRemoveHash((PFFOBJ *)v23);
        v15 = *(_QWORD *)this;
        if ( !v11 )
          ++*(_DWORD *)(v15 + 32);
        --*(_DWORD *)(v15 + 28);
        v16 = prfntKillList(v23);
        *((_QWORD *)v8 + 1) = v16;
        if ( !v16 )
          *((_DWORD *)v8 + 10) = bKillPFFOBJ(v23, v8 + 16);
        v8 += 48;
        v17 = v10;
      }
      while ( v10 );
    }
    ++v7;
  }
  SEMOBJ::vUnlock((SEMOBJ *)&v24);
  v18 = 0LL;
  v19 = (__int64)((unsigned __int128)((v8 - v6) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64) >> 3;
  v20 = (v19 >> 63) + v19;
  if ( (_DWORD)v20 )
  {
    v21 = v6 + 40;
    do
    {
      if ( *((_QWORD *)v21 - 4) )
      {
        v23[0] = *((_QWORD *)v21 - 5);
        vKillRFONTList((PFFOBJ *)v23);
      }
      else if ( *v21 )
      {
        vCleanupFontFile((struct PFFCLEANUP *)&v6[48 * v18 + 16]);
      }
      v18 = (unsigned int)(v18 + 1);
      v21 += 12;
    }
    while ( (unsigned int)v18 < (unsigned int)v20 );
  }
  if ( v2 )
    Win32FreePool(v6);
  return v4;
}
