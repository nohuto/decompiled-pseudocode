/*
 * XREFs of ?OpenDxSurfaceHandle@CBufferRealization@@QEBAJ_N0PEAPEAX@Z @ 0x1C0007A94
 * Callers:
 *     ?GetSwapChainRealizationInfo@CFlipExBuffer@@UEBAJ_NPEAIPEAUCSM_REALIZATION_INFO@@@Z @ 0x1C0007990 (-GetSwapChainRealizationInfo@CFlipExBuffer@@UEBAJ_NPEAIPEAUCSM_REALIZATION_INFO@@@Z.c)
 *     ?EnableDxgkrnlIndependentFlipMode@CFlipExBuffer@@IEAAJIIPEBIPEAH@Z @ 0x1C00089D4 (-EnableDxgkrnlIndependentFlipMode@CFlipExBuffer@@IEAAJIIPEBIPEAH@Z.c)
 * Callees:
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     DxgkGetSharedAllocationObjectType @ 0x1C0161E10 (DxgkGetSharedAllocationObjectType.c)
 */

NTSTATUS __fastcall CBufferRealization::OpenDxSurfaceHandle(
        CBufferRealization *this,
        unsigned __int8 a2,
        unsigned __int8 a3,
        void **a4)
{
  KPROCESSOR_MODE AccessMode; // di
  ULONG v7; // ebx
  int v8; // r14d
  struct DXGGLOBAL *Global; // rax
  struct _OBJECT_TYPE *ObjectType; // rax

  *a4 = 0LL;
  if ( (unsigned int)(*((_DWORD *)this + 6) - 2) > 2 )
    return -1073741811;
  AccessMode = 1;
  v7 = a3 << 9;
  v8 = a2;
  if ( a3 || (Global = DXGGLOBAL_GetGlobal(), (*(unsigned int (**)(void))(*((_QWORD *)Global + 38073) + 528LL))()) )
    AccessMode = 0;
  ObjectType = (struct _OBJECT_TYPE *)DxgkGetSharedAllocationObjectType();
  return ObOpenObjectByPointer(*((PVOID *)this + 8), v7, 0LL, v8 + 983040, ObjectType, AccessMode, a4);
}
