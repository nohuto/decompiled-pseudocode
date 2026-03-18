/*
 * XREFs of ?vSpRedrawUncoveredArea@@YGXPAVSPRITE@@PAU_RECTL@@@Z @ 0x1E22F2
 * Callers:
 *     ?bSpUpdatePosition@@YGHPAVSPRITE@@PAU_POINTL@@HH@Z @ 0xA0A28 (-bSpUpdatePosition@@YGHPAVSPRITE@@PAU_POINTL@@HH@Z.c)
 * Callees:
 *     ??0PUSHLOCKEX@@QAE@PAU_EX_PUSH_LOCK@@@Z @ 0x23BEC (--0PUSHLOCKEX@@QAE@PAU_EX_PUSH_LOCK@@@Z.c)
 *     ?INVOKEOFFCOPYBITS@@YGHPAU_POINTL@@PAU_SURFOBJ@@01PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@0@Z @ 0x92B62 (-INVOKEOFFCOPYBITS@@YGHPAU_POINTL@@PAU_SURFOBJ@@01PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@0@Z.c)
 *     ?vSpDeleteSurface@@YGXPAU_SURFOBJ@@@Z @ 0x9EDCC (-vSpDeleteSurface@@YGXPAU_SURFOBJ@@@Z.c)
 *     ?pSpFindInZ@@YIPAVSPRITE@@PAV1@PAU_RECTL@@@Z @ 0xEA5B4 (-pSpFindInZ@@YIPAVSPRITE@@PAV1@PAU_RECTL@@@Z.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     ?cSpSubtract@@YIKPBU_RECTL@@0PAU1@@Z @ 0x1DEF61 (-cSpSubtract@@YIKPBU_RECTL@@0PAU1@@Z.c)
 *     ?psoSpGetComposite@@YGPAU_SURFOBJ@@PAU_SPRITESTATE@@PAU_RECTL@@PAK@Z @ 0x1DFA3C (-psoSpGetComposite@@YGPAU_SURFOBJ@@PAU_SPRITESTATE@@PAU_RECTL@@PAK@Z.c)
 *     ?vRedo@UNDOWNDOBJSPRITEOVERLAPCLIP@@QAEXXZ @ 0x1DFBF4 (-vRedo@UNDOWNDOBJSPRITEOVERLAPCLIP@@QAEXXZ.c)
 *     ?vSpComposite@@YGXPAVSPRITE@@PAU_POINTL@@PAU_SURFOBJ@@PAU_RECTL@@@Z @ 0x1E0318 (-vSpComposite@@YGXPAVSPRITE@@PAU_POINTL@@PAU_SURFOBJ@@PAU_RECTL@@@Z.c)
 *     ?vSpUpdateLockedScreenAreas@@YGXPAU_SPRITESTATE@@PAU_POINTL@@PAU_RECTL@@PAU_CLIPOBJ@@H@Z @ 0x1E28CD (-vSpUpdateLockedScreenAreas@@YGXPAU_SPRITESTATE@@PAU_POINTL@@PAU_RECTL@@PAU_CLIPOBJ@@H@Z.c)
 *     ?vSpWriteToScreen@@YGXPAU_SPRITESTATE@@PAU_POINTL@@PAU_SURFOBJ@@PAU_RECTL@@@Z @ 0x1E3239 (-vSpWriteToScreen@@YGXPAU_SPRITESTATE@@PAU_POINTL@@PAU_SURFOBJ@@PAU_RECTL@@@Z.c)
 *     ?vUndo@UNDOWNDOBJSPRITEOVERLAPCLIP@@QAEXXZ @ 0x1E33D5 (-vUndo@UNDOWNDOBJSPRITEOVERLAPCLIP@@QAEXXZ.c)
 *     ?vUnlock@SINGLEREADERLOCK@@QAEXXZ @ 0x1E34D8 (-vUnlock@SINGLEREADERLOCK@@QAEXXZ.c)
 */

