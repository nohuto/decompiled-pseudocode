/*
 * XREFs of MmBuildMdlForNonPagedPool @ 0x14027C410
 * Callers:
 *     ?SmCompressCtxProcessEntry@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@PEAX2PEAU_SM_COMPRESS_ENTRY@1@@Z @ 0x14037A8BC (-SmCompressCtxProcessEntry@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@PE.c)
 *     VslpLockPagesForTransfer @ 0x1403A0F08 (VslpLockPagesForTransfer.c)
 *     VslpLockMdlForTransfer @ 0x1403A108C (VslpLockMdlForTransfer.c)
 *     HalpFlushMapBuffers @ 0x14051416C (HalpFlushMapBuffers.c)
 *     HvlGetCoverageData @ 0x140543148 (HvlGetCoverageData.c)
 *     SmKmIssueVolumeIo @ 0x1405FB99C (SmKmIssueVolumeIo.c)
 *     DifMmBuildMdlForNonPagedPoolWrapper @ 0x140616CB0 (DifMmBuildMdlForNonPagedPoolWrapper.c)
 *     MiCreateMdl @ 0x1407084B0 (MiCreateMdl.c)
 *     PopAllocateHiberContext @ 0x140802068 (PopAllocateHiberContext.c)
 *     HvlpDynamicUpdateMicrocode @ 0x140931378 (HvlpDynamicUpdateMicrocode.c)
 *     MiReplaceRotateWithDemandZero @ 0x14096D10C (MiReplaceRotateWithDemandZero.c)
 *     SmKmStoreFileWriteHeader @ 0x1409D7390 (SmKmStoreFileWriteHeader.c)
 *     EtwpBuildMdlForTraceBuffer @ 0x1409EC8CC (EtwpBuildMdlForTraceBuffer.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x14027B080 (MiGetSystemRegionType.c)
 *     MiSetNonPagedPoolNoSteal @ 0x14027C3BC (MiSetNonPagedPoolNoSteal.c)
 *     MiQueuePinDriverAddressLog @ 0x14027DD28 (MiQueuePinDriverAddressLog.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140317A10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiVaToPfnEx @ 0x1403B8520 (MiVaToPfnEx.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

void __stdcall MmBuildMdlForNonPagedPool(PMDL MemoryDescriptorList)
{
  unsigned __int64 StartVa; // rdi
  PMDL v2; // r15
  ULONG_PTR v3; // rbx
  char *v4; // rdx
  unsigned __int64 v5; // r14
  int v7; // ebp
  ULONG_PTR v8; // rdi
  int SystemRegionType; // r13d
  ULONG_PTR v10; // r12
  int v11; // r10d
  __int64 v12; // r9
  unsigned __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rax
  CSHORT MdlFlags; // r8
  ULONG_PTR BugCheckParameter4; // rax
  struct _LIST_ENTRY *Flink; // rdx
  char v19; // r8
  __int64 v20; // rax
  __int64 v21; // [rsp+28h] [rbp-60h]
  unsigned __int64 v22; // [rsp+30h] [rbp-58h]
  unsigned __int64 v23; // [rsp+38h] [rbp-50h]
  unsigned __int64 v24; // [rsp+40h] [rbp-48h]
  __int64 v25; // [rsp+48h] [rbp-40h]
  ULONG_PTR v26; // [rsp+98h] [rbp+10h] BYREF

  StartVa = (unsigned __int64)MemoryDescriptorList->StartVa;
  v2 = MemoryDescriptorList + 1;
  v3 = 0LL;
  v4 = (char *)(StartVa + MemoryDescriptorList->ByteOffset);
  MemoryDescriptorList->Process = 0LL;
  MemoryDescriptorList->MappedSystemVa = v4;
  v5 = -1LL;
  v26 = 0LL;
  v7 = 0;
  v8 = ((StartVa >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  SystemRegionType = 0;
  v10 = v8 + 8 * ((((unsigned __int16)v4 & 0xFFF) + (unsigned __int64)MemoryDescriptorList->ByteCount + 4095) >> 12);
  if ( v8 < v10 )
  {
    while ( v7 )
    {
      if ( v7 >= 2 )
        goto LABEL_24;
LABEL_12:
      v2->Next = (struct _MDL *)v5;
      MdlFlags = MemoryDescriptorList->MdlFlags;
      if ( (MdlFlags & 0x800) == 0
        && (v5 > qword_140C50840 || ((*(_QWORD *)(48 * v5 - 0x21FFFFFFFFD8LL) >> 54) & 1) == 0) )
      {
        MemoryDescriptorList->MdlFlags = MdlFlags | 0x800;
      }
      v2 = (PMDL)((char *)v2 + 8);
      v8 += 8LL;
      if ( (v8 & 0xFFF) != 0 )
      {
        if ( v7 == 1 )
          ++v5;
      }
      else
      {
        v7 = 0;
      }
      if ( v8 >= v10 )
        goto LABEL_19;
    }
    v11 = 4;
    v12 = 4LL;
    v22 = (((unsigned __int64)((__int64)(v8 << 25) >> 16) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v23 = ((v22 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v24 = ((v23 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v25 = ((v24 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    do
    {
      v13 = *(&v21 + v12--);
      --v11;
      v14 = *(_QWORD *)v13;
      if ( v13 >= 0xFFFFF6FB7DBED000uLL
        && v13 <= 0xFFFFF6FB7DBED7F8uLL
        && (MiFlags & 0xC00000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && (v14 & 1) != 0
        && ((v14 & 0x20) == 0 || (v14 & 0x42) == 0) )
      {
        Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( Flink )
        {
          v19 = v14 | 0x20;
          v20 = *((_QWORD *)&Flink->Flink + ((v13 >> 3) & 0x1FF));
          if ( (v20 & 0x20) == 0 )
            v19 = v14;
          LOBYTE(v14) = v19;
          if ( (v20 & 0x42) != 0 )
            LOBYTE(v14) = v19 | 0x42;
        }
      }
      if ( (v14 & 1) == 0 )
        break;
      if ( (v14 & 0x80u) != 0LL )
      {
        if ( v11 )
        {
          v15 = MiVaToPfnEx((__int64)(v8 << 25) >> 16);
          v3 = v26;
          v5 = v15;
          v7 = 1;
          goto LABEL_12;
        }
        break;
      }
    }
    while ( v12 != 1 );
    v3 = MI_READ_PTE_LOCK_FREE(v8);
    SystemRegionType = MiGetSystemRegionType((__int64)(v8 << 25) >> 16);
    if ( SystemRegionType == 5 )
      v7 = 3;
    else
      v7 = 2;
LABEL_24:
    if ( (v3 & 1) == 0 )
      KeBugCheckEx(0x1Au, 0x1240uLL, (ULONG_PTR)MemoryDescriptorList, v8, v3);
    if ( v7 == 3 )
      MiSetNonPagedPoolNoSteal((volatile signed __int64 *)v8);
    BugCheckParameter4 = MI_READ_PTE_LOCK_FREE(v8);
    v26 = BugCheckParameter4;
    v3 = BugCheckParameter4;
    if ( (BugCheckParameter4 & 1) == 0 )
      KeBugCheckEx(0x1Au, 0x1241uLL, (ULONG_PTR)MemoryDescriptorList, v8, BugCheckParameter4);
    v5 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v26) >> 12) & 0xFFFFFFFFFFLL;
    if ( SystemRegionType == 12 )
      MiQueuePinDriverAddressLog((__int64)(v8 << 25) >> 16, v3, 1LL);
    goto LABEL_12;
  }
LABEL_19:
  MemoryDescriptorList->MdlFlags |= 4u;
}
