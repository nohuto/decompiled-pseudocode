/*
 * XREFs of PopBuildMemoryImageHeader @ 0x140997724
 * Callers:
 *     PopEndMirroring @ 0x140997250 (PopEndMirroring.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x140226840 (MmGetPhysicalAddress.c)
 *     MmGetHighestPhysicalPage @ 0x14035E068 (MmGetHighestPhysicalPage.c)
 *     PoSetHiberRange @ 0x1403881B0 (PoSetHiberRange.c)
 *     Feature_Servicing_HibernateRelaxVBSPolicy__private_IsEnabledNoReporting @ 0x1403F831C (Feature_Servicing_HibernateRelaxVBSPolicy__private_IsEnabledNoReporting.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     memset @ 0x140414300 (memset.c)
 *     PopAllocatePages @ 0x140997B74 (PopAllocatePages.c)
 *     PopBootLoaderTraceCopyPfnList @ 0x140997BE0 (PopBootLoaderTraceCopyPfnList.c)
 */

__int64 __fastcall PopBuildMemoryImageHeader(_QWORD *MemoryMap, int a2)
{
  __int64 v3; // rbx
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 *v6; // rcx
  _QWORD *v7; // rdx
  __int64 v8; // r8
  __int64 v9; // rax
  __int64 v10; // r14
  unsigned __int64 v11; // rsi
  PVOID *v12; // r14
  _QWORD *v13; // rsi
  _QWORD *v14; // r13
  unsigned __int64 v15; // rbp
  void *Pages; // rax
  void *v17; // r15

  if ( !a2 )
  {
    v3 = MemoryMap[25];
    PoSetHiberRange(MemoryMap, 0x8000u, (PVOID)v3, 0x3E0uLL, 0x676D694Du);
    memset((void *)v3, 0, 0x1000uLL);
    *(_DWORD *)(v3 + 24) = 4096;
    *(_DWORD *)(v3 + 12) = 992;
    *(_QWORD *)(v3 + 16) = (unsigned __int64)MmGetPhysicalAddress((PVOID)v3).QuadPart >> 12;
    *(_QWORD *)(v3 + 32) = MEMORY[0xFFFFF78000000014];
    *(_QWORD *)(v3 + 40) = MEMORY[0xFFFFF78000000008];
    *(_QWORD *)(v3 + 64) = qword_140C23E90;
    *(_DWORD *)(v3 + 60) = 10;
    *(_QWORD *)(v3 + 48) = KeFeatureBits;
    *(_DWORD *)(v3 + 4) = (unsigned __int16)KeProcessorArchitecture;
    *(_BYTE *)(v3 + 56) = *((_BYTE *)MemoryMap + 1);
    *(_BYTE *)(v3 + 57) = -54;
    *(_BYTE *)(v3 + 868) = byte_140C23EA0;
    *(_QWORD *)(v3 + 920) = MmGetHighestPhysicalPage(0);
    *(_BYTE *)(v3 + 869) = PopSecureLaunched;
    *(_BYTE *)(v3 + 870) = *((_BYTE *)MemoryMap + 453);
    v4 = MemoryMap[15];
    if ( v4 )
      *(_DWORD *)(v3 + 72) = *(_DWORD *)(v4 + 40) >> 12;
    v5 = MemoryMap[39];
    if ( v5 )
    {
      v6 = (__int64 *)(v3 + 928);
      *(_QWORD *)(v3 + 928) = v5;
      v7 = (_QWORD *)(v3 + 936);
      v8 = 3LL;
      do
      {
        v9 = *v6++;
        *v7++ = v9 + 1;
        --v8;
      }
      while ( v8 );
    }
    *(_QWORD *)(v3 + 912) = 0LL;
    PopBootLoaderTraceCopyPfnList(MemoryMap);
    v10 = MemoryMap[28];
    if ( v10 )
    {
      v11 = (*(_DWORD *)(v10 + 40) >> 12) + (unsigned int)((*(_DWORD *)(v10 + 40) & 0xFFF) != 0);
      if ( v11 > 1 )
        v11 = 1LL;
      v12 = (PVOID *)(v10 + 48);
      memmove((void *)(v3 + 648), v12, 8 * v11);
      for ( *(_DWORD *)(v3 + 640) = v11; v11; --v11 )
        PoSetHiberRange(MemoryMap, 0xC000u, *v12++, 1uLL, 0x644D6946u);
    }
    else
    {
      *(_DWORD *)(v3 + 640) = 0;
    }
    v13 = (_QWORD *)MemoryMap[8];
    while ( v13 != MemoryMap + 8 )
    {
      v14 = v13;
      v13 = (_QWORD *)*v13;
      v15 = (unsigned __int64)(unsigned int)((*((_DWORD *)v14 + 8) - *((_DWORD *)v14 + 6)) << 12) >> 12;
      Pages = (void *)PopAllocatePages(v15);
      v17 = Pages;
      if ( Pages )
        PoSetHiberRange(MemoryMap, 0x8000u, Pages, v15 << 12, 0x436C6F6Eu);
      else
        *((_DWORD *)MemoryMap + 47) = -1073741670;
      v14[5] = v17;
      if ( !v17 )
        return 3221225626LL;
    }
    *(_DWORD *)(v3 + 960) = *((_DWORD *)MemoryMap + 112);
    *(_BYTE *)(v3 + 986) = PopHiberSkipMemoryMapValidation;
    if ( (unsigned int)Feature_Servicing_HibernateRelaxVBSPolicy__private_IsEnabledNoReporting() )
      *(_BYTE *)(v3 + 987) = 1;
  }
  return *((unsigned int *)MemoryMap + 47);
}
