/*
 * XREFs of ?ndisAllocateNumaStripedPages@@YAPEAXXZ @ 0x1C0109338
 * Callers:
 *     ndisAllocatePerProcessorPageDescriptor @ 0x1C0036188 (ndisAllocatePerProcessorPageDescriptor.c)
 * Callees:
 *     ??$invoke@P6AXPEAUNDISWATCHDOG__@@@ZAEAPEAU1@@wistd@@YAX$$QEAP6AXPEAUNDISWATCHDOG__@@@ZAEAPEAU1@@Z @ 0x1C003D7F8 (--$invoke@P6AXPEAUNDISWATCHDOG__@@@ZAEAPEAU1@@wistd@@YAX$$QEAP6AXPEAUNDISWATCHDOG__@@@ZAEAPEAU1@.c)
 *     memset @ 0x1C003FE40 (memset.c)
 *     ndisGetNodeIdForProcessor @ 0x1C01095A8 (ndisGetNodeIdForProcessor.c)
 *     ??$MakeSizedPoolPtr@U_MDL@@@@YA?AV?$unique_ptr@U_MDL@@U?$KFreePool@U_MDL@@@@@wistd@@K_K@Z @ 0x1C0109640 (--$MakeSizedPoolPtr@U_MDL@@@@YA-AV-$unique_ptr@U_MDL@@U-$KFreePool@U_MDL@@@@@wistd@@K_K@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C010B8D0 (--_V@YAXPEAX@Z.c)
 */

unsigned __int64 ndisAllocateNumaStripedPages(void)
{
  __int64 v0; // r14
  SIZE_T v1; // rbx
  unsigned __int64 MappingAddress; // rdi
  SIZE_T v3; // rax
  __int64 v4; // rdx
  PMDL v5; // rsi
  struct _MDL *v6; // r12
  SIZE_T v7; // rbx
  struct _MDL **PoolWithTag; // rax
  struct _MDL **v9; // r15
  unsigned int v10; // r13d
  int NodeIdForProcessor; // eax
  __int64 NodePagesForMdl; // rcx
  char v13; // si
  struct _MDL **v14; // rbx
  struct _MDL *v15; // rcx
  unsigned __int64 v16; // rbx
  signed __int64 v18; // [rsp+40h] [rbp-18h]
  unsigned __int64 v19; // [rsp+A0h] [rbp+48h] BYREF
  __int64 v20; // [rsp+A8h] [rbp+50h] BYREF
  __int64 v21; // [rsp+B0h] [rbp+58h]
  PMDL MemoryDescriptorList; // [rsp+B8h] [rbp+60h] BYREF

  LODWORD(v0) = KeQueryMaximumProcessorCountEx(0xFFFFu) + 1;
  v1 = (unsigned int)((_DWORD)v0 << 12);
  MappingAddress = (unsigned __int64)MmAllocateMappingAddress(v1, 0x6C53444Eu);
  if ( !MappingAddress )
    return 0LL;
  v3 = MmSizeOfMdl(0LL, (unsigned int)v1);
  MakeSizedPoolPtr<_MDL>(&MemoryDescriptorList, v4, v3);
  v5 = MemoryDescriptorList;
  if ( MemoryDescriptorList )
  {
    MemoryDescriptorList->Next = 0LL;
    v6 = v5 + 1;
    v5->ByteCount = v1;
    v5->StartVa = (PVOID)(MappingAddress & 0xFFFFFFFFFFFFF000uLL);
    v5->ByteOffset = MappingAddress & 0xFFF;
    v5->MdlFlags = 2;
    v5->Size = 8 * (((v1 + (MappingAddress & 0xFFF) + 4095) >> 12) + 6);
    v7 = 8LL * (unsigned int)v0;
    if ( !is_mul_ok((unsigned int)v0, 8uLL) )
      v7 = -1LL;
    PoolWithTag = (struct _MDL **)ExAllocatePoolWithTag(PagedPool, v7, 0x6D4D444Eu);
    v9 = PoolWithTag;
    if ( PoolWithTag )
      memset(PoolWithTag, 0, v7);
    else
      v9 = 0LL;
    if ( !v9 )
    {
      v16 = 0LL;
LABEL_22:
      ExFreePoolWithTag(v5, 0);
      goto LABEL_23;
    }
    v10 = 0;
    LOBYTE(v19) = 0;
    if ( (_DWORD)v0 )
    {
      v21 = -1LL;
      v18 = (char *)v9 - (char *)v6;
      while ( 1 )
      {
        v20 = 4096LL;
        NodeIdForProcessor = ndisGetNodeIdForProcessor(v10 != 0 ? v10 - 1 : 0);
        NodePagesForMdl = MmAllocateNodePagesForMdlEx(0LL, v21, v20, 4096LL, 1, NodeIdForProcessor, 5);
        *(struct _MDL **)((char *)&v6->Next + v18) = (struct _MDL *)NodePagesForMdl;
        if ( !NodePagesForMdl )
          break;
        ++v10;
        v6->Next = *(struct _MDL **)(NodePagesForMdl + 48);
        v6 = (struct _MDL *)((char *)v6 + 8);
        if ( v10 >= (unsigned int)v0 )
          goto LABEL_12;
      }
    }
    else
    {
LABEL_12:
      if ( MmMapLockedPagesWithReservedMapping((PVOID)MappingAddress, 0x6C53444Eu, v5, MmCached) )
      {
LABEL_13:
        if ( (_DWORD)v0 )
        {
          v13 = v19;
          v14 = v9;
          v0 = (unsigned int)v0;
          do
          {
            v15 = *v14;
            if ( *v14 )
            {
              if ( v13 )
              {
                MmFreePagesFromMdl(v15);
                v15 = *v14;
              }
              ExFreePoolWithTag(v15, 0);
            }
            ++v14;
            --v0;
          }
          while ( v0 );
          v5 = MemoryDescriptorList;
        }
        v16 = MappingAddress;
        MappingAddress = 0LL;
        operator delete[](v9);
        goto LABEL_22;
      }
    }
    v19 = MappingAddress;
    v20 = (__int64)ndisFreeMappingAddress;
    wistd::invoke<void (*)(NDISWATCHDOG__ *),NDISWATCHDOG__ * &>((__int64 (__fastcall **)(_QWORD))&v20, &v19);
    MappingAddress = 0LL;
    LOBYTE(v19) = 1;
    goto LABEL_13;
  }
  v16 = 0LL;
LABEL_23:
  if ( MappingAddress )
  {
    v19 = MappingAddress;
    v20 = (__int64)ndisFreeMappingAddress;
    wistd::invoke<void (*)(NDISWATCHDOG__ *),NDISWATCHDOG__ * &>((__int64 (__fastcall **)(_QWORD))&v20, &v19);
  }
  return v16;
}
