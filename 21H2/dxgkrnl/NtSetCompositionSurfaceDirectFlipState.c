/*
 * XREFs of NtSetCompositionSurfaceDirectFlipState @ 0x1C0021AB0
 * Callers:
 *     <none>
 * Callees:
 *     ?UnlockAndRelease@CCompositionSurface@@QEBA_NXZ @ 0x1C00054E8 (-UnlockAndRelease@CCompositionSurface@@QEBA_NXZ.c)
 *     ?ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAV1@@Z @ 0x1C0005A8C (-ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAV1@@Z.c)
 *     ?FindBuffer@CCompositionSurface@@IEBAJ_KPEAPEAVCCompositionBuffer@@@Z @ 0x1C00070D4 (-FindBuffer@CCompositionSurface@@IEBAJ_KPEAPEAVCCompositionBuffer@@@Z.c)
 *     ?LockForWrite@CompositionSurfaceObject@@QEAAJPEAPEAVCCompositionSurface@@@Z @ 0x1C0007E48 (-LockForWrite@CompositionSurfaceObject@@QEAAJPEAPEAVCCompositionSurface@@@Z.c)
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtSetCompositionSurfaceDirectFlipState(void *a1, __int64 *a2, int a3, int a4)
{
  int Buffer; // ebx
  __int64 v8; // rdi
  struct DXGGLOBAL *Global; // rax
  __int64 v10; // r8
  __int64 v11; // rdx
  __int64 v12; // r8
  PVOID Object; // [rsp+20h] [rbp-48h] BYREF
  __int64 v15; // [rsp+28h] [rbp-40h]
  struct CCompositionBuffer *v16; // [rsp+30h] [rbp-38h] BYREF
  CCompositionSurface *v17; // [rsp+78h] [rbp+10h] BYREF
  int v18; // [rsp+80h] [rbp+18h]
  int v19; // [rsp+88h] [rbp+20h]

  v19 = a4;
  v18 = a3;
  Buffer = 0;
  v8 = 0LL;
  v15 = 0LL;
  if ( a2 )
  {
    if ( a2 + 1 < a2 || (unsigned __int64)(a2 + 1) > MmUserProbeAddress )
      a2 = (__int64 *)MmUserProbeAddress;
    v8 = *a2;
    v15 = *a2;
  }
  else
  {
    Buffer = -1073741811;
  }
  KeEnterCriticalRegion();
  if ( Buffer >= 0 )
  {
    Global = DXGGLOBAL_GetGlobal();
    if ( (*(unsigned int (**)(void))(*((_QWORD *)Global + 38073) + 528LL))() )
    {
      Object = 0LL;
      Buffer = CompositionSurfaceObject::ResolveHandle(a1, 2u, v10, (struct CompositionSurfaceObject **)&Object);
      if ( Buffer >= 0 )
      {
        v17 = 0LL;
        Buffer = CompositionSurfaceObject::LockForWrite((char *)Object, &v17);
        if ( Buffer >= 0 )
        {
          v16 = 0LL;
          Buffer = CCompositionSurface::FindBuffer(v17, v8, &v16);
          if ( Buffer >= 0 )
          {
            LOBYTE(v12) = a4 != 0;
            LOBYTE(v11) = a3 != 0;
            (*(void (__fastcall **)(struct CCompositionBuffer *, __int64, __int64))(*(_QWORD *)v16 + 168LL))(
              v16,
              v11,
              v12);
          }
          CCompositionSurface::UnlockAndRelease(v17);
        }
        ObfDereferenceObject(Object);
      }
    }
    else
    {
      Buffer = -1073741790;
    }
  }
  KeLeaveCriticalRegion();
  return (unsigned int)Buffer;
}
