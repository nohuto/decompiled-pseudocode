/*
 * XREFs of ??0ResizeControllerHost@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z @ 0x1800303E4
 * Callers:
 *     ??0InputSystem@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z @ 0x1800305CC (--0InputSystem@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z.c)
 * Callees:
 *     ??0BamoPrincipalImpl@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnection@Bamo@2@@Z @ 0x18003021C (--0BamoPrincipalImpl@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnection@Bamo@2@@Z.c)
 */

ResizeControllerHost *__fastcall ResizeControllerHost::ResizeControllerHost(
        ResizeControllerHost *this,
        struct ISMBamos_AutoBamos::BamoConnection *a2)
{
  *(_QWORD *)this = &BamoResizeContextualProcessorPrincipal::`vftable'{for `Microsoft::Bamo::BamoPrincipal'};
  *((_QWORD *)this + 1) = &BamoResizeContextualProcessorPrincipal::`vftable'{for `IResizeContextualProcessorPrincipal'};
  Microsoft::BamoImpl::BamoPrincipalImpl::BamoPrincipalImpl((ResizeControllerHost *)((char *)this + 16), a2);
  *((_QWORD *)this + 2) = &BamoImpl::BamoResizeContextualProcessorPrincipalImpl::`vftable';
  *(_QWORD *)this = &ResizeControllerHost::`vftable'{for `Microsoft::Bamo::BamoPrincipal'};
  *((_QWORD *)this + 1) = &BamoResizeContextualProcessorPrincipal::`vftable'{for `IResizeContextualProcessorPrincipal'};
  *((_QWORD *)this + 7) = 0LL;
  return this;
}
