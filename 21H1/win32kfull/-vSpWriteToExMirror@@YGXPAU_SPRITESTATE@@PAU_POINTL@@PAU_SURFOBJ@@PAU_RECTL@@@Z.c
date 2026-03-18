/*
 * XREFs of ?vSpWriteToExMirror@@YGXPAU_SPRITESTATE@@PAU_POINTL@@PAU_SURFOBJ@@PAU_RECTL@@@Z @ 0x1E3184
 * Callers:
 *     ?vSpRedrawAreaExMirror@@YGXPAU_SPRITESTATE@@PAU_RECTL@@@Z @ 0x1E1FC9 (-vSpRedrawAreaExMirror@@YGXPAU_SPRITESTATE@@PAU_RECTL@@@Z.c)
 * Callees:
 *     ?bEmpty@ERECTL@@QBEHXZ @ 0x4F396 (-bEmpty@ERECTL@@QBEHXZ.c)
 *     ?INVOKEOFFCOPYBITS@@YGHPAU_POINTL@@PAU_SURFOBJ@@01PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@0@Z @ 0x92B62 (-INVOKEOFFCOPYBITS@@YGHPAU_POINTL@@PAU_SURFOBJ@@01PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@0@Z.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     ?bConcurrent@@YGHPAU_SPRITESTATE@@@Z @ 0x1DCDEA (-bConcurrent@@YGHPAU_SPRITESTATE@@@Z.c)
 *     ?vSetup@ECLIPOBJTMPIFNEEDED@@QAEXHPAVREGION@@AAVERECTL@@H@Z @ 0x1DFC7A (-vSetup@ECLIPOBJTMPIFNEEDED@@QAEXHPAVREGION@@AAVERECTL@@H@Z.c)
 */

void __userpurge vSpWriteToExMirror(
        struct _POINTL *a1@<edx>,
        int a2@<ecx>,
        struct _SURFOBJ *a3,
        struct _CLIPOBJ *a4,
        struct _SURFOBJ *a5,
        struct _RECTL *a6)
{
  struct _POINTL *v7; // eax
  struct REGION *v8; // ecx
  int v9; // eax
  struct REGION *v10; // [esp-Ch] [ebp-A4h]
  struct _RECTL *v11; // [esp+0h] [ebp-98h]
  struct _POINTL *v12; // [esp+4h] [ebp-94h]
  _BYTE v14[4]; // [esp+10h] [ebp-88h] BYREF
  _BYTE v15[44]; // [esp+14h] [ebp-84h] BYREF
  REGION *v16; // [esp+40h] [ebp-58h]
  int v17; // [esp+54h] [ebp-44h]
  int v18; // [esp+58h] [ebp-40h]
  int v19; // [esp+80h] [ebp-18h]
  int v20; // [esp+88h] [ebp-10h]
  int v21; // [esp+8Ch] [ebp-Ch]

  v19 = 1;
  v17 = 0;
  v7 = 0;
  v18 = 0;
  v8 = *(struct REGION **)(a2 + 644);
  v20 = 0;
  v16 = 0;
  v21 = 0;
  if ( v8 )
  {
    v10 = v8;
    v9 = bConcurrent((int *)a2);
    ECLIPOBJTMPIFNEEDED::vSetup((ECLIPOBJTMPIFNEEDED *)v14, v9, v10, (struct ERECTL *)a4, 0);
    if ( ERECTL::bEmpty((ERECTL *)v15) )
      goto LABEL_5;
    v7 = (struct _POINTL *)v14;
  }
  a3->iUniq = 0;
  INVOKEOFFCOPYBITS(*(SURFOBJ **)(a2 + 820), &gptlZero.x, a1, a3, v7, 0, a4, (struct _XLATEOBJ *)a4, v11, v12);
LABEL_5:
  if ( v21 )
    REGION::vDeleteREGION(v16);
}
