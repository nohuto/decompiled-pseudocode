/*
 * XREFs of ?vSpReadFromScreen@@YGXPAU_SPRITESTATE@@PAU_POINTL@@PAU_SURFOBJ@@PAU_RECTL@@@Z @ 0x1E19B3
 * Callers:
 *     ?vSpBigUnderlayCopy@@YGXPAU_SPRITESTATE@@PAU_POINTL@@PAU_SURFOBJ@@PAU_RECTL@@@Z @ 0x1E015A (-vSpBigUnderlayCopy@@YGXPAU_SPRITESTATE@@PAU_POINTL@@PAU_SURFOBJ@@PAU_RECTL@@@Z.c)
 *     ?vSpSmallUnderlayCopy@@YGXPAVSPRITE@@PAU_POINTL@@PAU_SURFOBJ@@12JJPAU_RECTL@@3@Z @ 0x1E262E (-vSpSmallUnderlayCopy@@YGXPAVSPRITE@@PAU_POINTL@@PAU_SURFOBJ@@12JJPAU_RECTL@@3@Z.c)
 *     _vSpUnTearDownSprites@12 @ 0x1E3F3E (_vSpUnTearDownSprites@12.c)
 * Callees:
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     ?bEmpty@ERECTL@@QBEHXZ @ 0x4F396 (-bEmpty@ERECTL@@QBEHXZ.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QAEHPAXJVXEPALOBJ@@111KKKK@Z @ 0x5D130 (-bInitXlateObj@EXLATEOBJ@@QAEHPAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?vUnlock@SURFREF@@QAEXXZ @ 0x78568 (-vUnlock@SURFREF@@QAEXXZ.c)
 *     ?bAllowShareAccess@@YGHPAU_SURFOBJ@@@Z @ 0xE51B4 (-bAllowShareAccess@@YGHPAU_SURFOBJ@@@Z.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     ??1EXLATEOBJ@@QAE@XZ @ 0x1CC63A (--1EXLATEOBJ@@QAE@XZ.c)
 *     ??1ECLIPOBJTMPIFNEEDED@@QAE@XZ @ 0x1DA67C (--1ECLIPOBJTMPIFNEEDED@@QAE@XZ.c)
 *     ??1NEEDDDILOCK@@QAE@XZ @ 0x1DA6CE (--1NEEDDDILOCK@@QAE@XZ.c)
 *     ?bConcurrent@@YGHPAU_SPRITESTATE@@@Z @ 0x1DCDEA (-bConcurrent@@YGHPAU_SPRITESTATE@@@Z.c)
 *     ?vSetup@ECLIPOBJTMPIFNEEDED@@QAEXHPAVREGION@@AAVERECTL@@H@Z @ 0x1DFC7A (-vSetup@ECLIPOBJTMPIFNEEDED@@QAEXHPAVREGION@@AAVERECTL@@H@Z.c)
 *     _OffCopyBits@36 @ 0x22EF0F (_OffCopyBits@36.c)
 */

