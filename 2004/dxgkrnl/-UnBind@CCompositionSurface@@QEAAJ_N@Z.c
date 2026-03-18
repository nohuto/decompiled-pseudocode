/*
 * XREFs of ?UnBind@CCompositionSurface@@QEAAJ_N@Z @ 0x1C0011B78
 * Callers:
 *     NtUnBindCompositionSurface @ 0x1C000E9E0 (NtUnBindCompositionSurface.c)
 *     NtBindCompositionSurface @ 0x1C000EEB0 (NtBindCompositionSurface.c)
 *     ?Bind@CCompositionSurface@@QEAAJAEBUCSM_BUFFER_INFO@@_N1PEA_K@Z @ 0x1C001109C (-Bind@CCompositionSurface@@QEAAJAEBUCSM_BUFFER_INFO@@_N1PEA_K@Z.c)
 *     ?PairedUnBind@CCompositionSurface@@UEAAJ_N@Z @ 0x1C0065290 (-PairedUnBind@CCompositionSurface@@UEAAJ_N@Z.c)
 *     ??1CContentResource@@UEAA@XZ @ 0x1C006D10C (--1CContentResource@@UEAA@XZ.c)
 *     ?RebindCompositionSurfaceBuffer@CContentResource@@QEAAJPEBUCSM_BUFFER_INFO@@@Z @ 0x1C006D3D8 (-RebindCompositionSurfaceBuffer@CContentResource@@QEAAJPEBUCSM_BUFFER_INFO@@@Z.c)
 * Callees:
 *     ?GetActiveBuffer@CCompositionSurface@@IEBAPEAVCCompositionBuffer@@XZ @ 0x1C0011A5C (-GetActiveBuffer@CCompositionSurface@@IEBAPEAVCCompositionBuffer@@XZ.c)
 *     ?ReleaseAllBuffers@CCompositionSurface@@IEAA_NXZ @ 0x1C001238C (-ReleaseAllBuffers@CCompositionSurface@@IEAA_NXZ.c)
 *     ?DisableCascadedSignaling@CFlipExBuffer@@QEAAXXZ @ 0x1C001262C (-DisableCascadedSignaling@CFlipExBuffer@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00271E0 (_guard_dispatch_icall_nop.c)
 *     ?FromBuffer@CFlipExBuffer@@SAPEAV1@PEAVCCompositionBuffer@@@Z @ 0x1C0065410 (-FromBuffer@CFlipExBuffer@@SAPEAV1@PEAVCCompositionBuffer@@@Z.c)
 */

__int64 __fastcall CCompositionSurface::UnBind(CCompositionSurface *this, char a2)
{
  __int64 v4; // rcx
  struct CCompositionBuffer *ActiveBuffer; // rax
  struct CCompositionBuffer *v6; // rbx
  CFlipExBuffer *v8; // rax

  v4 = *((_QWORD *)this + 12);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 32LL))(v4);
  if ( a2 )
  {
    ActiveBuffer = CCompositionSurface::GetActiveBuffer(this);
    v6 = ActiveBuffer;
    if ( ActiveBuffer )
    {
      if ( *((_QWORD *)this + 12)
        && (*(unsigned int (__fastcall **)(struct CCompositionBuffer *))(*(_QWORD *)ActiveBuffer + 8LL))(ActiveBuffer) == 2 )
      {
        v8 = CFlipExBuffer::FromBuffer(v6);
        CFlipExBuffer::DisableCascadedSignaling(v8);
      }
      *((_BYTE *)v6 + 40) = 0;
    }
  }
  else
  {
    CCompositionSurface::ReleaseAllBuffers(this);
  }
  return 0LL;
}
