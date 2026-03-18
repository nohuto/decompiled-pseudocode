/*
 * XREFs of NtOpenCompositionSurfaceDirtyRegion @ 0x1C00052D0
 * Callers:
 *     <none>
 * Callees:
 *     ?UnlockAndRelease@CCompositionSurface@@QEBA_NXZ @ 0x1C00054E8 (-UnlockAndRelease@CCompositionSurface@@QEBA_NXZ.c)
 *     ?OpenLifetimeDirtyRegion@CCompositionSurface@@QEBAJ_KAEBUCSM_REALIZATION_INFO@@PEAPEAUHRGN__@@@Z @ 0x1C0005554 (-OpenLifetimeDirtyRegion@CCompositionSurface@@QEBAJ_KAEBUCSM_REALIZATION_INFO@@PEAPEAUHRGN__@@@Z.c)
 *     ?ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAV1@@Z @ 0x1C0005A8C (-ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAV1@@Z.c)
 *     ?LockForRead@CompositionSurfaceObject@@QEBAJPEAPEBVCCompositionSurface@@@Z @ 0x1C00072FC (-LockForRead@CompositionSurfaceObject@@QEBAJPEAPEBVCCompositionSurface@@@Z.c)
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtOpenCompositionSurfaceDirtyRegion(void *a1, unsigned __int64 *a2, ULONG64 a3, HRGN *a4)
{
  int v6; // ebx
  unsigned __int64 v7; // rsi
  struct DXGGLOBAL *Global; // rax
  char v9; // r8
  struct DXGGLOBAL *v11; // rax
  CCompositionSurface *v12; // [rsp+28h] [rbp-80h] BYREF
  PVOID Object; // [rsp+30h] [rbp-78h] BYREF
  unsigned __int64 v14; // [rsp+38h] [rbp-70h]
  __int128 v15; // [rsp+40h] [rbp-68h] BYREF
  __int128 v16; // [rsp+50h] [rbp-58h]
  __int64 v17; // [rsp+60h] [rbp-48h]
  __int128 v18; // [rsp+68h] [rbp-40h]
  __int128 v19; // [rsp+78h] [rbp-30h]
  __int64 v20; // [rsp+88h] [rbp-20h]
  HRGN v21; // [rsp+B8h] [rbp+10h] BYREF
  HRGN *v22; // [rsp+C8h] [rbp+20h]

  v22 = a4;
  v6 = 0;
  Object = 0LL;
  v7 = 0LL;
  v14 = 0LL;
  v15 = 0LL;
  v16 = 0LL;
  v17 = 0LL;
  v21 = 0LL;
  if ( a2 && a3 )
  {
    if ( a2 + 1 < a2 || (unsigned __int64)(a2 + 1) > MmUserProbeAddress )
      a2 = (unsigned __int64 *)MmUserProbeAddress;
    v7 = *a2;
    v14 = *a2;
    if ( a3 + 40 < a3 || a3 + 40 > MmUserProbeAddress )
      a3 = MmUserProbeAddress;
    v18 = *(_OWORD *)a3;
    v19 = *(_OWORD *)(a3 + 16);
    v20 = *(_QWORD *)(a3 + 32);
    v15 = v18;
    v16 = v19;
    v17 = v20;
  }
  else
  {
    v6 = -1073741811;
  }
  KeEnterCriticalRegion();
  if ( v6 >= 0 )
  {
    Global = DXGGLOBAL_GetGlobal();
    if ( (*(unsigned int (__fastcall **)(_QWORD))(*((_QWORD *)Global + 38073) + 528LL))(*((_QWORD *)Global + 38073)) )
    {
      v6 = CompositionSurfaceObject::ResolveHandle(a1, 1u, v9, (struct CompositionSurfaceObject **)&Object);
      if ( v6 >= 0 )
      {
        v12 = 0LL;
        v6 = CompositionSurfaceObject::LockForRead((CompositionSurfaceObject *)Object, &v12);
        if ( v6 >= 0 )
        {
          v6 = CCompositionSurface::OpenLifetimeDirtyRegion(v12, v7, (const struct CSM_REALIZATION_INFO *)&v15, &v21);
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
    *a4 = v21;
  }
  else
  {
    v6 = -1073741811;
  }
  if ( v6 < 0 && v21 )
  {
    v11 = DXGGLOBAL_GetGlobal();
    (*(void (__fastcall **)(HRGN))(*((_QWORD *)v11 + 38073) + 56LL))(v21);
  }
  KeLeaveCriticalRegion();
  return (unsigned int)v6;
}
