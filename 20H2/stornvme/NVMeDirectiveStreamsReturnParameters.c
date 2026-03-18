/*
 * XREFs of NVMeDirectiveStreamsReturnParameters @ 0x1C0017568
 * Callers:
 *     NVMeInitStreams @ 0x1C000D7C0 (NVMeInitStreams.c)
 *     IoctlStorageStreamsGetOpenStreams @ 0x1C00120D8 (IoctlStorageStreamsGetOpenStreams.c)
 *     IoctlStorageStreamsGetParameters @ 0x1C001228C (IoctlStorageStreamsGetParameters.c)
 * Callees:
 *     SetPrpFromBuffer @ 0x1C000202C (SetPrpFromBuffer.c)
 *     ProcessCommand @ 0x1C0002084 (ProcessCommand.c)
 *     SrbAssignQueueId @ 0x1C0004370 (SrbAssignQueueId.c)
 *     NVMeZeroMemory @ 0x1C00044E0 (NVMeZeroMemory.c)
 *     NVMeFreeDmaBuffer @ 0x1C000451C (NVMeFreeDmaBuffer.c)
 *     NVMeAllocateDmaBuffer @ 0x1C000456C (NVMeAllocateDmaBuffer.c)
 *     memset @ 0x1C00054C0 (memset.c)
 *     WaitForCommandCompleteWithCustomTimeout @ 0x1C001BB0C (WaitForCommandCompleteWithCustomTimeout.c)
 */

__int64 __fastcall NVMeDirectiveStreamsReturnParameters(__int64 a1, int a2, __int64 a3, _OWORD *a4)
{
  void *v8; // rcx
  __int64 v9; // rbx
  __int64 v10; // r8
  unsigned int v11; // ebx
  __int128 v12; // xmm1
  _OWORD *v13; // [rsp+20h] [rbp-18h] BYREF
  __int64 v14; // [rsp+28h] [rbp-10h] BYREF

  v13 = 0LL;
  v14 = 0LL;
  NVMeAllocateDmaBuffer(a1, 32LL, &v13, &v14);
  if ( !v13 )
    return 3238002691LL;
  NVMeZeroMemory(v13, 0x20u);
  v8 = *(void **)(a1 + 920);
  *(_BYTE *)(a1 + 835) = 0;
  memset(v8, 0, 0x10A0uLL);
  *(_QWORD *)(*(_QWORD *)(a1 + 920) + 4232LL) = 0LL;
  v9 = *(_QWORD *)(a1 + 920);
  v10 = v14;
  *(_QWORD *)(a1 + 888) = v9;
  *(_DWORD *)(a1 + 824) = 1;
  if ( !(unsigned int)SetPrpFromBuffer(a1, (_QWORD *)v9, v10, 0x20u) )
    goto LABEL_6;
  *(_BYTE *)(v9 + 4253) |= 7u;
  *(_QWORD *)(v9 + 4224) = NVMeDirectiveCompletion;
  *(_DWORD *)(v9 + 4100) = a2;
  *(_BYTE *)(v9 + 4096) = 26;
  *(_DWORD *)(v9 + 4136) = 7;
  *(_WORD *)(v9 + 4140) = 257;
  SrbAssignQueueId(a1, a1 + 832);
  ProcessCommand(a1, a1 + 832);
  WaitForCommandCompleteWithCustomTimeout(a1);
  if ( *(_BYTE *)(a1 + 835) == 1 )
  {
    v11 = 0;
    v12 = v13[1];
    *a4 = *v13;
    a4[1] = v12;
  }
  else
  {
LABEL_6:
    v11 = -1056964607;
  }
  if ( v13 )
    NVMeFreeDmaBuffer(a1, 32LL, &v13, v14);
  return v11;
}