void __fastcall vSpRedrawUncoveredArea(int a1, const struct _RECTL *a2)
{
  int v2; // edi
  int v3; // esi
  int v4; // ebx
  struct _RECTL *v5; // esi
  struct SPRITE *i; // ecx
  const struct _RECTL *v7; // ecx
  struct _RECTL *v8; // eax
  int v9; // eax
  int v10; // edi
  int v11; // ecx
  SURFOBJ *v12; // eax
  char *v13; // esi
  int v14; // ecx
  bool v15; // zf
  struct SPRITE *v16; // eax
  _DWORD *v17; // edi
  struct _RECTL *v18; // ebx
  struct _RECTL *v19; // eax
  struct _RECTL *v20; // [esp+0h] [ebp-B0h]
  struct _CLIPOBJ *v21; // [esp+0h] [ebp-B0h]
  unsigned int *v22; // [esp+4h] [ebp-ACh]
  struct _POINTL *v23; // [esp+4h] [ebp-ACh]
  struct _POINTL *v24; // [esp+10h] [ebp-A0h]
  int v25; // [esp+14h] [ebp-9Ch] BYREF
  int v26; // [esp+18h] [ebp-98h]
  struct _RECTL *v27; // [esp+1Ch] [ebp-94h]
  int v28[2]; // [esp+20h] [ebp-90h] BYREF
  struct _RECTL *v29; // [esp+28h] [ebp-88h]
  int v30; // [esp+2Ch] [ebp-84h]
  int v31; // [esp+30h] [ebp-80h]
  const struct _RECTL *v32; // [esp+34h] [ebp-7Ch] BYREF
  ULONG StartingIndex; // [esp+38h] [ebp-78h] BYREF
  int v34; // [esp+3Ch] [ebp-74h]
  struct _RECTL *v35; // [esp+40h] [ebp-70h]
  struct _SPRITESTATE *Composite; // [esp+44h] [ebp-6Ch]
  int v37; // [esp+48h] [ebp-68h]
  struct _CLIPOBJ *v38; // [esp+4Ch] [ebp-64h]
  struct SPRITE *v39; // [esp+50h] [ebp-60h]
  _DWORD *v40; // [esp+54h] [ebp-5Ch]
  struct _RECTL v41; // [esp+58h] [ebp-58h] BYREF
  struct _RECTL v42; // [esp+68h] [ebp-48h] BYREF

  v37 = a1;
  memset(&v41, 0, sizeof(v41));
  v2 = a1;
  v40 = *(_DWORD **)(a1 + 12);
  if ( (*(_DWORD *)(*v40 + 24) & 0x400) != 0 )
    return;
  v3 = cSpSubtract((const struct _RECTL *)(a1 + 44), a2, &v42);
  v30 = v3;
  if ( !v3 )
    return;
  v4 = 0;
  v34 = 0;
  v38 = 0;
  StartingIndex = 0;
  Composite = (struct _SPRITESTATE *)psoSpGetComposite(
                                       v2 + 44,
                                       (int)v40,
                                       (struct _SPRITESTATE *)&StartingIndex,
                                       v20,
                                       v22);
  if ( !Composite )
    return;
  if ( v40[161] )
  {
    v39 = (struct SPRITE *)v3;
    v5 = &v42;
    do
    {
      vSpUpdateLockedScreenAreas((struct _SPRITESTATE *)v5++, 0, (struct _RECTL *)1, v21, (int)v23);
      v39 = (struct SPRITE *)((char *)v39 - 1);
    }
    while ( v39 );
    v3 = v30;
    v2 = v37;
  }
  v28[0] = -*(_DWORD *)(v2 + 44);
  v28[1] = -*(_DWORD *)(v2 + 48);
  for ( i = (struct SPRITE *)v40[1]; ; i = (struct SPRITE *)*((_DWORD *)v39 + 4) )
  {
    v16 = pSpFindInZ(i, (struct _RECTL *)(v2 + 44));
    v39 = v16;
    if ( !v16 )
      break;
    if ( v16 != (struct SPRITE *)v2 && v3 )
    {
      v7 = (const struct _RECTL *)((char *)v16 + 44);
      v35 = (struct _RECTL *)v3;
      v8 = &v42;
      v32 = v7;
      v29 = &v42;
      do
      {
        if ( bIntersect(v8, v7, &v41) )
        {
          if ( !v38 )
          {
            v31 = v3;
            v24 = (struct _POINTL *)(v2 + 116);
            v38 = (struct _CLIPOBJ *)&v42;
            do
            {
              v9 = *(_DWORD *)(v2 + 112);
              v10 = 0;
              if ( v9 )
              {
                v11 = *(_DWORD *)(v9 + 56);
                if ( (v11 & 0x80004000) != 0 && (v11 & 0x200) == 0 )
                {
                  v10 = v9 - 16;
                  GreLockDisplayDevice(*(_DWORD *)(v9 - 16 + 28));
                }
              }
              v12 = (SURFOBJ *)Composite;
              v13 = 0;
              v14 = *((_DWORD *)Composite + 14);
              if ( (v14 & 0x80004000) != 0 && (v14 & 0x200) == 0 )
              {
                v13 = (char *)Composite - 16;
                GreLockDisplayDevice(*((_DWORD *)Composite + 3));
                v12 = (SURFOBJ *)Composite;
              }
              INVOKEOFFCOPYBITS(
                v12,
                v28,
                v24,
                *(struct _SURFOBJ **)(v37 + 112),
                0,
                0,
                v38,
                (struct _XLATEOBJ *)v38,
                (struct _RECTL *)v21,
                v23);
              if ( v13 )
                GreUnlockDisplayDevice(*((_DWORD *)v13 + 7));
              if ( v10 )
                GreUnlockDisplayDevice(*(_DWORD *)(v10 + 28));
              v38 = (struct _CLIPOBJ *)((char *)v38 + 16);
              v15 = v31-- == 1;
              v2 = v37;
            }
            while ( !v15 );
            v3 = v30;
            v38 = (struct _CLIPOBJ *)1;
          }
          vSpComposite(v28, (int)v39, Composite, (struct _POINTL *)&v41, (struct _SURFOBJ *)v21, (struct _RECTL *)v23);
        }
        v7 = v32;
        v8 = v29 + 1;
        v15 = v35 == (struct _RECTL *)1;
        v35 = (struct _RECTL *)((char *)v35 - 1);
        ++v29;
      }
      while ( !v15 );
      v16 = v39;
    }
    SINGLEREADERLOCK::vUnlock((struct SPRITE *)((char *)v16 + 180));
  }
  v25 = 0;
  v26 = 0;
  if ( *(_DWORD *)(v2 + 40) )
  {
    v4 = v2;
    v26 = v3;
    v34 = v2;
    v25 = v2;
    v27 = &v42;
    UNDOWNDOBJSPRITEOVERLAPCLIP::vUndo((UNDOWNDOBJSPRITEOVERLAPCLIP *)&v25);
  }
  if ( v3 )
  {
    if ( v38 )
    {
      v17 = v40;
      v18 = &v42;
      do
      {
        vSpWriteToScreen(Composite, (struct _POINTL *)v18++, (struct _SURFOBJ *)v21, (struct _RECTL *)v23);
        --v3;
      }
      while ( v3 );
      v4 = v34;
      goto LABEL_44;
    }
    v19 = &v42;
    v35 = &v42;
    do
    {
      vSpWriteToScreen(
        *(struct _SPRITESTATE **)(v2 + 112),
        (struct _POINTL *)v19,
        (struct _SURFOBJ *)v21,
        (struct _RECTL *)v23);
      v19 = ++v35;
      --v3;
    }
    while ( v3 );
    v4 = v34;
  }
  v17 = v40;
LABEL_44:
  if ( StartingIndex == -1 )
  {
    vSpDeleteSurface((SURFOBJ *)Composite);
  }
  else
  {
    PUSHLOCKEX::PUSHLOCKEX((PUSHLOCKEX *)&v32, (struct _EX_PUSH_LOCK *)(v17 + 94));
    RtlClearBits((PRTL_BITMAP)v17 + 45, StartingIndex, 1u);
    if ( v32 )
    {
      ExReleasePushLockExclusiveEx(v32, 0);
      KeLeaveCriticalRegion();
    }
  }
  if ( v4 )
    UNDOWNDOBJSPRITEOVERLAPCLIP::vRedo((UNDOWNDOBJSPRITEOVERLAPCLIP *)&v25);
}
