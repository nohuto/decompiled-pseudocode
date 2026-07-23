/*
 * XREFs of MmBuildMdlForNonPagedPool @ 0x140287D70
 * Callers:
 *     ?SmCompressCtxProcessEntry@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@PEAX2PEAU_SM_COMPRESS_ENTRY@1@@Z @ 0x140288B10 (-SmCompressCtxProcessEntry@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@PE.c)
 *     VslpLockPagesForTransfer @ 0x140394218 (VslpLockPagesForTransfer.c)
 *     VslpLockMdlForTransfer @ 0x14039439C (VslpLockMdlForTransfer.c)
 *     HalpFlushMapBuffers @ 0x1404C8CFC (HalpFlushMapBuffers.c)
 *     HvlGetCoverageData @ 0x1404F17D8 (HvlGetCoverageData.c)
 *     SmKmIssueVolumeIo @ 0x14059E1D4 (SmKmIssueVolumeIo.c)
 *     MmRotatePhysicalView @ 0x1405E48E0 (MmRotatePhysicalView.c)
 *     MiCreateMdl @ 0x1406AAD54 (MiCreateMdl.c)
 *     PopAllocateHiberContext @ 0x140777E04 (PopAllocateHiberContext.c)
 *     HvlpDynamicUpdateMicrocode @ 0x14088EB0C (HvlpDynamicUpdateMicrocode.c)
 *     SmKmStoreFileWriteHeader @ 0x14092CFD4 (SmKmStoreFileWriteHeader.c)
 *     EtwpBuildMdlForTraceBuffer @ 0x140948624 (EtwpBuildMdlForTraceBuffer.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140338C10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140353840 (MiPteInShadowRange.c)
 *     MiGetSystemRegionType @ 0x1403556A0 (MiGetSystemRegionType.c)
 *     MiQueuePinDriverAddressLog @ 0x1403A43A4 (MiQueuePinDriverAddressLog.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     MiSetNonPagedPoolNoSteal @ 0x140544FC8 (MiSetNonPagedPoolNoSteal.c)
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
  ULONG_PTR v19; // rdi
  int v20; // ebp
  __int64 v21; // rbx
  unsigned __int64 v22; // r8
  __int64 v23; // rcx
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // r12
  __int64 i; // rcx
  __int16 v27; // ax
  __int64 v28; // rax
  struct _LIST_ENTRY *v29; // rax
  __int64 v30; // rax
  char v31; // r8
  struct _LIST_ENTRY *v32; // rax
  __int64 v33; // rax
  __int64 v34; // r8
  struct _LIST_ENTRY *Flink; // rdx
  _QWORD v36[2]; // [rsp+28h] [rbp-90h]
  unsigned __int64 v37; // [rsp+38h] [rbp-80h]
  unsigned __int64 v38; // [rsp+40h] [rbp-78h]
  _QWORD v39[2]; // [rsp+48h] [rbp-70h]
  unsigned __int64 v40; // [rsp+58h] [rbp-60h]
  __int64 v41; // [rsp+60h] [rbp-58h]
  __int64 v42; // [rsp+68h] [rbp-50h]
  int SystemRegionType; // [rsp+C0h] [rbp+8h]
  __int64 v44; // [rsp+C8h] [rbp+10h] BYREF
  ULONG_PTR v45; // [rsp+D0h] [rbp+18h] BYREF
  ULONG_PTR v46; // [rsp+D8h] [rbp+20h]

  StartVa = (unsigned __int64)MemoryDescriptorList->StartVa;
  v2 = MemoryDescriptorList + 1;
  v3 = 0LL;
  v4 = (char *)(StartVa + MemoryDescriptorList->ByteOffset);
  MemoryDescriptorList->Process = 0LL;
  MemoryDescriptorList->MappedSystemVa = v4;
  v45 = 0LL;
  v6 = -1LL;
  v7 = 0;
  v8 = ((StartVa >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v9 = 0;
  SystemRegionType = 0;
  v10 = v8 + 8 * ((((unsigned __int16)v4 & 0xFFF) + (unsigned __int64)MemoryDescriptorList->ByteCount + 4095) >> 12);
  v46 = v10;
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
        v45 = BugCheckParameter4;
        v19 = BugCheckParameter4;
        v3 = BugCheckParameter4;
        if ( (BugCheckParameter4 & 1) == 0 )
          KeBugCheckEx(0x1Au, 0x1241uLL, (ULONG_PTR)MemoryDescriptorList, v8, BugCheckParameter4);
        if ( (unsigned int)MiPteInShadowRange(&v45) && (MiFlags & 0xC00000) != 0 )
        {
          if ( KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1 && ((v19 & 0x20) == 0 || (v19 & 0x42) == 0) )
          {
            Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
            if ( Flink )
            {
              if ( ((__int64)*(&Flink->Flink + (((unsigned __int64)&v45 >> 3) & 0x1FF)) & 0x20) != 0 )
                v19 |= 0x20uLL;
            }
          }
          v3 = v45;
        }
        v6 = (v19 >> 12) & 0xFFFFFFFFFLL;
        if ( v9 == 12 )
          MiQueuePinDriverAddressLog((__int64)(v8 << 25) >> 16, v3, 1LL);
      }
    }
    else
    {
      v12 = 4;
      v13 = 4LL;
      v14 = (((unsigned __int64)((__int64)(v8 << 25) >> 16) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v36[1] = v14;
      v37 = ((v14 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v15 = ((v37 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v38 = v15;
      v39[0] = ((v15 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      while ( 1 )
      {
        v16 = v36[v13--];
        --v12;
        v17 = *(_QWORD *)v16;
        if ( v16 >= 0xFFFFF6FB7DBED000uLL
          && v16 <= 0xFFFFF6FB7DBED7F8uLL
          && (MiFlags & 0xC00000) != 0
          && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
          && (v17 & 1) != 0
          && ((v17 & 0x20) == 0 || (v17 & 0x42) == 0) )
        {
          v29 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
          if ( v29 )
          {
            v30 = *((_QWORD *)&v29->Flink + ((v16 >> 3) & 0x1FF));
            v31 = v17 | 0x20;
            if ( (v30 & 0x20) == 0 )
              v31 = v17;
            LOBYTE(v17) = v31;
            if ( (v30 & 0x42) != 0 )
              LOBYTE(v17) = v31 | 0x42;
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
      v42 = ((v15 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v20 = 4;
      v40 = ((v14 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v21 = 4LL;
      v39[1] = (((unsigned __int64)((__int64)(v8 << 25) >> 16) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v41 = ((v40 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      do
      {
        v22 = v39[v21--];
        --v20;
        v23 = *(_QWORD *)v22;
        if ( v22 >= 0xFFFFF6FB7DBED000uLL
          && v22 <= 0xFFFFF6FB7DBED7F8uLL
          && (MiFlags & 0xC00000) != 0
          && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
          && (v23 & 1) != 0
          && ((v23 & 0x20) == 0 || (v23 & 0x42) == 0) )
        {
          v32 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
          if ( v32 )
          {
            v33 = *((_QWORD *)&v32->Flink + ((v22 >> 3) & 0x1FF));
            v34 = v23 | 0x20;
            if ( (v33 & 0x20) == 0 )
              v34 = v23;
            v23 = v34;
            if ( (v33 & 0x42) != 0 )
              v23 = v34 | 0x42;
          }
        }
        v44 = v23;
      }
      while ( v21 && (v23 & 0x80u) == 0LL );
      v24 = MI_READ_PTE_LOCK_FREE(&v44);
      v10 = v46;
      v6 = (v24 >> 12) & 0xFFFFFFFFFLL;
      if ( v21 )
      {
        v25 = (unsigned __int64)((__int64)(v8 << 25) >> 16) >> 12;
        for ( i = 1LL; v20; --v20 )
        {
          v27 = v25;
          v25 >>= 9;
          v28 = i * (v27 & 0x1FF);
          i <<= 9;
          v6 += v28;
        }
      }
      v3 = v45;
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
