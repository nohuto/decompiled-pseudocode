/*
 * XREFs of ?CommitInputFrame@CTouchProcessor@@IEAAXPEAUCPointerInputFrame@@@Z @ 0x1C0190CC4
 * Callers:
 *     ?CommitRimCompleteFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@_N1@Z @ 0x1C0190D58 (-CommitRimCompleteFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@_N1@Z.c)
 *     ?ProcessTouchpadInput@CTouchProcessor@@QEAAXPEAUCPointerInputFrame@@HH@Z @ 0x1C019E49C (-ProcessTouchpadInput@CTouchProcessor@@QEAAXPEAUCPointerInputFrame@@HH@Z.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CTouchProcessor::CommitInputFrame(struct _KTHREAD **this, struct CPointerInputFrame *a2)
{
  __int64 v4; // rbx
  int v5; // ebp
  struct _KTHREAD ***v6; // rcx
  struct _KTHREAD *v7; // rdx
  struct _KTHREAD **v8; // rax

  v4 = *((_QWORD *)a2 + 16);
  v5 = *((_DWORD *)a2 + 10);
  if ( this[9] != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this);
  while ( v4 )
  {
    if ( *(_DWORD *)v4 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(this);
    *(_DWORD *)v4 = v5;
    v4 = *(_QWORD *)(v4 + 24);
  }
  v6 = (struct _KTHREAD ***)(this + 16);
  v7 = this[16];
  v8 = (struct _KTHREAD **)((char *)a2 + 8);
  if ( *((struct _KTHREAD ***)v7 + 1) != this + 16 )
    __fastfail(3u);
  *v8 = v7;
  *((_QWORD *)a2 + 2) = v6;
  *((_QWORD *)v7 + 1) = v8;
  *v6 = v8;
}
