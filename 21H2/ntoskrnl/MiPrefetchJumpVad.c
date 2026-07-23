/*
 * XREFs of MiPrefetchJumpVad @ 0x14053970C
 * Callers:
 *     MiZeroFault @ 0x140359BB0 (MiZeroFault.c)
 * Callees:
 *     MiIsVadLargePrivate @ 0x14022B870 (MiIsVadLargePrivate.c)
 *     MiUpdatePrefetchPriority @ 0x14025C700 (MiUpdatePrefetchPriority.c)
 *     IS_PTE_NOT_DEMAND_ZERO @ 0x1402E08FC (IS_PTE_NOT_DEMAND_ZERO.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140338C10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiLeapPrefetch @ 0x14037BAFC (MiLeapPrefetch.c)
 */

__int64 __fastcall MiPrefetchJumpVad(__int64 a1, __int64 a2, unsigned __int64 a3, _DWORD *a4)
{
  unsigned __int64 v4; // rbp
  int v7; // eax
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // rdi
  unsigned __int64 v10; // rbx
  __int64 v11; // rax
  __int64 result; // rax

  v4 = a3;
  v7 = *(_DWORD *)(a2 + 48);
  v8 = ((*(unsigned int *)(a2 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a2 + 33) << 32)) << 12) + 4096;
  if ( (v7 & 4) == 0 )
  {
    if ( (v7 & 0x100000) != 0 )
    {
      if ( (((*(_DWORD *)(a2 + 48) & 0x70) - 16) & 0xFFFFFFDF) != 0 && !(unsigned int)MiIsVadLargePrivate(a2) )
      {
        v9 = ((a3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        v10 = ((v8 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        if ( v10 > (v9 & 0xFFFFFFFFFFFFF000uLL) + 4096 )
          v10 = ((((a3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) & 0xFFFFFFFFFFFFF000uLL) + 4096;
        while ( v9 < v10 )
        {
          v11 = MI_READ_PTE_LOCK_FREE(v9);
          v9 += 8LL;
          if ( v11 )
          {
            if ( (v11 & 1) != 0 )
              goto LABEL_14;
            if ( (v11 & 0x400) != 0 )
              break;
            if ( (v11 & 0x800) != 0 )
            {
LABEL_14:
              MiUpdatePrefetchPriority(a1, v4, a2);
            }
            else if ( IS_PTE_NOT_DEMAND_ZERO(v11) )
            {
              break;
            }
          }
          v4 += 4096LL;
        }
        v8 = (__int64)(v9 << 25) >> 16;
      }
    }
    else
    {
      result = *(unsigned int *)(a2 + 64);
      if ( (result & 0x1000000) == 0 )
        return result;
    }
  }
  result = MiLeapPrefetch((_QWORD *)a1, v8, a3, a4);
  *(_BYTE *)(a1 + 1) = 1;
  return result;
}
