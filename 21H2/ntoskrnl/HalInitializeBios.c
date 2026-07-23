/*
 * XREFs of HalInitializeBios @ 0x1403C4EE0
 * Callers:
 *     KiInitializeBootStructures @ 0x14099D160 (KiInitializeBootStructures.c)
 *     InitBootProcessor @ 0x140A3BAF4 (InitBootProcessor.c)
 * Callees:
 *     MmMapIoSpaceEx @ 0x140216B10 (MmMapIoSpaceEx.c)
 *     MmUnmapIoSpace @ 0x140217FB0 (MmUnmapIoSpace.c)
 *     MmMapLockedPagesSpecifyCache @ 0x1402CB5C0 (MmMapLockedPagesSpecifyCache.c)
 *     MmUnmapLockedPages @ 0x140327780 (MmUnmapLockedPages.c)
 *     HalpMmAllocCtxAlloc @ 0x14037C598 (HalpMmAllocCtxAlloc.c)
 *     x86BiosTranslateAddress @ 0x140397CA0 (x86BiosTranslateAddress.c)
 *     x86BiosInitializeBiosEx @ 0x1403C5180 (x86BiosInitializeBiosEx.c)
 *     _strupr @ 0x1403D1190 (_strupr.c)
 *     strstr @ 0x1403D19F0 (strstr.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

void __fastcall HalInitializeBios(int a1, __int64 a2)
{
  char *v3; // rcx
  char *v5; // rax
  struct _MDL *PoolWithTag; // rax
  struct _MDL *v7; // rdi
  __int64 *v8; // r9
  unsigned int v9; // edx
  __int64 v10; // r8
  __int64 v11; // rcx
  __int64 ***v12; // rsi
  __int64 **i; // rcx
  unsigned __int64 v14; // rdx
  __int64 v15; // rcx
  char *v16; // rbp
  __int64 v17; // rax
  __int64 v18; // rcx
  void *v19; // r15
  int *v20; // rax
  unsigned __int64 v21; // rax
  __int64 v22; // r8
  unsigned int v23; // eax
  unsigned __int64 v24; // r8
  int *v25; // rax

  v3 = *(char **)(a2 + 216);
  if ( !v3 || (v5 = strupr(v3), !strstr(v5, "NOVGA")) )
  {
    if ( a1 != -1 )
    {
      PoolWithTag = (struct _MDL *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x830uLL, 0x206C6148u);
      v7 = PoolWithTag;
      if ( !PoolWithTag )
        return;
      PoolWithTag->Next = 0LL;
      v8 = (__int64 *)&PoolWithTag[1];
      PoolWithTag->StartVa = 0LL;
      v9 = 0;
      PoolWithTag->ByteOffset = 0;
      PoolWithTag->Size = 2096;
      v10 = 0LL;
      PoolWithTag->ByteCount = 0x100000;
      PoolWithTag->MdlFlags = 2050;
      do
      {
        v11 = v10;
        if ( v9 - 160 <= 0x1F )
          v11 = 240LL;
        ++v9;
        ++v10;
        *v8++ = v11;
      }
      while ( v9 < 0x100 );
      v12 = (__int64 ***)(a2 + 32);
      for ( i = *v12; i != (__int64 **)v12; i = (__int64 **)*i )
      {
        v14 = (unsigned __int64)i[3];
        if ( v14 < 0x100 )
        {
          v21 = *((int *)i + 4);
          if ( (unsigned int)v21 > 0x23 || (v22 = 0xBC0400040LL, !_bittest64(&v22, v21)) )
          {
            v23 = (unsigned int)i[3];
            v24 = (unsigned __int64)i[4] + v14 - 1;
            v14 = (unsigned int)v14;
            if ( v24 > 0xFF )
              v24 = 255LL;
            if ( (unsigned int)v14 <= v24 )
            {
              do
              {
                ++v23;
                *((_QWORD *)&v7[1].Next + v14) = 240LL;
                v14 = v23;
              }
              while ( v23 <= v24 );
            }
          }
        }
      }
      HalpIoMemoryBase = MmMapLockedPagesSpecifyCache(v7, 0, MmCached, 0LL, 0, 0x40000020u);
      if ( !HalpIoMemoryBase )
        goto LABEL_17;
      v16 = (char *)MmMapIoSpaceEx(655360LL, 0x20000LL, 0x204u);
      if ( v16 )
      {
        v17 = HalpMmAllocCtxAlloc(v15, 0x2000LL);
        if ( v17 )
        {
          HalpFrameBufferBase = (__int64)(v16 - 655360);
          x86BiosInitializeBiosEx(v18, HalpIoMemoryBase, v16 - 655360, v17);
          v19 = (void *)MmMapIoSpaceEx(0LL, 2048LL, 4u);
          if ( v19 )
          {
            v20 = x86BiosTranslateAddress(0, 0);
            memmove(v20, v19, 0x800uLL);
            MmUnmapIoSpace(v19, 0x800uLL);
            HalpVideoBiosPresent = 1;
            qword_140C005E8 = (__int64)HalpBiosDisplayReset;
LABEL_17:
            ExFreePoolWithTag(v7, 0);
            return;
          }
        }
        MmUnmapIoSpace(v16, 0x20000uLL);
        HalpFrameBufferBase = 0LL;
      }
      if ( HalpIoMemoryBase )
      {
        MmUnmapLockedPages(HalpIoMemoryBase, v7);
        HalpIoMemoryBase = 0LL;
      }
      goto LABEL_17;
    }
    if ( (*(_BYTE *)(*(_QWORD *)(a2 + 240) + 2624LL) & 4) == 0 )
    {
      HalpIoMemoryBase = 0LL;
      HalpFrameBufferBase = 0LL;
      qword_140C005E8 = (__int64)HalpBiosDisplayReset;
      HalpVideoBiosPresent = 1;
      x86BiosInitializeBiosEx(v3, 0LL, 0LL, 0x20000LL);
      v25 = x86BiosTranslateAddress(0, 0);
      memmove(v25, 0LL, 0x800uLL);
    }
  }
}
