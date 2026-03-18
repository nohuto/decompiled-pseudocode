/*
 * XREFs of ?UnlockAndRelease@CInputSink@@QEBA_NXZ @ 0x1C009D750
 * Callers:
 *     ?UpdateTransform@CompositionInputObject@@QEAAJAEBUtagINPUT_TRANSFORM@@@Z @ 0x1C0001D30 (-UpdateTransform@CompositionInputObject@@QEAAJAEBUtagINPUT_TRANSFORM@@@Z.c)
 *     ?SetInputSinkHelper@CInteractionMarshaler@DirectComposition@@QEAAJPEAXPEA_N@Z @ 0x1C000E31C (-SetInputSinkHelper@CInteractionMarshaler@DirectComposition@@QEAAJPEAXPEA_N@Z.c)
 *     ?ReleaseCompositionInputObject@CInteractionMarshaler@DirectComposition@@IEAAXXZ @ 0x1C000F330 (-ReleaseCompositionInputObject@CInteractionMarshaler@DirectComposition@@IEAAXXZ.c)
 *     ?SetDropTarget@CompositionInputObject@@QEAAJAEBUCOMPOSITION_INPUT_QUEUE@@@Z @ 0x1C0033240 (-SetDropTarget@CompositionInputObject@@QEAAJAEBUCOMPOSITION_INPUT_QUEUE@@@Z.c)
 *     ?QueryTransform@CompositionInputObject@@QEBAJPEAUtagINPUT_TRANSFORM@@@Z @ 0x1C009D680 (-QueryTransform@CompositionInputObject@@QEBAJPEAUtagINPUT_TRANSFORM@@@Z.c)
 *     ?QueryInputQueueForInputType@CompositionInputObject@@QEBAJW4CompositionInputType@@PEAUCOMPOSITION_INPUT_QUEUE@@@Z @ 0x1C009D6E8 (-QueryInputQueueForInputType@CompositionInputObject@@QEBAJW4CompositionInputType@@PEAUCOMPOSITIO.c)
 * Callees:
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C009D788 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 */

bool __fastcall CInputSink::UnlockAndRelease(CInputSink *this)
{
  CPushLock::ReleaseLock((CInputSink *)((char *)this + 8));
  return ObfDereferenceObject((char *)this - 24) == 0;
}
