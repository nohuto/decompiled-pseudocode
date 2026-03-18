/*
 * XREFs of NVMeDirectiveIdentifyReturnParameters @ 0x1C0017014
 * Callers:
 *     NVMeInitStreams @ 0x1C000D7C0 (NVMeInitStreams.c)
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

__int64 __fastcall NVMeDirectiveIdentifyReturnParameters(__int64 a1, int a2, __int64 a3, _OWORD *a4)
{
  void *v8; // rcx
  __int64 v9; // rbx
  __int64 v10; // r8
  _OWORD *v11; // rax
  unsigned int v12; // ebx
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  _OWORD *v16; // [rsp+20h] [rbp-18h] BYREF
  __int64 v17; // [rsp+28h] [rbp-10h] BYREF

  v16 = 0LL;
  v17 = 0LL;
  NVMeAllocateDmaBuffer(a1, 64LL, &v16, &v17);
  if ( !v16 )
    return 3238002691LL;
  NVMeZeroMemory(v16, 0x40u);
  v8 = *(void **)(a1 + 920);
  *(_BYTE *)(a1 + 835) = 0;
  memset(v8, 0, 0x10A0uLL);
  *(_QWORD *)(*(_QWORD *)(a1 + 920) + 4232LL) = 0LL;
  v9 = *(_QWORD *)(a1 + 920);
  v10 = v17;
  *(_QWORD *)(a1 + 888) = v9;
  *(_DWORD *)(a1 + 824) = 1;
  if ( !(unsigned int)SetPrpFromBuffer(a1, (_QWORD *)v9, v10, 0x40u) )
    goto LABEL_6;
  *(_BYTE *)(v9 + 4253) |= 7u;
  *(_QWORD *)(v9 + 4224) = NVMeDirectiveCompletion;
  *(_DWORD *)(v9 + 4100) = a2;
  *(_BYTE *)(v9 + 4096) = 26;
  *(_DWORD *)(v9 + 4136) = 15;
  *(_WORD *)(v9 + 4140) = 1;
  SrbAssignQueueId(a1, a1 + 832);
  ProcessCommand(a1, a1 + 832);
  WaitForCommandCompleteWithCustomTimeout(a1);
  if ( *(_BYTE *)(a1 + 835) == 1 )
  {
    v11 = v16;
    v12 = 0;
    v13 = v16[1];
    *a4 = *v16;
    v14 = v11[2];
    a4[1] = v13;
    v15 = v11[3];
    a4[2] = v14;
    a4[3] = v15;
  }
  else
  {
LABEL_6:
    v12 = -1056964607;
  }
  if ( v16 )
    NVMeFreeDmaBuffer(a1, 64LL, &v16, v17);
  return v12;
}
