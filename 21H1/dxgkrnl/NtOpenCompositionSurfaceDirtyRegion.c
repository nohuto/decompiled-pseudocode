/*
 * XREFs of NtOpenCompositionSurfaceDirtyRegion @ 0x1C0002ED0
 * Callers:
 *     <none>
 * Callees:
 *     ?UnlockAndRelease@CCompositionSurface@@QEBA_NXZ @ 0x1C00033A8 (-UnlockAndRelease@CCompositionSurface@@QEBA_NXZ.c)
 *     ?LockForRead@CompositionSurfaceObject@@QEBAJPEAPEBVCCompositionSurface@@@Z @ 0x1C00035A4 (-LockForRead@CompositionSurfaceObject@@QEBAJPEAPEBVCCompositionSurface@@@Z.c)
 *     ?OpenLifetimeDirtyRegion@CCompositionSurface@@QEBAJ_KAEBUCSM_REALIZATION_INFO@@PEAPEAUHRGN__@@@Z @ 0x1C0003668 (-OpenLifetimeDirtyRegion@CCompositionSurface@@QEBAJ_KAEBUCSM_REALIZATION_INFO@@PEAPEAUHRGN__@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000A650 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAV1@@Z @ 0x1C0016724 (-ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAV1@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026570 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtOpenCompositionSurfaceDirtyRegion(void *a1, unsigned __int64 *a2, __int128 *a3, HRGN *a4)
{
  int v6; // ebx
  unsigned __int64 v7; // rsi
  struct DXGGLOBAL *Global; // rax
  char v9; // r8
  struct DXGGLOBAL *v11; // rax
  CCompositionSurface *v12; // [rsp+28h] [rbp-70h] BYREF
  PVOID Object; // [rsp+30h] [rbp-68h] BYREF
  unsigned __int64 v14; // [rsp+38h] [rbp-60h]
  __int128 v15; // [rsp+40h] [rbp-58h] BYREF
  __int128 v16; // [rsp+50h] [rbp-48h]
  __int128 v17; // [rsp+60h] [rbp-38h]
  __int128 v18; // [rsp+70h] [rbp-28h]
  HRGN v19; // [rsp+A8h] [rbp+10h] BYREF
  HRGN *v20; // [rsp+B8h] [rbp+20h]

  v20 = a4;
  v6 = 0;
  Object = 0LL;
  v7 = 0LL;
  v14 = 0LL;
  v15 = 0LL;
  v16 = 0LL;
  v19 = 0LL;
  if ( a2 && a3 )
  {
    if ( a2 + 1 < a2 || (unsigned __int64)(a2 + 1) > MmUserProbeAddress )
      a2 = (unsigned __int64 *)MmUserProbeAddress;
    v7 = *a2;
    v14 = *a2;
    if ( a3 + 2 < a3 || (unsigned __int64)(a3 + 2) > MmUserProbeAddress )
      a3 = (__int128 *)MmUserProbeAddress;
    v17 = *a3;
    v18 = a3[1];
    v15 = v17;
    v16 = v18;
  }
  else
  {
    v6 = -1073741811;
  }
  KeEnterCriticalRegion();
  if ( v6 >= 0 )
  {
    Global = DXGGLOBAL::GetGlobal();
    if ( (*(unsigned int (__fastcall **)(_QWORD))(*((_QWORD *)Global + 38033) + 296LL))(*((_QWORD *)Global + 38033)) )
    {
      v6 = CompositionSurfaceObject::ResolveHandle(a1, 1u, v9, (struct CompositionSurfaceObject **)&Object);
      if ( v6 >= 0 )
      {
        v12 = 0LL;
        v6 = CompositionSurfaceObject::LockForRead(Object, &v12);
        if ( v6 >= 0 )
        {
          v6 = CCompositionSurface::OpenLifetimeDirtyRegion(v12, v7, (const struct CSM_REALIZATION_INFO *)&v15, &v19);
          CCompositionSurface::UnlockAndRelease(v12);
        }
        ObfDereferenceObject(Object);
      }
    }
    else
    {
      v6 = -1073741790;
    }
  }
  if ( a4 )
  {
    if ( a4 + 1 < a4 || (unsigned __int64)(a4 + 1) > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    *a4 = v19;
  }
  else
  {
    v6 = -1073741811;
  }
  if ( v6 < 0 && v19 )
  {
    v11 = DXGGLOBAL::GetGlobal();
    (*(void (__fastcall **)(HRGN))(*((_QWORD *)v11 + 38033) + 56LL))(v19);
  }
  KeLeaveCriticalRegion();
  return (unsigned int)v6;
}
