/*
 * XREFs of ?ReadValueFromCache@CExpression@@AEAAJIPEAVCExpressionValue@@PEA_N@Z @ 0x180037F48
 * Callers:
 *     ?ProcessReferenceNode@CExpressionValueStack@@QEAAJPEAVCExpression@@PEAUExpressionReferenceNode@@_K@Z @ 0x180038780 (-ProcessReferenceNode@CExpressionValueStack@@QEAAJPEAVCExpression@@PEAUExpressionReferenceNode@@.c)
 * Callees:
 *     ?EnsureCacheBounds@CExpression@@AEAAJI_K@Z @ 0x180038FAC (-EnsureCacheBounds@CExpression@@AEAAJI_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??4?$ComPtr@VCPathData@@@WRL@Microsoft@@QEAAAEAV012@PEAVCPathData@@@Z @ 0x1801B2D08 (--4-$ComPtr@VCPathData@@@WRL@Microsoft@@QEAAAEAV012@PEAVCPathData@@@Z.c)
 *     ?LogCacheAccess@CExpression@@AEAAX_NIPEAVCExpressionValue@@@Z @ 0x1801C22D8 (-LogCacheAccess@CExpression@@AEAAX_NIPEAVCExpressionValue@@@Z.c)
 */

__int64 __fastcall CExpression::ReadValueFromCache(
        CExpression *this,
        unsigned int a2,
        struct CExpressionValue *a3,
        bool *a4)
{
  int v8; // eax
  unsigned int v9; // ecx
  bool v10; // di
  unsigned int v11; // ebx
  __int64 v12; // r14
  int v13; // edx
  int v15; // edx
  int v16; // edx
  int v17; // edx
  int v18; // edx
  __int64 v19; // rdx
  int v20; // edx
  int v21; // edx
  int v22; // edx
  int v23; // edx
  unsigned int v24; // [rsp+20h] [rbp-28h]

  v8 = CExpression::EnsureCacheBounds(this, a2, 8uLL);
  v10 = 0;
  v11 = v8;
  if ( v8 < 0 )
  {
    v24 = 1474;
    goto LABEL_57;
  }
  v12 = *((_QWORD *)this + 42) + a2;
  v13 = *(_DWORD *)v12;
  if ( *(_DWORD *)v12 )
  {
    if ( v13 <= 52 )
    {
      if ( v13 == 52 )
      {
        v8 = CExpression::EnsureCacheBounds(this, a2, 0x14uLL);
        v11 = v8;
        if ( v8 >= 0 )
        {
          *((_DWORD *)a3 + 18) = 52;
          *(_QWORD *)a3 = *(_QWORD *)(v12 + 8);
          *((_DWORD *)a3 + 2) = *(_DWORD *)(v12 + 16);
          goto LABEL_51;
        }
        v24 = 1516;
        goto LABEL_57;
      }
      v15 = v13 - 11;
      if ( !v15 )
      {
        v8 = CExpression::EnsureCacheBounds(this, a2, 0x10uLL);
        v11 = v8;
        if ( v8 >= 0 )
        {
          v19 = *(_QWORD *)(v12 + 8);
          *((_DWORD *)a3 + 18) = 11;
          *((_BYTE *)a3 + 76) = 1;
          Microsoft::WRL::ComPtr<CPathData>::operator=((char *)a3 + 64, v19);
LABEL_52:
          if ( *(int *)(*((_QWORD *)this + 38) + 4LL) < 0 )
            CExpression::LogCacheAccess(this, 1, a2, a3);
          v10 = 1;
          goto LABEL_3;
        }
        v24 = 1565;
        goto LABEL_57;
      }
      v16 = v15 - 6;
      if ( !v16 )
      {
        v8 = CExpression::EnsureCacheBounds(this, a2, 0xCuLL);
        v11 = v8;
        if ( v8 >= 0 )
        {
          *(_BYTE *)a3 = *(_BYTE *)(v12 + 8);
          *((_DWORD *)a3 + 18) = 17;
          goto LABEL_51;
        }
        v24 = 1495;
        goto LABEL_57;
      }
      v17 = v16 - 1;
      if ( !v17 )
      {
        v8 = CExpression::EnsureCacheBounds(this, a2, 0xCuLL);
        v11 = v8;
        if ( v8 >= 0 )
        {
          *(_DWORD *)a3 = *(_DWORD *)(v12 + 8);
          *((_DWORD *)a3 + 18) = 18;
          goto LABEL_51;
        }
        v24 = 1502;
        goto LABEL_57;
      }
      v18 = v17 - 17;
      if ( !v18 )
      {
        v8 = CExpression::EnsureCacheBounds(this, a2, 0x10uLL);
        v11 = v8;
        if ( v8 >= 0 )
        {
          *((_DWORD *)a3 + 18) = 35;
          *(_QWORD *)a3 = *(_QWORD *)(v12 + 8);
          goto LABEL_51;
        }
        v24 = 1509;
LABEL_57:
        MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, v24, 0LL);
        return v11;
      }
      if ( v18 == 7 )
      {
        v8 = CExpression::EnsureCacheBounds(this, a2, 0xCuLL);
        v11 = v8;
        if ( v8 >= 0 )
        {
          *((_DWORD *)a3 + 18) = 42;
          *(_DWORD *)a3 = *(_DWORD *)(v12 + 8);
LABEL_51:
          *((_BYTE *)a3 + 76) = 1;
          goto LABEL_52;
        }
        v24 = 1558;
        goto LABEL_57;
      }
LABEL_37:
      v11 = -2147024809;
      MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, -2147024809, 0x624u, 0LL);
      return v11;
    }
    v20 = v13 - 69;
    if ( v20 )
    {
      v21 = v20 - 1;
      if ( v21 )
      {
        v22 = v21 - 1;
        if ( v22 )
        {
          v23 = v22 - 33;
          if ( !v23 )
          {
            v8 = CExpression::EnsureCacheBounds(this, a2, 0x20uLL);
            v11 = v8;
            if ( v8 >= 0 )
            {
              *((_DWORD *)a3 + 18) = 104;
              *(_OWORD *)a3 = *(_OWORD *)(v12 + 8);
              *((_QWORD *)a3 + 2) = *(_QWORD *)(v12 + 24);
              goto LABEL_51;
            }
            v24 = 1544;
            goto LABEL_57;
          }
          if ( v23 == 161 )
          {
            v8 = CExpression::EnsureCacheBounds(this, a2, 0x48uLL);
            v11 = v8;
            if ( v8 >= 0 )
            {
              *((_DWORD *)a3 + 18) = 265;
              *(_OWORD *)a3 = *(_OWORD *)(v12 + 8);
              *((_OWORD *)a3 + 1) = *(_OWORD *)(v12 + 24);
              *((_OWORD *)a3 + 2) = *(_OWORD *)(v12 + 40);
              *((_OWORD *)a3 + 3) = *(_OWORD *)(v12 + 56);
              goto LABEL_51;
            }
            v24 = 1551;
            goto LABEL_57;
          }
          goto LABEL_37;
        }
        v8 = CExpression::EnsureCacheBounds(this, a2, 0x18uLL);
        v11 = v8;
        if ( v8 < 0 )
        {
          v24 = 1537;
          goto LABEL_57;
        }
        *((_DWORD *)a3 + 18) = 71;
      }
      else
      {
        v8 = CExpression::EnsureCacheBounds(this, a2, 0x18uLL);
        v11 = v8;
        if ( v8 < 0 )
        {
          v24 = 1530;
          goto LABEL_57;
        }
        *((_DWORD *)a3 + 18) = 70;
      }
    }
    else
    {
      v8 = CExpression::EnsureCacheBounds(this, a2, 0x18uLL);
      v11 = v8;
      if ( v8 < 0 )
      {
        v24 = 1523;
        goto LABEL_57;
      }
      *((_DWORD *)a3 + 18) = 69;
    }
    *(_OWORD *)a3 = *(_OWORD *)(v12 + 8);
    goto LABEL_51;
  }
LABEL_3:
  *a4 = v10;
  return v11;
}
