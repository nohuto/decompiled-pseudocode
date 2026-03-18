/*
 * XREFs of ViAllocateMapRegisterFile @ 0x1409CA5A4
 * Callers:
 *     VfAllocateAdapterChannel @ 0x1409C75A0 (VfAllocateAdapterChannel.c)
 *     VfBuildScatterGatherList @ 0x1409C7FE0 (VfBuildScatterGatherList.c)
 *     VfGetScatterGatherList @ 0x1409C90D0 (VfGetScatterGatherList.c)
 *     VfHalAllocateMapRegisters @ 0x1409C9620 (VfHalAllocateMapRegisters.c)
 * Callees:
 *     MmMapLockedPagesSpecifyCache @ 0x140274AB0 (MmMapLockedPagesSpecifyCache.c)
 *     IoAllocateMdl @ 0x1402BE6D0 (IoAllocateMdl.c)
 *     IoFreeMdl @ 0x1402C0A80 (IoFreeMdl.c)
 *     ExInterlockedInsertHeadList @ 0x1402F3E90 (ExInterlockedInsertHeadList.c)
 *     MmGetPhysicalAddress @ 0x14033BB60 (MmGetPhysicalAddress.c)
 *     memset @ 0x140408F80 (memset.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1030 (ExAllocatePoolWithTag.c)
 *     ViAllocateFromContiguousMemory @ 0x1409CA4AC (ViAllocateFromContiguousMemory.c)
 *     ViFreeToContiguousMemory @ 0x1409CB630 (ViFreeToContiguousMemory.c)
 *     ViInitializePadding @ 0x1409CBFCC (ViInitializePadding.c)
 */

char *__fastcall ViAllocateMapRegisterFile(__int64 a1, unsigned int a2)
{
  unsigned int v3; // edi
  SIZE_T v4; // rsi
  char *PoolWithTag; // rax
  char *v6; // rbx
  PMDL Mdl; // rsi
  PVOID v8; // rax
  struct _MDL *v9; // r15
  __int64 *v10; // r14
  __int64 v11; // rax
  __int64 v12; // rax
  PVOID v13; // rax
  PHYSICAL_ADDRESS PhysicalAddress; // rax
  PVOID v15; // rax
  int v17; // edi
  PVOID *v18; // r14
  void *v19; // rcx

  v3 = a2;
  if ( a2 + *(_DWORD *)(a1 + 160) <= 0x20 )
  {
    if ( a2 )
    {
      v4 = 32 * (a2 - 1) + 120;
      PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, v4, 0x566C6148u);
      v6 = PoolWithTag;
      if ( PoolWithTag )
      {
        memset(PoolWithTag, 0, (unsigned int)v4);
        *((_DWORD *)v6 + 7) = v3;
        Mdl = IoAllocateMdl(0LL, v3 << 12, 0, 0, 0LL);
        if ( Mdl )
        {
          v8 = ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned __int64)v3 << 12, 0x566C6148u);
          *((_QWORD *)v6 + 9) = v8;
          if ( v8 )
          {
            v9 = Mdl + 1;
            v10 = (__int64 *)(v6 + 104);
            do
            {
              v11 = ViAllocateFromContiguousMemory(a1, *((_DWORD *)v6 + 7) - v3);
              *v10 = v11;
              if ( v11 )
              {
                v12 = 312LL;
              }
              else
              {
                v13 = ExAllocatePoolWithTag(NonPagedPoolNxCacheAligned, 0x3000uLL, 0x566C6148u);
                *v10 = (__int64)v13;
                if ( !v13 )
                  goto LABEL_14;
                v12 = 316LL;
              }
              _InterlockedIncrement((volatile signed __int32 *)(v12 + a1));
              ViInitializePadding(*v10, 12288LL, 0LL, 0LL);
              PhysicalAddress = MmGetPhysicalAddress((PVOID)(*v10 + 4096));
              v10 += 4;
              v9->Next = (struct _MDL *)((unsigned __int64)PhysicalAddress.QuadPart >> 12);
              v9 = (struct _MDL *)((char *)v9 + 8);
              --v3;
            }
            while ( v3 );
            Mdl->MdlFlags |= 2u;
            v15 = MmMapLockedPagesSpecifyCache(Mdl, 0, MmCached, 0LL, 0, 0x40000010u);
            *((_QWORD *)v6 + 8) = v15;
            if ( v15 )
            {
              *((_QWORD *)v6 + 10) = 0LL;
              *((_QWORD *)v6 + 7) = Mdl;
              *(_DWORD *)v6 = -1393569779;
              ExInterlockedInsertHeadList((PLIST_ENTRY)(a1 + 104), (PLIST_ENTRY)(v6 + 8), (PKSPIN_LOCK)(a1 + 120));
              return v6;
            }
          }
        }
LABEL_14:
        v17 = *((_DWORD *)v6 + 7);
        if ( v17 )
        {
          v18 = (PVOID *)(v6 + 104);
          do
          {
            if ( !*v18 )
              break;
            if ( !(unsigned int)ViFreeToContiguousMemory(a1, *v18, (unsigned int)(*((_DWORD *)v6 + 7) - v17)) )
              ExFreePoolWithTag(*v18, 0);
            v18 += 4;
            --v17;
          }
          while ( v17 );
        }
        if ( Mdl )
          IoFreeMdl(Mdl);
        v19 = (void *)*((_QWORD *)v6 + 9);
        if ( v19 )
          ExFreePoolWithTag(v19, 0);
        ExFreePoolWithTag(v6, 0);
      }
    }
  }
  return 0LL;
}
