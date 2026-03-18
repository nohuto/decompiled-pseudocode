/*
 * XREFs of NtQueryCompositionSurfaceRenderingRealization @ 0x1C0003110
 * Callers:
 *     <none>
 * Callees:
 *     ?ResolveHandle@DxgkCompositionObject@@SAJPEAXKDW4DxgkCompositionObjectType@@PEAPEAV1@@Z @ 0x1C00032F4 (-ResolveHandle@DxgkCompositionObject@@SAJPEAXKDW4DxgkCompositionObjectType@@PEAPEAV1@@Z.c)
 *     ?UnlockAndRelease@CCompositionSurface@@QEBA_NXZ @ 0x1C00033A8 (-UnlockAndRelease@CCompositionSurface@@QEBA_NXZ.c)
 *     ?GetRenderingRealizationInfo@CCompositionSurface@@QEBAJPEAUCSM_SURFACE_UPDATE@@@Z @ 0x1C0003414 (-GetRenderingRealizationInfo@CCompositionSurface@@QEBAJPEAUCSM_SURFACE_UPDATE@@@Z.c)
 *     ?LockForRead@CompositionSurfaceObject@@QEBAJPEAPEBVCCompositionSurface@@@Z @ 0x1C00035A4 (-LockForRead@CompositionSurfaceObject@@QEBAJPEAPEBVCCompositionSurface@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000A650 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x1C0024300 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026570 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0026840 (memset.c)
 */

__int64 __fastcall NtQueryCompositionSurfaceRenderingRealization(__int64 a1, _OWORD *a2)
{
  struct DXGGLOBAL *Global; // rax
  __int64 v5; // r8
  int v6; // eax
  int v7; // ebx
  PVOID v8; // rsi
  _OWORD *v9; // rdi
  CCompositionSurface *v11; // [rsp+38h] [rbp-100h] BYREF
  PVOID Object[2]; // [rsp+40h] [rbp-F8h] BYREF
  _OWORD v13[13]; // [rsp+50h] [rbp-E8h] BYREF

  memset(v13, 0, 0xC8uLL);
  KeEnterCriticalRegion();
  Global = DXGGLOBAL::GetGlobal();
  if ( (*(unsigned int (**)(void))(*((_QWORD *)Global + 38033) + 296LL))() )
  {
    Object[0] = 0LL;
    LOBYTE(v5) = 1;
    v6 = DxgkCompositionObject::ResolveHandle(a1, 1LL, v5, 1LL, Object);
    v7 = v6;
    v8 = 0LL;
    if ( v6 >= 0 )
      v8 = Object[0];
    Object[1] = v8;
    if ( v6 >= 0 )
    {
      v11 = 0LL;
      v7 = CompositionSurfaceObject::LockForRead(v8, &v11);
      if ( v7 >= 0 )
      {
        CCompositionSurface::GetRenderingRealizationInfo(v11, (struct CSM_SURFACE_UPDATE *)v13);
        CCompositionSurface::UnlockAndRelease(v11);
      }
      ObfDereferenceObject(v8);
    }
  }
  else
  {
    v7 = -1073741790;
  }
  if ( a2 )
  {
    if ( (_OWORD *)((char *)a2 + 200) < a2 || (unsigned __int64)a2 + 200 > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    *a2 = v13[0];
    a2[1] = v13[1];
    a2[2] = v13[2];
    a2[3] = v13[3];
    a2[4] = v13[4];
    a2[5] = v13[5];
    a2[6] = v13[6];
    v9 = a2 + 8;
    *(v9 - 1) = v13[7];
    *v9 = v13[8];
    v9[1] = v13[9];
    v9[2] = v13[10];
    v9[3] = v13[11];
    *((_QWORD *)v9 + 8) = *(_QWORD *)&v13[12];
  }
  else
  {
    v7 = -1073741811;
  }
  KeLeaveCriticalRegion();
  return (unsigned int)v7;
}
