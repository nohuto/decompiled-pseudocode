/*
 * XREFs of ?QueryInputQueueForInputType@CompositionInputObject@@QEBAJW4CompositionInputType@@PEAUCOMPOSITION_INPUT_QUEUE@@@Z @ 0x1C00B8578
 * Callers:
 *     ?ResolveInputSinkToINPUTDEST@CSpatialProcessor@@IEAA_NPEAXKPEBUCONTAINER_ID@@PEAUtagINPUTDEST@@@Z @ 0x1C0001C48 (-ResolveInputSinkToINPUTDEST@CSpatialProcessor@@IEAA_NPEAXKPEBUCONTAINER_ID@@PEAUtagINPUTDEST@@@.c)
 *     NtQueryCompositionInputQueueAndTransform @ 0x1C00B8370 (NtQueryCompositionInputQueueAndTransform.c)
 * Callees:
 *     ?UnlockAndRelease@CInputSink@@QEBA_NXZ @ 0x1C00B85E0 (-UnlockAndRelease@CInputSink@@QEBA_NXZ.c)
 *     ?QueryInputQueueForInputType@CInputSink@@QEBAJW4CompositionInputType@@PEAUCOMPOSITION_INPUT_QUEUE@@@Z @ 0x1C00B866C (-QueryInputQueueForInputType@CInputSink@@QEBAJW4CompositionInputType@@PEAUCOMPOSITION_INPUT_QUEU.c)
 *     ?LockForRead@CompositionInputObject@@QEBAJPEAPEBVCInputSink@@@Z @ 0x1C00B86C0 (-LockForRead@CompositionInputObject@@QEBAJPEAPEBVCInputSink@@@Z.c)
 */

__int64 __fastcall CompositionInputObject::QueryInputQueueForInputType(void *a1, unsigned int a2, __int64 a3)
{
  int v5; // ebx
  CInputSink *v7; // [rsp+48h] [rbp+20h] BYREF

  v7 = 0LL;
  v5 = CompositionInputObject::LockForRead(a1, &v7);
  if ( v5 >= 0 )
  {
    CInputSink::QueryInputQueueForInputType(v7, a2, a3);
    CInputSink::UnlockAndRelease(v7);
  }
  return (unsigned int)v5;
}
