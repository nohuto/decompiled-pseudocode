/*
 * XREFs of ?_TTUpdateBestTarget@@YGXPAUtagPNTRWINDOWHITTTESTARGS@@PAUtagWND@@IPBUtagPOINT@@PAUtagRECT@@HU4@K@Z @ 0x17A464
 * Callers:
 *     ?xxxPointerInsideNCTargeting@@YGXPAUtagWND@@UtagPOINT@@PAUtagPNTRWINDOWHITTTESTARGS@@UtagRECT@@K@Z @ 0x17A5BF (-xxxPointerInsideNCTargeting@@YGXPAUtagWND@@UtagPOINT@@PAUtagPNTRWINDOWHITTTESTARGS@@UtagRECT@@K.c)
 *     ?xxxTargetingHitTest@@YGPAUHWND__@@PAUtagWND@@UtagPOINT@@1PAUtagPNTRWINDOWHITTTESTARGS@@PAHUtagRECT@@KW4tagTARGETING_PROPERTY@@@Z @ 0x17AAE3 (-xxxTargetingHitTest@@YGPAUHWND__@@PAUtagWND@@UtagPOINT@@1PAUtagPNTRWINDOWHITTTESTARGS@@PAHUtagR.c)
 *     ?xxxWindowHitTestFromTargetingProperty@@YGPAUHWND__@@PAUtagWND@@UtagPOINT@@PAUtagPNTRWINDOWHITTTESTARGS@@PAHW4tagTARGETING_PROPERTY@@UtagRECT@@@Z @ 0x17B14E (-xxxWindowHitTestFromTargetingProperty@@YGPAUHWND__@@PAUtagWND@@UtagPOINT@@PAUtagPNTRWINDOWHITTT.c)
 * Callees:
 *     _IntersectRect@12 @ 0x36374 (_IntersectRect@12.c)
 *     ?IsCompositionInputWindow@@YGHPBUtagWND@@@Z @ 0x6E522 (-IsCompositionInputWindow@@YGHPBUtagWND@@@Z.c)
 *     _EnterFloatingPointRegion@0 @ 0xAD89E (_EnterFloatingPointRegion@0.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     __ftol2_sse @ 0xF9210 (__ftol2_sse.c)
 *     ?TransformRect@@YGXPBU_D3DMATRIX@@PAUtagRECT@@H@Z @ 0x17A360 (-TransformRect@@YGXPBU_D3DMATRIX@@PAUtagRECT@@H@Z.c)
 */

void __userpurge _TTUpdateBestTarget(
        int *a1@<edx>,
        _DWORD *a2@<ecx>,
        struct tagPNTRWINDOWHITTTESTARGS *a3,
        struct tagWND *a4,
        _DWORD *a5,
        const struct tagPOINT *a6,
        struct tagRECT *a7,
        int a8,
        struct tagRECT a9,
        unsigned int a10)
{
  int v10; // eax
  _DWORD *v12; // esi
  _DWORD *v13; // esi
  int v14; // eax
  unsigned int v15; // eax
  unsigned int v16; // eax
  float *v17; // esi
  struct tagRECT *v18; // [esp+0h] [ebp-2Ch]
  int v19; // [esp+4h] [ebp-28h]
  float v20; // [esp+Ch] [ebp-20h]
  float v21; // [esp+Ch] [ebp-20h]
  int v22[5]; // [esp+10h] [ebp-1Ch] BYREF

  v10 = *a1;
  v22[0] = a8;
  a2[9] = v10;
  v22[1] = a9.left;
  a2[10] = a3;
  v22[2] = a9.top;
  v22[3] = a9.right;
  v12 = a5;
  if ( !a5 )
    v12 = (_DWORD *)(a1[5] + 52);
  a2[11] = *v12;
  v13 = v12 + 1;
  a2[12] = *v13++;
  a2[13] = *v13;
  a2[14] = v13[1];
  if ( a4 )
  {
    a2[7] = *(_DWORD *)a4;
    a2[8] = *((_DWORD *)a4 + 1);
  }
  v14 = a2[35];
  if ( a6 )
    v15 = v14 | 1;
  else
    v15 = v14 & 0xFFFFFFFE;
  if ( (_WORD)a7 == 3 )
    v16 = v15 | 2;
  else
    v16 = v15 & 0xFFFFFFFD;
  a2[35] = v16;
  if ( !IsCompositionInputWindow() )
    IntersectRect(a2 + 11, a2 + 11, v22);
  if ( a2[15] && a2[17] )
  {
    if ( EnterFloatingPointRegion() )
    {
      v17 = (float *)a2[17];
      v20 = (float)(int)a2[7];
      a2[7] = (int)(v20 * *v17);
      v21 = (float)(int)a2[8];
      a2[8] = (int)(v17[5] * v21);
      TransformRect((int)(a2 + 11), 0, v18, v19);
      KeRestoreFloatingPointState(_gfsSave);
    }
  }
}
