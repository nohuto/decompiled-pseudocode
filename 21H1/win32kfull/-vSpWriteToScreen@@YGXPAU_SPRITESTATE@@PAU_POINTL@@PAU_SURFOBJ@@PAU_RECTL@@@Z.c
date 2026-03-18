/*
 * XREFs of ?vSpWriteToScreen@@YGXPAU_SPRITESTATE@@PAU_POINTL@@PAU_SURFOBJ@@PAU_RECTL@@@Z @ 0x1E3239
 * Callers:
 *     ?vSpRedrawSprite@@YGXPAVSPRITE@@@Z @ 0x9FD10 (-vSpRedrawSprite@@YGXPAVSPRITE@@@Z.c)
 *     ?bSpTearDownSprites@@YGHPAUHDEV__@@PAU_RECTL@@H@Z @ 0x1DE451 (-bSpTearDownSprites@@YGHPAUHDEV__@@PAU_RECTL@@H@Z.c)
 *     ?vSpRedrawArea@@YGXPAU_SPRITESTATE@@PAU_RECTL@@H@Z @ 0x1E1DFF (-vSpRedrawArea@@YGXPAU_SPRITESTATE@@PAU_RECTL@@H@Z.c)
 *     ?vSpRedrawUncoveredArea@@YGXPAVSPRITE@@PAU_RECTL@@@Z @ 0x1E22F2 (-vSpRedrawUncoveredArea@@YGXPAVSPRITE@@PAU_RECTL@@@Z.c)
 * Callees:
 *     ?bEmpty@ERECTL@@QBEHXZ @ 0x4F396 (-bEmpty@ERECTL@@QBEHXZ.c)
 *     ?INVOKEOFFCOPYBITS@@YGHPAU_POINTL@@PAU_SURFOBJ@@01PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@0@Z @ 0x92B62 (-INVOKEOFFCOPYBITS@@YGHPAU_POINTL@@PAU_SURFOBJ@@01PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@0@Z.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     ?bConcurrent@@YGHPAU_SPRITESTATE@@@Z @ 0x1DCDEA (-bConcurrent@@YGHPAU_SPRITESTATE@@@Z.c)
 *     ?vSetup@ECLIPOBJTMPIFNEEDED@@QAEXHPAVREGION@@AAVERECTL@@H@Z @ 0x1DFC7A (-vSetup@ECLIPOBJTMPIFNEEDED@@QAEXHPAVREGION@@AAVERECTL@@H@Z.c)
 */

void __userpurge vSpWriteToScreen(
        struct _POINTL *a1@<edx>,
        int *a2@<ecx>,
        struct _SURFOBJ *a3,
        struct _POINTL *a4,
        struct _SURFOBJ *a5,
        struct _RECTL *a6)
{
  LONG *p_lDelta; // esi
  struct REGION *v8; // eax
  int v9; // eax
  HSURF hsurf; // eax
  SURFOBJ *v11; // eax
  LONG *v12; // edi
  SURFOBJ *v13; // edx
  HSURF v14; // ecx
  struct REGION *v15; // [esp-Ch] [ebp-B4h]
  struct _RECTL *v16; // [esp+0h] [ebp-A8h]
  struct _POINTL *v17; // [esp+4h] [ebp-A4h]
  struct _POINTL *v20; // [esp+1Ch] [ebp-8Ch]
  char v21[4]; // [esp+20h] [ebp-88h] BYREF
  char v22[44]; // [esp+24h] [ebp-84h] BYREF
  REGION *v23; // [esp+50h] [ebp-58h]
  int v24; // [esp+64h] [ebp-44h]
  int v25; // [esp+68h] [ebp-40h]
  int v26; // [esp+90h] [ebp-18h]
  int v27; // [esp+98h] [ebp-10h]
  int v28; // [esp+9Ch] [ebp-Ch]

  p_lDelta = 0;
  v8 = (struct REGION *)a2[161];
  v24 = 0;
  v25 = 0;
  v26 = 1;
  v27 = 0;
  v23 = 0;
  v28 = 0;
  v20 = 0;
  if ( v8 )
  {
    v15 = v8;
    v9 = bConcurrent(a2);
    ECLIPOBJTMPIFNEEDED::vSetup((ECLIPOBJTMPIFNEEDED *)v21, v9, v15, (struct ERECTL *)a4, 0);
    if ( ERECTL::bEmpty((ERECTL *)v22) )
      goto LABEL_15;
    v20 = (struct _POINTL *)v21;
  }
  hsurf = a3[1].hsurf;
  a3->iUniq = 0;
  if ( ((unsigned int)hsurf & 0x80004000) != 0 && ((unsigned __int16)hsurf & 0x200) == 0 )
  {
    p_lDelta = &a3[-1].lDelta;
    GreLockDisplayDevice(a3->hdev);
  }
  v11 = (SURFOBJ *)a2[4];
  v12 = 0;
  v13 = v11;
  if ( v11 )
  {
    v14 = v11[1].hsurf;
    if ( ((unsigned int)v14 & 0x80004000) != 0 && ((unsigned __int16)v14 & 0x200) == 0 )
    {
      v12 = &v11[-1].lDelta;
      GreLockDisplayDevice(v11->hdev);
      v13 = (SURFOBJ *)a2[4];
    }
  }
  INVOKEOFFCOPYBITS(v13, &gptlZero.x, a1, a3, v20, 0, (struct _CLIPOBJ *)a4, (struct _XLATEOBJ *)a4, v16, v17);
  if ( v12 )
    GreUnlockDisplayDevice(v12[7]);
  if ( p_lDelta )
    GreUnlockDisplayDevice(p_lDelta[7]);
LABEL_15:
  if ( v28 )
    REGION::vDeleteREGION(v23);
}
