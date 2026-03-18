/*
 * XREFs of MiWalkPageTablesRecursivelyNoSynch @ 0x1403C801C
 * Callers:
 *     MiWalkPageTables @ 0x14030CF90 (MiWalkPageTables.c)
 *     MiWalkPageTablesRecursivelyNoSynch @ 0x1403C801C (MiWalkPageTablesRecursivelyNoSynch.c)
 * Callees:
 *     KdCheckForDebugBreak @ 0x140222368 (KdCheckForDebugBreak.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140317A10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiWalkPageTablesRecursivelyNoSynch @ 0x1403C801C (MiWalkPageTablesRecursivelyNoSynch.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall MiWalkPageTablesRecursivelyNoSynch(__int64 a1, unsigned __int64 a2, int a3)
{
  unsigned __int64 v3; // rdi
  __int64 v4; // r14
  unsigned __int64 v6; // rsi
  char v7; // bl
  __int64 v8; // rbp
  __int64 result; // rax
  unsigned __int64 v10; // rax
  __int64 v11; // [rsp+50h] [rbp+8h] BYREF

  v3 = a2;
  v4 = a3;
  if ( a2 < *(_QWORD *)(a1 + 16 * (a3 + 5LL)) )
    v3 = *(_QWORD *)(a1 + 16 * (a3 + 5LL));
  if ( a3 == 3 )
  {
    v6 = *(_QWORD *)(a1 + 136);
  }
  else
  {
    v6 = (v3 & 0xFFFFFFFFFFFFF000uLL) + 4088;
    if ( v6 > *(_QWORD *)(a1 + 16 * (a3 + 5LL) + 8) )
      v6 = *(_QWORD *)(a1 + 16 * (a3 + 5LL) + 8);
  }
  if ( v3 <= v6 )
  {
    while ( 1 )
    {
      if ( (_DWORD)v4 != 3 || (KdCheckForDebugBreak(), v3 != 0xFFFFF6FB7DBEDF68uLL) )
      {
        v11 = MI_READ_PTE_LOCK_FREE(v3);
        v7 = v11;
        v8 = v11;
        if ( (v11 & 1) == 0 )
          goto LABEL_9;
        v10 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v11) >> 12) & 0xFFFFFFFFFFLL;
        if ( (v10 != MiState[v4 + 2131] || (MiFlags & 0x40000000) == 0)
          && (v10 != MiState[v4 + 2127] || qword_140C532B8 == qword_140C532C0) )
        {
          break;
        }
      }
LABEL_13:
      v3 += 8LL;
      if ( v3 > v6 )
        return 0LL;
    }
    if ( (v7 & 0x20) == 0 && (_DWORD)v4 )
    {
      v8 |= 0x20uLL;
      if ( (MiFlags & 0x4000000) != 0 )
        _mm_lfence();
      _InterlockedExchange64((volatile __int64 *)v3, v8);
    }
LABEL_9:
    result = (*(__int64 (__fastcall **)(__int64, unsigned __int64, _QWORD))(a1 + 152))(a1, v3, (unsigned int)v4);
    if ( (int)result >= 4 )
      return result;
    if ( (_DWORD)v4 && (_DWORD)result != 1 && (v8 & 1) != 0 && (v8 & 0x80u) == 0LL )
      MiWalkPageTablesRecursivelyNoSynch(a1, (__int64)(v3 << 25) >> 16, (unsigned int)(v4 - 1));
    goto LABEL_13;
  }
  return 0LL;
}
