/*
 * XREFs of NtSetCompositionSurfaceAnalogExclusive @ 0x1C0077840
 * Callers:
 *     <none>
 * Callees:
 *     DxgkGetSessionTokenManager @ 0x1C0003660 (DxgkGetSessionTokenManager.c)
 *     ?UnlockAndRelease@CCompositionSurface@@QEBA_NXZ @ 0x1C00054E8 (-UnlockAndRelease@CCompositionSurface@@QEBA_NXZ.c)
 *     ?ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAV1@@Z @ 0x1C0005A8C (-ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAV1@@Z.c)
 *     ?LockForWrite@CompositionSurfaceObject@@QEAAJPEAPEAVCCompositionSurface@@@Z @ 0x1C0007E48 (-LockForWrite@CompositionSurfaceObject@@QEAAJPEAPEAVCCompositionSurface@@@Z.c)
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtSetCompositionSurfaceAnalogExclusive(void *a1, int a2)
{
  struct DXGGLOBAL *Global; // rax
  __int64 v5; // r8
  int v6; // edi
  CCompositionSurface *v7; // rcx
  CCompositionSurface *v8; // rbx
  PVOID Object; // [rsp+40h] [rbp+18h] BYREF
  CCompositionSurface *v11; // [rsp+48h] [rbp+20h] BYREF

  Object = 0LL;
  KeEnterCriticalRegion();
  Global = DXGGLOBAL_GetGlobal();
  if ( (*(unsigned int (**)(void))(*((_QWORD *)Global + 38073) + 528LL))() )
  {
    v6 = CompositionSurfaceObject::ResolveHandle(a1, 2u, v5, (struct CompositionSurfaceObject **)&Object);
    if ( v6 >= 0 )
    {
      v11 = 0LL;
      v6 = CompositionSurfaceObject::LockForWrite((char *)Object, &v11);
      if ( v6 >= 0 )
      {
        v7 = v11;
        *((_BYTE *)v11 + 113) = a2 != 0;
        CCompositionSurface::UnlockAndRelease(v7);
        v11 = 0LL;
        if ( !a2 && (int)DxgkGetSessionTokenManager(&v11) >= 0 )
        {
          v8 = v11;
          (*(void (__fastcall **)(CCompositionSurface *))(*(_QWORD *)v11 + 128LL))(v11);
          (*(void (__fastcall **)(CCompositionSurface *))(*(_QWORD *)v8 + 8LL))(v8);
        }
      }
      ObfDereferenceObject(Object);
    }
  }
  else
  {
    v6 = -1073741790;
  }
  KeLeaveCriticalRegion();
  return (unsigned int)v6;
}
