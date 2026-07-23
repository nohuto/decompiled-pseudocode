/*
 * XREFs of PopFanWorker @ 0x1407C0690
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x14026A224 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14026FD14 (PopAcquireRwLockExclusive.c)
 *     KeSetEvent @ 0x14034E2F0 (KeSetEvent.c)
 *     IofCallDriver @ 0x14035C710 (IofCallDriver.c)
 *     PopPrepareIoctl @ 0x1407C0BC4 (PopPrepareIoctl.c)
 *     PopFanUpdateRunningState @ 0x1407C0D88 (PopFanUpdateRunningState.c)
 */

void __fastcall PopFanWorker(__int64 a1)
{
  IRP *v1; // r14
  struct _DEVICE_OBJECT *v3; // r15
  char v4; // si
  char v5; // di
  int v6; // r8d
  int Status; // eax
  char v8; // al
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  __int64 v10; // rcx

  v1 = *(IRP **)(a1 + 56);
  v3 = *(struct _DEVICE_OBJECT **)(a1 + 48);
  v4 = 0;
  v5 = 0;
  PopAcquireRwLockExclusive(a1 + 112);
  if ( !*(_BYTE *)(a1 + 152) )
  {
    Status = v1->IoStatus.Status;
    if ( Status >= 0 )
    {
      v8 = *(_BYTE *)(a1 + 68);
      if ( *(_BYTE *)(a1 + 72) )
      {
        if ( v8 )
          goto LABEL_5;
      }
      else if ( !v8 )
      {
LABEL_5:
        LOBYTE(v6) = 1;
        PopPrepareIoctl(*(_QWORD *)(a1 + 56), 2703936, v6, a1 + 64, 8, 8);
        CurrentStackLocation = v1->Tail.Overlay.CurrentStackLocation;
        CurrentStackLocation[-1].CompletionRoutine = (PIO_COMPLETION_ROUTINE)PopFanIrpComplete;
        CurrentStackLocation[-1].Context = (PVOID)a1;
        CurrentStackLocation[-1].Control = -32;
        IofCallDriver(v3, v1);
        goto LABEL_6;
      }
      v5 = 1;
      *(_BYTE *)(a1 + 72) = v8;
      v4 = v8;
      goto LABEL_5;
    }
    if ( Status == -1073741667 || Status == -1073741536 )
      goto LABEL_5;
  }
  if ( *(_BYTE *)(a1 + 72) )
  {
    v5 = 1;
    *(_BYTE *)(a1 + 72) = 0;
  }
  KeSetEvent((PRKEVENT)(a1 + 128), 0, 0);
LABEL_6:
  if ( v5 )
  {
    LOBYTE(v10) = v4;
    PopFanUpdateRunningState(v10);
  }
  PopReleaseRwLock(a1 + 112);
}
