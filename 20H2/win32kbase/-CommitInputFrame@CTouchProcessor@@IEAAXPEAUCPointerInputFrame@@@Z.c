/*
 * XREFs of ?CommitInputFrame@CTouchProcessor@@IEAAXPEAUCPointerInputFrame@@@Z @ 0x1C0188A9C
 * Callers:
 *     ?CommitRimCompleteFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@_N1@Z @ 0x1C0188B30 (-CommitRimCompleteFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@_N1@Z.c)
 *     ?ProcessTouchpadInput@CTouchProcessor@@QEAAXPEAUCPointerInputFrame@@HH@Z @ 0x1C019627C (-ProcessTouchpadInput@CTouchProcessor@@QEAAXPEAUCPointerInputFrame@@HH@Z.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CTouchProcessor::CommitInputFrame(
        struct _KTHREAD **this,
        struct CPointerInputFrame *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v6; // rbx
  int v7; // ebp
  struct _KTHREAD ***v8; // rcx
  struct _KTHREAD *v9; // rdx
  struct _KTHREAD **v10; // rax

  v6 = *((_QWORD *)a2 + 16);
  v7 = *((_DWORD *)a2 + 10);
  if ( this[9] != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3, a4);
  while ( v6 )
  {
    if ( *(_DWORD *)v6 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3, a4);
    *(_DWORD *)v6 = v7;
    v6 = *(_QWORD *)(v6 + 24);
  }
  v8 = (struct _KTHREAD ***)(this + 16);
  v9 = this[16];
  v10 = (struct _KTHREAD **)((char *)a2 + 8);
  if ( *((struct _KTHREAD ***)v9 + 1) != this + 16 )
    __fastfail(3u);
  *v10 = v9;
  *((_QWORD *)a2 + 2) = v8;
  *((_QWORD *)v9 + 1) = v10;
  *v8 = v10;
}
