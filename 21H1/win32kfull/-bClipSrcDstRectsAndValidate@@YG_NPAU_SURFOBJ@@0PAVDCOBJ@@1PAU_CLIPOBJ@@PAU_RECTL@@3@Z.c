/*
 * XREFs of ?bClipSrcDstRectsAndValidate@@YG_NPAU_SURFOBJ@@0PAVDCOBJ@@1PAU_CLIPOBJ@@PAU_RECTL@@3@Z @ 0x4E1BE
 * Callers:
 *     _GreSetDIBitsToDeviceInternal@64 @ 0x4E312 (_GreSetDIBitsToDeviceInternal@64.c)
 * Callees:
 *     ?vGetSurfaceBoundsRect@@YGXPAU_SURFOBJ@@PAU_RECTL@@@Z @ 0x4E2CC (-vGetSurfaceBoundsRect@@YGXPAU_SURFOBJ@@PAU_RECTL@@@Z.c)
 *     ?bDpiScaleTransform@DC@@QBEHXZ @ 0x4F3AC (-bDpiScaleTransform@DC@@QBEHXZ.c)
 *     ?bClipSrcDstRects@@YG_NQAU_RECTL@@0PAU1@1@Z @ 0x4F3C2 (-bClipSrcDstRects@@YG_NQAU_RECTL@@0PAU1@1@Z.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _ltoef_c@8 @ 0xEEE68 (_ltoef_c@8.c)
 *     _divff3_c@12 @ 0xEF19C (_divff3_c@12.c)
 *     ?vScale@ERECTL@@QAEXABVPOINTFL@@@Z @ 0x1CDA4B (-vScale@ERECTL@@QAEXABVPOINTFL@@@Z.c)
 */

bool __stdcall bClipSrcDstRectsAndValidate(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        struct DCOBJ *a3,
        LONG *a4,
        struct _CLIPOBJ *a5,
        struct _RECTL *a6,
        struct _RECTL *a7)
{
  int v7; // edx
  _DWORD *v8; // ecx
  int v9; // edx
  _DWORD *v10; // ecx
  _DWORD *v11; // ecx
  _DWORD *v12; // ecx
  struct _CLIPOBJ *v13; // edi
  bool result; // al
  struct _SURFOBJ *v15; // [esp+0h] [ebp-94h]
  struct _SURFOBJ *v16; // [esp+0h] [ebp-94h]
  struct _RECTL *v17; // [esp+0h] [ebp-94h]
  struct _RECTL *v18; // [esp+4h] [ebp-90h]
  struct _RECTL *v19; // [esp+4h] [ebp-90h]
  struct _RECTL *v20; // [esp+4h] [ebp-90h]
  int v21; // [esp+18h] [ebp-7Ch] BYREF
  int v22; // [esp+1Ch] [ebp-78h]
  int v23; // [esp+20h] [ebp-74h]
  int v24; // [esp+24h] [ebp-70h]
  struct _CLIPOBJ *v25; // [esp+28h] [ebp-6Ch]
  _BYTE v26[16]; // [esp+2Ch] [ebp-68h] BYREF
  _BYTE v27[16]; // [esp+3Ch] [ebp-58h] BYREF
  struct _RECTL v28; // [esp+4Ch] [ebp-48h] BYREF
  struct _RECTL v29; // [esp+5Ch] [ebp-38h] BYREF
  int v30; // [esp+6Ch] [ebp-28h] BYREF
  int v31; // [esp+70h] [ebp-24h]
  int v32; // [esp+74h] [ebp-20h] BYREF
  int v33; // [esp+78h] [ebp-1Ch]
  int v34; // [esp+7Ch] [ebp-18h] BYREF
  int v35; // [esp+80h] [ebp-14h]
  int v36; // [esp+84h] [ebp-10h] BYREF
  int v37; // [esp+88h] [ebp-Ch]

  v25 = a5;
  v28.left = *a4;
  v28.top = a4[1];
  v28.right = a4[2];
  v28.bottom = a4[3];
  v29.left = a5->iUniq;
  v29.top = a5->rclBounds.left;
  v29.right = a5->rclBounds.top;
  v29.bottom = a5->rclBounds.right;
  vGetSurfaceBoundsRect(v15, v18);
  vGetSurfaceBoundsRect(v16, v19);
  if ( a1 && DC::bDpiScaleTransform((DC *)a1->dhsurf) )
  {
    v21 = v8[131];
    v22 = v8[132];
    v23 = v8[133];
    v24 = v8[134];
    v34 = v8[131];
    v35 = v8[132];
    v36 = v8[133];
    v37 = v8[134];
    v30 = v34;
    v31 = v35;
    v32 = v23;
    v33 = v24;
    ltoef_c(v7, &v34);
    ltoef_c(1, &v36);
    divff3_c(&v34, &v34, &v30);
    divff3_c(&v36, &v36, &v32);
    ERECTL::vScale((ERECTL *)v26, (const struct POINTFL *)&v34);
    ERECTL::vScale((ERECTL *)&v28, (const struct POINTFL *)&v34);
  }
  if ( a2 && DC::bDpiScaleTransform((DC *)a2->dhsurf) )
  {
    v34 = v10[131];
    v35 = v10[132];
    v36 = v10[133];
    v37 = v10[134];
    v21 = v10[131];
    v22 = v10[132];
    v23 = v10[133];
    v24 = v10[134];
    v30 = v21;
    v31 = v22;
    v32 = v36;
    v33 = v37;
    ltoef_c(v9, &v34);
    ltoef_c(1, &v36);
    divff3_c(&v34, &v34, &v30);
    divff3_c(&v36, &v36, &v32);
    ERECTL::vScale((ERECTL *)v27, (const struct POINTFL *)&v34);
    ERECTL::vScale((ERECTL *)&v29, (const struct POINTFL *)&v34);
  }
  if ( !bClipSrcDstRects(&v28, &v29, v17, v20) )
    return 0;
  if ( a1 && DC::bDpiScaleTransform((DC *)a1->dhsurf) )
  {
    v21 = v11[131];
    v22 = v11[132];
    v23 = v11[133];
    v24 = v11[134];
    ERECTL::vScale((ERECTL *)&v28, (const struct POINTFL *)&v21);
  }
  if ( a2 )
  {
    if ( DC::bDpiScaleTransform((DC *)a2->dhsurf) )
    {
      v21 = v12[131];
      v22 = v12[132];
      v23 = v12[133];
      v24 = v12[134];
      ERECTL::vScale((ERECTL *)&v29, (const struct POINTFL *)&v21);
    }
  }
  v13 = v25;
  result = 1;
  v25->iUniq = v29.left;
  v13 = (struct _CLIPOBJ *)((char *)v13 + 4);
  v13->iUniq = v29.top;
  v13 = (struct _CLIPOBJ *)((char *)v13 + 4);
  v13->iUniq = v29.right;
  v13->rclBounds.left = v29.bottom;
  *(struct _RECTL *)a4 = v28;
  return result;
}
