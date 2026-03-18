/*
 * XREFs of ?StoreValueToCache@CExpression@@AEAAJIPEAVCExpressionValue@@@Z @ 0x18002DFB0
 * Callers:
 *     ?ProcessReferenceNode@CExpressionValueStack@@QEAAJPEAVCExpression@@PEAUExpressionReferenceNode@@_K@Z @ 0x18002DC80 (-ProcessReferenceNode@CExpressionValueStack@@QEAAJPEAVCExpression@@PEAUExpressionReferenceNode@@.c)
 * Callees:
 *     ?EnsureCacheBounds@CExpression@@AEAAJI_K@Z @ 0x18002E4AC (-EnsureCacheBounds@CExpression@@AEAAJI_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??4?$ComPtr@VCPathData@@@WRL@Microsoft@@QEAAAEAV012@PEAVCPathData@@@Z @ 0x1801B5658 (--4-$ComPtr@VCPathData@@@WRL@Microsoft@@QEAAAEAV012@PEAVCPathData@@@Z.c)
 */

__int64 __fastcall CExpression::StoreValueToCache(CExpression *this, unsigned int a2, struct CExpressionValue *a3)
{
  __int64 v4; // rbx
  int v5; // eax
  unsigned int v6; // esi
  __int64 result; // rax
  unsigned int v8; // ecx
  unsigned int v9; // ecx
  unsigned int v10; // ecx
  unsigned int v11; // ecx
  int v12; // eax
  unsigned int v13; // ecx
  int v14; // eax
  unsigned int v15; // ecx
  int v16; // eax
  unsigned int v17; // ecx
  int v18; // eax
  unsigned int v19; // ecx
  int v20; // eax
  unsigned int v21; // ecx
  int v22; // eax
  unsigned int v23; // ecx
  unsigned int v24; // [rsp+20h] [rbp-18h]

  if ( a2 + 8 < a2 )
  {
    v6 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)this, 0LL, 0, -2147024362, 0x202u, 0LL);
    goto LABEL_45;
  }
  if ( a2 + 8 > *((_DWORD *)this + 86) )
  {
    v6 = -2147483637;
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)this, 0LL, 0, -2147483637, 0x207u, 0LL);
LABEL_45:
    v24 = 1349;
    goto LABEL_46;
  }
  v4 = *((_QWORD *)this + 42) + a2;
  if ( !*(_DWORD *)v4 )
    *(_DWORD *)v4 = *((_DWORD *)a3 + 18);
  v5 = *((_DWORD *)a3 + 18);
  if ( v5 == 18 )
  {
    if ( a2 + 12 < a2 )
    {
      v6 = -2147024362;
      MilInstrumentationCheckHR_MaybeFailFast((unsigned int)this, 0LL, 0, -2147024362, 0x202u, 0LL);
    }
    else
    {
      if ( a2 + 12 <= *((_DWORD *)this + 86) )
      {
        v6 = 0;
        *(_DWORD *)(v4 + 8) = *(_DWORD *)a3;
        return v6;
      }
      v6 = -2147483637;
      MilInstrumentationCheckHR_MaybeFailFast((unsigned int)this, 0LL, 0, -2147483637, 0x207u, 0LL);
    }
    v24 = 1380;
LABEL_46:
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)this, 0LL, 0, v6, v24, 0LL);
    return v6;
  }
  switch ( v5 )
  {
    case 11:
      v22 = CExpression::EnsureCacheBounds(this, a2, 0x10uLL);
      v6 = v22;
      if ( v22 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v23, 0LL, 0, v22, 0x5A3u, 0LL);
      else
        Microsoft::WRL::ComPtr<CPathData>::operator=(v4 + 8, *((_QWORD *)a3 + 8));
      return v6;
    case 17:
      v14 = CExpression::EnsureCacheBounds(this, a2, 0xCuLL);
      v6 = v14;
      if ( v14 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0x55Du, 0LL);
      else
        *(_BYTE *)(v4 + 8) = *(_BYTE *)a3;
      return v6;
    case 35:
      result = CExpression::EnsureCacheBounds(this, a2, 0x10uLL);
      v6 = result;
      if ( (int)result >= 0 )
      {
        *(_QWORD *)(v4 + 8) = *(_QWORD *)a3;
        return result;
      }
      MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, result, 0x56Bu, 0LL);
      return v6;
    case 42:
      v20 = CExpression::EnsureCacheBounds(this, a2, 0xCuLL);
      v6 = v20;
      if ( v20 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v21, 0LL, 0, v20, 0x59Cu, 0LL);
      else
        *(_DWORD *)(v4 + 8) = *(_DWORD *)a3;
      return v6;
    case 52:
      LODWORD(result) = CExpression::EnsureCacheBounds(this, a2, 0x14uLL);
      v6 = result;
      if ( (int)result >= 0 )
      {
        *(_QWORD *)(v4 + 8) = *(_QWORD *)a3;
        *(_DWORD *)(v4 + 16) = *((_DWORD *)a3 + 2);
        return (unsigned int)result;
      }
      MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, result, 0x572u, 0LL);
      return v6;
    case 69:
      v16 = CExpression::EnsureCacheBounds(this, a2, 0x18uLL);
      v6 = v16;
      if ( v16 >= 0 )
        goto LABEL_20;
      MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v16, 0x579u, 0LL);
      return v6;
    case 70:
      v12 = CExpression::EnsureCacheBounds(this, a2, 0x18uLL);
      v6 = v12;
      if ( v12 >= 0 )
        goto LABEL_20;
      MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x580u, 0LL);
      return v6;
    case 71:
      v18 = CExpression::EnsureCacheBounds(this, a2, 0x18uLL);
      v6 = v18;
      if ( v18 >= 0 )
      {
LABEL_20:
        result = v6;
        *(_OWORD *)(v4 + 8) = *(_OWORD *)a3;
        return result;
      }
      MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, v18, 0x587u, 0LL);
      return v6;
    case 104:
      result = CExpression::EnsureCacheBounds(this, a2, 0x20uLL);
      v6 = result;
      if ( (int)result >= 0 )
      {
        *(_OWORD *)(v4 + 8) = *(_OWORD *)a3;
        *(_QWORD *)(v4 + 24) = *((_QWORD *)a3 + 2);
        return result;
      }
      MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, result, 0x58Eu, 0LL);
      return v6;
    case 265:
      result = CExpression::EnsureCacheBounds(this, a2, 0x48uLL);
      v6 = result;
      if ( (int)result >= 0 )
      {
        *(_OWORD *)(v4 + 8) = *(_OWORD *)a3;
        *(_OWORD *)(v4 + 24) = *((_OWORD *)a3 + 1);
        *(_OWORD *)(v4 + 40) = *((_OWORD *)a3 + 2);
        *(_OWORD *)(v4 + 56) = *((_OWORD *)a3 + 3);
        return result;
      }
      MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, result, 0x595u, 0LL);
      break;
    default:
      v6 = -2147024809;
      v24 = 1450;
      goto LABEL_46;
  }
  return v6;
}
