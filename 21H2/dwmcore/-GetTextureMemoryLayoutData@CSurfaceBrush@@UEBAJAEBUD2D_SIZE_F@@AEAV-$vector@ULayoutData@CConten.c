/*
 * XREFs of ?GetTextureMemoryLayoutData@CSurfaceBrush@@UEBAJAEBUD2D_SIZE_F@@AEAV?$vector@ULayoutData@CContent@@V?$allocator@ULayoutData@CContent@@@std@@@std@@@Z @ 0x1801EE940
 * Callers:
 *     <none>
 * Callees:
 *     ?SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z @ 0x1800583B4 (-SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D440 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ComputeLayout@CSurfaceBrush@@QEBAJAEBUD2D_SIZE_F@@PEAULayoutData@CContent@@PEAPEAVCShape@@@Z @ 0x180086E90 (-ComputeLayout@CSurfaceBrush@@QEBAJAEBUD2D_SIZE_F@@PEAULayoutData@CContent@@PEAPEAVCShape@@@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800C8E4C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     __security_check_cookie @ 0x1800E6E00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4800 (_guard_dispatch_icall_nop.c)
 *     ??$_Emplace_reallocate@AEBULayoutData@CContent@@@?$vector@ULayoutData@CContent@@V?$allocator@ULayoutData@CContent@@@std@@@std@@QEAAPEAULayoutData@CContent@@QEAU23@AEBU23@@Z @ 0x1801E302C (--$_Emplace_reallocate@AEBULayoutData@CContent@@@-$vector@ULayoutData@CContent@@V-$allocator@ULa.c)
 *     ?swap@?$vector@ULayoutData@CContent@@V?$allocator@ULayoutData@CContent@@@std@@@std@@QEAAXAEAV12@@Z @ 0x1801EEE48 (-swap@-$vector@ULayoutData@CContent@@V-$allocator@ULayoutData@CContent@@@std@@@std@@QEAAXAEAV12@.c)
 */

__int64 __fastcall CSurfaceBrush::GetTextureMemoryLayoutData(CSurfaceBrush *this, struct D2D_SIZE_F *a2, __int64 a3)
{
  unsigned int v4; // edi
  __int64 v5; // rcx
  int v8; // eax
  __int64 v9; // rcx
  __int128 v10; // xmm1
  __int64 v11; // rdx
  __int128 v12; // xmm0
  __int64 v13; // xmm1_8
  __int64 v14; // rcx
  int v15; // eax
  __int64 v16; // rcx
  __int64 v17; // r9
  __int64 v18; // r10
  int v19; // r9d
  __int64 v20; // xmm1_8
  __int64 v21; // r8
  __int64 v22; // r10
  void *v23; // rcx
  __int64 v24; // rax
  __int128 v26; // [rsp+30h] [rbp-29h] BYREF
  __int64 v27; // [rsp+40h] [rbp-19h]
  __int128 v28; // [rsp+48h] [rbp-11h] BYREF
  __int128 v29; // [rsp+58h] [rbp-1h]
  __int64 v30; // [rsp+68h] [rbp+Fh]
  __int128 v31; // [rsp+70h] [rbp+17h] BYREF
  __int64 v32; // [rsp+80h] [rbp+27h]

  *(_QWORD *)(a3 + 8) = *(_QWORD *)a3;
  v4 = 0;
  v5 = *((_QWORD *)this + 12);
  if ( v5 && !(*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v5 + 56LL))(v5, 200LL) )
  {
    v8 = CSurfaceBrush::ComputeLayout(this, a2, (struct CContent::LayoutData *)&v28, 0LL);
    v4 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x1C9u, 0LL);
      return v4;
    }
    if ( !(*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 12) + 56LL))(
            *((_QWORD *)this + 12),
            40LL) )
    {
      if ( !(*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 12) + 56LL))(
              *((_QWORD *)this + 12),
              127LL) )
        return v4;
      v14 = *((_QWORD *)this + 12);
      v32 = 0LL;
      v31 = 0LL;
      v15 = (*(__int64 (__fastcall **)(__int64, struct D2D_SIZE_F *, __int128 *))(*(_QWORD *)v14 + 280LL))(
              v14,
              a2,
              &v31);
      v4 = v15;
      if ( v15 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, 0x1DFu, 0LL);
        v23 = (void *)v31;
        if ( !(_QWORD)v31 )
          return v4;
        v24 = 0x6666666666666667LL;
      }
      else
      {
        v17 = 0LL;
        v18 = 0x6666666666666667LL;
        while ( (unsigned int)v17 < ((unsigned __int64)((unsigned __int128)((__int64)(*((_QWORD *)&v31 + 1) - v31)
                                                                          * (__int128)v18) >> 64) >> 63)
                                  + ((__int64)((unsigned __int128)((__int64)(*((_QWORD *)&v31 + 1) - v31) * (__int128)v18) >> 64) >> 4) )
        {
          D2D1::Matrix3x2F::SetProduct(
            (D2D1::Matrix3x2F *)&v26,
            (const struct D2D1::Matrix3x2F *)&v28,
            (const struct D2D1::Matrix3x2F *)(v31 + 40 * v17));
          v17 = (unsigned int)(v19 + 1);
          v20 = v27;
          *(_OWORD *)v21 = v26;
          *(_QWORD *)(v21 + 16) = v20;
        }
        std::vector<CContent::LayoutData>::swap(a3, &v31);
        v23 = (void *)v31;
        if ( !(_QWORD)v31 )
          return v4;
        v24 = v22;
      }
      std::_Deallocate<16,0>(
        v23,
        40
      * (((unsigned __int64)((unsigned __int128)((v32 - (__int64)v23) * (__int128)v24) >> 64) >> 63)
       + ((__int64)((unsigned __int128)((v32 - (__int64)v23) * (__int128)v24) >> 64) >> 4)));
      return v4;
    }
    if ( *((float *)&v29 + 2) > 0.0 || *((float *)&v29 + 3) > 0.0 )
    {
      v32 = *((_QWORD *)&v29 + 1);
      v31 = _xmm;
      D2D1::Matrix3x2F::SetProduct(
        (D2D1::Matrix3x2F *)&v26,
        (const struct D2D1::Matrix3x2F *)&v31,
        (const struct D2D1::Matrix3x2F *)&v28);
      v10 = v26;
      v28 = v26;
      *(_QWORD *)&v29 = v27;
    }
    else
    {
      v10 = v28;
    }
    v11 = *(_QWORD *)(a3 + 8);
    if ( *(_QWORD *)(a3 + 16) == v11 )
    {
      std::vector<CContent::LayoutData>::_Emplace_reallocate<CContent::LayoutData const &>(
        (const void **)a3,
        (_BYTE *)v11,
        (__int64)&v28);
    }
    else
    {
      v12 = v29;
      *(_OWORD *)v11 = v10;
      v13 = v30;
      *(_OWORD *)(v11 + 16) = v12;
      *(_QWORD *)(v11 + 32) = v13;
      *(_QWORD *)(a3 + 8) += 40LL;
    }
  }
  return v4;
}
