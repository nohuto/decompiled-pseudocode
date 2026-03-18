/*
 * XREFs of NtQueryCompositionSurfaceRenderingRealization @ 0x1C00050A0
 * Callers:
 *     <none>
 * Callees:
 *     ?UnlockAndRelease@CCompositionSurface@@QEBA_NXZ @ 0x1C00054E8 (-UnlockAndRelease@CCompositionSurface@@QEBA_NXZ.c)
 *     ?ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAV1@@Z @ 0x1C0005A8C (-ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAV1@@Z.c)
 *     ?LockForRead@CompositionSurfaceObject@@QEBAJPEAPEBVCCompositionSurface@@@Z @ 0x1C00072FC (-LockForRead@CompositionSurfaceObject@@QEBAJPEAPEBVCCompositionSurface@@@Z.c)
 *     ?GetRenderingRealizationInfo@CCompositionSurface@@QEBAJPEAUCSM_SURFACE_UPDATE_@@@Z @ 0x1C0007370 (-GetRenderingRealizationInfo@CCompositionSurface@@QEBAJPEAUCSM_SURFACE_UPDATE_@@@Z.c)
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C002CFC0 (memset.c)
 */

__int64 __fastcall NtQueryCompositionSurfaceRenderingRealization(void *a1, _OWORD *a2)
{
  struct DXGGLOBAL *Global; // rax
  char v5; // r8
  int v6; // ebx
  _OWORD *v7; // rdi
  CCompositionSurface *v9; // [rsp+28h] [rbp-110h] BYREF
  PVOID Object; // [rsp+30h] [rbp-108h] BYREF
  _OWORD v11[14]; // [rsp+40h] [rbp-F8h] BYREF

  Object = 0LL;
  memset(v11, 0, sizeof(v11));
  KeEnterCriticalRegion();
  Global = DXGGLOBAL_GetGlobal();
  if ( (*(unsigned int (**)(void))(*((_QWORD *)Global + 38073) + 528LL))() )
  {
    v6 = CompositionSurfaceObject::ResolveHandle(a1, 1u, v5, (struct CompositionSurfaceObject **)&Object);
    if ( v6 >= 0 )
    {
      v9 = 0LL;
      v6 = CompositionSurfaceObject::LockForRead((CompositionSurfaceObject *)Object, &v9);
      if ( v6 >= 0 )
      {
        CCompositionSurface::GetRenderingRealizationInfo(v9, (struct CSM_SURFACE_UPDATE_ *)v11);
        CCompositionSurface::UnlockAndRelease(v9);
      }
      ObfDereferenceObject(Object);
    }
  }
  else
  {
    v6 = -1073741790;
  }
  if ( a2 )
  {
    if ( a2 + 14 < a2 || (unsigned __int64)(a2 + 14) > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    *a2 = v11[0];
    a2[1] = v11[1];
    a2[2] = v11[2];
    a2[3] = v11[3];
    a2[4] = v11[4];
    a2[5] = v11[5];
    a2[6] = v11[6];
    v7 = a2 + 8;
    *(v7 - 1) = v11[7];
    *v7 = v11[8];
    v7[1] = v11[9];
    v7[2] = v11[10];
    v7[3] = v11[11];
    v7[4] = v11[12];
    v7[5] = v11[13];
  }
  else
  {
    v6 = -1073741811;
  }
  KeLeaveCriticalRegion();
  return (unsigned int)v6;
}
