/*
 * XREFs of NtSetCompositionSurfaceAnalogExclusive @ 0x1C0063BC0
 * Callers:
 *     <none>
 * Callees:
 *     DxgkGetSessionTokenManager @ 0x1C0001E90 (DxgkGetSessionTokenManager.c)
 *     ?UnlockAndRelease@CCompositionSurface@@QEBA_NXZ @ 0x1C00033A8 (-UnlockAndRelease@CCompositionSurface@@QEBA_NXZ.c)
 *     ?LockForWrite@CompositionSurfaceObject@@QEAAJPEAPEAVCCompositionSurface@@@Z @ 0x1C00037C8 (-LockForWrite@CompositionSurfaceObject@@QEAAJPEAPEAVCCompositionSurface@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000A650 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAV1@@Z @ 0x1C0016724 (-ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAV1@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026570 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtSetCompositionSurfaceAnalogExclusive(void *a1, int a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  struct DXGGLOBAL *Global; // rax
  __int64 v7; // r8
  int v8; // edi
  CCompositionSurface *v9; // rcx
  CCompositionSurface *v10; // rbx
  PVOID Object; // [rsp+40h] [rbp+18h] BYREF
  CCompositionSurface *v13; // [rsp+48h] [rbp+20h] BYREF

  Object = 0LL;
  KeEnterCriticalRegion();
  Global = DXGGLOBAL::GetGlobal(v5, v4);
  if ( (*(unsigned int (**)(void))(*((_QWORD *)Global + 38033) + 296LL))() )
  {
    v8 = CompositionSurfaceObject::ResolveHandle(a1, 2u, v7, (struct CompositionSurfaceObject **)&Object);
    if ( v8 >= 0 )
    {
      v13 = 0LL;
      v8 = CompositionSurfaceObject::LockForWrite((char *)Object, &v13);
      if ( v8 >= 0 )
      {
        v9 = v13;
        *((_BYTE *)v13 + 88) = a2 != 0;
        CCompositionSurface::UnlockAndRelease(v9);
        v13 = 0LL;
        if ( !a2 && (int)DxgkGetSessionTokenManager(&v13) >= 0 )
        {
          v10 = v13;
          (*(void (__fastcall **)(CCompositionSurface *))(*(_QWORD *)v13 + 120LL))(v13);
          (*(void (__fastcall **)(CCompositionSurface *))(*(_QWORD *)v10 + 8LL))(v10);
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
