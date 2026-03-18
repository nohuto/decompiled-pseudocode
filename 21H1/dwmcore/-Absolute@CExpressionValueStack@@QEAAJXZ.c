/*
 * XREFs of ?Absolute@CExpressionValueStack@@QEAAJXZ @ 0x1801FEF28
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x18002D560 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CExpressionValueStack::Absolute(CExpressionValueStack *this)
{
  int v1; // eax
  unsigned int v2; // ebx
  __int64 v3; // rdx
  int v4; // eax
  __m128 v5; // xmm3
  int v6; // xmm1_4
  unsigned int v8; // [rsp+20h] [rbp-28h]
  __int128 v9; // [rsp+30h] [rbp-18h]
  __int64 v10; // [rsp+30h] [rbp-18h]
  int v11; // [rsp+38h] [rbp-10h]

  v1 = *((_DWORD *)this + 4);
  if ( v1 )
  {
    this = (CExpressionValueStack *)*((_QWORD *)this + 3);
    v3 = 10LL * (unsigned int)(v1 - 1);
    v4 = *((_DWORD *)this + 20 * (unsigned int)(v1 - 1) + 18);
    switch ( v4 )
    {
      case 18:
        *((_DWORD *)this + 2 * v3) &= _xmm;
        *((_DWORD *)this + 2 * v3 + 18) = 18;
        break;
      case 35:
        v6 = *((_DWORD *)this + 2 * v3 + 1) & _xmm;
        *((_DWORD *)this + 2 * v3) &= _xmm;
        *((_DWORD *)this + 2 * v3 + 1) = v6;
        *((_DWORD *)this + 2 * v3 + 18) = 35;
        break;
      case 52:
        v10 = *((_QWORD *)this + v3);
        v11 = *((_DWORD *)this + 2 * v3 + 2);
        *((_DWORD *)this + 2 * v3 + 18) = 52;
        *((_DWORD *)this + 2 * v3) = v10 & _xmm;
        *((_DWORD *)this + 2 * v3 + 1) = HIDWORD(v10) & _xmm;
        *((_DWORD *)this + 2 * v3 + 2) = v11 & _xmm;
        break;
      case 69:
        v5 = (__m128)_mm_loadu_si128((const __m128i *)((char *)this + 8 * v3));
        *((_DWORD *)this + 2 * v3 + 18) = 69;
        LODWORD(v9) = v5.m128_i32[0] & _xmm;
        DWORD1(v9) = _mm_shuffle_ps(v5, v5, 85).m128_u32[0] & _xmm;
        DWORD2(v9) = _mm_shuffle_ps(v5, v5, 170).m128_u32[0] & _xmm;
        HIDWORD(v9) = _mm_shuffle_ps(v5, v5, 255).m128_u32[0] & _xmm;
        *(_OWORD *)((char *)this + 8 * v3) = v9;
        break;
      default:
        v8 = 715;
        goto LABEL_3;
    }
    *((_BYTE *)this + 8 * v3 + 76) = 1;
    return 0;
  }
  v8 = 657;
LABEL_3:
  v2 = -2147467259;
  MilInstrumentationCheckHR_MaybeFailFast(
    (__int64)this,
    &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
    1u,
    -2147467259,
    v8,
    0LL);
  return v2;
}
