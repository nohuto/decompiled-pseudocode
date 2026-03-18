/*
 * XREFs of ??1CInteractionMarshaler@DirectComposition@@UEAA@XZ @ 0x1C0096318
 * Callers:
 *     ??_ECInteractionMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C0096DA0 (--_ECInteractionMarshaler@DirectComposition@@UEAAPEAXI@Z.c)
 *     ??_ECSharedInteractionMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C0096FE0 (--_ECSharedInteractionMarshaler@DirectComposition@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?Reset@?$CDynamicArray@PEAUManipulationCaptureInfo@CInteractionMarshaler@DirectComposition@@$0HHHAHDFF@@@QEAAX_N@Z @ 0x1C00454C8 (-Reset@-$CDynamicArray@PEAUManipulationCaptureInfo@CInteractionMarshaler@DirectComposition@@$0HH.c)
 *     ??1CInteractionConfigurationGroup@DirectComposition@@QEAA@XZ @ 0x1C009587C (--1CInteractionConfigurationGroup@DirectComposition@@QEAA@XZ.c)
 *     ?Reset@?$CStructDynamicArray@UManipulationCaptureInfo@CInteractionMarshaler@DirectComposition@@@@QEAAX_N@Z @ 0x1C0096A58 (-Reset@-$CStructDynamicArray@UManipulationCaptureInfo@CInteractionMarshaler@DirectComposition@@@.c)
 */

void __fastcall DirectComposition::CInteractionMarshaler::~CInteractionMarshaler(
        DirectComposition::CInteractionMarshaler *this)
{
  __int64 *v2; // rbx

  v2 = (__int64 *)((char *)this + 296);
  *(_QWORD *)this = &DirectComposition::CInteractionMarshaler::`vftable';
  CStructDynamicArray<DirectComposition::CInteractionMarshaler::ManipulationCaptureInfo>::Reset((char *)this + 296);
  CDynamicArray<DirectComposition::CInteractionMarshaler::ManipulationCaptureInfo *,2003858261>::Reset(v2);
  CDynamicArray<DirectComposition::CInteractionMarshaler::ManipulationCaptureInfo *,2003858261>::Reset((__int64 *)this + 35);
  DirectComposition::CInteractionConfigurationGroup::~CInteractionConfigurationGroup((DirectComposition::CInteractionMarshaler *)((char *)this + 160));
  DirectComposition::CInteractionConfigurationGroup::~CInteractionConfigurationGroup((DirectComposition::CInteractionMarshaler *)((char *)this + 56));
}
