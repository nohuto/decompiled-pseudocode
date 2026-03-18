/*
 * XREFs of MmResetDriverPaging @ 0x1406A8720
 * Callers:
 *     <none>
 * Callees:
 *     MiGetPteAddress @ 0x140221EF0 (MiGetPteAddress.c)
 *     RtlImageNtHeader @ 0x140224A90 (RtlImageNtHeader.c)
 *     MiLockCode @ 0x140231A50 (MiLockCode.c)
 *     MmImageSectionPagable @ 0x1406A87EC (MmImageSectionPagable.c)
 *     MiImagePagable @ 0x1406A884C (MiImagePagable.c)
 *     MiCancelPhase0Locking @ 0x1406A9678 (MiCancelPhase0Locking.c)
 */

void __stdcall MmResetDriverPaging(PVOID AddressWithinSection)
{
  __int64 v1; // rax
  __int64 v2; // rsi
  __int64 v3; // rbp
  __int64 v4; // rbx
  __int64 v5; // rcx
  __int64 v6; // rdi
  int v7; // ebx
  _DWORD *i; // rdi
  unsigned int v9; // ecx
  __int64 v10; // rdx
  unsigned __int64 PteAddress; // rax
  unsigned __int64 v12; // r8

  v1 = MiImagePagable(0LL, AddressWithinSection);
  v2 = v1;
  if ( v1 )
  {
    v3 = *(_QWORD *)(v1 + 48);
    v4 = RtlImageNtHeader(v3);
    MiCancelPhase0Locking(v2);
    v5 = *(unsigned __int16 *)(v4 + 20);
    v6 = v4 + 24;
    v7 = *(unsigned __int16 *)(v4 + 6);
    for ( i = (_DWORD *)(v5 + v6); v7; --v7 )
    {
      if ( (i[9] & 0x2000000) == 0 && !(unsigned int)MmImageSectionPagable(i) )
      {
        v9 = i[4];
        if ( v9 < i[2] )
          v9 = i[2];
        MiGetPteAddress((unsigned int)i[3] + (unsigned __int64)v9 + v3 - 1);
        PteAddress = MiGetPteAddress(v10 + v3);
        MiLockCode(v2, PteAddress, v12, 2u);
      }
      i += 10;
    }
  }
}
