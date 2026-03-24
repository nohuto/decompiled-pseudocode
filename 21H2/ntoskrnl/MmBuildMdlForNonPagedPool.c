/*
 * XREFs of MmBuildMdlForNonPagedPool @ 0x1402D6A20
 * Callers:
 *     ?SmCompressCtxProcessEntry@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@PEAX2PEAU_SM_COMPRESS_ENTRY@1@@Z @ 0x1402D77C0 (-SmCompressCtxProcessEntry@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@PE.c)
 *     VslpLockPagesForTransfer @ 0x1403940C8 (VslpLockPagesForTransfer.c)
 *     VslpLockMdlForTransfer @ 0x14039424C (VslpLockMdlForTransfer.c)
 *     HalpFlushMapBuffers @ 0x1404C8ABC (HalpFlushMapBuffers.c)
 *     HvlGetCoverageData @ 0x1404F1858 (HvlGetCoverageData.c)
 *     SmKmIssueVolumeIo @ 0x14059DFA4 (SmKmIssueVolumeIo.c)
 *     MmRotatePhysicalView @ 0x140682910 (MmRotatePhysicalView.c)
 *     MiCreateMdl @ 0x1406D3A74 (MiCreateMdl.c)
 *     PopAllocateHiberContext @ 0x140777C44 (PopAllocateHiberContext.c)
 *     HvlpDynamicUpdateMicrocode @ 0x14088E9AC (HvlpDynamicUpdateMicrocode.c)
 *     SmKmStoreFileWriteHeader @ 0x14092CE74 (SmKmStoreFileWriteHeader.c)
 *     EtwpBuildMdlForTraceBuffer @ 0x140948454 (EtwpBuildMdlForTraceBuffer.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x14032DEC0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140348AF0 (MiPteInShadowRange.c)
 *     MiGetSystemRegionType @ 0x14034A950 (MiGetSystemRegionType.c)
 *     MiQueuePinDriverAddressLog @ 0x1403A4254 (MiQueuePinDriverAddressLog.c)
 *     KeBugCheckEx @ 0x1403FDEF0 (KeBugCheckEx.c)
 *     MiSetNonPagedPoolNoSteal @ 0x140544D88 (MiSetNonPagedPoolNoSteal.c)
 */

