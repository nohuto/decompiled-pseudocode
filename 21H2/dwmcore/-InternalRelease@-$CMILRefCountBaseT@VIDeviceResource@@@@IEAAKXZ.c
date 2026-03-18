/*
 * XREFs of ?InternalRelease@?$CMILRefCountBaseT@VIDeviceResource@@@@IEAAKXZ @ 0x1800EC208
 * Callers:
 *     ??1CSurfaceShaderComposer@@QEAA@XZ @ 0x180023F74 (--1CSurfaceShaderComposer@@QEAA@XZ.c)
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@VCD3DConstantBuffer@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@VCD3DConstantBuffer@@Uerr_returncode_policy@wil@@@wil@@QEAV12@AEAV?$allocator@V?$com_ptr_t@VCD3DConstantBuffer@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x1800358D4 (--$_Destroy_range@V-$allocator@V-$com_ptr_t@VCD3DConstantBuffer@@Uerr_returncode_policy@wil@@@wi.c)
 *     ?FindOrCreateResourceNoRef@?$CDeviceResourceTable@VCD3DConstantBuffer@@VCRenderingTechnique@@@@QEAAJPEAVCD3DDevice@@PEAPEAVCD3DConstantBuffer@@@Z @ 0x18003A12C (-FindOrCreateResourceNoRef@-$CDeviceResourceTable@VCD3DConstantBuffer@@VCRenderingTechnique@@@@Q.c)
 *     ?Create@CD3DConstantBuffer@@SAJPEAVCD3DDevice@@IW4D3D11_USAGE@@PEBXPEAPEAV1@@Z @ 0x18003B108 (-Create@CD3DConstantBuffer@@SAJPEAVCD3DDevice@@IW4D3D11_USAGE@@PEBXPEAPEAV1@@Z.c)
 *     ?Release@?$CMILCOMBaseT@VIDeviceResource@@@@UEAAKXZ @ 0x1800EC1F8 (-Release@-$CMILCOMBaseT@VIDeviceResource@@@@UEAAKXZ.c)
 *     ??1CSceneResourceManager@@QEAA@XZ @ 0x1801993B4 (--1CSceneResourceManager@@QEAA@XZ.c)
 *     ?reset@?$com_ptr_t@VCD3DVidMemOnlyTexture@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180199FD0 (-reset@-$com_ptr_t@VCD3DVidMemOnlyTexture@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?SetScratchConstantBuffer@CSurfaceShaderComposer@@QEAAJV?$span@$$CBE$0?0@gsl@@I@Z @ 0x18028A70C (-SetScratchConstantBuffer@CSurfaceShaderComposer@@QEAAJV-$span@$$CBE$0-0@gsl@@I@Z.c)
 *     ?Release@CD3DSurface@@UEAAKXZ @ 0x18028C9C8 (-Release@CD3DSurface@@UEAAKXZ.c)
 *     ??1CDxHandleYUVBitmapRealization@@MEAA@XZ @ 0x1802A50A8 (--1CDxHandleYUVBitmapRealization@@MEAA@XZ.c)
 *     ?Create@CD3DVidMemOnlyTexture@@SAJPEAUID3D11Texture2D@@I_NPEAVCD3DDevice@@PEAPEAV1@@Z @ 0x1802B3BCC (-Create@CD3DVidMemOnlyTexture@@SAJPEAUID3D11Texture2D@@I_NPEAVCD3DDevice@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x1800B2E40 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CMILRefCountBaseT<IDeviceResource>::InternalRelease(volatile signed __int32 *a1)
{
  volatile signed __int32 *v2; // rdi
  unsigned __int32 v3; // ebx
  __int64 v4; // rcx

  v2 = a1 + 4;
  v3 = _InterlockedDecrement(a1 + 4);
  if ( !v3 )
  {
    CMILRefCountImpl::AddReference((CMILRefCountImpl *)(a1 + 4));
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)a1 + 64LL))(a1);
    v3 = _InterlockedDecrement(v2);
    if ( !v3 )
    {
      v4 = *(_QWORD *)a1;
      --*v2;
      (*(void (__fastcall **)(volatile signed __int32 *, __int64))(v4 + 56))(a1, 1LL);
    }
  }
  return v3;
}
