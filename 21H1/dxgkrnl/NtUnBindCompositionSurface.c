/*
 * XREFs of NtUnBindCompositionSurface @ 0x1C0002250
 * Callers:
 *     <none>
 * Callees:
 *     DxgkGetSessionTokenManager @ 0x1C0001E90 (DxgkGetSessionTokenManager.c)
 *     ?UnlockAndRelease@CCompositionSurface@@QEBA_NXZ @ 0x1C00033A8 (-UnlockAndRelease@CCompositionSurface@@QEBA_NXZ.c)
 *     ?LockForWrite@CompositionSurfaceObject@@QEAAJPEAPEAVCCompositionSurface@@@Z @ 0x1C00037C8 (-LockForWrite@CompositionSurfaceObject@@QEAAJPEAPEAVCCompositionSurface@@@Z.c)
 *     ?QueryBinding@CCompositionSurface@@QEBAJ_KPEAUCSM_BUFFER_INFO@@@Z @ 0x1C0003834 (-QueryBinding@CCompositionSurface@@QEBAJ_KPEAUCSM_BUFFER_INFO@@@Z.c)
 *     ?UnBind@CCompositionSurface@@QEAAJ_N@Z @ 0x1C0005468 (-UnBind@CCompositionSurface@@QEAAJ_N@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000A650 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAV1@@Z @ 0x1C0016724 (-ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAV1@@Z.c)
 *     __security_check_cookie @ 0x1C0024300 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026570 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0026840 (memset.c)
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
  _QWORD v13[130]; // [rsp+30h] [rbp-D0h] BYREF

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
        if ( v13[111] && LODWORD(v13[0]) == 2 )
        {
          Global = DXGGLOBAL::GetGlobal();
          (*(void (__fastcall **)(_QWORD, _QWORD))(*((_QWORD *)Global + 38033) + 280LL))(v13[111], a2);
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
