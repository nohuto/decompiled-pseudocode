/*
 * XREFs of ?SmCompressCtxProcessEntry@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@PEAX2PEAU_SM_COMPRESS_ENTRY@1@@Z @ 0x140288B10
 * Callers:
 *     ?SmCompressCtxWorkerThread@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x140288840 (-SmCompressCtxWorkerThread@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z.c)
 * Callees:
 *     IoBuildPartialMdl @ 0x14020ED00 (IoBuildPartialMdl.c)
 *     ?Hash@MetroHash64@@SAXPEBE_KQEAE1@Z @ 0x140225B74 (-Hash@MetroHash64@@SAXPEBE_KQEAE1@Z.c)
 *     MmBuildMdlForNonPagedPool @ 0x140287D70 (MmBuildMdlForNonPagedPool.c)
 *     ?SmCompressCtxProcessReadyQueue@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@EK@Z @ 0x140289874 (-SmCompressCtxProcessReadyQueue@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEA.c)
 *     RtlCompressBuffer @ 0x14028BE80 (RtlCompressBuffer.c)
 *     ExAcquireSpinLockExclusive @ 0x1402C1960 (ExAcquireSpinLockExclusive.c)
 *     memmove @ 0x140414040 (memmove.c)
 */

__int64 __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmCompressCtxProcessEntry(
        __int64 a1,
        __int64 a2,
        void *a3,
        void *a4,
        PMDL MemoryDescriptorList)
{
  PMDL v6; // rsi
  unsigned __int64 StartVa; // r12
  struct _MDL *v9; // r14
  PVOID MappedSystemVa; // r13
  PVOID *p_MappedSystemVa; // r15
  __int16 v12; // bp
  __int64 v13; // rdx
  __int64 v14; // r8
  ULONG FinalCompressedSize[18]; // [rsp+40h] [rbp-48h] BYREF

  FinalCompressedSize[0] = 0;
  v6 = MemoryDescriptorList;
  StartVa = (unsigned __int64)MemoryDescriptorList[1].StartVa;
  v9 = *(struct _MDL **)(StartVa + 16);
  MappedSystemVa = v9->MappedSystemVa;
  memmove(a4, MappedSystemVa, 0x1000uLL);
  p_MappedSystemVa = &v6[1].MappedSystemVa;
  v12 = (_WORD)v6 + 72;
  if ( RtlCompressBuffer(
         (USHORT)v6[1].Process[1].WoW64Process,
         (PUCHAR)a4,
         0x1000u,
         (PUCHAR)&v6[1].MappedSystemVa,
         StartVa - ((_DWORD)v6 + 72) + 4096,
         0x1000u,
         FinalCompressedSize,
         a3) < 0 )
  {
    FinalCompressedSize[0] = 4096;
    p_MappedSystemVa = (PVOID *)MappedSystemVa;
    IoBuildPartialMdl(v9, v6, (char *)v9->StartVa + v9->ByteOffset, 0);
  }
  else
  {
    v13 = FinalCompressedSize[0];
    v6->Next = 0LL;
    v6->MdlFlags = 0;
    v6->ByteCount = v13;
    v6->ByteOffset = v12 & 0xFFF;
    v6->StartVa = (PVOID)((unsigned __int64)p_MappedSystemVa & 0xFFFFFFFFFFFFF000uLL);
    v6->Size = 8 * ((((unsigned __int64)(v12 & 0xFFF) + v13 + 4095) >> 12) + 6);
    MmBuildMdlForNonPagedPool(v6);
  }
  MemoryDescriptorList = 0LL;
  MetroHash64::Hash(
    (const unsigned __int8 *)p_MappedSystemVa,
    FinalCompressedSize[0],
    (unsigned __int8 *const)&MemoryDescriptorList);
  *(_QWORD *)&v6[1].Size = MemoryDescriptorList;
  v6->Next = v9;
  *(_DWORD *)(StartVa + 8) |= 0x80000000;
  *(_QWORD *)(StartVa + 16) = v6;
  LOBYTE(v14) = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 112));
  *(_QWORD *)StartVa = *(_DWORD *)StartVa & 7 | ((**(_QWORD **)(a1 + 104) & 0xFFFFFFFFFFFFFFF8uLL) + 8);
  **(_QWORD **)(a1 + 104) = StartVa | **(_DWORD **)(a1 + 104) & 7;
  *(_QWORD *)(a1 + 104) = StartVa;
  return SMKM_STORE_MGR<SM_TRAITS>::SmCompressCtxProcessReadyQueue(a1, a2, v14, 0LL);
}
