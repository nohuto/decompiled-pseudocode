/*
 * XREFs of ?CreateGestureCache@CPTPProcessor@@AEAAXIPEBUPTPEnginePointerNode@@_N@Z @ 0x1C01A86BC
 * Callers:
 *     ?OnEngineOutput@CPTPProcessor@@UEAAXPEBUPTPEngineOutput@@@Z @ 0x1C01A9100 (-OnEngineOutput@CPTPProcessor@@UEAAXPEBUPTPEngineOutput@@@Z.c)
 * Callees:
 *     EtwTraceCopyPointerInputFrameStart @ 0x1C012DC70 (EtwTraceCopyPointerInputFrameStart.c)
 *     EtwTraceCopyPointerInputFrameStop @ 0x1C012DCA0 (EtwTraceCopyPointerInputFrameStop.c)
 *     ?CopyPTPPointerInputFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAU2@PEAX@Z @ 0x1C0191514 (-CopyPTPPointerInputFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAU2@PEAX@Z.c)
 *     ?CopyPointersIntoFrame@CPTPProcessor@@AEAAXPEAUCPointerInputFrame@@IPEBUPTPEnginePointerNode@@_N@Z @ 0x1C01A85B8 (-CopyPointersIntoFrame@CPTPProcessor@@AEAAXPEAUCPointerInputFrame@@IPEBUPTPEnginePointerNode@@_N.c)
 */

void __fastcall CPTPProcessor::CreateGestureCache(
        CPTPProcessor *this,
        __int64 a2,
        const struct PTPEnginePointerNode *a3)
{
  struct CPointerInputFrame *v5; // rbx
  __int64 v6; // rcx
  CPTPProcessor *v7; // rcx
  __int64 v8; // r8

  EtwTraceCopyPointerInputFrameStart((__int64)this);
  v5 = (struct CPointerInputFrame *)CTouchProcessor::CopyPTPPointerInputFrame(
                                      (struct _KTHREAD **)this,
                                      *((struct CPointerInputFrame **)this + 60),
                                      *((_QWORD *)this + 59));
  EtwTraceCopyPointerInputFrameStop(v6);
  if ( v5 )
  {
    *((_QWORD *)this + 57) = v5;
    CPTPProcessor::CopyPointersIntoFrame(v7, v5, v8, a3, 1);
  }
}
