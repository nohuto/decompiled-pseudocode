/*
 * XREFs of ?CreateCompleted@CFlipContentToken@@SAJ_KPEAVCompositionSurfaceObject@@PEAPEAV1@@Z @ 0x1C0082C54
 * Callers:
 *     ?CreateUpdateTokens@CContentResourceState@@QEAAJPEAVCEndpointResourceStateManager@@PEAVCFlipPropertySet@@AEAU_LIST_ENTRY@@@Z @ 0x1C00815B4 (-CreateUpdateTokens@CContentResourceState@@QEAAJPEAVCEndpointResourceStateManager@@PEAVCFlipProp.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     ??0CFlipContentToken@@IEAA@_KPEAVCompositionSurfaceObject@@@Z @ 0x1C0082AE4 (--0CFlipContentToken@@IEAA@_KPEAVCompositionSurfaceObject@@@Z.c)
 */

__int64 __fastcall CFlipContentToken::CreateCompleted(
        __int64 a1,
        struct CompositionSurfaceObject *a2,
        struct CFlipContentToken **a3,
        __int64 a4)
{
  CFlipContentToken *v7; // rax
  CFlipContentToken *v8; // rax
  struct CFlipContentToken *v9; // rbx
  int v10; // edi

  *a3 = 0LL;
  v7 = (CFlipContentToken *)operator new[](0x150uLL, 0x6F744D54u, 256LL, a4);
  if ( v7 && (v8 = CFlipContentToken::CFlipContentToken(v7, a1, a2), (v9 = v8) != 0LL) )
  {
    v10 = (*(__int64 (__fastcall **)(CFlipContentToken *, __int64))(*(_QWORD *)v8 + 8LL))(v8, 2LL);
    if ( v10 < 0 )
      (**(void (__fastcall ***)(struct CFlipContentToken *, __int64))v9)(v9, 1LL);
    else
      *a3 = v9;
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)v10;
}
