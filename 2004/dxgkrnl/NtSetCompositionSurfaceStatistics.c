/*
 * XREFs of NtSetCompositionSurfaceStatistics @ 0x1C0064E50
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?UnlockAndRelease@CCompositionSurface@@QEBA_NXZ @ 0x1C000FB88 (-UnlockAndRelease@CCompositionSurface@@QEBA_NXZ.c)
 *     ?LockForWrite@CompositionSurfaceObject@@QEAAJPEAPEAVCCompositionSurface@@@Z @ 0x1C000FFA8 (-LockForWrite@CompositionSurfaceObject@@QEAAJPEAPEAVCCompositionSurface@@@Z.c)
 *     ?ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAV1@@Z @ 0x1C00160A4 (-ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAV1@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00271E0 (_guard_dispatch_icall_nop.c)
 *     ?SetSurfaceStats@CCompositionSurface@@QEAAJ_KAEBUDXGI_FRAME_STATISTICS@@@Z @ 0x1C006579C (-SetSurfaceStats@CCompositionSurface@@QEAAJ_KAEBUDXGI_FRAME_STATISTICS@@@Z.c)
 */

__int64 __fastcall NtSetCompositionSurfaceStatistics(void *a1, unsigned __int64 *a2, __int128 *a3)
{
  int v4; // ebx
  unsigned __int64 v5; // rsi
  __int128 v6; // xmm1
  __int64 v7; // rdx
  __int64 v8; // rcx
  struct DXGGLOBAL *Global; // rax
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // r8
  CCompositionSurface *v14; // rdi
  unsigned __int64 v16; // [rsp+20h] [rbp-48h]
  __int128 v17; // [rsp+28h] [rbp-40h] BYREF
  __int128 v18; // [rsp+38h] [rbp-30h]
  PVOID Object; // [rsp+80h] [rbp+18h] BYREF
  CCompositionSurface *v20; // [rsp+88h] [rbp+20h] BYREF

  v4 = 0;
  v17 = 0LL;
  v18 = 0LL;
  v5 = 0LL;
  v16 = 0LL;
  if ( a3 && a2 )
  {
    if ( a2 + 1 < a2 || (unsigned __int64)(a2 + 1) > MmUserProbeAddress )
      a2 = (unsigned __int64 *)MmUserProbeAddress;
    v5 = *a2;
    v16 = *a2;
    if ( a3 + 2 < a3 || (unsigned __int64)(a3 + 2) > MmUserProbeAddress )
      a3 = (__int128 *)MmUserProbeAddress;
    v6 = a3[1];
    v17 = *a3;
    v18 = v6;
  }
  else
  {
    v4 = -1073741811;
  }
  KeEnterCriticalRegion();
  if ( v4 >= 0 )
  {
    Global = DXGGLOBAL::GetGlobal(v8, v7);
    if ( (*(unsigned int (__fastcall **)(_QWORD, __int64, __int64, __int64, unsigned __int64))(*((_QWORD *)Global + 38048)
                                                                                             + 296LL))(
           *((_QWORD *)Global + 38048),
           v10,
           v11,
           v12,
           v16) )
    {
      Object = 0LL;
      v4 = CompositionSurfaceObject::ResolveHandle(a1, 2u, v13, (struct CompositionSurfaceObject **)&Object);
      if ( v4 >= 0 )
      {
        v20 = 0LL;
        v4 = CompositionSurfaceObject::LockForWrite((char *)Object, &v20);
        if ( v4 >= 0 )
        {
          v14 = v20;
          if ( *((_BYTE *)v20 + 88) )
            CCompositionSurface::SetSurfaceStats(v20, v5, (const struct DXGI_FRAME_STATISTICS *)&v17);
          else
            v4 = -1073741823;
          CCompositionSurface::UnlockAndRelease(v14);
        }
        ObfDereferenceObject(Object);
      }
    }
    else
    {
      v4 = -1073741790;
    }
  }
  KeLeaveCriticalRegion();
  return (unsigned int)v4;
}
