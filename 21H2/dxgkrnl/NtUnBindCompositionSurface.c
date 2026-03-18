/*
 * XREFs of NtUnBindCompositionSurface @ 0x1C0004260
 * Callers:
 *     <none>
 * Callees:
 *     DxgkGetSessionTokenManager @ 0x1C0003660 (DxgkGetSessionTokenManager.c)
 *     ?UnBind@CCompositionSurface@@QEAAJ_N@Z @ 0x1C0004208 (-UnBind@CCompositionSurface@@QEAAJ_N@Z.c)
 *     ?UnlockAndRelease@CCompositionSurface@@QEBA_NXZ @ 0x1C00054E8 (-UnlockAndRelease@CCompositionSurface@@QEBA_NXZ.c)
 *     ?QueryBinding@CCompositionSurface@@QEBAJ_KPEAUCSM_BUFFER_INFO@@@Z @ 0x1C0005818 (-QueryBinding@CCompositionSurface@@QEBAJ_KPEAUCSM_BUFFER_INFO@@@Z.c)
 *     ?ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAV1@@Z @ 0x1C0005A8C (-ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAV1@@Z.c)
 *     ?LockForWrite@CompositionSurfaceObject@@QEAAJPEAPEAVCCompositionSurface@@@Z @ 0x1C0007E48 (-LockForWrite@CompositionSurfaceObject@@QEAAJPEAPEAVCCompositionSurface@@@Z.c)
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C002CFC0 (memset.c)
 */

__int64 __fastcall NtUnBindCompositionSurface(void *a1, unsigned int a2)
{
  char v4; // r8
  int v5; // edi
  CCompositionSurface *v6; // rbx
  struct DXGGLOBAL *Global; // rax
  int SessionTokenManager; // eax
  CCompositionSurface *v10; // rbx
  CCompositionSurface *v11; // [rsp+20h] [rbp-E0h] BYREF
  PVOID Object; // [rsp+28h] [rbp-D8h] BYREF
  _QWORD v13[164]; // [rsp+30h] [rbp-D0h] BYREF

  Object = 0LL;
  KeEnterCriticalRegion();
  v5 = CompositionSurfaceObject::ResolveHandle(a1, 2u, v4, (struct CompositionSurfaceObject **)&Object);
  if ( v5 >= 0 )
  {
    v11 = 0LL;
    memset(v13, 0, sizeof(v13));
    v5 = CompositionSurfaceObject::LockForWrite(Object, &v11);
    if ( v5 >= 0 )
    {
      v6 = v11;
      CCompositionSurface::QueryBinding(v11, 0LL, (struct CSM_BUFFER_INFO *)v13);
      v5 = CCompositionSurface::UnBind(v6, a2 != 0);
      CCompositionSurface::UnlockAndRelease(v6);
      if ( v5 >= 0 )
      {
        if ( v13[145] && LODWORD(v13[0]) == 2 )
        {
          Global = DXGGLOBAL_GetGlobal();
          (*(void (__fastcall **)(_QWORD, _QWORD))(*((_QWORD *)Global + 38073) + 512LL))(v13[145], a2);
        }
        if ( !a2 )
        {
          v11 = 0LL;
          SessionTokenManager = DxgkGetSessionTokenManager(&v11);
          v10 = v11;
          v5 = SessionTokenManager;
          if ( SessionTokenManager >= 0 )
            (*(void (__fastcall **)(CCompositionSurface *, PVOID))(*(_QWORD *)v11 + 80LL))(v11, Object);
          if ( v10 )
            (*(void (__fastcall **)(CCompositionSurface *))(*(_QWORD *)v10 + 8LL))(v10);
        }
      }
    }
    ObfDereferenceObject(Object);
  }
  KeLeaveCriticalRegion();
  return (unsigned int)v5;
}
