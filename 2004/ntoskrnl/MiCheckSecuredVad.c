/*
 * XREFs of MiCheckSecuredVad @ 0x14062F008
 * Callers:
 *     MiResetVirtualMemory @ 0x140353AC4 (MiResetVirtualMemory.c)
 *     MiFindPlaceholderVadToReplace @ 0x14054FD54 (MiFindPlaceholderVadToReplace.c)
 *     MmProtectVirtualMemory @ 0x1405F7EB0 (MmProtectVirtualMemory.c)
 *     MmFreeVirtualMemory @ 0x1405F9180 (MmFreeVirtualMemory.c)
 *     MiUnmapViewOfSection @ 0x140600DD0 (MiUnmapViewOfSection.c)
 *     MmSecureVirtualMemoryAgainstWrites @ 0x14062ECA4 (MmSecureVirtualMemoryAgainstWrites.c)
 *     MiAllocateVirtualMemory @ 0x140696560 (MiAllocateVirtualMemory.c)
 *     MiUnmapLockedPagesInUserSpace @ 0x14075B36C (MiUnmapLockedPagesInUserSpace.c)
 *     MiCoalescePlaceholderAllocations @ 0x1408C51A4 (MiCoalescePlaceholderAllocations.c)
 * Callees:
 *     MiComparePteProtections @ 0x140332D80 (MiComparePteProtections.c)
 *     MiGetVadPageSize @ 0x140556910 (MiGetVadPageSize.c)
 */

__int64 __fastcall MiCheckSecuredVad(ULONG_PTR a1, unsigned __int64 a2, __int64 a3, unsigned int a4, char a5)
{
  __int64 *v8; // rdi
  unsigned __int64 v9; // r14
  unsigned int v10; // r9d
  unsigned int v11; // r15d
  int v12; // ecx
  char v13; // dl
  bool v14; // cc
  __int64 result; // rax
  unsigned __int64 v16; // rcx

  if ( (*(_DWORD *)(a1 + 48) & 0x500000) == 0x500000 && (unsigned __int64)MiGetVadPageSize(a1) >= 0x200 )
    return 0LL;
  v8 = *(__int64 **)(a1 + 56);
  v9 = a2 + a3 - 1;
  v10 = 0;
  v11 = a4 < 0x55 ? a4 : 0;
  while ( 1 )
  {
    if ( !v8 )
      return v10;
    if ( *((_DWORD *)v8 + 16) != 2 )
      goto LABEL_14;
    v12 = *((_DWORD *)v8 + 2);
    if ( (v12 & 0x40) != 0 && a5 != 1 )
      goto LABEL_14;
    if ( a2 > v8[2] || v9 < (v8[1] & 0xFFFFFFFFFFFFF000uLL) )
      goto LABEL_14;
    if ( a4 >= 0x55 && (v12 & 8) != 0 )
      return 3221225541LL;
    if ( (v12 & 0x100) != 0 && (*(_DWORD *)(a1 + 48) & 0x5100000) == 0x4100000 )
    {
      if ( (a4 | 0x10) != 0x11
        || (*(unsigned int *)(a1 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 32)) == a2 >> 12
        || (*(unsigned int *)(a1 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 33) << 32)) == v9 >> 12 )
      {
        return 3221225541LL;
      }
      goto LABEL_14;
    }
    if ( (v12 & 4) != 0 )
      break;
    if ( (v11 & 0xFFFFFFF8) == 0x10 )
      return 3221225541LL;
    v13 = *((_BYTE *)&MiReadWrite + (v11 & 7));
    if ( (v12 & 1) != 0 )
    {
      v14 = v13 < 10;
    }
    else
    {
      if ( (v12 & 2) == 0 )
        goto LABEL_14;
      v14 = v13 < 11;
    }
    if ( v14 )
      return 3221225541LL;
LABEL_14:
    v8 = (__int64 *)*v8;
  }
  if ( a4 >= 0x55 )
    goto LABEL_14;
  v16 = (*(unsigned int *)(a1 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 32)) << 12;
  if ( v16 != 2147352576 && (v16 != qword_140C4DC48 || !qword_140C4DC48)
    || (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 1) != 0 )
  {
    result = MiComparePteProtections(a1, a2, v9, a4, 1);
    v10 = result;
    if ( (int)result < 0 )
      return result;
    goto LABEL_14;
  }
  return 3221225541LL;
}