void __userpurge vSpReadFromScreen(
        int *a1@<ecx>,
        struct _SPRITESTATE *a2,
        struct _POINTL *a3,
        struct _SURFOBJ *a4,
        struct _RECTL *a5)
{
  int v6; // ebx
  struct REGION *v7; // eax
  struct _SPRITESTATE *v8; // edi
  int v9; // eax
  int v10; // eax
  int v11; // ecx
  int v12; // eax
  int v13; // esi
  int v14; // ecx
  int v15; // esi
  int v16; // edi
  int v17; // ecx
  PKTHREAD v18; // eax
  PKTHREAD v19; // eax
  PKTHREAD v20; // eax
  PKTHREAD v21; // eax
  PKTHREAD v22; // eax
  PKTHREAD v23; // eax
  PKTHREAD v24; // eax
  PKTHREAD v25; // eax
  PKTHREAD v26; // eax
  PKTHREAD v27; // eax
  PKTHREAD v28; // eax
  PKTHREAD v29; // eax
  PKTHREAD v30; // eax
  PKTHREAD v31; // eax
  PKTHREAD v32; // eax
  PKTHREAD CurrentThread; // eax
  PKTHREAD v34; // eax
  PKTHREAD v35; // eax
  PKTHREAD v36; // eax
  PKTHREAD v37; // eax
  struct REGION *v38; // [esp-Ch] [ebp-CCh]
  int v39; // [esp+18h] [ebp-A8h] BYREF
  char *v40; // [esp+1Ch] [ebp-A4h] BYREF
  int v41; // [esp+20h] [ebp-A0h]
  struct _CLIPOBJ *v42; // [esp+24h] [ebp-9Ch]
  int v43; // [esp+28h] [ebp-98h] BYREF
  int v44; // [esp+2Ch] [ebp-94h]
  int v45; // [esp+30h] [ebp-90h] BYREF
  int v46; // [esp+34h] [ebp-8Ch]
  REGION *v47; // [esp+38h] [ebp-88h] BYREF
  char v48[44]; // [esp+3Ch] [ebp-84h] BYREF
  int v49; // [esp+68h] [ebp-58h]
  int v50; // [esp+7Ch] [ebp-44h]
  int v51; // [esp+80h] [ebp-40h]
  int v52; // [esp+A8h] [ebp-18h]
  int v53; // [esp+B0h] [ebp-10h]
  int v54; // [esp+B4h] [ebp-Ch]

