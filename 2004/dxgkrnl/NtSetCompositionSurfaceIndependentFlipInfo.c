/*
 * XREFs of NtSetCompositionSurfaceIndependentFlipInfo @ 0x1C001D510
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?UnlockAndRelease@CCompositionSurface@@QEBA_NXZ @ 0x1C000FB88 (-UnlockAndRelease@CCompositionSurface@@QEBA_NXZ.c)
 *     ?LockForWrite@CompositionSurfaceObject@@QEAAJPEAPEAVCCompositionSurface@@@Z @ 0x1C000FFA8 (-LockForWrite@CompositionSurfaceObject@@QEAAJPEAPEAVCCompositionSurface@@@Z.c)
 *     ?ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAV1@@Z @ 0x1C00160A4 (-ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAV1@@Z.c)
 *     ?SetIndependentFlip@CCompositionSurface@@QEAAJ_K_N1IIPEBIPEAH@Z @ 0x1C001D7DC (-SetIndependentFlip@CCompositionSurface@@QEAAJ_K_N1IIPEBIPEAH@Z.c)
 *     __security_check_cookie @ 0x1C0024350 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00271E0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0027200 (memmove.c)
 */

__int64 __fastcall NtSetCompositionSurfaceIndependentFlipInfo(
        void *a1,
        unsigned __int64 *a2,
        int a3,
        int a4,
        unsigned int a5,
        unsigned int a6,
        char *Src,
        int *a8)
{
  unsigned __int64 *v10; // r10
  int v12; // ebx
  unsigned __int64 v13; // r14
  unsigned int v14; // ecx
  unsigned int v15; // eax
  unsigned int v16; // edx
  size_t v17; // r8
  __int64 v18; // rdx
  __int64 v19; // rcx
  struct DXGGLOBAL *Global; // rax
  __int64 v21; // r8
  int v23; // [rsp+44h] [rbp-A4h] BYREF
  CCompositionSurface *v24; // [rsp+48h] [rbp-A0h] BYREF
  PVOID Object; // [rsp+50h] [rbp-98h] BYREF
  unsigned __int64 v26; // [rsp+58h] [rbp-90h]
  void *v27; // [rsp+60h] [rbp-88h]
  int *v28; // [rsp+68h] [rbp-80h]
  unsigned int v29[16]; // [rsp+70h] [rbp-78h] BYREF

  v10 = a2;
  v27 = a1;
  v28 = a8;
  v12 = 0;
  v13 = 0LL;
  v26 = 0LL;
  v23 = 0;
  if ( a2
    && Src
    && a6
    && (v14 = (((a6 & 0x55555555) + ((a6 >> 1) & 0x55555555)) & 0x33333333)
            + ((((a6 & 0x55555555) + ((a6 >> 1) & 0x55555555)) >> 2) & 0x33333333),
        v15 = (((v14 & 0xF0F0F0F) + ((v14 >> 4) & 0xF0F0F0F)) & 0xFF00FF)
            + ((((v14 & 0xF0F0F0F) + ((v14 >> 4) & 0xF0F0F0F)) >> 8) & 0xFF00FF),
        v16 = (unsigned __int16)v15 + HIWORD(v15),
        v16 < 0x10) )
  {
    if ( v10 + 1 < v10 || (unsigned __int64)(v10 + 1) > MmUserProbeAddress )
      v10 = (unsigned __int64 *)MmUserProbeAddress;
    v13 = *v10;
    v26 = *v10;
    v17 = 4LL * v16;
    if ( &Src[v17] < Src || (unsigned __int64)&Src[v17] > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v29, Src, v17);
  }
  else
  {
    v12 = -1073741811;
  }
  KeEnterCriticalRegion();
  if ( v12 >= 0 )
  {
    Global = DXGGLOBAL::GetGlobal(v19, v18);
    if ( (*(unsigned int (**)(void))(*((_QWORD *)Global + 38048) + 296LL))() )
    {
      Object = 0LL;
      v12 = CompositionSurfaceObject::ResolveHandle(a1, 2u, v21, (struct CompositionSurfaceObject **)&Object);
      if ( v12 >= 0 )
      {
        v24 = 0LL;
        v12 = CompositionSurfaceObject::LockForWrite((char *)Object, &v24);
        if ( v12 >= 0 )
        {
          v12 = CCompositionSurface::SetIndependentFlip(v24, v13, a3 != 0, a4 != 0, a5, a6, v29, &v23);
          CCompositionSurface::UnlockAndRelease(v24);
        }
        ObfDereferenceObject(Object);
      }
    }
    else
    {
      v12 = -1073741790;
    }
  }
  if ( v12 >= 0 )
  {
    if ( a8 )
    {
      if ( a8 + 1 < a8 || (unsigned __int64)(a8 + 1) > MmUserProbeAddress )
        *(_BYTE *)MmUserProbeAddress = 0;
      *a8 = v23;
    }
    else
    {
      v12 = -1073741811;
    }
  }
  KeLeaveCriticalRegion();
  return (unsigned int)v12;
}
