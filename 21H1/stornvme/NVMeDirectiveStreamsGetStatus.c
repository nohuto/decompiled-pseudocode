/*
 * XREFs of NVMeDirectiveStreamsGetStatus @ 0x1C0017318
 * Callers:
 *     IoctlStorageStreamsGetOpenStreams @ 0x1C0012150 (IoctlStorageStreamsGetOpenStreams.c)
 * Callees:
 *     SetPrpFromBuffer @ 0x1C000202C (SetPrpFromBuffer.c)
 *     ProcessCommand @ 0x1C0002084 (ProcessCommand.c)
 *     SrbAssignQueueId @ 0x1C0004370 (SrbAssignQueueId.c)
 *     NVMeZeroMemory @ 0x1C00044E0 (NVMeZeroMemory.c)
 *     NVMeFreeDmaBuffer @ 0x1C000451C (NVMeFreeDmaBuffer.c)
 *     NVMeAllocateDmaBuffer @ 0x1C0004570 (NVMeAllocateDmaBuffer.c)
 *     memset @ 0x1C0005500 (memset.c)
 *     WaitForCommandCompleteWithCustomTimeout @ 0x1C001BBDC (WaitForCommandCompleteWithCustomTimeout.c)
 */

__int64 __fastcall NVMeDirectiveStreamsGetStatus(__int64 a1, int a2, unsigned int a3, unsigned int *a4, __int64 a5)
{
  __int64 v9; // r15
  unsigned int v10; // ebp
  __int64 v11; // rbx
  unsigned __int16 *v13; // rdx
  unsigned int v14; // eax
  __int64 v15; // r8
  unsigned int v16; // ebx
  __int64 v17[7]; // [rsp+20h] [rbp-38h] BYREF
  unsigned __int16 *v18; // [rsp+78h] [rbp+20h] BYREF

  v18 = 0LL;
  v17[0] = 0LL;
  if ( !a4 )
    return 3238002694LL;
  if ( !a3 )
    return 3238002694LL;
  v9 = a5;
  if ( !a5 )
    return 3238002694LL;
  *a4 = 0;
  *(_BYTE *)(a1 + 835) = 0;
  memset(*(void **)(a1 + 920), 0, 0x10A0uLL);
  v10 = 2 * a3 + 2;
  *(_QWORD *)(*(_QWORD *)(a1 + 920) + 4232LL) = 0LL;
  v11 = *(_QWORD *)(a1 + 920);
  *(_QWORD *)(a1 + 888) = v11;
  *(_DWORD *)(a1 + 824) = 1;
  NVMeAllocateDmaBuffer(a1, v10, &v18, v17);
  if ( !v18 )
    return 3238002691LL;
  NVMeZeroMemory(v18, v10);
  if ( !(unsigned int)SetPrpFromBuffer(a1, (_QWORD *)v11, v17[0], v10) )
    goto LABEL_13;
  *(_BYTE *)(v11 + 4253) |= 7u;
  *(_DWORD *)(v11 + 4100) = a2;
  *(_DWORD *)(v11 + 4136) = (v10 >> 2) - 1;
  *(_QWORD *)(v11 + 4224) = NVMeDirectiveCompletion;
  *(_BYTE *)(v11 + 4096) = 26;
  *(_WORD *)(v11 + 4140) = 258;
  SrbAssignQueueId(a1, a1 + 832);
  ProcessCommand(a1, a1 + 832);
  WaitForCommandCompleteWithCustomTimeout(a1);
  if ( *(_BYTE *)(a1 + 835) == 1 )
  {
    v13 = v18;
    v14 = *v18;
    *a4 = v14;
    if ( a3 < v14 )
    {
      v16 = -1056964604;
    }
    else
    {
      v15 = 0LL;
      if ( v14 )
      {
        do
        {
          *(_DWORD *)(v9 + 4 * v15) = v13[v15 + 1];
          v15 = (unsigned int)(v15 + 1);
        }
        while ( (unsigned int)v15 < *v13 );
      }
      v16 = 0;
    }
  }
  else
  {
LABEL_13:
    v13 = v18;
    v16 = -1056964607;
  }
  if ( v13 )
    NVMeFreeDmaBuffer(a1, v10, &v18, v17[0]);
  return v16;
}
