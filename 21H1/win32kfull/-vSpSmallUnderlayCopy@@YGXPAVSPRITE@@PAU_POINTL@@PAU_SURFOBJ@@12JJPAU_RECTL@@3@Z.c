/*
 * XREFs of ?vSpSmallUnderlayCopy@@YGXPAVSPRITE@@PAU_POINTL@@PAU_SURFOBJ@@12JJPAU_RECTL@@3@Z @ 0x1E262E
 * Callers:
 *     ?bSpUpdatePosition@@YGHPAVSPRITE@@PAU_POINTL@@HH@Z @ 0xA0A28 (-bSpUpdatePosition@@YGHPAVSPRITE@@PAU_POINTL@@HH@Z.c)
 * Callees:
 *     ?INVOKEOFFCOPYBITS@@YGHPAU_POINTL@@PAU_SURFOBJ@@01PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@0@Z @ 0x92B62 (-INVOKEOFFCOPYBITS@@YGHPAU_POINTL@@PAU_SURFOBJ@@01PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@0@Z.c)
 *     ?pSpFindInZ@@YIPAVSPRITE@@PAV1@PAU_RECTL@@@Z @ 0xEA5B4 (-pSpFindInZ@@YIPAVSPRITE@@PAV1@PAU_RECTL@@@Z.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     ?cSpSubtract@@YIKPBU_RECTL@@0PAU1@@Z @ 0x1DEF61 (-cSpSubtract@@YIKPBU_RECTL@@0PAU1@@Z.c)
 *     ?vSpReadFromScreen@@YGXPAU_SPRITESTATE@@PAU_POINTL@@PAU_SURFOBJ@@PAU_RECTL@@@Z @ 0x1E19B3 (-vSpReadFromScreen@@YGXPAU_SPRITESTATE@@PAU_POINTL@@PAU_SURFOBJ@@PAU_RECTL@@@Z.c)
 *     ?vUnlock@SINGLEREADERLOCK@@QAEXXZ @ 0x1E34D8 (-vUnlock@SINGLEREADERLOCK@@QAEXXZ.c)
 */

void __userpurge vSpSmallUnderlayCopy(
        int *a1@<edx>,
        int a2@<ecx>,
        SURFOBJ *a3,
        struct _POINTL *a4,
        struct _SURFOBJ *a5,
        struct _POINTL *a6,
        struct _SURFOBJ *a7,
        struct _RECTL *a8,
        const struct _RECTL *a9,
        struct _RECTL *a10,
        struct _RECTL *a11)
{
  LONG *p_lDelta; // edi
  HSURF hsurf; // eax
  struct _SURFOBJ *v13; // eax
  LONG *v14; // esi
  HSURF v15; // ecx
  struct _POINTL *p_bottom; // edi
  struct _POINTL *v17; // esi
  struct SPRITE *i; // ecx
  const struct _RECTL *v19; // ecx
  const struct _RECTL *v20; // eax
  LONG *v21; // esi
  HSURF v22; // ecx
  struct _SURFOBJ *v23; // eax
  LONG *v24; // edi
  struct _SURFOBJ *v25; // ecx
  HSURF v26; // edx
  struct SPRITE *v27; // eax
  struct SPRITE *v28; // ebx
  struct _RECTL *v29; // [esp+0h] [ebp-ACh]
  struct _POINTL *v30; // [esp+4h] [ebp-A8h]
  struct _POINTL *v33; // [esp+24h] [ebp-88h]
  int *v34; // [esp+28h] [ebp-84h]
  struct _POINTL *v35; // [esp+28h] [ebp-84h]
  LONG *v36; // [esp+2Ch] [ebp-80h]
  struct _CLIPOBJ v37; // [esp+30h] [ebp-7Ch] BYREF
  char *v38; // [esp+48h] [ebp-64h]
  char *v39; // [esp+4Ch] [ebp-60h]
  struct _CLIPOBJ v40; // [esp+50h] [ebp-5Ch] BYREF

