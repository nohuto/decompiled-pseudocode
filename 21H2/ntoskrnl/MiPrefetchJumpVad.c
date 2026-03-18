/*
 * XREFs of MiPrefetchJumpVad @ 0x140594ABC
 * Callers:
 *     MiZeroFault @ 0x1402AD610 (MiZeroFault.c)
 * Callees:
 *     MiUpdatePrefetchPriority @ 0x1402464E0 (MiUpdatePrefetchPriority.c)
 *     MiIsVadLargePrivate @ 0x14030FBE0 (MiIsVadLargePrivate.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140317A10 (MI_READ_PTE_LOCK_FREE.c)
 *     IS_PTE_NOT_DEMAND_ZERO @ 0x14033FD38 (IS_PTE_NOT_DEMAND_ZERO.c)
 *     MiLeapPrefetch @ 0x1405943E4 (MiLeapPrefetch.c)
 */

__int64 __fastcall MiPrefetchJumpVad(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // r8
  unsigned __int64 v8; // rdi
  unsigned __int64 v9; // rbx
  __int64 v10; // rax
  __int64 result; // rax

  v6 = ((*(unsigned int *)(a2 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a2 + 33) << 32)) << 12) + 4096;
  if ( (*(_DWORD *)(a2 + 48) & 0x200000) != 0 )
  {
    if ( (((*(_DWORD *)(a2 + 48) & 0x70) - 16) & 0xFFFFFFDF) != 0 && !MiIsVadLargePrivate(a2) )
    {
      v8 = ((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v9 = ((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      if ( v9 > (v8 & 0xFFFFFFFFFFFFF000uLL) + 4096 )
        v9 = ((((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) & 0xFFFFFFFFFFFFF000uLL) + 4096;
      while ( v8 < v9 )
      {
        v10 = MI_READ_PTE_LOCK_FREE(v8);
        v8 += 8LL;
        if ( v10 )
        {
          if ( (v10 & 1) != 0 )
            goto LABEL_13;
          if ( (v10 & 0x400) != 0 )
            break;
          if ( (v10 & 0x800) != 0 )
          {
LABEL_13:
            MiUpdatePrefetchPriority(a1, a3, a2);
          }
          else if ( IS_PTE_NOT_DEMAND_ZERO(v10) )
          {
            break;
          }
        }
        a3 += 4096LL;
      }
      v6 = (__int64)(v8 << 25) >> 16;
    }
  }
  else
  {
    result = *(unsigned int *)(a2 + 64);
    if ( (result & 0x1000000) == 0 )
      return result;
  }
  result = MiLeapPrefetch((_QWORD *)a1, v6);
  *(_BYTE *)(a1 + 1) = 1;
  return result;
}
