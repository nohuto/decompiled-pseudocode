/*
 * XREFs of MmResetDriverPaging @ 0x1406B9310
 * Callers:
 *     <none>
 * Callees:
 *     MiGetPteAddress @ 0x140230160 (MiGetPteAddress.c)
 *     RtlImageNtHeader @ 0x140297240 (RtlImageNtHeader.c)
 *     MiLockCode @ 0x1402A6D00 (MiLockCode.c)
 *     MmImageSectionPagable @ 0x1406B93DC (MmImageSectionPagable.c)
 *     MiImagePagable @ 0x1406B943C (MiImagePagable.c)
 *     MiCancelPhase0Locking @ 0x1406B9644 (MiCancelPhase0Locking.c)
 */

void __stdcall MmResetDriverPaging(PVOID AddressWithinSection)
{
  __int64 v1; // rax
  __int64 v2; // rsi
  void *v3; // rbp
  PIMAGE_NT_HEADERS v4; // rbx
  __int64 SizeOfOptionalHeader; // rcx
  _IMAGE_OPTIONAL_HEADER64 *p_OptionalHeader; // rdi
  int NumberOfSections; // ebx
  _DWORD *i; // rdi
  unsigned int v9; // ecx
  __int64 v10; // rdx
  unsigned __int64 PteAddress; // rax
  unsigned __int64 v12; // r8

  v1 = MiImagePagable(0LL, AddressWithinSection);
  v2 = v1;
  if ( v1 )
  {
    v3 = *(void **)(v1 + 48);
    v4 = RtlImageNtHeader(v3);
    MiCancelPhase0Locking(v2);
    SizeOfOptionalHeader = v4->FileHeader.SizeOfOptionalHeader;
    p_OptionalHeader = &v4->OptionalHeader;
    NumberOfSections = v4->FileHeader.NumberOfSections;
    for ( i = (_DWORD *)((char *)&p_OptionalHeader->Magic + SizeOfOptionalHeader); NumberOfSections; --NumberOfSections )
    {
      if ( (i[9] & 0x2000000) == 0 && !(unsigned int)MmImageSectionPagable(i) )
      {
        v9 = i[4];
        if ( v9 < i[2] )
          v9 = i[2];
        MiGetPteAddress((unsigned __int64)v3 + (unsigned int)i[3] + (unsigned __int64)v9 - 1);
        PteAddress = MiGetPteAddress((unsigned __int64)v3 + v10);
        MiLockCode(v2, PteAddress, v12, 2u);
      }
      i += 10;
    }
  }
}
