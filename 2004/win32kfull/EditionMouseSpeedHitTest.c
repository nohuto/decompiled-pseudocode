/*
 * XREFs of EditionMouseSpeedHitTest @ 0x1C00B0A10
 * Callers:
 *     <none>
 * Callees:
 *     TransformVectorWithInputTargetPrecedence @ 0x1C0052118 (TransformVectorWithInputTargetPrecedence.c)
 *     IsThreadDesktopComposed @ 0x1C0069C78 (IsThreadDesktopComposed.c)
 *     xxxSpeedHitTest @ 0x1C00B0B54 (xxxSpeedHitTest.c)
 *     INPUTDEST_FROM_PWND @ 0x1C01270A0 (INPUTDEST_FROM_PWND.c)
 *     memset @ 0x1C015C000 (memset.c)
 */

_OWORD *__fastcall EditionMouseSpeedHitTest(
        _OWORD *a1,
        __int64 *a2,
        int a3,
        unsigned __int16 a4,
        unsigned __int16 a5,
        __int64 a6,
        int a7,
        __int64 a8,
        int a9,
        int a10,
        _DWORD *a11,
        __int64 a12)
{
  int v15; // eax
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  _OWORD *result; // rax
  int v23; // r8d
  __int64 v24; // r10
  _OWORD *v25; // rax
  __int128 v26; // xmm1
  __int128 v27; // xmm0
  __int128 v28; // xmm1
  __int128 v29; // xmm0
  int v30[2]; // [rsp+38h] [rbp-99h] BYREF
  __int64 v31; // [rsp+40h] [rbp-91h]
  int v32; // [rsp+48h] [rbp-89h]
  __int64 v33; // [rsp+4Ch] [rbp-85h]
  int v34; // [rsp+54h] [rbp-7Dh]
  __int64 v35; // [rsp+58h] [rbp-79h]
  int v36; // [rsp+60h] [rbp-71h]
  int v37; // [rsp+64h] [rbp-6Dh]
  __int64 v38; // [rsp+68h] [rbp-69h]
  __int64 v39[14]; // [rsp+78h] [rbp-59h] BYREF

  if ( gspwndInternalCapture )
  {
    if ( (unsigned int)IsThreadDesktopComposed(gptiCurrent) )
      TransformVectorWithInputTargetPrecedence(v24, (int)a2, v23);
    if ( a11 )
      *a11 = 1;
    v25 = (_OWORD *)INPUTDEST_FROM_PWND(v39, gspwndInternalCapture);
    v26 = v25[1];
    *a1 = *v25;
    v27 = v25[2];
    a1[1] = v26;
    v28 = v25[3];
    a1[2] = v27;
    v29 = v25[4];
    a1[3] = v28;
    v20 = v25[5];
    a1[4] = v29;
    v21 = v25[6];
  }
  else
  {
    v33 = *a2;
    v38 = a6;
    v36 = a7;
    v35 = a8;
    v32 = 0;
    v34 = 0;
    v37 = 0;
    v30[0] = 4;
    v30[1] = MouseButtonToPointerFlags(a4);
    v31 = a5;
    memset(v39, 0, sizeof(v39));
    v15 = xxxSpeedHitTest(a10, (int)v30, a9, a3, a12, (__int64)v39);
    *a2 = v33;
    if ( a11 )
      *a11 = v15 != 0;
    v16 = *(_OWORD *)&v39[2];
    *a1 = *(_OWORD *)v39;
    v17 = *(_OWORD *)&v39[4];
    a1[1] = v16;
    v18 = *(_OWORD *)&v39[6];
    a1[2] = v17;
    v19 = *(_OWORD *)&v39[8];
    a1[3] = v18;
    v20 = *(_OWORD *)&v39[10];
    a1[4] = v19;
    v21 = *(_OWORD *)&v39[12];
  }
  result = a1;
  a1[5] = v20;
  a1[6] = v21;
  return result;
}
