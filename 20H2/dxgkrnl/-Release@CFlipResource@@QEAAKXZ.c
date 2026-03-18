/*
 * XREFs of ?Release@CFlipResource@@QEAAKXZ @ 0x1C006ADA8
 * Callers:
 *     ?ReleaseKernelPresentUpdateReferences@CFlipManager@@AEAAXPEAVCFlipPresentUpdate@@@Z @ 0x1C006ADD8 (-ReleaseKernelPresentUpdateReferences@CFlipManager@@AEAAXPEAVCFlipPresentUpdate@@@Z.c)
 *     ??1CFlipResourceState@@MEAA@XZ @ 0x1C006B04C (--1CFlipResourceState@@MEAA@XZ.c)
 *     ?PrepareIncrementalUpdateForUser@CEndpointResourceStateManager@@QEAAJPEAVCFlipPresentUpdate@@@Z @ 0x1C006BD08 (-PrepareIncrementalUpdateForUser@CEndpointResourceStateManager@@QEAAJPEAVCFlipPresentUpdate@@@Z.c)
 *     ?Create@CPoolBufferResource@@SAJ_KPEAXAEBU_LUID@@PEAVCFlipPropertySet@@PEAPEAVCPoolBufferResourceState@@@Z @ 0x1C006CC8C (-Create@CPoolBufferResource@@SAJ_KPEAXAEBU_LUID@@PEAVCFlipPropertySet@@PEAPEAVCPoolBufferResourc.c)
 *     ?Create@CContentResource@@SAJ_KPEAVCFlipPropertySet@@PEAPEAVCContentResourceState@@@Z @ 0x1C006D094 (-Create@CContentResource@@SAJ_KPEAVCFlipPropertySet@@PEAPEAVCContentResourceState@@@Z.c)
 *     ?SetBoundBuffer@CContentResourceState@@QEAAXPEAVCPoolBufferResource@@@Z @ 0x1C006D9B8 (-SetBoundBuffer@CContentResourceState@@QEAAXPEAVCPoolBufferResource@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0027100 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CFlipResource::Release(CFlipResource *this)
{
  bool v1; // zf
  unsigned int v2; // ebx

  v1 = (*((_DWORD *)this + 6))-- == 1;
  v2 = *((_DWORD *)this + 6);
  if ( v1 )
    (**(void (__fastcall ***)(CFlipResource *, __int64))this)(this, 1LL);
  return v2;
}
