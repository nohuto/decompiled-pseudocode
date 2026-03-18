/*
 * XREFs of ?bClipSrcDstRects@@YG_NQAU_RECTL@@0PAU1@1@Z @ 0x4F3C2
 * Callers:
 *     ?bClipSrcDstRectsAndValidate@@YG_NPAU_SURFOBJ@@0PAVDCOBJ@@1PAU_CLIPOBJ@@PAU_RECTL@@3@Z @ 0x4E1BE (-bClipSrcDstRectsAndValidate@@YG_NPAU_SURFOBJ@@0PAVDCOBJ@@1PAU_CLIPOBJ@@PAU_RECTL@@3@Z.c)
 * Callees:
 *     ?bWrapped@ERECTL@@QBEHXZ @ 0x33892 (-bWrapped@ERECTL@@QBEHXZ.c)
 *     ??XERECTL@@QAEAAV0@ABU_RECTL@@@Z @ 0x4F46A (--XERECTL@@QAEAAV0@ABU_RECTL@@@Z.c)
 *     ?bOffsetAdd@ERECTL@@QAEHABU_POINTL@@H@Z @ 0x53E36 (-bOffsetAdd@ERECTL@@QAEHABU_POINTL@@H@Z.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 */

bool __userpurge bClipSrcDstRects@<al>(
        int a1@<edx>,
        int a2@<ecx>,
        struct _RECTL *const a3,
        struct _RECTL *const a4,
        struct _RECTL *a5,
        struct _RECTL *a6)
{
  LONG left; // eax
  LONG v8; // eax
  LONG v9; // edx
  ERECTL *v10; // ecx
  LONG v11; // eax
  LONG *v12; // ecx
  struct _RECTL *v13; // edi
  struct _POINTL v15; // [esp+10h] [ebp-28h] BYREF
  LONG v16; // [esp+18h] [ebp-20h]
  LONG v17; // [esp+1Ch] [ebp-1Ch]
  struct _RECTL *v18; // [esp+20h] [ebp-18h]
  LONG v19; // [esp+24h] [ebp-14h]
  LONG top; // [esp+28h] [ebp-10h]
  LONG right; // [esp+2Ch] [ebp-Ch]
  LONG bottom; // [esp+30h] [ebp-8h]

  left = a4->left;
  v18 = a3;
  v8 = left - a3->left;
  v19 = a3->left;
  v17 = v8;
  v15.x = v8;
  v9 = a4->top - a3->top;
  top = a3->top;
  v16 = v9;
  v15.y = v9;
  right = a3->right;
  bottom = a3->bottom;
  ERECTL::operator*=(a2);
  ERECTL::bOffsetAdd(v10, &v15, 0);
  ERECTL::operator*=(a1);
  v11 = v17;
  *a4 = *(struct _RECTL *)v12;
  v19 -= v11;
  right -= v11;
  v13 = v18;
  top -= v16;
  bottom -= v16;
  v18->left = *v12;
  v13 = (struct _RECTL *)((char *)v13 + 4);
  v13->left = v12[1];
  v13 = (struct _RECTL *)((char *)v13 + 4);
  v13->left = v12[2];
  v13->top = v12[3];
  return !ERECTL::bWrapped((ERECTL *)v12);
}
