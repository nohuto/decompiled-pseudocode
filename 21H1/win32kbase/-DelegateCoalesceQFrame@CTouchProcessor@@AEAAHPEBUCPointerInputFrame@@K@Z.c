/*
 * XREFs of ?DelegateCoalesceQFrame@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@K@Z @ 0x1C0192708
 * Callers:
 *     ?DelegateCoalescePointerMessage@CTouchProcessor@@QEAAH_KHHHI@Z @ 0x1C0192580 (-DelegateCoalescePointerMessage@CTouchProcessor@@QEAAH_KHHHI@Z.c)
 * Callees:
 *     ?CoalesceQFrames@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEAUCPointerQFrame@@PEAU2@@Z @ 0x1C018FCAC (-CoalesceQFrames@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEAUCPointerQFrame@@PEAU2@@Z.c)
 *     ?IsFrameReferenced@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@@Z @ 0x1C019AC44 (-IsFrameReferenced@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@@Z.c)
 *     ?ReferencePreviousFrameByDeviceInt@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@PEBU2@@Z @ 0x1C019EC74 (-ReferencePreviousFrameByDeviceInt@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@PEBU2@@Z.c)
 *     ?TrackCoalesceOnReassign@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@W4CPointerCoalesce@@@Z @ 0x1C01A25B4 (-TrackCoalesceOnReassign@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@W4CPointerCoalesce@@@Z.c)
 *     ?UnreferenceFrameInt@CTouchProcessor@@AEAAKPEAUCPointerInputFrame@@@Z @ 0x1C01A2C64 (-UnreferenceFrameInt@CTouchProcessor@@AEAAKPEAUCPointerInputFrame@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CTouchProcessor::DelegateCoalesceQFrame(
        struct _KTHREAD **this,
        const struct CPointerInputFrame *a2,
        unsigned int a3)
{
  __int64 v5; // rsi
  __int64 v6; // rcx
  __int64 v7; // rbx
  int v8; // eax
  __int64 v9; // r8
  struct CPointerInputFrame *v11; // rax
  struct CPointerInputFrame *v12; // rsi
  unsigned int v13; // ebx

  v5 = a3;
  if ( this[9] != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this);
  if ( !a2 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this);
  if ( !(unsigned int)CTouchProcessor::IsFrameReferenced((CTouchProcessor *)this, a2) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v6);
  if ( (unsigned int)v5 >= *((_DWORD *)a2 + 12) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v6);
  v7 = *((_QWORD *)a2 + 18) + 160 * v5;
  if ( *(_DWORD *)v7 != (_DWORD)v5 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v6);
  v8 = *(_DWORD *)(v7 + 140);
  if ( (v8 & 8) != 0 )
  {
    v9 = 9LL;
LABEL_13:
    CTouchProcessor::TrackCoalesceOnReassign(v6, v7, v9);
    return 0LL;
  }
  if ( (v8 & 2) == 0 && *(_DWORD *)(v7 + 144) != 9 )
  {
    v6 = *(unsigned int *)(v7 + 148);
    if ( (_DWORD)v6 )
    {
      if ( (_DWORD)v6 != 9 )
        return 0LL;
    }
  }
  if ( (v8 & 1) == 0 )
  {
    v9 = 13LL;
    goto LABEL_13;
  }
  v11 = CTouchProcessor::ReferencePreviousFrameByDeviceInt((CTouchProcessor *)this, a2);
  v12 = v11;
  if ( !v11 )
  {
    v9 = 10LL;
    goto LABEL_13;
  }
  v13 = (unsigned int)CTouchProcessor::CoalesceQFrames(this, a2, (struct CPointerQFrame *)v7, v11);
  CTouchProcessor::UnreferenceFrameInt((CTouchProcessor *)this, v12);
  return v13;
}
