/*
 * XREFs of NVMeDirectiveStreamsReleaseId @ 0x1C0017474
 * Callers:
 *     IoctlStorageStreamsReleaseId @ 0x1C0012640 (IoctlStorageStreamsReleaseId.c)
 * Callees:
 *     ProcessCommand @ 0x1C0002084 (ProcessCommand.c)
 *     SrbAssignQueueId @ 0x1C0004370 (SrbAssignQueueId.c)
 *     memset @ 0x1C00054C0 (memset.c)
 *     WaitForCommandCompleteWithCustomTimeout @ 0x1C001BB0C (WaitForCommandCompleteWithCustomTimeout.c)
 */

__int64 __fastcall NVMeDirectiveStreamsReleaseId(__int64 a1, int a2, __int16 a3)
{
  __int64 v6; // r8
  char v7; // al

  *(_BYTE *)(a1 + 835) = 0;
  memset(*(void **)(a1 + 920), 0, 0x10A0uLL);
  *(_QWORD *)(*(_QWORD *)(a1 + 920) + 4232LL) = 0LL;
  v6 = *(_QWORD *)(a1 + 920);
  *(_QWORD *)(a1 + 888) = v6;
  *(_DWORD *)(a1 + 824) = 1;
  v7 = *(_BYTE *)(v6 + 4253) & 0xFD;
  *(_DWORD *)(v6 + 4100) = a2;
  *(_BYTE *)(v6 + 4096) = 25;
  *(_BYTE *)(v6 + 4253) = v7 | 1;
  *(_WORD *)(v6 + 4140) = 257;
  *(_QWORD *)(v6 + 4224) = NVMeDirectiveCompletion;
  *(_WORD *)(v6 + 4142) = a3;
  SrbAssignQueueId(a1, a1 + 832);
  ProcessCommand(a1, a1 + 832);
  WaitForCommandCompleteWithCustomTimeout(a1);
  return *(_BYTE *)(a1 + 835) != 1 ? 0xC1000001 : 0;
}
