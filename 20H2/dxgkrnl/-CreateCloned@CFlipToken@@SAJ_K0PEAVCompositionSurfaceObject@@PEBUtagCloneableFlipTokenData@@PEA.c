/*
 * XREFs of ?CreateCloned@CFlipToken@@SAJ_K0PEAVCompositionSurfaceObject@@PEBUtagCloneableFlipTokenData@@PEAPEAV1@@Z @ 0x1C0063E18
 * Callers:
 *     ?CreateClonedFlipToken@CToken@@SAJ_K0PEAVCompositionSurfaceObject@@PEBUtagCloneableFlipTokenData@@PEAPEAV1@@Z @ 0x1C00634E8 (-CreateClonedFlipToken@CToken@@SAJ_K0PEAVCompositionSurfaceObject@@PEBUtagCloneableFlipTokenData.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0002CEC (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0027100 (_guard_dispatch_icall_nop.c)
 *     ??0CFlipToken@@IEAA@_KPEAVCompositionSurfaceObject@@@Z @ 0x1C0063CB8 (--0CFlipToken@@IEAA@_KPEAVCompositionSurfaceObject@@@Z.c)
 *     ?InitializeCloned@CFlipToken@@IEAAJ_KPEBUtagCloneableFlipTokenData@@@Z @ 0x1C0063FA8 (-InitializeCloned@CFlipToken@@IEAAJ_KPEBUtagCloneableFlipTokenData@@@Z.c)
 */

__int64 __fastcall CFlipToken::CreateCloned(
        __int64 a1,
        unsigned __int64 a2,
        struct CompositionSurfaceObject *a3,
        const struct tagCloneableFlipTokenData *a4,
        struct CFlipToken **a5)
{
  CFlipToken *v9; // rax
  CFlipToken *v10; // rbx
  int v11; // edi

  *a5 = 0LL;
  v9 = (CFlipToken *)operator new[](0x250uLL, 0x6F744D54u, PagedPool);
  if ( v9 )
    v10 = CFlipToken::CFlipToken(v9, a1, a3);
  else
    v10 = 0LL;
  if ( v10 )
  {
    v11 = CFlipToken::InitializeCloned(v10, a2, a4);
    if ( v11 < 0 )
      (**(void (__fastcall ***)(CFlipToken *, __int64))v10)(v10, 1LL);
    else
      *a5 = v10;
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)v11;
}