  v6 = 0;
  v52 = 1;
  v7 = (struct REGION *)a1[161];
  v8 = a2;
  v46 = (int)a2;
  v50 = 0;
  v51 = 0;
  v53 = 0;
  v49 = 0;
  v54 = 0;
  v42 = 0;
  if ( !v7 )
  {
LABEL_4:
    v10 = a1[4];
    v39 = 0;
    if ( v10 )
    {
      v11 = *(_DWORD *)(v10 + 56);
      if ( (v11 & 0x80004000) != 0 && (v11 & 0x200) == 0 )
      {
        v39 = v10 - 16;
        GreLockDisplayDevice(*(_DWORD *)(v10 - 16 + 28));
      }
    }
    v40 = 0;
    if ( a2 )
    {
      v12 = *((_DWORD *)a2 + 14);
      if ( ((v12 & 0x4000) != 0 || v12 < 0) && (v12 & 0x200) == 0 )
      {
        v40 = (char *)a2 - 16;
        GreLockDisplayDevice(*((_DWORD *)a2 + 3));
      }
    }
    v13 = a1[4];
    v44 = v13;
    v43 = 0;
    v41 = (int)&gptlZero;
    v14 = v13 != 0 ? v13 - 16 : 0;
    if ( !v14 )
      goto LABEL_41;
    if ( ((unsigned int)&loc_80000 & *(_DWORD *)(v13 != 0 ? v13 - 16 + 0x48 : 72)) != 0 )
    {
      v15 = *(_DWORD *)(v13 != 0 ? v13 - 16 + 0x1C : 28);
      v16 = *(_DWORD *)(v15 + 16);
      if ( v15 != v16 )
      {
        v17 = *(_DWORD *)(v14 + 96);
        v41 = v15 + 1836;
        v45 = HmgShareLockCheck(v17, 5);
        if ( !v45
          || !EXLATEOBJ::bInitXlateObj(
                &v43,
                0,
                0,
                *(_DWORD **)(v16 + 1112),
                *(_DWORD **)(v15 + 1112),
                (int)ppalDefault,
                (int)ppalDefault,
                0,
                0,
                0,
                0x2000) )
        {
          SURFREF::vUnlock((SURFREF *)&v45);
LABEL_41:
          EXLATEOBJ::~EXLATEOBJ((EXLATEOBJ *)&v43);
          NEEDDDILOCK::~NEEDDDILOCK((NEEDDDILOCK *)&v40);
          NEEDDDILOCK::~NEEDDDILOCK((NEEDDDILOCK *)&v39);
          goto LABEL_42;
        }
        v6 = v43;
        v44 = v45 + 16;
        SURFREF::vUnlock((SURFREF *)&v45);
        goto LABEL_19;
      }
      v13 = v44;
      v8 = (struct _SPRITESTATE *)v46;
    }
    if ( (*((_DWORD *)v8 + 14) & 0x400) != 0 || !*(_DWORD *)(v13 + 12) )
    {
      if ( *((_WORD *)v8 + 24) == 1
        && bAllowShareAccess(v8)
        && (v28 = KeGetCurrentThread(), W32GetThreadWin32Thread(v28))
        && (v29 = KeGetCurrentThread(), *(_DWORD *)(W32GetThreadWin32Thread(v29) + 156))
        && ((v30 = KeGetCurrentThread(), *(_DWORD *)(W32GetThreadWin32Thread(v30) + 52))
         || (v31 = KeGetCurrentThread(), *(_DWORD *)(W32GetThreadWin32Thread(v31) + 56)))
        && (v32 = KeGetCurrentThread(), (*(_DWORD *)(*(_DWORD *)(W32GetThreadWin32Thread(v32) + 156) + 20) & 0x400) != 0) )
      {
        CurrentThread = KeGetCurrentThread();
        W32GetThreadWin32Thread(CurrentThread);
      }
      else if ( *((_WORD *)v8 + 24) == 1 )
      {
        if ( bAllowShareAccess(v8) )
        {
          v34 = KeGetCurrentThread();
          if ( W32GetThreadWin32Thread(v34) )
          {
            v35 = KeGetCurrentThread();
            if ( *(_DWORD *)(W32GetThreadWin32Thread(v35) + 156) )
            {
              v36 = KeGetCurrentThread();
              if ( !*(_DWORD *)(W32GetThreadWin32Thread(v36) + 52) )
              {
                v37 = KeGetCurrentThread();
                W32GetThreadWin32Thread(v37);
              }
            }
          }
        }
      }
      goto LABEL_40;
    }
    if ( *(_WORD *)(v13 + 48) == 1
      && bAllowShareAccess((_DWORD *)v13)
      && (v18 = KeGetCurrentThread(), W32GetThreadWin32Thread(v18))
      && (v19 = KeGetCurrentThread(), *(_DWORD *)(W32GetThreadWin32Thread(v19) + 156))
      && ((v20 = KeGetCurrentThread(), *(_DWORD *)(W32GetThreadWin32Thread(v20) + 52))
       || (v21 = KeGetCurrentThread(), *(_DWORD *)(W32GetThreadWin32Thread(v21) + 56)))
      && (v22 = KeGetCurrentThread(), (*(_DWORD *)(*(_DWORD *)(W32GetThreadWin32Thread(v22) + 156) + 20) & 0x400) != 0) )
    {
      v23 = KeGetCurrentThread();
      W32GetThreadWin32Thread(v23);
    }
    else if ( *(_WORD *)(v13 + 48) == 1
           && bAllowShareAccess((_DWORD *)v13)
           && (v24 = KeGetCurrentThread(), W32GetThreadWin32Thread(v24))
           && (v25 = KeGetCurrentThread(), *(_DWORD *)(W32GetThreadWin32Thread(v25) + 156))
           && ((v26 = KeGetCurrentThread(), *(_DWORD *)(W32GetThreadWin32Thread(v26) + 52))
            || (v27 = KeGetCurrentThread(), *(_DWORD *)(W32GetThreadWin32Thread(v27) + 56)))
           || (*(_DWORD *)(v13 + 56) & 0x400) == 0 )
    {
      v8 = (struct _SPRITESTATE *)v46;
      goto LABEL_40;
    }
LABEL_19:
    v8 = (struct _SPRITESTATE *)v46;
LABEL_40:
    OffCopyBits((int)v8, v41, v44, v42, v6, (int)a3, (int)a3);
    goto LABEL_41;
  }
  v38 = v7;
  v9 = bConcurrent(a1);
  ECLIPOBJTMPIFNEEDED::vSetup((ECLIPOBJTMPIFNEEDED *)&v47, v9, v38, (struct ERECTL *)a3, 0);
  if ( !ERECTL::bEmpty((ERECTL *)v48) )
  {
    v42 = (struct _CLIPOBJ *)&v47;
    goto LABEL_4;
  }
LABEL_42:
  ECLIPOBJTMPIFNEEDED::~ECLIPOBJTMPIFNEEDED(&v47);
}
