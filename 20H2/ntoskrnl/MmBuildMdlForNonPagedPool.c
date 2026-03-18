/*
 * XREFs of MmBuildMdlForNonPagedPool @ 0x140254270
 * Callers:
 *     ?SmCompressCtxProcessEntry@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@PEAX2PEAU_SM_COMPRESS_ENTRY@1@@Z @ 0x140255010 (-SmCompressCtxProcessEntry@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@PE.c)
 *     VslpLockPagesForTransfer @ 0x140393C58 (VslpLockPagesForTransfer.c)
 *     VslpLockMdlForTransfer @ 0x140393DDC (VslpLockMdlForTransfer.c)
 *     HalpFlushMapBuffers @ 0x1404C70EC (HalpFlushMapBuffers.c)
 *     HvlGetCoverageData @ 0x1404EFCB8 (HvlGetCoverageData.c)
 *     SmKmIssueVolumeIo @ 0x14059C574 (SmKmIssueVolumeIo.c)
 *     MmRotatePhysicalView @ 0x14065CA40 (MmRotatePhysicalView.c)
 *     MiCreateMdl @ 0x140708B28 (MiCreateMdl.c)
 *     PopAllocateHiberContext @ 0x140773C94 (PopAllocateHiberContext.c)
 *     HvlpDynamicUpdateMicrocode @ 0x14089140C (HvlpDynamicUpdateMicrocode.c)
 *     SmKmStoreFileWriteHeader @ 0x14092F6A4 (SmKmStoreFileWriteHeader.c)
 *     EtwpBuildMdlForTraceBuffer @ 0x14094AC84 (EtwpBuildMdlForTraceBuffer.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14021EA50 (MiPteInShadowRange.c)
 *     MiGetSystemRegionType @ 0x140220A00 (MiGetSystemRegionType.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1402B12D0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiQueuePinDriverAddressLog @ 0x1403A3994 (MiQueuePinDriverAddressLog.c)
 *     KeBugCheckEx @ 0x1403FBCA0 (KeBugCheckEx.c)
 *     MiSetNonPagedPoolNoSteal @ 0x140543284 (MiSetNonPagedPoolNoSteal.c)
 */

