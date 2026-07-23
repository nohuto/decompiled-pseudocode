/*
 * XREFs of MiGetNextNonGapPfnPage @ 0x1403B9B70
 * Callers:
 *     MiFreedUnusedPfnPagesWorker @ 0x1403B98C8 (MiFreedUnusedPfnPagesWorker.c)
 *     MiGetFileOnlyRanges @ 0x14052E554 (MiGetFileOnlyRanges.c)
 * Callees:
 *     MiUnlockPageTableInternal @ 0x140202790 (MiUnlockPageTableInternal.c)
 *     MiGetAnyMultiplexedVm @ 0x140307E4C (MiGetAnyMultiplexedVm.c)
 *     MiGetNextPageTable @ 0x140318570 (MiGetNextPageTable.c)
 *     MiGetLeafVa @ 0x140337BB0 (MiGetLeafVa.c)
 *     MiPfnDatabaseVaIsUnique @ 0x14052EDCC (MiPfnDatabaseVaIsUnique.c)
 */

__int64 __fastcall MiGetNextNonGapPfnPage(unsigned __int64 *a1, unsigned __int64 *a2, char a3, int a4)
{
  unsigned __int64 v4; // rdi
  unsigned __int64 v5; // rbx
  unsigned __int64 v6; // rsi
  unsigned __int64 v7; // r12
  unsigned __int64 v8; // rsi
  int v9; // r13d
  char *AnyMultiplexedVm; // rax
  unsigned __int64 v11; // rbp
  unsigned __int64 v12; // r14
  unsigned __int64 i; // r15
  unsigned __int64 NextPageTable; // rax
  unsigned __int64 v15; // rcx
  __int64 v16; // rdx
  unsigned __int64 LeafVa; // r15
  __int64 v18; // rsi
  __int64 v19; // r14
  unsigned __int64 v21; // r9
  __int64 v22; // r11
  __int64 v23; // r10
  unsigned __int64 v24; // r9
  unsigned int v25; // [rsp+30h] [rbp-58h] BYREF
  char *v26; // [rsp+38h] [rbp-50h]

  v4 = *a1;
  v5 = 0LL;
  v25 = 0;
  if ( !v4 )
    v4 = (((unsigned __int64)MmPfnDatabase >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  if ( *a2 )
  {
    v6 = v4 + 8 * (*a2 >> 12);
    v7 = (__int64)(v6 << 25) >> 16;
  }
  else
  {
    v7 = 0xFFFFFD8000000000uLL;
    v6 = 0xFFFFF6FEC0000000uLL;
  }
  v8 = v6 - 8;
  v9 = a4 != 0 ? 7 : 3;
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
  v26 = AnyMultiplexedVm;
  v11 = 0LL;
  v12 = 0LL;
  i = 0LL;
  if ( v4 <= v8 )
  {
    while ( 2 )
    {
      if ( v11 )
      {
        MiUnlockPageTableInternal((__int64)AnyMultiplexedVm, v11);
        v11 = 0LL;
      }
      NextPageTable = MiGetNextPageTable(v4, v8, 0LL, a3, v9, &v25);
      v4 = NextPageTable;
      if ( NextPageTable )
      {
        if ( !a4 )
          v11 = ((NextPageTable >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        if ( v25 )
        {
          v12 = NextPageTable;
          v15 = NextPageTable;
          v16 = v25;
          do
          {
            if ( v11 )
              v11 = ((v11 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
            v15 = ((v15 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
            --v16;
          }
          while ( v16 );
          LeafVa = MiGetLeafVa(v15 + 8);
          i = LeafVa - MiGetLeafVa(v4);
          AnyMultiplexedVm = v26;
          v18 = (__int64)(v8 - v4) >> 3;
          if ( i >> 12 > v18 + 1 )
            i = (v18 + 1) << 12;
        }
        else
        {
          v21 = NextPageTable;
          while ( !(unsigned int)MiPfnDatabaseVaIsUnique(v21) )
          {
            v21 += 8LL;
            if ( v21 > v8 || (v21 & v22) == 0 )
              goto LABEL_32;
          }
          v12 = v21;
          if ( v21 )
          {
            for ( i = 4096LL; ; i += v23 )
            {
              v24 = v21 + 8;
              if ( v24 > v8 || (v24 & v22) == 0 || !(unsigned int)MiPfnDatabaseVaIsUnique(v24) )
                break;
            }
            goto LABEL_40;
          }
LABEL_32:
          AnyMultiplexedVm = v26;
          v4 = v21;
          if ( v21 <= v8 )
            continue;
        }
      }
      else
      {
LABEL_40:
        AnyMultiplexedVm = v26;
      }
      break;
    }
  }
  if ( v11 )
    MiUnlockPageTableInternal((__int64)AnyMultiplexedVm, v11);
  if ( v12 )
  {
    v4 = v12 + 8 * (i >> 12);
    v19 = (__int64)(v12 << 25) >> 16;
    v5 = v7 - v19;
    if ( i + v19 <= v7 )
      v5 = i;
  }
  else
  {
    v19 = 0LL;
  }
  *a2 = v5;
  *a1 = v4;
  return v19;
}
