/*
 * XREFs of ?DelegateCoalesceQFrame@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@K@Z @ 0x1C018CA08
 * Callers:
 *     ?DelegateCoalescePointerMessage@CTouchProcessor@@QEAAH_KHHHI@Z @ 0x1C018C880 (-DelegateCoalescePointerMessage@CTouchProcessor@@QEAAH_KHHHI@Z.c)
 * Callees:
 *     ?CoalesceQFrames@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEAUCPointerQFrame@@PEAU2@@Z @ 0x1C0189FAC (-CoalesceQFrames@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEAUCPointerQFrame@@PEAU2@@Z.c)
 *     ?IsFrameReferenced@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@@Z @ 0x1C0194F44 (-IsFrameReferenced@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@@Z.c)
 *     ?ReferencePreviousFrameByDeviceInt@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@PEBU2@@Z @ 0x1C0198F84 (-ReferencePreviousFrameByDeviceInt@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@PEBU2@@Z.c)
 *     ?TrackCoalesceOnReassign@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@W4CPointerCoalesce@@@Z @ 0x1C019C854 (-TrackCoalesceOnReassign@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@W4CPointerCoalesce@@@Z.c)
 *     ?UnreferenceFrameInt@CTouchProcessor@@AEAAKPEAUCPointerInputFrame@@@Z @ 0x1C019CF04 (-UnreferenceFrameInt@CTouchProcessor@@AEAAKPEAUCPointerInputFrame@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CTouchProcessor::DelegateCoalesceQFrame(
        struct _KTHREAD **this,
        const struct CPointerInputFrame *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rbx
  int v12; // eax
  __int64 v13; // r8
  struct CPointerInputFrame *v15; // rax
  struct CPointerInputFrame *v16; // rsi
  unsigned int v17; // ebx

  v6 = (unsigned int)a3;
  if ( this[9] != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3, a4);
  if ( !a2 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3, a4);
  if ( !(unsigned int)CTouchProcessor::IsFrameReferenced((CTouchProcessor *)this, a2) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v8, v7, v9, v10);
  if ( (unsigned int)v6 >= *((_DWORD *)a2 + 12) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v8, v7, v9, v10);
  v11 = *((_QWORD *)a2 + 18) + 160 * v6;
  if ( *(_DWORD *)v11 != (_DWORD)v6 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v8, v7, v9, v10);
  v12 = *(_DWORD *)(v11 + 140);
  if ( (v12 & 8) != 0 )
  {
    v13 = 9LL;
LABEL_13:
    CTouchProcessor::TrackCoalesceOnReassign(v8, v11, v13);
    return 0LL;
  }
  if ( (v12 & 2) == 0 && *(_DWORD *)(v11 + 144) != 9 )
  {
    v8 = *(unsigned int *)(v11 + 148);
    if ( (_DWORD)v8 )
    {
      if ( (_DWORD)v8 != 9 )
        return 0LL;
    }
  }
  if ( (v12 & 1) == 0 )
  {
    v13 = 13LL;
    goto LABEL_13;
  }
  v15 = CTouchProcessor::ReferencePreviousFrameByDeviceInt((CTouchProcessor *)this, a2);
  v16 = v15;
  if ( !v15 )
  {
    v13 = 10LL;
    goto LABEL_13;
  }
  v17 = (unsigned int)CTouchProcessor::CoalesceQFrames(this, a2, (struct CPointerQFrame *)v11, v15);
  CTouchProcessor::UnreferenceFrameInt((CTouchProcessor *)this, v16);
  return v17;
}
