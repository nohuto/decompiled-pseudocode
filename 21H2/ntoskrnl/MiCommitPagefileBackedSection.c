/*
 * XREFs of MiCommitPagefileBackedSection @ 0x1406A3E60
 * Callers:
 *     MiAllocateVirtualMemory @ 0x1407BE3C0 (MiAllocateVirtualMemory.c)
 * Callees:
 *     MiAddViewsForSection @ 0x140311CC0 (MiAddViewsForSection.c)
 *     MiGetProtoPteAddress @ 0x140319600 (MiGetProtoPteAddress.c)
 *     MiVadPureReserve @ 0x140319990 (MiVadPureReserve.c)
 *     MiSetProtectionOnSection @ 0x14032D1C0 (MiSetProtectionOnSection.c)
 *     MiChargeSegmentCommit @ 0x1406A4140 (MiChargeSegmentCommit.c)
 */

__int64 __fastcall MiCommitPagefileBackedSection(
        __int64 a1,
        ULONG_PTR a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        unsigned int a5,
        int a6,
        int a7,
        _DWORD *a8,
        __int64 a9)
{
  unsigned __int64 v9; // rax
  unsigned __int64 v11; // rsi
  __int64 v13; // r15
  __int64 v14; // rdi
  __int64 ProtoPteAddress; // r14
  int v16; // eax
  __int64 v17; // r9
  __int64 v18; // rbx
  __int64 result; // rax
  __int64 v20; // rsi
  __int64 *i; // rcx
  __int64 v22; // rax
  __int64 *v23; // [rsp+40h] [rbp-48h] BYREF
  __int64 v24[8]; // [rsp+48h] [rbp-40h] BYREF

  v9 = *(unsigned int *)(a2 + 48);
  v23 = 0LL;
  v11 = a3;
  v24[0] = 0LL;
  if ( (a5 | MmCompatibleProtectionMask[(v9 >> 7) & 7] | 0x700) != (MmCompatibleProtectionMask[(v9 >> 7) & 7] | 0x700) )
    return 3221225550LL;
  v13 = a3 >> 12;
  v14 = a4 >> 12;
  ProtoPteAddress = MiGetProtoPteAddress(a2, a3 >> 12, 0, (__int64 *)&v23);
  MiGetProtoPteAddress(a2, v14, 0, v24);
  v16 = MiVadPureReserve(a2);
  v18 = (__int64)v23;
  if ( v16 )
  {
    v20 = (__int64)v23;
    for ( i = v23; ; i = (__int64 *)v20 )
    {
      result = MiAddViewsForSection(i, 1uLL, (_DWORD *)8, v17);
      if ( (int)result < 0 )
        break;
      if ( v20 == v24[0] )
      {
        if ( !ProtoPteAddress )
        {
          v22 = MiGetProtoPteAddress(a2, v13, 0, (__int64 *)&v23);
          v18 = (__int64)v23;
          ProtoPteAddress = v22;
        }
        v11 = a3;
        goto LABEL_3;
      }
      v20 = *(_QWORD *)(v20 + 16);
    }
  }
  else
  {
LABEL_3:
    if ( (unsigned int)MiChargeSegmentCommit(v18, ProtoPteAddress, v14 - v13 + 1) )
      return MiSetProtectionOnSection(a1, a2, v11, a4, a5, 0, a8, a9);
    else
      return 3221225773LL;
  }
  return result;
}
