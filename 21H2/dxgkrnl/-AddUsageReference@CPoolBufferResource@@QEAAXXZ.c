/*
 * XREFs of ?AddUsageReference@CPoolBufferResource@@QEAAXXZ @ 0x1C007EFAC
 * Callers:
 *     ?ConsumerAdjustUsageReference@FlipManagerObject@@QEAAJ_K_N@Z @ 0x1C0079C08 (-ConsumerAdjustUsageReference@FlipManagerObject@@QEAAJ_K_N@Z.c)
 *     ?PrepareBufferSignals@CEndpointResourceStateManager@@QEAAJPEAVCFlipManagerSignal@@@Z @ 0x1C007FB78 (-PrepareBufferSignals@CEndpointResourceStateManager@@QEAAJPEAVCFlipManagerSignal@@@Z.c)
 *     ?PrepareIncrementalUpdateForStateManager@CEndpointResourceStateManager@@QEAAJPEAVCFlipPresentUpdate@@PEAUFlipManagerObject@@@Z @ 0x1C007FE94 (-PrepareIncrementalUpdateForStateManager@CEndpointResourceStateManager@@QEAAJPEAVCFlipPresentUpd.c)
 *     ?SetBoundBuffer@CContentResourceState@@QEAAXPEAVCPoolBufferResource@@@Z @ 0x1C00816B4 (-SetBoundBuffer@CContentResourceState@@QEAAXPEAVCPoolBufferResource@@@Z.c)
 * Callees:
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CPoolBufferResource::AddUsageReference(CPoolBufferResource *this)
{
  int v1; // eax
  struct DXGGLOBAL *Global; // rax

  v1 = *((_DWORD *)this + 20);
  if ( !v1 )
  {
    KeResetEvent(*((PRKEVENT *)this + 8));
    Global = DXGGLOBAL_GetGlobal();
    (*(void (__fastcall **)(_QWORD, CPoolBufferResource *, _QWORD))(*((_QWORD *)Global + 38073) + 200LL))(
      *(unsigned int *)(*((_QWORD *)this + 6) + 328LL),
      this,
      0LL);
    v1 = *((_DWORD *)this + 20);
  }
  *((_DWORD *)this + 20) = v1 + 1;
}
