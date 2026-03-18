/*
 * XREFs of TryFillRenderState @ 0x1801A86B8
 * Callers:
 *     ?TryDrawSuperWetLocal@CSuperWetInkManager@@AEAAJPEAVCSuperWetSource@@PEAVCDrawingContext@@_NPEA_N@Z @ 0x1801A8404 (-TryDrawSuperWetLocal@CSuperWetInkManager@@AEAAJPEAVCSuperWetSource@@PEAVCDrawingContext@@_NPEA_.c)
 *     ?TryRegisterSuperWetForDrawHost@CSuperWetInkManager@@AEAAJPEAVCSuperWetSource@@PEAVCDrawingContext@@_NPEA_N@Z @ 0x1801A89B4 (-TryRegisterSuperWetForDrawHost@CSuperWetInkManager@@AEAAJPEAVCSuperWetSource@@PEAVCDrawingConte.c)
 *     ?TryRegisterSuperWetForDrawLocal@CSuperWetInkManager@@AEAAJPEAVCSuperWetSource@@PEAVCDrawingContext@@_NPEA_N@Z @ 0x1801A8B44 (-TryRegisterSuperWetForDrawLocal@CSuperWetInkManager@@AEAAJPEAVCSuperWetSource@@PEAVCDrawingCont.c)
 * Callees:
 *     ??$IsAffine@$00@CMILMatrix@@AEBA_N_N@Z @ 0x180096590 (--$IsAffine@$00@CMILMatrix@@AEBA_N_N@Z.c)
 *     ?Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z @ 0x1800DD36C (-Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     ?IsHDRTarget@CDrawingContext@@QEBA_NXZ @ 0x1801A7C04 (-IsHDRTarget@CDrawingContext@@QEBA_NXZ.c)
 */

bool __fastcall TryFillRenderState(CDrawingContext *this, unsigned __int8 a2, char a3, __int64 a4)
{
  int v4; // esi
  bool result; // al
  unsigned __int64 v8; // xmm1_8
  int v9; // eax
  int v10; // xmm0_4
  int v11; // xmm1_4
  int IsHDRTarget; // ecx
  _QWORD v13[6]; // [rsp+20h] [rbp-29h] BYREF
  __int64 v14; // [rsp+50h] [rbp+7h]
  int v15; // [rsp+60h] [rbp+17h]
  __int128 v16; // [rsp+70h] [rbp+27h]

  v4 = a2;
  *(_OWORD *)a4 = 0LL;
  v14 = 0LL;
  *(_OWORD *)(a4 + 16) = 0LL;
  *(_OWORD *)(a4 + 32) = 0LL;
  *(_QWORD *)(a4 + 48) = v14;
  if ( !a3 )
  {
    v15 = 0;
    CMatrixStack::Top((__int64)this + 368, (__int64)v13);
    result = CMILMatrix::IsAffine<1>((__int64)v13, 1);
    if ( !result )
      return result;
    *(_QWORD *)&v16 = v13[0];
    *((_QWORD *)&v16 + 1) = v13[2];
    v8 = _mm_unpacklo_ps((__m128)(unsigned int)v14, (__m128)HIDWORD(v14)).m128_u64[0];
    *(_OWORD *)a4 = v16;
    *(_QWORD *)(a4 + 16) = v8;
  }
  v9 = *((_DWORD *)this + 776);
  v10 = (int)FLOAT_1_0;
  if ( v9 )
    v11 = *(_DWORD *)(*((_QWORD *)this + 390) + 4LL * (unsigned int)(v9 - 1));
  else
    v11 = (int)FLOAT_1_0;
  *(_DWORD *)(a4 + 24) = v11;
  if ( *((float *)this + 18) != 0.0 )
    v10 = *((_DWORD *)this + 18);
  *(_DWORD *)(a4 + 44) = v10;
  IsHDRTarget = (unsigned __int8)CDrawingContext::IsHDRTarget(this);
  result = 1;
  *(_DWORD *)(a4 + 48) = IsHDRTarget;
  *(_DWORD *)(a4 + 52) = v4;
  return result;
}
