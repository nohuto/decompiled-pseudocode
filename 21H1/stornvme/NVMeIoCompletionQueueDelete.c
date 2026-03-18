/*
 * XREFs of NVMeIoCompletionQueueDelete @ 0x1C0018424
 * Callers:
 *     IoQueuesDeletion @ 0x1C000AE20 (IoQueuesDeletion.c)
 *     IoctlCreateReservedQueuePair @ 0x1C0011124 (IoctlCreateReservedQueuePair.c)
 *     IoctlDeleteReservedQueuePair @ 0x1C00115A0 (IoctlDeleteReservedQueuePair.c)
 * Callees:
 *     ProcessCommand @ 0x1C0002084 (ProcessCommand.c)
 *     memset @ 0x1C0005500 (memset.c)
 *     WaitForCommandCompleteWithCustomTimeout @ 0x1C001BBDC (WaitForCommandCompleteWithCustomTimeout.c)
 */

bool __fastcall NVMeIoCompletionQueueDelete(__int64 a1, __int16 a2)
{
  __int64 v4; // rax
  __int64 v5; // rax

  *(_BYTE *)(a1 + 835) = 0;
  memset(*(void **)(a1 + 920), 0, 0x10A0uLL);
  *(_QWORD *)(*(_QWORD *)(a1 + 920) + 4232LL) = 0LL;
  v4 = *(_QWORD *)(a1 + 920);
  *(_QWORD *)(a1 + 888) = v4;
  *(_DWORD *)(a1 + 824) = 1;
  *(_BYTE *)(v4 + 4253) |= 1u;
  *(_BYTE *)(*(_QWORD *)(a1 + 920) + 4253LL) &= ~2u;
  *(_WORD *)(*(_QWORD *)(a1 + 920) + 4244LL) = 0;
  v5 = *(_QWORD *)(a1 + 920);
  *(_WORD *)(v5 + 4136) = a2;
  *(_BYTE *)(v5 + 4096) = 4;
  ProcessCommand(a1, a1 + 832);
  WaitForCommandCompleteWithCustomTimeout(a1);
  return *(_BYTE *)(a1 + 835) == 1;
}
