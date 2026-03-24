/*
 * XREFs of NtOpenCompositionSurfaceDirtyRegion @ 0x1C000F7A0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00041C0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?UnlockAndRelease@CCompositionSurface@@QEBA_NXZ @ 0x1C000FC78 (-UnlockAndRelease@CCompositionSurface@@QEBA_NXZ.c)
 *     ?LockForRead@CompositionSurfaceObject@@QEBAJPEAPEBVCCompositionSurface@@@Z @ 0x1C000FE74 (-LockForRead@CompositionSurfaceObject@@QEBAJPEAPEBVCCompositionSurface@@@Z.c)
 *     ?OpenLifetimeDirtyRegion@CCompositionSurface@@QEBAJ_KAEBUCSM_REALIZATION_INFO@@PEAPEAUHRGN__@@@Z @ 0x1C000FF38 (-OpenLifetimeDirtyRegion@CCompositionSurface@@QEBAJ_KAEBUCSM_REALIZATION_INFO@@PEAPEAUHRGN__@@@Z.c)
 *     ?ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAV1@@Z @ 0x1C00168A4 (-ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAV1@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028C00 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtOpenCompositionSurfaceDirtyRegion(void *a1, unsigned __int64 *a2, __int128 *a3, HRGN *a4)
{
  int v6; // ebx
  unsigned __int64 v7; // rsi
  __int64 v8; // rdx
  ULONG64 v9; // rcx
  struct DXGGLOBAL *Global; // rax
  char v11; // r8
  struct DXGGLOBAL *v13; // rax
  CCompositionSurface *v14; // [rsp+28h] [rbp-70h] BYREF
  PVOID Object; // [rsp+30h] [rbp-68h] BYREF
  unsigned __int64 v16; // [rsp+38h] [rbp-60h]
  __int128 v17; // [rsp+40h] [rbp-58h] BYREF
  __int128 v18; // [rsp+50h] [rbp-48h]
  __int128 v19; // [rsp+60h] [rbp-38h]
  __int128 v20; // [rsp+70h] [rbp-28h]
  HRGN v21; // [rsp+A8h] [rbp+10h] BYREF
  HRGN *v22; // [rsp+B8h] [rbp+20h]

  v22 = a4;
  v6 = 0;
  Object = 0LL;
  v7 = 0LL;
  v16 = 0LL;
  v17 = 0LL;
  v18 = 0LL;
  v21 = 0LL;
  if ( a2 && a3 )
  {
    if ( a2 + 1 < a2 || (unsigned __int64)(a2 + 1) > MmUserProbeAddress )
      a2 = (unsigned __int64 *)MmUserProbeAddress;
    v7 = *a2;
    v16 = *a2;
    if ( a3 + 2 < a3 || (unsigned __int64)(a3 + 2) > MmUserProbeAddress )
      a3 = (__int128 *)MmUserProbeAddress;
    v19 = *a3;
    v20 = a3[1];
    v17 = v19;
    v18 = v20;
  }
  else
  {
    v6 = -1073741811;
  }
  KeEnterCriticalRegion();
  if ( v6 >= 0 )
  {
    Global = DXGGLOBAL::GetGlobal(v9, v8);
    if ( (*(unsigned int (__fastcall **)(_QWORD))(*((_QWORD *)Global + 38048) + 296LL))(*((_QWORD *)Global + 38048)) )
    {
      v6 = CompositionSurfaceObject::ResolveHandle(a1, 1u, v11, (struct CompositionSurfaceObject **)&Object);
      if ( v6 >= 0 )
      {
        v14 = 0LL;
        v6 = CompositionSurfaceObject::LockForRead(Object, &v14);
        if ( v6 >= 0 )
        {
          v6 = CCompositionSurface::OpenLifetimeDirtyRegion(v14, v7, (const struct CSM_REALIZATION_INFO *)&v17, &v21);
          CCompositionSurface::UnlockAndRelease(v14);
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
    v9 = (ULONG64)(a4 + 1);
    if ( a4 + 1 < a4 || v9 > MmUserProbeAddress )
    {
      v9 = MmUserProbeAddress;
      *(_BYTE *)MmUserProbeAddress = 0;
    }
    *a4 = v21;
  }
  else
  {
    v6 = -1073741811;
  }
  if ( v6 < 0 && v21 )
  {
    v13 = DXGGLOBAL::GetGlobal(v9, v8);
    (*(void (__fastcall **)(HRGN))(*((_QWORD *)v13 + 38048) + 56LL))(v21);
  }
  KeLeaveCriticalRegion();
  return (unsigned int)v6;
}
