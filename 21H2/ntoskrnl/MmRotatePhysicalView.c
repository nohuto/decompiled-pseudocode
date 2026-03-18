/*
 * XREFs of MmRotatePhysicalView @ 0x140660170
 * Callers:
 *     <none>
 * Callees:
 *     MiGetVadCacheAttribute @ 0x140200CF0 (MiGetVadCacheAttribute.c)
 *     MiReplaceRotateWithDemandZeroNoCopy @ 0x140200D20 (MiReplaceRotateWithDemandZeroNoCopy.c)
 *     MiObtainReferencedVadEx @ 0x14030E7C0 (MiObtainReferencedVadEx.c)
 *     MiGetProcessPartition @ 0x14032A72C (MiGetProcessPartition.c)
 *     MiUnlockAndDereferenceVad @ 0x14032E700 (MiUnlockAndDereferenceVad.c)
 *     MiRotateToFrameBufferNoCopy @ 0x14065FFA0 (MiRotateToFrameBufferNoCopy.c)
 *     MiLogVirtualRotateEvent @ 0x14096D0B8 (MiLogVirtualRotateEvent.c)
 *     MiReplaceRotateWithDemandZero @ 0x14096D10C (MiReplaceRotateWithDemandZero.c)
 *     MiRotateToFrameBuffer @ 0x14096D3A4 (MiRotateToFrameBuffer.c)
 */

NTSTATUS __stdcall MmRotatePhysicalView(
        PVOID VirtualAddress,
        PSIZE_T NumberOfBytes,
        PMDL NewMdl,
        MM_ROTATE_DIRECTION Direction,
        PMM_ROTATE_COPY_CALLBACK_FUNCTION CopyFunction,
        PVOID Context)
{
  ULONG_PTR v6; // r12
  ULONG_PTR v7; // rdi
  char *v11; // rsi
  unsigned __int64 v12; // rbx
  __int64 v13; // rax
  char *v14; // rbp
  int v15; // eax
  NTSTATUS v16; // ebx
  PVOID v18; // r14
  __int64 v19; // [rsp+80h] [rbp+8h] BYREF
  __int64 ProcessPartition; // [rsp+88h] [rbp+10h]

  LODWORD(v19) = 0;
  v6 = 0LL;
  v7 = *NumberOfBytes;
  v11 = (char *)VirtualAddress;
  if ( ((unsigned __int16)VirtualAddress & 0xFFF) != 0 )
  {
    v16 = -1073741585;
LABEL_35:
    *NumberOfBytes = v6;
    return v16;
  }
  if ( (v7 & 0xFFF) != 0 )
    goto LABEL_18;
  if ( Direction >= MmMaximumRotateDirection )
  {
    v16 = -1073741583;
    goto LABEL_35;
  }
  v12 = (unsigned __int64)VirtualAddress + v7 - 1;
  if ( v12 <= (unsigned __int64)VirtualAddress )
  {
LABEL_18:
    v16 = -1073741584;
    goto LABEL_35;
  }
  ProcessPartition = MiGetProcessPartition((__int64)KeGetCurrentThread()->ApcState.Process);
  v13 = MiObtainReferencedVadEx((unsigned __int64)v11, 0, (int *)&v19);
  v14 = (char *)v13;
  if ( !v13 )
  {
    v16 = v19;
    if ( (_DWORD)v19 == -1073741664 )
      v16 = -1073741819;
    goto LABEL_35;
  }
  if ( (*(_DWORD *)(v13 + 48) & 0x70) != 0x40
    || (*(unsigned int *)(v13 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v13 + 33) << 32)) < v12 >> 12 )
  {
    v16 = -1073741800;
    goto LABEL_34;
  }
  MiGetVadCacheAttribute(v13);
  if ( Direction > MmToFrameBufferNoCopy )
  {
    if ( Direction == MmToRegularMemoryNoCopy )
    {
      v16 = MiReplaceRotateWithDemandZeroNoCopy((unsigned __int64)v11, v12);
      MiUnlockAndDereferenceVad(v14);
      *NumberOfBytes = v7;
      if ( (WORD2(PerfGlobalGroupMask) & 0x8000) != 0 && v7 )
        MiLogVirtualRotateEvent(v11, v7, 3LL);
      return v16;
    }
    if ( v7 )
    {
      v18 = Context;
      do
      {
        v19 = 0LL;
        v16 = MiReplaceRotateWithDemandZero(v14, v11, v7, CopyFunction, v18, &v19);
        v6 += v19;
        if ( v16 == 1073741849 )
          break;
        v11 += v19;
        v7 -= v19;
      }
      while ( v7 );
    }
    else
    {
      v16 = v19;
    }
    goto LABEL_34;
  }
  if ( Direction )
    v15 = MiRotateToFrameBufferNoCopy((__int64)v14, (unsigned __int64)v11, (__int64)NewMdl, v7 >> 12);
  else
    v15 = MiRotateToFrameBuffer(ProcessPartition, v14, v11, NewMdl, v7 >> 12, CopyFunction, Context);
  v16 = v15;
  if ( v15 < 0 )
  {
LABEL_34:
    MiUnlockAndDereferenceVad(v14);
    goto LABEL_35;
  }
  MiUnlockAndDereferenceVad(v14);
  *NumberOfBytes = v7;
  if ( (WORD2(PerfGlobalGroupMask) & 0x8000) != 0 )
  {
    if ( v7 )
      MiLogVirtualRotateEvent(v11, v7, (unsigned int)Direction);
  }
  return 0;
}
