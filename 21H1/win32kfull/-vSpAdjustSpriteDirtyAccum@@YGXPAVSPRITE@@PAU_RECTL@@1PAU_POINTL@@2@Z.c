/*
 * XREFs of ?vSpAdjustSpriteDirtyAccum@@YGXPAVSPRITE@@PAU_RECTL@@1PAU_POINTL@@2@Z @ 0x11EEC
 * Callers:
 *     ?GdiAdjustSpriteDirtyAccum@@YGHPAUHDEV__@@PAUHWND__@@PAU_RECTL@@2PAU_POINTL@@3@Z @ 0x11E4A (-GdiAdjustSpriteDirtyAccum@@YGHPAUHDEV__@@PAUHWND__@@PAU_RECTL@@2PAU_POINTL@@3@Z.c)
 * Callees:
 *     ?bOffsetAdd@ERECTL@@QAEHABU_POINTL@@H@Z @ 0x53E36 (-bOffsetAdd@ERECTL@@QAEHABU_POINTL@@H@Z.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 */

void __userpurge vSpAdjustSpriteDirtyAccum(
        int a1@<ecx>,
        struct SPRITE *a2,
        struct _RECTL *a3,
        struct _RECTL *a4,
        struct _POINTL *a5,
        struct _POINTL *a6)
{
  struct _RECTL *v7; // ecx
  _DWORD v8[2]; // [esp+14h] [ebp-20h] BYREF
  _DWORD v9[4]; // [esp+1Ch] [ebp-18h] BYREF

  REGION::vDeleteREGION(*(REGION **)(a1 + 136));
  *(_DWORD *)(a1 + 136) = 0;
  v9[0] = -a3->left;
  v9[1] = -a3->top;
  v9[2] = *((_DWORD *)a2 + 2);
  v9[3] = *((_DWORD *)a2 + 3);
  RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v8);
  if ( v8[0] )
  {
    ERECTL::bOffsetAdd((ERECTL *)v9, (const struct _POINTL *)a4, 0);
    RGNOBJ::vSet((RGNOBJ *)v8, v7);
    *(_DWORD *)(a1 + 136) = v8[0];
  }
  if ( v8[1] == 1 )
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)v8);
}
