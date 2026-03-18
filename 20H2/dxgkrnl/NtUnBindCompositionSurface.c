/*
 * XREFs of NtUnBindCompositionSurface @ 0x1C000EA40
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkGetSessionTokenManager @ 0x1C000E0C0 (DxgkGetSessionTokenManager.c)
 *     ?UnlockAndRelease@CCompositionSurface@@QEBA_NXZ @ 0x1C000FBE8 (-UnlockAndRelease@CCompositionSurface@@QEBA_NXZ.c)
 *     ?LockForWrite@CompositionSurfaceObject@@QEAAJPEAPEAVCCompositionSurface@@@Z @ 0x1C0010008 (-LockForWrite@CompositionSurfaceObject@@QEAAJPEAPEAVCCompositionSurface@@@Z.c)
 *     ?QueryBinding@CCompositionSurface@@QEBAJ_KPEAUCSM_BUFFER_INFO@@@Z @ 0x1C0010074 (-QueryBinding@CCompositionSurface@@QEBAJ_KPEAUCSM_BUFFER_INFO@@@Z.c)
 *     ?UnBind@CCompositionSurface@@QEAAJ_N@Z @ 0x1C0011BD8 (-UnBind@CCompositionSurface@@QEAAJ_N@Z.c)
 *     ?ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAV1@@Z @ 0x1C0016104 (-ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAV1@@Z.c)
 *     __security_check_cookie @ 0x1C00243B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0027100 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0027400 (memset.c)
 */

__int64 __fastcall NtUnBindCompositionSurface(void *a1, unsigned int a2)
{
  char v4; // r8
  int v5; // edi
  CCompositionSurface *v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // rcx
  struct DXGGLOBAL *Global; // rax
  int SessionTokenManager; // eax
  CCompositionSurface *v12; // rbx
  CCompositionSurface *v13; // [rsp+20h] [rbp-E0h] BYREF
  PVOID Object; // [rsp+28h] [rbp-D8h] BYREF
  _QWORD v15[130]; // [rsp+30h] [rbp-D0h] BYREF

  Object = 0LL;
  KeEnterCriticalRegion();
  v5 = CompositionSurfaceObject::ResolveHandle(a1, 2u, v4, (struct CompositionSurfaceObject **)&Object);
  if ( v5 >= 0 )
  {
    v13 = 0LL;
    memset(v15, 0, sizeof(v15));
    v5 = CompositionSurfaceObject::LockForWrite(Object, &v13);
    if ( v5 >= 0 )
    {
      v6 = v13;
      CCompositionSurface::QueryBinding(v13, 0LL, (struct CSM_BUFFER_INFO *)v15);
      v5 = CCompositionSurface::UnBind(v6, a2 != 0);
      CCompositionSurface::UnlockAndRelease(v6);
      if ( v5 >= 0 )
      {
        if ( v15[111] && LODWORD(v15[0]) == 2 )
        {
          Global = DXGGLOBAL::GetGlobal(v8, v7);
          (*(void (__fastcall **)(_QWORD, _QWORD))(*((_QWORD *)Global + 38048) + 280LL))(v15[111], a2);
        }
        if ( !a2 )
        {
          v13 = 0LL;
          SessionTokenManager = DxgkGetSessionTokenManager(&v13, v7);
          v12 = v13;
          v5 = SessionTokenManager;
          if ( SessionTokenManager >= 0 )
            (*(void (__fastcall **)(CCompositionSurface *, PVOID))(*(_QWORD *)v13 + 80LL))(v13, Object);
          if ( v12 )
            (*(void (__fastcall **)(CCompositionSurface *))(*(_QWORD *)v12 + 8LL))(v12);
        }
      }
    }
    ObfDereferenceObject(Object);
  }
  KeLeaveCriticalRegion();
  return (unsigned int)v5;
}
