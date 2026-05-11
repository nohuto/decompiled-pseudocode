/*
 * XREFs of USBMidiInInitializeUrbAndIrp @ 0x1C00338C8
 * Callers:
 *     USBMIDIInReQueueUrb @ 0x1C0007980 (USBMIDIInReQueueUrb.c)
 *     USBMidiInPipePrimer @ 0x1C00339BC (USBMidiInPipePrimer.c)
 * Callees:
 *     memset @ 0x1C0013800 (memset.c)
 */

struct _IO_STACK_LOCATION *__fastcall USBMidiInInitializeUrbAndIrp(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rsi
  unsigned __int16 *v4; // rdi
  IRP *v5; // rbp
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  struct _IO_STACK_LOCATION *result; // rax

  v1 = *(_QWORD *)(a1 + 32);
  v2 = *(_QWORD *)(a1 + 16);
  v4 = *(unsigned __int16 **)(a1 + 56);
  v5 = *(IRP **)(a1 + 24);
  memset((void *)(v1 + 4), 0, 0x7CuLL);
  *(_DWORD *)v1 = 589952;
  *(_QWORD *)(v1 + 24) = *((_QWORD *)v4 + 1);
  *(_DWORD *)(v1 + 32) = 3;
  *(_QWORD *)(v1 + 40) = *(_QWORD *)(a1 + 40);
  *(_DWORD *)(v1 + 36) = *v4;
  memset(*(void **)(a1 + 40), 0, *v4);
  IoInitializeIrp(v5, 72 * *(char *)(*(_QWORD *)(v2 + 40) + 76LL) + 208, *(_BYTE *)(*(_QWORD *)(v2 + 40) + 76LL));
  CurrentStackLocation = v5->Tail.Overlay.CurrentStackLocation;
  CurrentStackLocation[-1].MajorFunction = 15;
  CurrentStackLocation[-1].Parameters.WMI.ProviderId = *(_QWORD *)(a1 + 32);
  CurrentStackLocation[-1].Parameters.Read.ByteOffset.LowPart = 2228227;
  result = v5->Tail.Overlay.CurrentStackLocation;
  result[-1].CompletionRoutine = (PIO_COMPLETION_ROUTINE)USBMidiInCompleteCallback;
  result[-1].Context = (PVOID)a1;
  result[-1].Control = -32;
  return result;
}
