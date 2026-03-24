/*
 * XREFs of NtSetCompositionSurfaceAnalogExclusive @ 0x1C0065B30
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00041C0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkGetSessionTokenManager @ 0x1C000E150 (DxgkGetSessionTokenManager.c)
 *     ?UnlockAndRelease@CCompositionSurface@@QEBA_NXZ @ 0x1C000FC78 (-UnlockAndRelease@CCompositionSurface@@QEBA_NXZ.c)
 *     ?LockForWrite@CompositionSurfaceObject@@QEAAJPEAPEAVCCompositionSurface@@@Z @ 0x1C0010098 (-LockForWrite@CompositionSurfaceObject@@QEAAJPEAPEAVCCompositionSurface@@@Z.c)
 *     ?ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAV1@@Z @ 0x1C00168A4 (-ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAV1@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028C00 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtSetCompositionSurfaceAnalogExclusive(void *a1, int a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  struct DXGGLOBAL *Global; // rax
  __int64 v7; // r8
  int v8; // edi
  CCompositionSurface *v9; // rcx
  __int64 v10; // rdx
  CCompositionSurface *v11; // rbx
  PVOID Object; // [rsp+40h] [rbp+18h] BYREF
  CCompositionSurface *v14; // [rsp+48h] [rbp+20h] BYREF

  Object = 0LL;
  KeEnterCriticalRegion();
  Global = DXGGLOBAL::GetGlobal(v5, v4);
  if ( (*(unsigned int (**)(void))(*((_QWORD *)Global + 38048) + 296LL))() )
  {
    v8 = CompositionSurfaceObject::ResolveHandle(a1, 2u, v7, (struct CompositionSurfaceObject **)&Object);
    if ( v8 >= 0 )
    {
      v14 = 0LL;
      v8 = CompositionSurfaceObject::LockForWrite((char *)Object, &v14);
      if ( v8 >= 0 )
      {
        v9 = v14;
        *((_BYTE *)v14 + 88) = a2 != 0;
        CCompositionSurface::UnlockAndRelease(v9);
        v14 = 0LL;
        if ( !a2 && (int)DxgkGetSessionTokenManager(&v14, v10) >= 0 )
        {
          v11 = v14;
          (*(void (__fastcall **)(CCompositionSurface *))(*(_QWORD *)v14 + 120LL))(v14);
          (*(void (__fastcall **)(CCompositionSurface *))(*(_QWORD *)v11 + 8LL))(v11);
        }
      }
      ObfDereferenceObject(Object);
    }
  }
  else
  {
    v8 = -1073741790;
  }
  KeLeaveCriticalRegion();
  return (unsigned int)v8;
}
