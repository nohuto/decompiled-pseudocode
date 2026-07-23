/*
 * XREFs of MiHandleBootImage @ 0x140A50B14
 * Callers:
 *     MiReloadBootLoadedDrivers @ 0x140A509F0 (MiReloadBootLoadedDrivers.c)
 * Callees:
 *     MiIsPfnFromSlabAllocation @ 0x14030DC40 (MiIsPfnFromSlabAllocation.c)
 *     RtlImageNtHeader @ 0x1403276A0 (RtlImageNtHeader.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x140327920 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140338C10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140353840 (MiPteInShadowRange.c)
 *     DbgLoadImageSymbolsUnicode @ 0x140371AF4 (DbgLoadImageSymbolsUnicode.c)
 *     DbgUnLoadImageSymbolsUnicode @ 0x14037249C (DbgUnLoadImageSymbolsUnicode.c)
 *     MiAllocateDriverPage @ 0x1406A8D58 (MiAllocateDriverPage.c)
 *     MiUseLargeDriverPage @ 0x140771048 (MiUseLargeDriverPage.c)
 *     MiMapSystemImageWithLargePage @ 0x1408DA530 (MiMapSystemImageWithLargePage.c)
 *     MiGetBootImagePageProtection @ 0x140A50D90 (MiGetBootImagePageProtection.c)
 *     MiTradeBootImagePage @ 0x140A50E60 (MiTradeBootImagePage.c)
 *     MiFreeBootDriverPages @ 0x140A51050 (MiFreeBootDriverPages.c)
 *     MiImportOptimizationCompatibleWithDriverRelocation @ 0x140A513EC (MiImportOptimizationCompatibleWithDriverRelocation.c)
 *     MiBootImageRelocated @ 0x140A93B80 (MiBootImageRelocated.c)
 *     MiReleaseSystemImageVa @ 0x140A93C18 (MiReleaseSystemImageVa.c)
 */

__int64 __fastcall MiHandleBootImage(int a1, __int64 a2, __int64 a3)
{
  int v3; // r12d
  unsigned __int64 v4; // rdi
  unsigned int v6; // r13d
  PIMAGE_NT_HEADERS v7; // r15
  unsigned __int64 v8; // rbp
  __int64 result; // rax
  unsigned __int64 v10; // r14
  unsigned int v11; // ebx
  __int64 v12; // r12
  char v13; // bl
  unsigned int VirtualAddress; // ecx
  unsigned int v15; // edi
  unsigned __int64 v16; // rbp
  BOOL v17; // r13d
  unsigned __int64 v18; // rax
  __int64 v19; // r8
  int BootImagePageProtection; // eax
  struct _LIST_ENTRY *Flink; // r8
  unsigned __int64 v23; // [rsp+88h] [rbp+10h] BYREF
  __int64 v24; // [rsp+90h] [rbp+18h]
  __int64 v25; // [rsp+98h] [rbp+20h] BYREF

  v24 = a3;
  v3 = 1;
  v4 = *(_QWORD *)(a2 + 48);
  v6 = ((unsigned int)dword_140C4CCF0 >> 12) + ((dword_140C4CCF0 & 0xFFF) != 0);
  LODWORD(v23) = dword_140C4CC8C;
  v7 = RtlImageNtHeader((PVOID)v4);
  v8 = ((unsigned __int64)*(unsigned int *)(a2 + 64) + 4095) >> 12;
  result = 0xFFFFF68000000000uLL;
  v10 = ((v4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v11 = v6;
  if ( (PVOID)v4 == PsNtosImageBase || (PVOID)v4 == PsHalImageBase )
  {
    result = MI_IS_PHYSICAL_ADDRESS(v4);
    if ( (_DWORD)result )
    {
      v3 = 3;
      LODWORD(v8) = (v8 + 511) & 0xFFFFFE00;
      v11 = (v6 + 511) & 0xFFFFFE00;
    }
  }
  else
  {
    v11 = v6 + v23;
  }
  if ( v11 )
    result = MiFreeBootDriverPages(v4, ((v4 >> 9) & 0xFFFFFFF8) + 8 * v8, v11, v3, v24);
  if ( (PVOID)v4 != PsNtosImageBase && (PVOID)v4 != PsHalImageBase )
  {
    v12 = 0LL;
    v7->OptionalHeader.ImageBase = v4;
    if ( (*(_DWORD *)(a2 + 104) & 0x800000) == 0 )
    {
      v13 = 4;
      if ( (v7->FileHeader.Characteristics & 1) != 0
        || v7->OptionalHeader.NumberOfRvaAndSizes <= 5
        || (VirtualAddress = v7->OptionalHeader.DataDirectory[5].VirtualAddress) != 0
        && v7->OptionalHeader.DataDirectory[5].Size + VirtualAddress > *(_DWORD *)(a2 + 64) )
      {
        v13 = 0;
      }
      else
      {
        result = MiImportOptimizationCompatibleWithDriverRelocation(a2);
        if ( (_DWORD)result )
        {
          if ( !v6 )
          {
            result = MiUseLargeDriverPage((PCUNICODE_STRING)(a2 + 88));
            if ( (_DWORD)result )
            {
              DbgUnLoadImageSymbolsUnicode((PCUNICODE_STRING)(a2 + 88), v4, 0xFFFFFFFFLL);
              v13 = 6;
              result = (__int64)MiMapSystemImageWithLargePage(0LL, v8, (const void *)v4);
              v12 = result;
              if ( result )
              {
                v13 = 7;
                MiBootImageRelocated(a1, a2, v4, result, (__int64)v7, v8);
                MiFreeBootDriverPages(v4, (v4 >> 9) & 0xFFFFFFF8, v8, 0, v24);
                result = MiReleaseSystemImageVa(v4, (unsigned int)(v8 + v23));
              }
            }
          }
        }
      }
      if ( (v13 & 1) == 0 )
      {
        v25 = 0LL;
        v12 = v4;
        result = (unsigned int)v8;
        v15 = 0;
        v16 = v10 + 8LL * (unsigned int)v8;
        if ( v10 < v16 )
        {
          v17 = MiPteInShadowRange((unsigned __int64)&v23);
          do
          {
            v18 = MI_READ_PTE_LOCK_FREE(v10);
            v23 = v18;
            if ( v17
              && (MiFlags & 0xC00000) != 0
              && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
              && (v18 & 1) != 0
              && ((v18 & 0x20) == 0 || (v18 & 0x42) == 0) )
            {
              Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
              if ( Flink )
              {
                if ( ((__int64)*(&Flink->Flink + (((unsigned __int64)&v23 >> 3) & 0x1FF)) & 0x20) != 0 )
                  v18 |= 0x20uLL;
              }
            }
            result = MiIsPfnFromSlabAllocation(48 * ((v18 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL);
            if ( !(_DWORD)result )
            {
              BootImagePageProtection = MiGetBootImagePageProtection(v15, v7, v19, &v25);
              result = MiAllocateDriverPage(&MiSystemPartition, BootImagePageProtection, 1);
              if ( result != -1 )
                result = MiTradeBootImagePage(v10, result);
            }
            v10 += 8LL;
            v15 += 4096;
          }
          while ( v10 < v16 );
        }
      }
      if ( (v13 & 2) != 0 )
      {
        result = DbgLoadImageSymbolsUnicode((PCUNICODE_STRING)(a2 + 88), v12);
        if ( (_DWORD)result == 1 )
          *(_DWORD *)(a2 + 104) |= 0x100000u;
      }
    }
  }
  return result;
}