  memset(&v40, 0, 16);
  memset(&v37, 0, 16);
  v34 = *(int **)(a2 + 12);
  if ( (*(_DWORD *)(*v34 + 24) & 0x400) == 0 )
  {
    if ( bIntersect(a9, a8, (struct _RECTL *)&v40) )
    {
      p_lDelta = 0;
      v37.rclBounds.bottom = (LONG)a6 + v40.iUniq;
      v38 = (char *)a6 + v40.rclBounds.top;
      *(_DWORD *)&v37.iDComplexity = (char *)a7 + v40.rclBounds.left;
      v39 = (char *)a7 + v40.rclBounds.right;
      if ( a3 )
      {
        hsurf = a3[1].hsurf;
        if ( ((unsigned int)hsurf & 0x80004000) != 0 && ((unsigned __int16)hsurf & 0x200) == 0 )
        {
          p_lDelta = &a3[-1].lDelta;
          GreLockDisplayDevice(a3->hdev);
        }
      }
      v13 = a5;
      v14 = 0;
      if ( a5 )
      {
        v15 = a5[1].hsurf;
        if ( ((unsigned int)v15 & 0x80004000) != 0 && ((unsigned __int16)v15 & 0x200) == 0 )
        {
          v14 = &a5[-1].lDelta;
          GreLockDisplayDevice(a5->hdev);
          v13 = a5;
        }
      }
      INVOKEOFFCOPYBITS(a3, a1, a4, v13, 0, 0, &v40, (struct _XLATEOBJ *)&v37.rclBounds.bottom, v29, v30);
      if ( v14 )
        GreUnlockDisplayDevice(v14[7]);
      if ( p_lDelta )
        GreUnlockDisplayDevice(p_lDelta[7]);
    }
    v33 = (struct _POINTL *)cSpSubtract(a8, a9, (struct _RECTL *)&v40.rclBounds.bottom);
    p_bottom = (struct _POINTL *)&v40.rclBounds.bottom;
    v17 = 0;
    do
    {
      vSpReadFromScreen(v34, (struct _SPRITESTATE *)a3, p_bottom, (struct _SURFOBJ *)v29, (struct _RECTL *)v30);
      v17 = (struct _POINTL *)((char *)v17 + 1);
      p_bottom += 2;
    }
    while ( v17 != v33 );
    for ( i = (struct SPRITE *)v34[1]; ; i = (struct SPRITE *)*((_DWORD *)v28 + 4) )
    {
      v27 = pSpFindInZ(i, a8);
      v28 = v27;
      if ( !v27 )
        break;
      if ( v27 != (struct SPRITE *)a2 )
      {
        v35 = 0;
        v19 = (const struct _RECTL *)&v40.rclBounds.bottom;
        v20 = (const struct _RECTL *)((char *)v27 + 44);
        v36 = &v40.rclBounds.bottom;
        do
        {
          if ( bIntersect(v19, v20, (struct _RECTL *)&v37) )
          {
            v21 = 0;
            if ( a3 )
            {
              v22 = a3[1].hsurf;
              if ( ((unsigned int)v22 & 0x80004000) != 0 && ((unsigned __int16)v22 & 0x200) == 0 )
              {
                v21 = &a3[-1].lDelta;
                GreLockDisplayDevice(a3->hdev);
              }
            }
            v23 = (struct _SURFOBJ *)*((_DWORD *)v28 + 28);
            v24 = 0;
            v25 = v23;
            if ( v23 )
            {
              v26 = v23[1].hsurf;
              if ( ((unsigned int)v26 & 0x80004000) != 0 && ((unsigned __int16)v26 & 0x200) == 0 )
              {
                v24 = &v23[-1].lDelta;
                GreLockDisplayDevice(v23->hdev);
                v25 = (struct _SURFOBJ *)*((_DWORD *)v28 + 28);
              }
            }
            INVOKEOFFCOPYBITS(
              a3,
              a1,
              (struct _POINTL *)((char *)v28 + 116),
              v25,
              0,
              0,
              &v37,
              (struct _XLATEOBJ *)&v37,
              v29,
              v30);
            if ( v24 )
              GreUnlockDisplayDevice(v24[7]);
            if ( v21 )
              GreUnlockDisplayDevice(v21[7]);
          }
          v19 = (const struct _RECTL *)(v36 + 4);
          v35 = (struct _POINTL *)((char *)v35 + 1);
          v20 = (const struct _RECTL *)((char *)v28 + 44);
          v36 += 4;
        }
        while ( v35 != v33 );
      }
      SINGLEREADERLOCK::vUnlock((struct SPRITE *)((char *)v28 + 180));
    }
  }
}
