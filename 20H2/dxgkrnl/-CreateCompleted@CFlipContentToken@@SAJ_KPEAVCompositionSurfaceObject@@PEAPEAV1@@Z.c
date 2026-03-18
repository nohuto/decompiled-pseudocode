/*
 * XREFs of ?CreateCompleted@CFlipContentToken@@SAJ_KPEAVCompositionSurfaceObject@@PEAPEAV1@@Z @ 0x1C006EDC4
 * Callers:
 *     ?CreateUpdateTokens@CContentResourceState@@QEAAJPEAVCEndpointResourceStateManager@@PEAVCFlipPropertySet@@AEAU_LIST_ENTRY@@@Z @ 0x1C006D874 (-CreateUpdateTokens@CContentResourceState@@QEAAJPEAVCEndpointResourceStateManager@@PEAVCFlipProp.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0002CEC (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0027100 (_guard_dispatch_icall_nop.c)
 *     ??0CFlipContentToken@@IEAA@_KPEAVCompositionSurfaceObject@@@Z @ 0x1C006ECB0 (--0CFlipContentToken@@IEAA@_KPEAVCompositionSurfaceObject@@@Z.c)
 */

__int64 __fastcall CFlipContentToken::CreateCompleted(
        __int64 a1,
        struct CompositionSurfaceObject *a2,
        struct CFlipContentToken **a3)
{
  CFlipContentToken *v6; // rax
  struct CFlipContentToken *v7; // rbx
  int v8; // edi

  *a3 = 0LL;
  v6 = (CFlipContentToken *)operator new[](0x130uLL, 0x6F744D54u, PagedPool);
  if ( v6 )
    v7 = CFlipContentToken::CFlipContentToken(v6, a1, a2);
  else
    v7 = 0LL;
  if ( v7 )
  {
    v8 = (*(__int64 (__fastcall **)(struct CFlipContentToken *, __int64))(*(_QWORD *)v7 + 8LL))(v7, 2LL);
    if ( v8 >= 0 )
    {
      *a3 = v7;
      v7 = 0LL;
    }
    if ( v7 )
      (**(void (__fastcall ***)(struct CFlipContentToken *, __int64))v7)(v7, 1LL);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)v8;
}
