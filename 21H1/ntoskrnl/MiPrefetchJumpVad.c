/*
 * XREFs of MiPrefetchJumpVad @ 0x1405339AC
 * Callers:
 *     MiZeroFault @ 0x14020A440 (MiZeroFault.c)
 * Callees:
 *     IS_PTE_NOT_DEMAND_ZERO @ 0x14022956C (IS_PTE_NOT_DEMAND_ZERO.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140291580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiIsVadLargePrivate @ 0x1402FE744 (MiIsVadLargePrivate.c)
 *     MiUpdatePrefetchPriority @ 0x1403354A0 (MiUpdatePrefetchPriority.c)
 *     MiLeapPrefetch @ 0x14037926C (MiLeapPrefetch.c)
 */

__int64 __fastcall MiPrefetchJumpVad(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  int v6; // eax
  unsigned __int64 v7; // rbx
  unsigned __int64 v8; // r8
  unsigned __int64 v9; // rdi
  unsigned __int64 v10; // rbx
  __int64 v11; // rax
  __int64 result; // rax

  v6 = *(_DWORD *)(a2 + 48);
  v7 = ((*(unsigned int *)(a2 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a2 + 33) << 32)) << 12) + 4096;
  if ( (v6 & 4) == 0 )
  {
    if ( (v6 & 0x100000) != 0 )
    {
      if ( (((*(_DWORD *)(a2 + 48) & 0x70) - 16) & 0xFFFFFFDF) != 0 && !MiIsVadLargePrivate(a2) )
      {
        v9 = ((v8 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        v10 = ((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        if ( v10 > (v9 & 0xFFFFFFFFFFFFF000uLL) + 4096 )
          v10 = ((((v8 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) & 0xFFFFFFFFFFFFF000uLL) + 4096;
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
              MiUpdatePrefetchPriority(a1, a3, a2);
            }
            else if ( IS_PTE_NOT_DEMAND_ZERO(v11) )
            {
              break;
            }
          }
          a3 += 4096LL;
        }
        v7 = (__int64)(v9 << 25) >> 16;
      }
    }
    else
    {
      result = *(unsigned int *)(a2 + 64);
      if ( (result & 0x1000000) == 0 )
        return result;
    }
  }
  result = MiLeapPrefetch((_QWORD *)a1, v7);
  *(_BYTE *)(a1 + 1) = 1;
  return result;
}