void __stdcall MmBuildMdlForNonPagedPool(PMDL MemoryDescriptorList)
{
  __int64 MdlFlags; // r8
  unsigned __int64 StartVa; // rsi
  PMDL v3; // r15
  ULONG_PTR v4; // rbx
  char *v5; // rdx
  unsigned __int64 v7; // rdi
  int v8; // ebp
  ULONG_PTR v9; // rsi
  int v10; // r12d
  ULONG_PTR v11; // r13
  __int64 v12; // r9
  unsigned __int64 v13; // rdx
  int v14; // r10d
  __int64 v15; // r9
  unsigned __int64 v16; // r11
  unsigned __int64 v17; // rdi
  unsigned __int64 v18; // r8
  __int64 v19; // rcx
  ULONG_PTR BugCheckParameter4; // rax
  ULONG_PTR v21; // rdi
  int v22; // ebp
  __int64 v23; // rbx
  unsigned __int64 v24; // r8
  __int64 v25; // rcx
  unsigned __int64 v26; // rax
  unsigned __int64 v27; // r12
  __int64 i; // rcx
  __int16 v29; // ax
  __int64 v30; // rax
  struct _LIST_ENTRY *v31; // rax
  __int64 v32; // rax
  char v33; // r8
  struct _LIST_ENTRY *v34; // rax
  __int64 v35; // rax
  __int64 v36; // r8
  struct _LIST_ENTRY *Flink; // rdx
  _QWORD v38[2]; // [rsp+28h] [rbp-90h]
  unsigned __int64 v39; // [rsp+38h] [rbp-80h]
  unsigned __int64 v40; // [rsp+40h] [rbp-78h]
  _QWORD v41[2]; // [rsp+48h] [rbp-70h]
  unsigned __int64 v42; // [rsp+58h] [rbp-60h]
  __int64 v43; // [rsp+60h] [rbp-58h]
  __int64 v44; // [rsp+68h] [rbp-50h]
  int SystemRegionType; // [rsp+C0h] [rbp+8h]
  __int64 v46; // [rsp+C8h] [rbp+10h] BYREF
  ULONG_PTR v47; // [rsp+D0h] [rbp+18h] BYREF
  ULONG_PTR v48; // [rsp+D8h] [rbp+20h]

  StartVa = (unsigned __int64)MemoryDescriptorList->StartVa;
  v3 = MemoryDescriptorList + 1;
  v4 = 0LL;
  v5 = (char *)(StartVa + MemoryDescriptorList->ByteOffset);
  MemoryDescriptorList->Process = 0LL;
  MemoryDescriptorList->MappedSystemVa = v5;
  v47 = 0LL;
  v7 = -1LL;
  v8 = 0;
  v9 = ((StartVa >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v10 = 0;
  SystemRegionType = 0;
  v11 = v9 + 8 * ((((unsigned __int16)v5 & 0xFFF) + (unsigned __int64)MemoryDescriptorList->ByteCount + 4095) >> 12);
  v48 = v11;
  if ( v9 < v11 )
  {
    v12 = 2048LL;
    do
    {
      v13 = 0xFFFFF6FB7DBED000uLL;
      if ( v8 )
      {
        if ( v8 < 2 )
          goto LABEL_5;
LABEL_20:
        if ( (v4 & 1) == 0 )
          KeBugCheckEx(0x1Au, 0x1240uLL, (ULONG_PTR)MemoryDescriptorList, v9, v4);
        if ( v8 == 3 )
          MiSetNonPagedPoolNoSteal(v9, v13, MdlFlags, v12);
        BugCheckParameter4 = MI_READ_PTE_LOCK_FREE(v9);
        v47 = BugCheckParameter4;
        v21 = BugCheckParameter4;
        v4 = BugCheckParameter4;
        if ( (BugCheckParameter4 & 1) == 0 )
          KeBugCheckEx(0x1Au, 0x1241uLL, (ULONG_PTR)MemoryDescriptorList, v9, BugCheckParameter4);
        if ( MiPteInShadowRange((unsigned __int64)&v47) && (MiFlags & 0xC00000) != 0 )
        {
          if ( KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1 && ((v21 & 0x20) == 0 || (v21 & 0x42) == 0) )
          {
            Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
            if ( Flink )
            {
              if ( ((__int64)*(&Flink->Flink + (((unsigned __int64)&v47 >> 3) & 0x1FF)) & 0x20) != 0 )
                v21 |= 0x20uLL;
            }
          }
          v4 = v47;
        }
        v7 = (v21 >> 12) & 0xFFFFFFFFFLL;
        if ( v10 == 12 )
          MiQueuePinDriverAddressLog((__int64)(v9 << 25) >> 16, v4, 1LL);
      }
      else
      {
        v14 = 4;
        v15 = 4LL;
        v16 = (((unsigned __int64)((__int64)(v9 << 25) >> 16) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        v38[1] = v16;
        v39 = ((v16 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        v17 = ((v39 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        v40 = v17;
        v41[0] = ((v17 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        while ( 1 )
        {
          v18 = v38[v15--];
          --v14;
          v19 = *(_QWORD *)v18;
          if ( v18 >= 0xFFFFF6FB7DBED000uLL
            && v18 <= 0xFFFFF6FB7DBED7F8uLL
            && (MiFlags & 0xC00000) != 0
            && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
            && (v19 & 1) != 0
            && ((v19 & 0x20) == 0 || (v19 & 0x42) == 0) )
          {
            v31 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
            if ( v31 )
            {
              v32 = *((_QWORD *)&v31->Flink + ((v18 >> 3) & 0x1FF));
              v33 = v19 | 0x20;
              if ( (v32 & 0x20) == 0 )
                v33 = v19;
              LOBYTE(v19) = v33;
              if ( (v32 & 0x42) != 0 )
                LOBYTE(v19) = v33 | 0x42;
            }
          }
          if ( (v19 & 1) == 0 )
            goto LABEL_18;
          if ( (v19 & 0x80u) != 0LL )
            break;
          if ( v15 == 1 )
            goto LABEL_18;
        }
        if ( !v14 )
        {
LABEL_18:
          v4 = MI_READ_PTE_LOCK_FREE(v9);
          SystemRegionType = MiGetSystemRegionType((__int64)(v9 << 25) >> 16);
          v10 = SystemRegionType;
          if ( SystemRegionType == 5 )
            v8 = 3;
          else
            v8 = 2;
          goto LABEL_20;
        }
        v44 = ((v17 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        v22 = 4;
        v42 = ((v16 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        v23 = 4LL;
        v41[1] = (((unsigned __int64)((__int64)(v9 << 25) >> 16) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        v43 = ((v42 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        do
        {
          v24 = v41[v23--];
          --v22;
          v25 = *(_QWORD *)v24;
          if ( v24 >= 0xFFFFF6FB7DBED000uLL
            && v24 <= 0xFFFFF6FB7DBED7F8uLL
            && (MiFlags & 0xC00000) != 0
            && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
            && (v25 & 1) != 0
            && ((v25 & 0x20) == 0 || (v25 & 0x42) == 0) )
          {
            v34 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
            if ( v34 )
            {
              v35 = *((_QWORD *)&v34->Flink + ((v24 >> 3) & 0x1FF));
              v36 = v25 | 0x20;
              if ( (v35 & 0x20) == 0 )
                v36 = v25;
              v25 = v36;
              if ( (v35 & 0x42) != 0 )
                v25 = v36 | 0x42;
            }
          }
          v46 = v25;
        }
        while ( v23 && (v25 & 0x80u) == 0LL );
        v26 = MI_READ_PTE_LOCK_FREE(&v46);
        v11 = v48;
        v7 = (v26 >> 12) & 0xFFFFFFFFFLL;
        if ( v23 )
        {
          v27 = (unsigned __int64)((__int64)(v9 << 25) >> 16) >> 12;
          for ( i = 1LL; v22; --v22 )
          {
            v29 = v27;
            v27 >>= 9;
            v30 = i * (v29 & 0x1FF);
            i <<= 9;
            v7 += v30;
          }
        }
        v4 = v47;
        v8 = 1;
        v10 = SystemRegionType;
      }
      v12 = 2048LL;
LABEL_5:
      v3->Next = (struct _MDL *)v7;
      MdlFlags = (unsigned __int16)MemoryDescriptorList->MdlFlags;
      if ( (MdlFlags & 0x800) == 0 && (v7 > 0xFFFFFFFFFLL || ((*(_QWORD *)(48 * v7 - 0x57FFFFFFFD8LL) >> 50) & 1) == 0) )
      {
        LOWORD(MdlFlags) = MdlFlags | 0x800;
        MemoryDescriptorList->MdlFlags = MdlFlags;
      }
      v3 = (PMDL)((char *)v3 + 8);
      v9 += 8LL;
      if ( (v9 & 0xFFF) != 0 )
      {
        if ( v8 == 1 )
          ++v7;
      }
      else
      {
        v8 = 0;
      }
    }
    while ( v9 < v11 );
  }
  MemoryDescriptorList->MdlFlags |= 4u;
}
