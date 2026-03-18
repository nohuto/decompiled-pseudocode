/*
 * XREFs of ?RemoveUsageReference@CPoolBufferResource@@QEAAXXZ @ 0x1C007F350
 * Callers:
 *     ?ConsumerAdjustUsageReference@FlipManagerObject@@QEAAJ_K_N@Z @ 0x1C0079C08 (-ConsumerAdjustUsageReference@FlipManagerObject@@QEAAJ_K_N@Z.c)
 *     ?ProcessSignal@CFlipManager@@QEAAXPEAVCFlipManagerSignal@@_K@Z @ 0x1C007E758 (-ProcessSignal@CFlipManager@@QEAAXPEAVCFlipManagerSignal@@_K@Z.c)
 *     ?ReleaseKernelPresentUpdateReferences@CFlipManager@@AEAAXPEAVCFlipPresentUpdate@@@Z @ 0x1C007E968 (-ReleaseKernelPresentUpdateReferences@CFlipManager@@AEAAXPEAVCFlipPresentUpdate@@@Z.c)
 *     ?SetBoundBuffer@CContentResourceState@@QEAAXPEAVCPoolBufferResource@@@Z @ 0x1C00816B4 (-SetBoundBuffer@CContentResourceState@@QEAAXPEAVCPoolBufferResource@@@Z.c)
 * Callees:
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CPoolBufferResource::RemoveUsageReference(CPoolBufferResource *this)
{
  int v1; // eax
  int v3; // eax
  struct DXGGLOBAL *Global; // rax
  __int64 v5; // r8

  v1 = *((_DWORD *)this + 20);
  if ( v1 )
  {
    v3 = v1 - 1;
    *((_DWORD *)this + 20) = v3;
    if ( !v3 )
    {
      KeSetEvent(*((PRKEVENT *)this + 8), 1, 0);
      Global = DXGGLOBAL_GetGlobal();
      LOBYTE(v5) = 1;
      (*(void (__fastcall **)(_QWORD, CPoolBufferResource *, __int64))(*((_QWORD *)Global + 38073) + 200LL))(
        *(unsigned int *)(*((_QWORD *)this + 6) + 328LL),
        this,
        v5);
    }
  }
}
