/*
 * XREFs of ?UnlockAndRelease@CInputSink@@QEBA_NXZ @ 0x1C0061490
 * Callers:
 *     ?UpdateTransform@CompositionInputObject@@QEAAJAEBUtagINPUT_TRANSFORM@@@Z @ 0x1C0001D30 (-UpdateTransform@CompositionInputObject@@QEAAJAEBUtagINPUT_TRANSFORM@@@Z.c)
 *     ?QueryTransform@CompositionInputObject@@QEBAJPEAUtagINPUT_TRANSFORM@@@Z @ 0x1C00613C0 (-QueryTransform@CompositionInputObject@@QEBAJPEAUtagINPUT_TRANSFORM@@@Z.c)
 *     ?QueryInputQueueForInputType@CompositionInputObject@@QEBAJW4CompositionInputType@@PEAUCOMPOSITION_INPUT_QUEUE@@@Z @ 0x1C0061428 (-QueryInputQueueForInputType@CompositionInputObject@@QEBAJW4CompositionInputType@@PEAUCOMPOSITIO.c)
 *     ?SetInputSinkHelper@CInteractionMarshaler@DirectComposition@@QEAAJPEAXPEA_N@Z @ 0x1C006A6EC (-SetInputSinkHelper@CInteractionMarshaler@DirectComposition@@QEAAJPEAXPEA_N@Z.c)
 *     ?ReleaseCompositionInputObject@CInteractionMarshaler@DirectComposition@@IEAAXXZ @ 0x1C006B700 (-ReleaseCompositionInputObject@CInteractionMarshaler@DirectComposition@@IEAAXXZ.c)
 *     ?SetDropTarget@CompositionInputObject@@QEAAJAEBUCOMPOSITION_INPUT_QUEUE@@@Z @ 0x1C0098F90 (-SetDropTarget@CompositionInputObject@@QEAAJAEBUCOMPOSITION_INPUT_QUEUE@@@Z.c)
 * Callees:
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C00614C8 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 */

bool __fastcall CInputSink::UnlockAndRelease(CInputSink *this)
{
  CPushLock::ReleaseLock((CInputSink *)((char *)this + 8));
  return ObfDereferenceObject((char *)this - 24) == 0;
}
