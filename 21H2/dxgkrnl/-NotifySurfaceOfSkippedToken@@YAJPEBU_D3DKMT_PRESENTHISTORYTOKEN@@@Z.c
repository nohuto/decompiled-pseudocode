/*
 * XREFs of ?NotifySurfaceOfSkippedToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C00654D4
 * Callers:
 *     ?NotifyPendingFlipPresent@@YAJHPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C0014070 (-NotifyPendingFlipPresent@@YAJHPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 * Callees:
 *     ?ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAV1@@Z @ 0x1C00168A4 (-ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAV1@@Z.c)
 *     ?NotifyTokenInFrame@CompositionSurfaceObject@@QEAAJAEBVCToken@@PEA_N@Z @ 0x1C001CA94 (-NotifyTokenInFrame@CompositionSurfaceObject@@QEAAJAEBVCToken@@PEA_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028C00 (_guard_dispatch_icall_nop.c)
 *     ?CreateFlipToken@CToken@@CAJ_KPEAVCompositionSurfaceObject@@AEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@PEAPEAV1@@Z @ 0x1C006447C (-CreateFlipToken@CToken@@CAJ_KPEAVCompositionSurfaceObject@@AEBU_D3DKMT_FLIPMODEL_PRESENTHISTORY.c)
 */

__int64 __fastcall NotifySurfaceOfSkippedToken(const struct _D3DKMT_PRESENTHISTORYTOKEN *a1, __int64 a2, __int64 a3)
{
  int v4; // ebx
  UINT64 CompositionBindingId; // rcx
  int v6; // eax
  struct CToken *v7; // rdi
  CompositionSurfaceObject *v8; // rcx
  struct CToken *v10; // [rsp+30h] [rbp+8h] BYREF
  PVOID Object; // [rsp+38h] [rbp+10h] BYREF

  Object = 0LL;
  v4 = CompositionSurfaceObject::ResolveHandle(
         (void *)a1->Token.Flip.hLogicalSurface,
         2u,
         a3,
         (struct CompositionSurfaceObject **)&Object);
  if ( v4 >= 0 )
  {
    CompositionBindingId = a1->CompositionBindingId;
    v10 = 0LL;
    v6 = CToken::CreateFlipToken(CompositionBindingId, (struct CompositionSurfaceObject *)Object, &a1->Token.Flip, &v10);
    v7 = v10;
    v4 = v6;
    if ( v6 >= 0 )
    {
      v8 = (CompositionSurfaceObject *)Object;
      *((_BYTE *)v10 + 48) = 1;
      *((_DWORD *)v7 + 6) = 3;
      LOBYTE(v10) = 0;
      v4 = CompositionSurfaceObject::NotifyTokenInFrame(v8, v7, (bool *)&v10);
      if ( v7 )
        (**(void (__fastcall ***)(struct CToken *, __int64))v7)(v7, 1LL);
    }
    ObfDereferenceObject(Object);
  }
  return (unsigned int)v4;
}
