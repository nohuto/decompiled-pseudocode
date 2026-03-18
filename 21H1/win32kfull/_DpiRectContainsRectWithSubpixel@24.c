/*
 * XREFs of _DpiRectContainsRectWithSubpixel@24 @ 0x150EDA
 * Callers:
 *     ?CalcVisRgnWorker@@YGHQAUtagWND@@PAPAUHRGN__@@K@Z @ 0x37040 (-CalcVisRgnWorker@@YGHQAUtagWND@@PAPAUHRGN__@@K@Z.c)
 * Callees:
 *     ?GetDpiRectWithSubpixel@@YGXPAUtagRECT@@PAMPAUtagWND@@21111@Z @ 0x14FCA4 (-GetDpiRectWithSubpixel@@YGXPAUtagRECT@@PAMPAUtagWND@@21111@Z.c)
 *     ?RectContainsRect@@YGHMMMMMMMM@Z @ 0x14FED6 (-RectContainsRect@@YGHMMMMMMMM@Z.c)
 */

BOOL __fastcall DpiRectContainsRectWithSubpixel(int *a1, float *a2, float *a3, int *a4, float *a5, struct tagRECT *a6)
{
  float *v7; // [esp+20h] [ebp-20h] BYREF
  float *v8; // [esp+24h] [ebp-1Ch] BYREF
  float v9; // [esp+28h] [ebp-18h] BYREF
  float v10; // [esp+2Ch] [ebp-14h] BYREF
  float v11; // [esp+30h] [ebp-10h] BYREF
  float v12; // [esp+34h] [ebp-Ch] BYREF
  float v13; // [esp+38h] [ebp-8h] BYREF
  float v14; // [esp+3Ch] [ebp-4h] BYREF

  v9 = 0.0;
  v10 = 0.0;
  v11 = 0.0;
  v12 = 0.0;
  v13 = 0.0;
  v14 = 0.0;
  GetDpiRectWithSubpixel(
    a2,
    a1,
    a6,
    a3,
    (struct tagWND *)&v7,
    (struct tagWND *)&v8,
    &v9,
    &v10,
    COERCE_FLOAT_(0.0),
    COERCE_FLOAT_(0.0));
  GetDpiRectWithSubpixel(
    a5,
    a4,
    a6,
    (float *)&a6->left,
    (struct tagWND *)&v11,
    (struct tagWND *)&v12,
    &v13,
    &v14,
    v7,
    v8);
  return RectContainsRect(*(float *)&v7, *(float *)&v8, v9, v10, v11, v12, v13, v14);
}
