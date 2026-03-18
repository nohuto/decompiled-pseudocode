/*
 * XREFs of MiRebuildStandbyLookasideList @ 0x1402E8BCC
 * Callers:
 *     MiInsertPageInList @ 0x1402BF9C0 (MiInsertPageInList.c)
 *     MiInsertPagesInList @ 0x140338660 (MiInsertPagesInList.c)
 *     MiLockStandbyOldestPage @ 0x14038ECAC (MiLockStandbyOldestPage.c)
 * Callees:
 *     MiClearEntireStandbyLookasideList @ 0x1402E89E8 (MiClearEntireStandbyLookasideList.c)
 *     MiSkipStandbyEntries @ 0x1402E8E70 (MiSkipStandbyEntries.c)
 *     MiWriteStandbyLookasideEntry @ 0x1402E901C (MiWriteStandbyLookasideEntry.c)
 *     MiPfnToStandbyLookaside @ 0x140339140 (MiPfnToStandbyLookaside.c)
 *     MiGetStandbyPageType @ 0x140390CE4 (MiGetStandbyPageType.c)
 */

__int64 __fastcall MiRebuildStandbyLookasideList(__int64 a1, unsigned int a2, char a3)
{
  __int64 result; // rax
  __int64 v6; // rbx
  unsigned __int64 v7; // rbx
  __int64 v8; // rcx
  __int64 *v9; // rsi
  unsigned int v10; // ecx
  __int64 v11; // r14
  int v12; // r13d
  int v13; // r15d
  unsigned int v14; // r12d
  __int64 v15; // rdi
  __int64 v16; // rdi
  __int64 *v17; // rax
  __int64 v18; // rdx
  __int128 v19; // [rsp+30h] [rbp-58h] BYREF
  __int128 v20; // [rsp+40h] [rbp-48h]
  __int64 v21; // [rsp+50h] [rbp-38h]

  v19 = 0LL;
  v20 = 0LL;
  v21 = 0LL;
  result = MiPfnToStandbyLookaside(0xAAAAAAAAAAAAAAABuLL * ((a1 + 0x220000000000LL) >> 4), 0LL, &v19);
  v6 = 88LL * DWORD2(v20);
  if ( a2 )
  {
    if ( a2 == 1 )
    {
      v7 = *(_QWORD *)(v6 + v19 + 2904);
      v8 = (unsigned __int64)DWORD2(v20) << 9;
      v9 = (__int64 *)(v8 + v19 + 11328);
    }
    else
    {
      v18 = *(_QWORD *)(v19 + 16) + 24512LL * DWORD2(v19);
      v8 = DWORD2(v20) + 8LL * HIDWORD(v20);
      v9 = (__int64 *)((v8 << 9) + v18 + 6080);
      result = 88 * v8;
      v7 = *(_QWORD *)(88 * v8 + v18 + 3280);
    }
  }
  else
  {
    v7 = *(_QWORD *)(v6 + v19 + 2896);
    v8 = (unsigned __int64)DWORD2(v20) << 9;
    v9 = (__int64 *)(v8 + v19 + 7232);
  }
  if ( (a3 || v9[63] == -1) && v7 != 0x3FFFFFFFFFLL )
  {
    result = MiClearEntireStandbyLookasideList(v8, v9, a2);
    v11 = 0LL;
    v12 = result;
    if ( a2 )
    {
      v13 = 0;
    }
    else
    {
      result = MiGetStandbyPageType(v7);
      v13 = result;
    }
    v14 = 1;
    do
    {
      while ( v9[v11] != -1 )
      {
        v11 = (unsigned int)(v11 + 1);
        if ( (_DWORD)v11 == 64 )
          return result;
      }
      result = MiSkipStandbyEntries(v10, v7, v13, a2, v14);
      v7 = result;
      if ( result == 0x3FFFFFFFFFLL )
        return result;
      v15 = 3 * result;
      result = 0xFFFFDE0000000000uLL;
      v16 = 16 * v15 - 0x220000000000LL;
      if ( a2 )
      {
        v13 = 0;
      }
      else
      {
        result = MiGetStandbyPageType(v7);
        v13 = result;
      }
      if ( !_interlockedbittestandset64((volatile signed __int32 *)(v16 + 24), 0x3FuLL) )
      {
        if ( v12 )
        {
LABEL_16:
          MiWriteStandbyLookasideEntry(&v9[v11], a2, v7);
          result = 0x7FFFFFFFFFFFFFFFLL;
          _InterlockedAnd64((volatile signed __int64 *)(v16 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          v11 = (unsigned int)(v11 + 1);
          if ( (_DWORD)v11 == 64 )
            return result;
          if ( a2 )
          {
            if ( a2 == 1 )
            {
              result = 0xFFFFFFFFFFLL;
              v7 = *(_QWORD *)(v16 + 24) & 0xFFFFFFFFFFLL;
            }
            else
            {
              result = (*(_QWORD *)(v16 + 24) >> 40) & 0x7FFFFLL;
              v7 = result | ((unsigned __int64)(*(_DWORD *)(v16 + 36) & 0x1FFFFF) << 19);
            }
          }
          else
          {
            result = 0xFFFFFFFFFFLL;
            v7 = *(_QWORD *)v16 & 0xFFFFFFFFFFLL;
            v14 = 16;
          }
          continue;
        }
        v10 = 0;
        v17 = v9;
        while ( *v17 != v7 )
        {
          ++v10;
          ++v17;
          if ( v10 >= 0x40 )
            goto LABEL_16;
        }
        result = 0x7FFFFFFFFFFFFFFFLL;
        _InterlockedAnd64((volatile signed __int64 *)(v16 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      }
      v14 = 1;
    }
    while ( v7 != 0x3FFFFFFFFFLL );
  }
  return result;
}
