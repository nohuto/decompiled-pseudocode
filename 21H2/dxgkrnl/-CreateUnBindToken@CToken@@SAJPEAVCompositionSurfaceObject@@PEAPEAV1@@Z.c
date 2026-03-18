/*
 * XREFs of ?CreateUnBindToken@CToken@@SAJPEAVCompositionSurfaceObject@@PEAPEAV1@@Z @ 0x1C0020A60
 * Callers:
 *     ?AddUnBindToken@CTokenManager@@UEAAJPEAVCompositionSurfaceObject@@@Z @ 0x1C0020840 (-AddUnBindToken@CTokenManager@@UEAAJPEAVCompositionSurfaceObject@@@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??0CToken@@IEAA@_KPEAVCompositionSurfaceObject@@@Z @ 0x1C0020AEC (--0CToken@@IEAA@_KPEAVCompositionSurfaceObject@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CToken::CreateUnBindToken(
        struct CompositionSurfaceObject *a1,
        struct CToken **a2,
        __int64 a3,
        __int64 a4)
{
  CToken *v6; // rax
  CToken *v7; // rax
  struct CToken *v8; // rbx
  int v9; // edi

  *a2 = 0LL;
  v6 = (CToken *)operator new[](0x58uLL, 0x6F744D54u, 256LL, a4);
  if ( v6 && (v7 = CToken::CToken(v6, 0LL, a1), (v8 = v7) != 0LL) )
  {
    v9 = (*(__int64 (__fastcall **)(CToken *, __int64))(*(_QWORD *)v7 + 8LL))(v7, 2LL);
    if ( v9 < 0 )
      (**(void (__fastcall ***)(struct CToken *, __int64))v8)(v8, 1LL);
    else
      *a2 = v8;
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)v9;
}
