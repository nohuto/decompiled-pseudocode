/*
 * XREFs of ?Bind@CCompositionSurface@@QEAAJAEBUCSM_BUFFER_INFO@@_N1PEA_K@Z @ 0x1C0004984
 * Callers:
 *     NtBindCompositionSurface @ 0x1C00026D0 (NtBindCompositionSurface.c)
 *     ?PairedBind@CompositionSurfaceObject@@UEAAJAEAU_CSM_BUFFER_INFO_WRAPPER@@_NPEA_K@Z @ 0x1C0064080 (-PairedBind@CompositionSurfaceObject@@UEAAJAEAU_CSM_BUFFER_INFO_WRAPPER@@_NPEA_K@Z.c)
 *     ?RebindCompositionSurfaceBuffer@CContentResource@@QEAAJPEBUCSM_BUFFER_INFO@@@Z @ 0x1C006C248 (-RebindCompositionSurfaceBuffer@CContentResource@@QEAAJPEBUCSM_BUFFER_INFO@@@Z.c)
 * Callees:
 *     ?Create@CFlipExBuffer@@SAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_SWAPCHAIN_BUFFER_INFO@@_NPEAPEAV1@@Z @ 0x1C0004A88 (-Create@CFlipExBuffer@@SAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_SWAPCHAIN_BUFFER_INFO@@_NPEAPEAV1@@.c)
 *     ?GetActiveBuffer@CCompositionSurface@@IEBAPEAVCCompositionBuffer@@XZ @ 0x1C000534C (-GetActiveBuffer@CCompositionSurface@@IEBAPEAVCCompositionBuffer@@XZ.c)
 *     ?UnBind@CCompositionSurface@@QEAAJ_N@Z @ 0x1C0005468 (-UnBind@CCompositionSurface@@QEAAJ_N@Z.c)
 *     ?ReleaseAllBuffers@CCompositionSurface@@IEAA_NXZ @ 0x1C000748C (-ReleaseAllBuffers@CCompositionSurface@@IEAA_NXZ.c)
 *     ?PairBind@CCompositionSurface@@IEAAJPEAVCFlipExBuffer@@@Z @ 0x1C00644DC (-PairBind@CCompositionSurface@@IEAAJPEAVCFlipExBuffer@@@Z.c)
 *     ?Create@CCompositionBuffer@@SAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_SINGLE_BUFFER_INFO@@PEAPEAV1@@Z @ 0x1C00648B4 (-Create@CCompositionBuffer@@SAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_SINGLE_BUFFER_INFO@@PEAPEAV1@@.c)
 *     ?Create@CCompositionSwapchainBuffer@@SAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_COMPOSITION_SWAPCHAIN_BUFFER_INFO@@_NPEAPEAV1@@Z @ 0x1C006529C (-Create@CCompositionSwapchainBuffer@@SAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_COMPOSITION_SWAPCHAIN.c)
 */

__int64 __fastcall CCompositionSurface::Bind(
        CCompositionSurface *this,
        const struct CSM_BUFFER_INFO *a2,
        char a3,
        __int64 a4,
        unsigned __int64 *a5)
{
  struct CFlipExBuffer *v5; // rbp
  __int64 v8; // rdx
  signed int v9; // ebx
  __int64 v10; // r10
  bool v11; // r11
  struct CCompositionBuffer *v12; // rsi
  _QWORD *v13; // rax
  __int64 v14; // rcx
  _QWORD *v15; // rdx
  __int64 v16; // rcx
  unsigned __int64 *v17; // rax
  signed int v19; // eax
  struct CCompositionBuffer *v20; // [rsp+20h] [rbp-28h] BYREF
  struct CFlipExBuffer *v21; // [rsp+50h] [rbp+8h] BYREF

  v20 = 0LL;
  v5 = 0LL;
  v21 = 0LL;
  v9 = CCompositionSurface::GetActiveBuffer(this) != 0LL ? 0xC0000510 : 0;
  if ( *((_QWORD *)this + 12) && *(_DWORD *)v8 != 2 )
    v9 = -1073741790;
  if ( v9 >= 0 )
  {
    switch ( *(_DWORD *)v8 )
    {
      case 1:
        v19 = CCompositionBuffer::Create(
                (const struct CSM_BUFFER_ATTRIBUTES *)(v10 + 16),
                (const struct CSM_SINGLE_BUFFER_INFO *)(v8 + 136),
                &v20);
        v12 = v20;
        v9 = v19;
        break;
      case 2:
        v9 = CFlipExBuffer::Create(
               (const struct CSM_BUFFER_ATTRIBUTES *)(v10 + 16),
               (const struct CSM_SWAPCHAIN_BUFFER_INFO *)(v8 + 136),
               v11,
               &v21);
        if ( v9 < 0 )
          return (unsigned int)v9;
        v5 = v21;
        v12 = v21;
        break;
      case 3:
        v21 = 0LL;
        v9 = CCompositionSwapchainBuffer::Create(
               (const struct CSM_BUFFER_ATTRIBUTES *)(v10 + 16),
               (const struct CSM_COMPOSITION_SWAPCHAIN_BUFFER_INFO *)(v8 + 136),
               v11,
               &v21);
        if ( v9 < 0 )
          return (unsigned int)v9;
        v12 = v21;
        break;
      default:
        return (unsigned int)-1073741811;
    }
    if ( v9 >= 0 )
    {
      if ( !a3 )
        CCompositionSurface::ReleaseAllBuffers(this);
      v13 = (_QWORD *)((char *)this + 64);
      v14 = *((_QWORD *)this + 8);
      v15 = (_QWORD *)((char *)v12 + 24);
      if ( *(CCompositionSurface **)(v14 + 8) != (CCompositionSurface *)((char *)this + 64) )
        __fastfail(3u);
      *((_QWORD *)v12 + 4) = v13;
      *v15 = v14;
      *(_QWORD *)(v14 + 8) = v15;
      *v13 = v15;
      ++*((_QWORD *)this + 6);
      ++*((_DWORD *)this + 20);
      v16 = *((_QWORD *)this + 6);
      *((_QWORD *)v12 + 1) = *((_QWORD *)this - 2);
      v17 = a5;
      *((_QWORD *)v12 + 2) = v16;
      *((_BYTE *)v12 + 40) = 1;
      *v17 = *((_QWORD *)this + 6);
      if ( *((_QWORD *)this + 12) )
      {
        if ( v5 )
        {
          v9 = CCompositionSurface::PairBind(this, v5);
          if ( v9 < 0 )
            CCompositionSurface::UnBind(this, 0);
        }
      }
    }
  }
  return (unsigned int)v9;
}
