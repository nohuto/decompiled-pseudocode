/*
 * XREFs of NtQueryCompositionSurfaceRenderingRealization @ 0x1C000F9E0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00041C0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?ResolveHandle@DxgkCompositionObject@@SAJPEAXKDW4DxgkCompositionObjectType@@PEAPEAV1@@Z @ 0x1C000FBC4 (-ResolveHandle@DxgkCompositionObject@@SAJPEAXKDW4DxgkCompositionObjectType@@PEAPEAV1@@Z.c)
 *     ?UnlockAndRelease@CCompositionSurface@@QEBA_NXZ @ 0x1C000FC78 (-UnlockAndRelease@CCompositionSurface@@QEBA_NXZ.c)
 *     ?GetRenderingRealizationInfo@CCompositionSurface@@QEBAJPEAUCSM_SURFACE_UPDATE@@@Z @ 0x1C000FCE4 (-GetRenderingRealizationInfo@CCompositionSurface@@QEBAJPEAUCSM_SURFACE_UPDATE@@@Z.c)
 *     ?LockForRead@CompositionSurfaceObject@@QEBAJPEAPEBVCCompositionSurface@@@Z @ 0x1C000FE74 (-LockForRead@CompositionSurfaceObject@@QEBAJPEAPEBVCCompositionSurface@@@Z.c)
 *     __security_check_cookie @ 0x1C0024910 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028C00 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0028F00 (memset.c)
 */

__int64 __fastcall NtQueryCompositionSurfaceRenderingRealization(__int64 a1, _OWORD *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  struct DXGGLOBAL *Global; // rax
  __int64 v7; // r8
  int v8; // eax
  int v9; // ebx
  PVOID v10; // rsi
  _OWORD *v11; // rdi
  CCompositionSurface *v13; // [rsp+38h] [rbp-100h] BYREF
  PVOID Object[2]; // [rsp+40h] [rbp-F8h] BYREF
  _OWORD v15[13]; // [rsp+50h] [rbp-E8h] BYREF

  memset(v15, 0, 0xC8uLL);
  KeEnterCriticalRegion();
  Global = DXGGLOBAL::GetGlobal(v5, v4);
  if ( (*(unsigned int (**)(void))(*((_QWORD *)Global + 38048) + 296LL))() )
  {
    Object[0] = 0LL;
    LOBYTE(v7) = 1;
    v8 = DxgkCompositionObject::ResolveHandle(a1, 1LL, v7, 1LL, Object);
    v9 = v8;
    v10 = 0LL;
    if ( v8 >= 0 )
      v10 = Object[0];
    Object[1] = v10;
    if ( v8 >= 0 )
    {
      v13 = 0LL;
      v9 = CompositionSurfaceObject::LockForRead(v10, &v13);
      if ( v9 >= 0 )
      {
        CCompositionSurface::GetRenderingRealizationInfo(v13, (struct CSM_SURFACE_UPDATE *)v15);
        CCompositionSurface::UnlockAndRelease(v13);
      }
      ObfDereferenceObject(v10);
    }
  }
  else
  {
    v9 = -1073741790;
  }
  if ( a2 )
  {
    if ( (_OWORD *)((char *)a2 + 200) < a2 || (unsigned __int64)a2 + 200 > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    *a2 = v15[0];
    a2[1] = v15[1];
    a2[2] = v15[2];
    a2[3] = v15[3];
    a2[4] = v15[4];
    a2[5] = v15[5];
    a2[6] = v15[6];
    v11 = a2 + 8;
    *(v11 - 1) = v15[7];
    *v11 = v15[8];
    v11[1] = v15[9];
    v11[2] = v15[10];
    v11[3] = v15[11];
    *((_QWORD *)v11 + 8) = *(_QWORD *)&v15[12];
  }
  else
  {
    v9 = -1073741811;
  }
  KeLeaveCriticalRegion();
  return (unsigned int)v9;
}
