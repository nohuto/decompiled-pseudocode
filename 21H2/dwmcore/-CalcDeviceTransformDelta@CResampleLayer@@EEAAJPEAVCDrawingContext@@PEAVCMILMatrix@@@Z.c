/*
 * XREFs of ?CalcDeviceTransformDelta@CResampleLayer@@EEAAJPEAVCDrawingContext@@PEAVCMILMatrix@@@Z @ 0x1801DCE80
 * Callers:
 *     <none>
 * Callees:
 *     ?Translate@CMILMatrix@@QEAAXMM@Z @ 0x18003CF50 (-Translate@CMILMatrix@@QEAAXMM@Z.c)
 *     ?Scale@CMILMatrix@@QEAAXMMM@Z @ 0x1800D17D8 (-Scale@CMILMatrix@@QEAAXMMM@Z.c)
 */

__int64 __fastcall CResampleLayer::CalcDeviceTransformDelta(
        CResampleLayer *this,
        struct CDrawingContext *a2,
        struct CMILMatrix *a3)
{
  unsigned int v5; // eax
  __m128i v6; // xmm2
  int v7; // eax
  __int128 v8; // xmm1
  int v9; // eax
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v13; // [rsp+20h] [rbp-50h] BYREF
  __int128 v14; // [rsp+30h] [rbp-40h]
  __int128 v15; // [rsp+40h] [rbp-30h]
  __int128 v16; // [rsp+50h] [rbp-20h]
  int v17; // [rsp+60h] [rbp-10h]

  BYTE1(v17) = BYTE1(v17) & 0xC0 | 0x17;
  v5 = -*((_DWORD *)this + 5);
  v14 = _xmm;
  v16 = _xmm;
  v13 = _xmm;
  v6 = _mm_cvtsi32_si128(v5);
  v7 = *((_DWORD *)this + 4);
  v15 = _xmm;
  LOBYTE(v17) = 85;
  CMILMatrix::Translate((CMILMatrix *)&v13, (float)-v7, _mm_cvtepi32_ps(v6).m128_f32[0]);
  CMILMatrix::Scale((CMILMatrix *)&v13, 1.0 / *((float *)this + 34), 1.0 / *((float *)this + 35), 1.0);
  v8 = v14;
  v9 = v17;
  *(_OWORD *)a3 = v13;
  v10 = v15;
  *((_OWORD *)a3 + 1) = v8;
  v11 = v16;
  *((_OWORD *)a3 + 2) = v10;
  *((_OWORD *)a3 + 3) = v11;
  *((_DWORD *)a3 + 16) = v9;
  return 0LL;
}
