/*
 * XREFs of ?CleanupGestureState@CPTPProcessor@@AEAAXXZ @ 0x1C01A2824
 * Callers:
 *     ??_GCPTPProcessor@@AEAAPEAXI@Z @ 0x1C01A2358 (--_GCPTPProcessor@@AEAAPEAXI@Z.c)
 *     ?OnEngineOutput@CPTPProcessor@@UEAAXPEBUPTPEngineOutput@@@Z @ 0x1C01A33A0 (-OnEngineOutput@CPTPProcessor@@UEAAXPEBUPTPEngineOutput@@@Z.c)
 * Callees:
 *     ?FreeFrame@CTouchProcessor@@IEAAXPEAUCPointerInputFrame@@_N@Z @ 0x1C018E1FC (-FreeFrame@CTouchProcessor@@IEAAXPEAUCPointerInputFrame@@_N@Z.c)
 */

void __fastcall CPTPProcessor::CleanupGestureState(CPTPProcessor *this)
{
  struct CPointerInputFrame *v1; // rdx

  v1 = (struct CPointerInputFrame *)*((_QWORD *)this + 57);
  if ( v1 )
  {
    CTouchProcessor::FreeFrame((struct _KTHREAD **)this, v1, 1);
    *((_QWORD *)this + 57) = 0LL;
  }
}
