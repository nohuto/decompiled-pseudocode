/*
 * XREFs of PopBuildMemoryImageHeader @ 0x140A4E8E4
 * Callers:
 *     PopEndMirroring @ 0x140A4E4B0 (PopEndMirroring.c)
 * Callees:
 *     MmGetHighestPhysicalPage @ 0x14020DB30 (MmGetHighestPhysicalPage.c)
 *     MmGetPhysicalAddress @ 0x14027B670 (MmGetPhysicalAddress.c)
 *     PoSetHiberRange @ 0x14038DBE0 (PoSetHiberRange.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     PopAllocatePages @ 0x140A4FC08 (PopAllocatePages.c)
 *     PopBootLoaderTraceCopyPfnList @ 0x140A4FC74 (PopBootLoaderTraceCopyPfnList.c)
 */

__int64 __fastcall PopBuildMemoryImageHeader(_QWORD *MemoryMap, int a2)
{
  __int64 v3; // rbx
  int v4; // ecx
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 *v7; // rcx
  _QWORD *v8; // rdx
  __int64 v9; // r8
  __int64 v10; // rax
  __int64 v11; // r14
  _QWORD *v12; // rsi
  _QWORD *v13; // r13
  unsigned __int64 v14; // rbp
  void *Pages; // rax
  void *v16; // r14
  unsigned __int64 v18; // rsi
  PVOID *v19; // r14

  if ( !a2 )
  {
    v3 = MemoryMap[25];
    PoSetHiberRange(MemoryMap, 0x8000u, (PVOID)v3, 0x448uLL, 0x676D694Du);
    memset((void *)v3, 0, 0x1000uLL);
    *(_DWORD *)(v3 + 24) = 4096;
    *(_DWORD *)(v3 + 12) = 1096;
    *(_QWORD *)(v3 + 16) = (unsigned __int64)MmGetPhysicalAddress((PVOID)v3).QuadPart >> 12;
    *(_QWORD *)(v3 + 32) = MEMORY[0xFFFFF78000000014];
    *(_QWORD *)(v3 + 40) = MEMORY[0xFFFFF78000000008];
    *(_QWORD *)(v3 + 64) = qword_140C22BF0;
    *(_DWORD *)(v3 + 60) = 10;
    *(_QWORD *)(v3 + 48) = KeFeatureBits;
    *(_DWORD *)(v3 + 4) = (unsigned __int16)KeProcessorArchitecture;
    *(_BYTE *)(v3 + 56) = *((_BYTE *)MemoryMap + 1);
    *(_BYTE *)(v3 + 57) = -54;
    *(_BYTE *)(v3 + 972) = byte_140C22C00;
    *(_QWORD *)(v3 + 1024) = MmGetHighestPhysicalPage(0);
    *(_BYTE *)(v3 + 973) = PopSecureLaunched;
    *(_BYTE *)(v3 + 974) = *((_BYTE *)MemoryMap + 453);
    *(_BYTE *)(v3 + 975) = PopFasr;
    *(_BYTE *)(v3 + 1091) = PopSuppressResumePrompt != v4;
    v5 = MemoryMap[15];
    if ( v5 )
      *(_DWORD *)(v3 + 72) = *(_DWORD *)(v5 + 40) >> 12;
    v6 = MemoryMap[39];
    if ( v6 )
    {
      v7 = (__int64 *)(v3 + 1032);
      *(_QWORD *)(v3 + 1032) = v6;
      v8 = (_QWORD *)(v3 + 1040);
      v9 = 3LL;
      do
      {
        v10 = *v7++;
        *v8++ = v10 + 1;
        --v9;
      }
      while ( v9 );
    }
    *(_QWORD *)(v3 + 1016) = 0LL;
    PopBootLoaderTraceCopyPfnList(MemoryMap);
    v11 = MemoryMap[28];
    if ( v11 )
    {
      v18 = (*(_DWORD *)(v11 + 40) >> 12) + (unsigned int)((*(_DWORD *)(v11 + 40) & 0xFFF) != 0);
      if ( v18 > 1 )
        v18 = 1LL;
      v19 = (PVOID *)(v11 + 48);
      memmove((void *)(v3 + 752), v19, 8 * v18);
      for ( *(_DWORD *)(v3 + 744) = v18; v18; --v18 )
        PoSetHiberRange(MemoryMap, 0xC000u, *v19++, 1uLL, 0x644D6946u);
    }
    else
    {
      *(_DWORD *)(v3 + 744) = 0;
    }
    v12 = (_QWORD *)MemoryMap[8];
    while ( v12 != MemoryMap + 8 )
    {
      v13 = v12;
      v12 = (_QWORD *)*v12;
      v14 = (unsigned __int64)(unsigned int)((*((_DWORD *)v13 + 8) - *((_DWORD *)v13 + 6)) << 12) >> 12;
      Pages = (void *)PopAllocatePages(v14);
      v16 = Pages;
      if ( Pages )
        PoSetHiberRange(MemoryMap, 0x8000u, Pages, v14 << 12, 0x436C6F6Eu);
      else
        *((_DWORD *)MemoryMap + 47) = -1073741670;
      v13[5] = v16;
      if ( !v16 )
        return 3221225626LL;
    }
    *(_DWORD *)(v3 + 1064) = *((_DWORD *)MemoryMap + 112);
    *(_BYTE *)(v3 + 1090) = PopHiberSkipMemoryMapValidation;
  }
  return *((unsigned int *)MemoryMap + 47);
}
