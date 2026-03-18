/*
 * XREFs of ?Reset@?$CDynamicArray@PEAUManipulationCaptureInfo@CInteractionMarshaler@DirectComposition@@$0HHHAHDFF@@@QEAAX_N@Z @ 0x1C006B880
 * Callers:
 *     ?ReleaseAllReferences@CInteractionMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C006A7F0 (-ReleaseAllReferences@CInteractionMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z.c)
 *     ??1CInteractionMarshaler@DirectComposition@@UEAA@XZ @ 0x1C006A878 (--1CInteractionMarshaler@DirectComposition@@UEAA@XZ.c)
 *     ?Reset@?$CStructDynamicArray@UManipulationCaptureInfo@CInteractionMarshaler@DirectComposition@@@@QEAAX_N@Z @ 0x1C006B84C (-Reset@-$CStructDynamicArray@UManipulationCaptureInfo@CInteractionMarshaler@DirectComposition@@@.c)
 *     ??_GCInputManager@@IEAAPEAXI@Z @ 0x1C00BD12C (--_GCInputManager@@IEAAPEAXI@Z.c)
 * Callees:
 *     Win32FreePool @ 0x1C0057A50 (Win32FreePool.c)
 */

void __fastcall CDynamicArray<DirectComposition::CInteractionMarshaler::ManipulationCaptureInfo *,2003858261>::Reset(
        __int64 a1)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)a1;
  if ( v2 )
  {
    Win32FreePool(v2);
    *(_QWORD *)a1 = 0LL;
  }
  *(_DWORD *)(a1 + 12) = 0;
  *(_DWORD *)(a1 + 8) = 0;
}
