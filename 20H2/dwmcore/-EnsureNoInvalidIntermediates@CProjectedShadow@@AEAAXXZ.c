/*
 * XREFs of ?EnsureNoInvalidIntermediates@CProjectedShadow@@AEAAXXZ @ 0x18000DD04
 * Callers:
 *     ?UpdateShadowIntermediates@CProjectedShadow@@AEAAJPEAVCDrawingContext@@@Z @ 0x18000DC1C (-UpdateShadowIntermediates@CProjectedShadow@@AEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CProjectedShadow::EnsureNoInvalidIntermediates(CProjectedShadow *this)
{
  int (__fastcall ***v2)(_QWORD); // rcx
  int (__fastcall ***v3)(_QWORD); // rcx
  int (__fastcall ***v4)(_QWORD); // rcx
  int (__fastcall ***v5)(_QWORD); // rcx
  __int64 v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // rcx
  struct IRenderTargetBitmap *v9; // rdx
  __int64 v10; // rcx
  struct IRenderTargetBitmap *v11; // rdx
  __int64 v12; // rcx
  int (__fastcall ***v13)(_QWORD); // rcx
  struct IRenderTargetBitmap *v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  int (__fastcall ***v18)(_QWORD); // rcx
  __int64 v19; // rdx
  __int64 v20; // rcx

  if ( *(_QWORD *)&CProjectedShadow::s_cpFastShadowIntermediate )
  {
    v2 = (int (__fastcall ***)(_QWORD))(*(int *)(*(_QWORD *)(*(_QWORD *)&CProjectedShadow::s_cpFastShadowIntermediate
                                                           + 8LL)
                                               + 8LL)
                                      + *(_QWORD *)&CProjectedShadow::s_cpFastShadowIntermediate
                                      + 8LL);
    if ( (**v2)(v2) < 0 )
    {
      v7 = *(_QWORD *)&CProjectedShadow::s_cpFastShadowIntermediate;
      *(_QWORD *)&CProjectedShadow::s_cpFastShadowIntermediate = 0LL;
      if ( v7 )
      {
        v8 = v7 + 8 + *(int *)(*(_QWORD *)(v7 + 8) + 4LL);
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
      }
    }
  }
  if ( CProjectedShadow::s_cpHalfBlurAsset )
  {
    v3 = (int (__fastcall ***)(_QWORD))((char *)CProjectedShadow::s_cpHalfBlurAsset
                                      + *(int *)(*((_QWORD *)CProjectedShadow::s_cpHalfBlurAsset + 1) + 8LL)
                                      + 8);
    if ( (**v3)(v3) < 0 )
    {
      v9 = CProjectedShadow::s_cpHalfBlurAsset;
      CProjectedShadow::s_cpHalfBlurAsset = 0LL;
      if ( v9 )
      {
        v10 = (__int64)v9 + *(int *)(*((_QWORD *)v9 + 1) + 4LL) + 8;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
      }
    }
  }
  if ( CProjectedShadow::s_cp1xBlurAsset )
  {
    v4 = (int (__fastcall ***)(_QWORD))((char *)CProjectedShadow::s_cp1xBlurAsset
                                      + *(int *)(*((_QWORD *)CProjectedShadow::s_cp1xBlurAsset + 1) + 8LL)
                                      + 8);
    if ( (**v4)(v4) < 0 )
    {
      v11 = CProjectedShadow::s_cp1xBlurAsset;
      CProjectedShadow::s_cp1xBlurAsset = 0LL;
      if ( v11 )
      {
        v12 = (__int64)v11 + *(int *)(*((_QWORD *)v11 + 1) + 4LL) + 8;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
      }
    }
  }
  if ( CProjectedShadow::s_cp2xBlurAsset )
  {
    v13 = (int (__fastcall ***)(_QWORD))((char *)CProjectedShadow::s_cp2xBlurAsset
                                       + *(int *)(*((_QWORD *)CProjectedShadow::s_cp2xBlurAsset + 1) + 8LL)
                                       + 8);
    if ( (**v13)(v13) < 0 )
    {
      v14 = CProjectedShadow::s_cp2xBlurAsset;
      CProjectedShadow::s_cp2xBlurAsset = 0LL;
      if ( v14 )
      {
        v15 = (__int64)v14 + *(int *)(*((_QWORD *)v14 + 1) + 4LL) + 8;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
      }
    }
  }
  if ( CProjectedShadow::s_cpMaskForBlur )
  {
    v5 = (int (__fastcall ***)(_QWORD))(*(int *)(*(_QWORD *)(CProjectedShadow::s_cpMaskForBlur + 8) + 8LL)
                                      + CProjectedShadow::s_cpMaskForBlur
                                      + 8);
    if ( (**v5)(v5) < 0 )
    {
      v16 = CProjectedShadow::s_cpMaskForBlur;
      CProjectedShadow::s_cpMaskForBlur = 0LL;
      if ( v16 )
      {
        v17 = v16 + 8 + *(int *)(*(_QWORD *)(v16 + 8) + 4LL);
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
      }
    }
  }
  v6 = *((_QWORD *)this + 45);
  if ( v6 )
  {
    v18 = (int (__fastcall ***)(_QWORD))(v6 + 8 + *(int *)(*(_QWORD *)(v6 + 8) + 8LL));
    if ( (**v18)(v18) < 0 )
    {
      v19 = *((_QWORD *)this + 45);
      *((_QWORD *)this + 45) = 0LL;
      if ( v19 )
      {
        v20 = v19 + 8 + *(int *)(*(_QWORD *)(v19 + 8) + 4LL);
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
      }
    }
  }
}