void __stdcall MmBuildMdlForNonPagedPool(PMDL MemoryDescriptorList)
{
  unsigned __int64 StartVa; // rsi
  PMDL v2; // r15
  ULONG_PTR v3; // rbx
  char *v4; // rdx
  unsigned __int64 v6; // rdi
  int v7; // ebp
  ULONG_PTR v8; // rsi
  int v9; // r12d
  ULONG_PTR v10; // r13
  CSHORT MdlFlags; // r8
  int v12; // r10d
  __int64 v13; // r9
  unsigned __int64 v14; // r11
  unsigned __int64 v15; // rdi
  unsigned __int64 v16; // r8
  __int64 v17; // rcx
  ULONG_PTR BugCheckParameter4; // rax
  __int64 v19; // rdx
  ULONG_PTR v20; // rdi
  int v21; // ebp
  __int64 v22; // rbx
  unsigned __int64 v23; // r8
  __int64 v24; // rcx
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // r12
  __int64 i; // rcx
  __int16 v28; // ax
  __int64 v29; // rax
  struct _LIST_ENTRY *v30; // rax
  __int64 v31; // rax
  char v32; // r8
  struct _LIST_ENTRY *v33; // rax
  __int64 v34; // rax
  __int64 v35; // r8
  struct _LIST_ENTRY *Flink; // rdx
  _QWORD v37[2]; // [rsp+28h] [rbp-90h]
  unsigned __int64 v38; // [rsp+38h] [rbp-80h]
  unsigned __int64 v39; // [rsp+40h] [rbp-78h]
  _QWORD v40[2]; // [rsp+48h] [rbp-70h]
  unsigned __int64 v41; // [rsp+58h] [rbp-60h]
  __int64 v42; // [rsp+60h] [rbp-58h]
  __int64 v43; // [rsp+68h] [rbp-50h]
  int SystemRegionType; // [rsp+C0h] [rbp+8h]
  __int64 v45; // [rsp+C8h] [rbp+10h] BYREF
  ULONG_PTR v46; // [rsp+D0h] [rbp+18h] BYREF
  ULONG_PTR v47; // [rsp+D8h] [rbp+20h]

  StartVa = (unsigned __int64)MemoryDescriptorList->StartVa;
  v2 = MemoryDescriptorList + 1;
  v3 = 0LL;
  v4 = (char *)(StartVa + MemoryDescriptorList->ByteOffset);
  MemoryDescriptorList->Process = 0LL;
  MemoryDescriptorList->MappedSystemVa = v4;
  v46 = 0LL;
  v6 = -1LL;
  v7 = 0;
  v8 = ((StartVa >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v9 = 0;
  SystemRegionType = 0;
  v10 = v8 + 8 * ((((unsigned __int16)v4 & 0xFFF) + (unsigned __int64)MemoryDescriptorList->ByteCount + 4095) >> 12);
  v47 = v10;
  while ( v8 < v10 )
  {
    if ( v7 )
    {
      if ( v7 >= 2 )
      {
LABEL_19:
        if ( (v3 & 1) == 0 )
          KeBugCheckEx(0x1Au, 0x1240uLL, (ULONG_PTR)MemoryDescriptorList, v8, v3);
        if ( v7 == 3 )
          MiSetNonPagedPoolNoSteal(v8);
        BugCheckParameter4 = MI_READ_PTE_LOCK_FREE(v8);
        v46 = BugCheckParameter4;
        v20 = BugCheckParameter4;
        v3 = BugCheckParameter4;
        if ( (BugCheckParameter4 & 1) == 0 )
          KeBugCheckEx(0x1Au, 0x1241uLL, (ULONG_PTR)MemoryDescriptorList, v8, BugCheckParameter4);
        if ( (unsigned int)MiPteInShadowRange(&v46, v19) && (MiFlags & 0xC00000) != 0 )
        {
          if ( KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1 && ((v20 & 0x20) == 0 || (v20 & 0x42) == 0) )
          {
            Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
            if ( Flink )
            {
              if ( ((__int64)*(&Flink->Flink + (((unsigned __int64)&v46 >> 3) & 0x1FF)) & 0x20) != 0 )
                v20 |= 0x20uLL;
            }
          }
          v3 = v46;
        }
        v6 = (v20 >> 12) & 0xFFFFFFFFFLL;
        if ( v9 == 12 )
          MiQueuePinDriverAddressLog((__int64)(v8 << 25) >> 16, v3, 1LL);
      }
    }
    else
    {
      v12 = 4;
      v13 = 4LL;
      v14 = (((unsigned __int64)((__int64)(v8 << 25) >> 16) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v37[1] = v14;
      v38 = ((v14 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v15 = ((v38 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v39 = v15;
      v40[0] = ((v15 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      while ( 1 )
      {
        v16 = v37[v13--];
        --v12;
        v17 = *(_QWORD *)v16;
        if ( v16 >= 0xFFFFF6FB7DBED000uLL
          && v16 <= 0xFFFFF6FB7DBED7F8uLL
          && (MiFlags & 0xC00000) != 0
          && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
          && (v17 & 1) != 0
          && ((v17 & 0x20) == 0 || (v17 & 0x42) == 0) )
        {
          v30 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
          if ( v30 )
          {
            v31 = *((_QWORD *)&v30->Flink + ((v16 >> 3) & 0x1FF));
            v32 = v17 | 0x20;
            if ( (v31 & 0x20) == 0 )
              v32 = v17;
            LOBYTE(v17) = v32;
            if ( (v31 & 0x42) != 0 )
              LOBYTE(v17) = v32 | 0x42;
          }
        }
        if ( (v17 & 1) == 0 )
          goto LABEL_17;
        if ( (v17 & 0x80u) != 0LL )
          break;
        if ( v13 == 1 )
          goto LABEL_17;
      }
      if ( !v12 )
      {
LABEL_17:
        v3 = MI_READ_PTE_LOCK_FREE(v8);
        SystemRegionType = MiGetSystemRegionType((__int64)(v8 << 25) >> 16);
        v9 = SystemRegionType;
        if ( SystemRegionType == 5 )
          v7 = 3;
        else
          v7 = 2;
        goto LABEL_19;
      }
      v43 = ((v15 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v21 = 4;
      v41 = ((v14 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v22 = 4LL;
      v40[1] = (((unsigned __int64)((__int64)(v8 << 25) >> 16) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v42 = ((v41 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      do
      {
        v23 = v40[v22--];
        --v21;
        v24 = *(_QWORD *)v23;
        if ( v23 >= 0xFFFFF6FB7DBED000uLL
          && v23 <= 0xFFFFF6FB7DBED7F8uLL
          && (MiFlags & 0xC00000) != 0
          && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
          && (v24 & 1) != 0
          && ((v24 & 0x20) == 0 || (v24 & 0x42) == 0) )
        {
          v33 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
          if ( v33 )
          {
            v34 = *((_QWORD *)&v33->Flink + ((v23 >> 3) & 0x1FF));
            v35 = v24 | 0x20;
            if ( (v34 & 0x20) == 0 )
              v35 = v24;
            v24 = v35;
            if ( (v34 & 0x42) != 0 )
              v24 = v35 | 0x42;
          }
        }
        v45 = v24;
      }
      while ( v22 && (v24 & 0x80u) == 0LL );
      v25 = MI_READ_PTE_LOCK_FREE(&v45);
      v10 = v47;
      v6 = (v25 >> 12) & 0xFFFFFFFFFLL;
      if ( v22 )
      {
        v26 = (unsigned __int64)((__int64)(v8 << 25) >> 16) >> 12;
        for ( i = 1LL; v21; --v21 )
        {
          v28 = v26;
          v26 >>= 9;
          v29 = i * (v28 & 0x1FF);
          i <<= 9;
          v6 += v29;
        }
      }
      v3 = v46;
      v7 = 1;
      v9 = SystemRegionType;
    }
    v2->Next = (struct _MDL *)v6;
    MdlFlags = MemoryDescriptorList->MdlFlags;
    if ( (MdlFlags & 0x800) == 0 && (v6 > 0xFFFFFFFFFLL || ((*(_QWORD *)(48 * v6 - 0x57FFFFFFFD8LL) >> 50) & 1) == 0) )
      MemoryDescriptorList->MdlFlags = MdlFlags | 0x800;
    v2 = (PMDL)((char *)v2 + 8);
    v8 += 8LL;
    if ( (v8 & 0xFFF) != 0 )
    {
      if ( v7 == 1 )
        ++v6;
    }
    else
    {
      v7 = 0;
    }
  }
  MemoryDescriptorList->MdlFlags |= 4u;
}
