/*
 * XREFs of MiCommitPagefileBackedSection @ 0x1406B29C0
 * Callers:
 *     MiAllocateVirtualMemory @ 0x14067B2A0 (MiAllocateVirtualMemory.c)
 * Callees:
 *     MiAddViewsForSection @ 0x14022C750 (MiAddViewsForSection.c)
 *     MiVadPureReserve @ 0x14027D170 (MiVadPureReserve.c)
 *     MiGetProtoPteAddress @ 0x1402B3F50 (MiGetProtoPteAddress.c)
 *     MiSetProtectionOnSection @ 0x1402B5EC0 (MiSetProtectionOnSection.c)
 *     MiChargeSegmentCommit @ 0x1406B2AF0 (MiChargeSegmentCommit.c)
 */

__int64 __fastcall MiCommitPagefileBackedSection(
        __int64 a1,
        ULONG_PTR a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        unsigned int a5,
        int a6,
        __int64 a7,
        _DWORD *a8,
        __int64 a9)
{
  unsigned __int64 v9; // rax
  unsigned __int64 v11; // rsi
  __int64 v13; // r15
  __int64 v14; // rdi
  __int64 ProtoPteAddress; // r14
  int v16; // eax
  __int64 **v17; // rbx
  __int64 result; // rax
  __int64 **v19; // rsi
  __int64 **i; // rcx
  __int64 v21; // rax
  __int64 **v22; // [rsp+40h] [rbp-48h] BYREF
  __int64 **v23; // [rsp+48h] [rbp-40h] BYREF

  v9 = *(unsigned int *)(a2 + 48);
  v22 = 0LL;
  v11 = a3;
  v23 = 0LL;
  if ( (a5 | MmCompatibleProtectionMask[(v9 >> 7) & 7] | 0x700) != (MmCompatibleProtectionMask[(v9 >> 7) & 7] | 0x700) )
    return 3221225550LL;
  v13 = a3 >> 12;
  v14 = a4 >> 12;
  ProtoPteAddress = MiGetProtoPteAddress(a2, a3 >> 12, 0, &v22);
  MiGetProtoPteAddress(a2, v14, 0, &v23);
  v16 = MiVadPureReserve(a2);
  v17 = v22;
  if ( v16 )
  {
    v19 = v22;
    for ( i = v22; ; i = v19 )
    {
      result = MiAddViewsForSection(i, 1uLL, (_DWORD *)8);
      if ( (int)result < 0 )
        break;
      if ( v19 == v23 )
      {
        if ( !ProtoPteAddress )
        {
          v21 = MiGetProtoPteAddress(a2, v13, 0, &v22);
          v17 = v22;
          ProtoPteAddress = v21;
        }
        v11 = a3;
        goto LABEL_3;
      }
      v19 = (__int64 **)v19[2];
    }
  }
  else
  {
LABEL_3:
    if ( (unsigned int)MiChargeSegmentCommit(v17, ProtoPteAddress, v14 - v13 + 1) )
      return MiSetProtectionOnSection(a1, a2, v11, a4, a5, 0, a8, a9);
    else
      return 3221225773LL;
  }
  return result;
}
