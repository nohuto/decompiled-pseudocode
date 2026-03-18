/*
 * XREFs of ?DisableCascadedSignaling@CFlipExBuffer@@QEAAXXZ @ 0x1C001262C
 * Callers:
 *     ?NotifyTokenCompleted@CCompositionSurface@@IEAAJAEBVCFlipToken@@@Z @ 0x1C000E95C (-NotifyTokenCompleted@CCompositionSurface@@IEAAJAEBVCFlipToken@@@Z.c)
 *     ?UnBind@CCompositionSurface@@QEAAJ_N@Z @ 0x1C0011B78 (-UnBind@CCompositionSurface@@QEAAJ_N@Z.c)
 *     ?ReleaseAllBuffers@CCompositionSurface@@IEAA_NXZ @ 0x1C001238C (-ReleaseAllBuffers@CCompositionSurface@@IEAA_NXZ.c)
 *     ?NotifyOfDwmTermination@CFlipExBuffer@@UEAAXXZ @ 0x1C00125E0 (-NotifyOfDwmTermination@CFlipExBuffer@@UEAAXXZ.c)
 *     ?PairBind@CCompositionSurface@@IEAAJPEAVCFlipExBuffer@@@Z @ 0x1C006566C (-PairBind@CCompositionSurface@@IEAAJPEAVCFlipExBuffer@@@Z.c)
 *     ?UnPair@CCompositionSurface@@QEAAJ_N@Z @ 0x1C00657F4 (-UnPair@CCompositionSurface@@QEAAJ_N@Z.c)
 *     ?EnableCascadedSignaling@CFlipExBuffer@@QEAAJPEAUCSM_BUFFER_INFO@@@Z @ 0x1C0065F28 (-EnableCascadedSignaling@CFlipExBuffer@@QEAAJPEAUCSM_BUFFER_INFO@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00271E0 (_guard_dispatch_icall_nop.c)
 *     ??$ReleaseInterface@UIAdapter@@@@YAXAEAPEAUIAdapter@@@Z @ 0x1C0065ED8 (--$ReleaseInterface@UIAdapter@@@@YAXAEAPEAUIAdapter@@@Z.c)
 */

void __fastcall CFlipExBuffer::DisableCascadedSignaling(CFlipExBuffer *this)
{
  char *v1; // rdi
  __int64 v3; // rcx

  *((_QWORD *)this + 80) = 0LL;
  v1 = (char *)this + 616;
  *((_BYTE *)this + 580) = 0;
  v3 = *((_QWORD *)this + 77);
  if ( v3 )
  {
    (*(void (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, _DWORD, _DWORD))(*(_QWORD *)v3 + 40LL))(
      v3,
      *((_QWORD *)this + 73),
      *((unsigned int *)this + 148),
      *((_QWORD *)this + 75),
      *((_DWORD *)this + 152),
      *((_DWORD *)this + 149));
    *((_QWORD *)this + 73) = 0LL;
    *((_DWORD *)this + 148) = 0;
    *((_QWORD *)this + 75) = 0LL;
    *((_DWORD *)this + 152) = 0;
    *((_DWORD *)this + 149) = 0;
    ReleaseInterface<IAdapter>(v1);
  }
}
