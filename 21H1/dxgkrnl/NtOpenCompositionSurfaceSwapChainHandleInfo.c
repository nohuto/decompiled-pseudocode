/*
 * XREFs of NtOpenCompositionSurfaceSwapChainHandleInfo @ 0x1C0002C10
 * Callers:
 *     <none>
 * Callees:
 *     ?OpenSwapChainHandles@CCompositionSurface@@QEBAJ_KPEAUCSM_SWAPCHAIN_HANDLE_INFO@@@Z @ 0x1C0002E60 (-OpenSwapChainHandles@CCompositionSurface@@QEBAJ_KPEAUCSM_SWAPCHAIN_HANDLE_INFO@@@Z.c)
 *     ?UnlockAndRelease@CCompositionSurface@@QEBA_NXZ @ 0x1C00033A8 (-UnlockAndRelease@CCompositionSurface@@QEBA_NXZ.c)
 *     ?LockForRead@CompositionSurfaceObject@@QEBAJPEAPEBVCCompositionSurface@@@Z @ 0x1C00035A4 (-LockForRead@CompositionSurfaceObject@@QEBAJPEAPEBVCCompositionSurface@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000A650 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAV1@@Z @ 0x1C0016724 (-ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAV1@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026570 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0026840 (memset.c)
 */

__int64 __fastcall NtOpenCompositionSurfaceSwapChainHandleInfo(void *a1, unsigned __int64 *a2, _OWORD *a3)
{
  unsigned int v6; // edi
  int v7; // ebx
  unsigned __int64 v8; // r15
  bool v9; // r12
  struct DXGGLOBAL *Global; // rax
  char v11; // r8
  HANDLE *v12; // rax
  __int64 v13; // rcx
  PVOID Object; // [rsp+28h] [rbp-150h] BYREF
  unsigned __int64 v16; // [rsp+30h] [rbp-148h]
  HANDLE v17[39]; // [rsp+40h] [rbp-138h] BYREF
  CCompositionSurface *v18; // [rsp+198h] [rbp+20h] BYREF

  v6 = 0;
  v7 = 0;
  Object = 0LL;
  v8 = 0LL;
  v16 = 0LL;
  memset(v17, 0, 0x100uLL);
  v9 = 0;
  if ( a2 )
  {
    if ( a2 + 1 < a2 || (unsigned __int64)(a2 + 1) > MmUserProbeAddress )
      a2 = (unsigned __int64 *)MmUserProbeAddress;
    v8 = *a2;
    v16 = *a2;
  }
  else
  {
    v7 = -1073741811;
  }
  KeEnterCriticalRegion();
  if ( v7 >= 0 )
  {
    Global = DXGGLOBAL::GetGlobal();
    if ( (*(unsigned int (__fastcall **)(_QWORD))(*((_QWORD *)Global + 38033) + 296LL))(*((_QWORD *)Global + 38033)) )
    {
      v7 = CompositionSurfaceObject::ResolveHandle(a1, 1u, v11, (struct CompositionSurfaceObject **)&Object);
      if ( v7 >= 0 )
      {
        v18 = 0LL;
        v7 = CompositionSurfaceObject::LockForRead(Object, &v18);
        if ( v7 >= 0 )
        {
          v7 = CCompositionSurface::OpenSwapChainHandles(v18, v8, (struct CSM_SWAPCHAIN_HANDLE_INFO *)v17);
          v9 = v7 >= 0;
          CCompositionSurface::UnlockAndRelease(v18);
        }
        ObfDereferenceObject(Object);
      }
    }
    else
    {
      v7 = -1073741790;
    }
  }
  if ( v7 < 0 )
    goto LABEL_27;
  if ( a3 )
  {
    if ( a3 + 16 < a3 || (unsigned __int64)(a3 + 16) > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    v12 = v17;
    v13 = 2LL;
    do
    {
      *a3 = *(_OWORD *)v12;
      a3[1] = *((_OWORD *)v12 + 1);
      a3[2] = *((_OWORD *)v12 + 2);
      a3[3] = *((_OWORD *)v12 + 3);
      a3[4] = *((_OWORD *)v12 + 4);
      a3[5] = *((_OWORD *)v12 + 5);
      a3[6] = *((_OWORD *)v12 + 6);
      a3 += 8;
      *(a3 - 1) = *((_OWORD *)v12 + 7);
      v12 += 16;
      --v13;
    }
    while ( v13 );
  }
  else
  {
    v7 = -1073741811;
  }
  if ( v7 < 0 )
  {
LABEL_27:
    if ( v9 && LODWORD(v17[0]) )
    {
      do
        ObCloseHandle(v17[++v6], 1);
      while ( v6 < LODWORD(v17[0]) );
    }
  }
  KeLeaveCriticalRegion();
  return (unsigned int)v7;
}
