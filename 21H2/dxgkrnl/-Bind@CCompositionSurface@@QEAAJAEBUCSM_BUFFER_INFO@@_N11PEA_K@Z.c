/*
 * XREFs of ?Bind@CCompositionSurface@@QEAAJAEBUCSM_BUFFER_INFO@@_N11PEA_K@Z @ 0x1C0004950
 * Callers:
 *     NtBindCompositionSurface @ 0x1C0004600 (NtBindCompositionSurface.c)
 *     ?PairedBind@CompositionSurfaceObject@@UEAAJPEAUCSM_BUFFER_INFO@@_NPEA_K@Z @ 0x1C0077D10 (-PairedBind@CompositionSurfaceObject@@UEAAJPEAUCSM_BUFFER_INFO@@_NPEA_K@Z.c)
 * Callees:
 *     ?ReleaseAllBuffers@CCompositionSurface@@IEAA_NXZ @ 0x1C00036FC (-ReleaseAllBuffers@CCompositionSurface@@IEAA_NXZ.c)
 *     ?UnBind@CCompositionSurface@@QEAAJ_N@Z @ 0x1C0004208 (-UnBind@CCompositionSurface@@QEAAJ_N@Z.c)
 *     ?Bind@CCompositionSurface@@QEAAJPEAVCCompositionBuffer@@PEA_K@Z @ 0x1C0004A50 (-Bind@CCompositionSurface@@QEAAJPEAVCCompositionBuffer@@PEA_K@Z.c)
 *     ?GetActiveBuffer@CCompositionSurface@@IEBAPEAVCCompositionBuffer@@XZ @ 0x1C000668C (-GetActiveBuffer@CCompositionSurface@@IEBAPEAVCCompositionBuffer@@XZ.c)
 *     ?Create@CFlipExBuffer@@SAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_SWAPCHAIN_BUFFER_INFO_@@_NPEAPEAV1@@Z @ 0x1C0007530 (-Create@CFlipExBuffer@@SAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_SWAPCHAIN_BUFFER_INFO_@@_NPEAPEAV1@.c)
 *     ?PairBind@CCompositionSurface@@IEAAJPEAVCFlipExBuffer@@@Z @ 0x1C00781E8 (-PairBind@CCompositionSurface@@IEAAJPEAVCFlipExBuffer@@@Z.c)
 *     ?Create@CCompositionBuffer@@SAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_SINGLE_BUFFER_INFO@@PEAPEAV1@@Z @ 0x1C0078694 (-Create@CCompositionBuffer@@SAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_SINGLE_BUFFER_INFO@@PEAPEAV1@@.c)
 */

__int64 __fastcall CCompositionSurface::Bind(
        CCompositionSurface *this,
        const struct CSM_BUFFER_INFO *a2,
        char a3,
        __int64 a4,
        bool a5,
        unsigned __int64 *a6)
{
  struct CCompositionBuffer *v6; // rsi
  struct CCompositionBuffer *ActiveBuffer; // rax
  __int64 v10; // rdx
  bool v11; // r8
  __int64 v12; // r9
  bool v13; // bp
  signed int v14; // ebx
  struct CCompositionBuffer *v15; // rbx
  struct CCompositionBuffer *v17; // [rsp+20h] [rbp-28h] BYREF
  struct CCompositionBuffer *v18; // [rsp+50h] [rbp+8h] BYREF

  v17 = 0LL;
  v6 = 0LL;
  v18 = 0LL;
  ActiveBuffer = CCompositionSurface::GetActiveBuffer(this);
  v13 = a5;
  v14 = ActiveBuffer != 0LL ? 0xC0000510 : 0;
  if ( (*((_QWORD *)this + 13) || a5) && *(_DWORD *)v10 != 2 )
    return (unsigned int)-1073741790;
  if ( !ActiveBuffer )
  {
    if ( *(_DWORD *)v10 == 1 )
    {
      v14 = CCompositionBuffer::Create(
              (const struct CSM_BUFFER_ATTRIBUTES *)(v12 + 16),
              (const struct CSM_SINGLE_BUFFER_INFO *)(v10 + 160),
              &v17);
      if ( v14 < 0 )
        return (unsigned int)v14;
      v15 = v17;
      goto LABEL_8;
    }
    if ( *(_DWORD *)v10 != 2 )
      return (unsigned int)-1073741811;
    v14 = CFlipExBuffer::Create(
            (const struct CSM_BUFFER_ATTRIBUTES *)(v12 + 16),
            (const struct CSM_SWAPCHAIN_BUFFER_INFO_ *)(v10 + 160),
            v11,
            &v18);
    if ( v14 >= 0 )
    {
      v6 = v18;
      v15 = v18;
LABEL_8:
      if ( !a3 )
        CCompositionSurface::ReleaseAllBuffers(this);
      v14 = CCompositionSurface::Bind(this, v15, a6);
      if ( v14 >= 0 && v6 )
      {
        if ( *((_QWORD *)this + 13) )
        {
          v14 = CCompositionSurface::PairBind(this, v6);
          if ( v14 < 0 )
            CCompositionSurface::UnBind(this, 0);
        }
        else
        {
          *((_BYTE *)this + 112) = v13;
          *((_BYTE *)v6 + 652) = v13;
        }
      }
    }
  }
  return (unsigned int)v14;
}
