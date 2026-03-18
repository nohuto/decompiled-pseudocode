/*
 * XREFs of MiGetNextNonGapPfnPage @ 0x1403B5730
 * Callers:
 *     MiFreedUnusedPfnPagesWorker @ 0x1403B5488 (MiFreedUnusedPfnPagesWorker.c)
 *     MiGetFileOnlyRanges @ 0x1405287F4 (MiGetFileOnlyRanges.c)
 * Callees:
 *     MiGetLeafVa @ 0x140290520 (MiGetLeafVa.c)
 *     MiGetAnyMultiplexedVm @ 0x1402A9158 (MiGetAnyMultiplexedVm.c)
 *     MiGetNextPageTable @ 0x1402AF130 (MiGetNextPageTable.c)
 *     MiUnlockPageTableInternal @ 0x1402DB860 (MiUnlockPageTableInternal.c)
 *     MiPfnDatabaseVaIsUnique @ 0x14052906C (MiPfnDatabaseVaIsUnique.c)
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
  __int64 v11; // r8
  unsigned __int64 v12; // rbp
  unsigned __int64 v13; // r14
  unsigned __int64 i; // r15
  unsigned __int64 NextPageTable; // rax
  unsigned __int64 v16; // rcx
  __int64 v17; // rdx
  unsigned __int64 LeafVa; // r15
  __int64 v19; // rsi
  __int64 v20; // r14
  unsigned __int64 v22; // r9
  __int64 v23; // r11
  __int64 v24; // r10
  unsigned __int64 v25; // r9
  unsigned int v26; // [rsp+30h] [rbp-58h] BYREF
  char *v27; // [rsp+38h] [rbp-50h]

  v4 = *a1;
  v5 = 0LL;
  v26 = 0;
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
  v27 = AnyMultiplexedVm;
  v12 = 0LL;
  v13 = 0LL;
  i = 0LL;
  if ( v4 <= v8 )
  {
    while ( 2 )
    {
      if ( v12 )
      {
        MiUnlockPageTableInternal((__int64)AnyMultiplexedVm, v12, v11);
        v12 = 0LL;
      }
      NextPageTable = MiGetNextPageTable(v4, v8, 0LL, a3, v9, &v26);
      v4 = NextPageTable;
      if ( NextPageTable )
      {
        if ( !a4 )
          v12 = ((NextPageTable >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        if ( v26 )
        {
          v13 = NextPageTable;
          v16 = NextPageTable;
          v17 = v26;
          do
          {
            if ( v12 )
              v12 = ((v12 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
            v16 = ((v16 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
            --v17;
          }
          while ( v17 );
          LeafVa = MiGetLeafVa(v16 + 8);
          i = LeafVa - MiGetLeafVa(v4);
          AnyMultiplexedVm = v27;
          v19 = (__int64)(v8 - v4) >> 3;
          if ( i >> 12 > v19 + 1 )
            i = (v19 + 1) << 12;
        }
        else
        {
          v22 = NextPageTable;
          while ( !(unsigned int)MiPfnDatabaseVaIsUnique(v22) )
          {
            v22 += 8LL;
            if ( v22 > v8 || (v22 & v23) == 0 )
              goto LABEL_32;
          }
          v13 = v22;
          if ( v22 )
          {
            for ( i = 4096LL; ; i += v24 )
            {
              v25 = v22 + 8;
              if ( v25 > v8 || (v25 & v23) == 0 || !(unsigned int)MiPfnDatabaseVaIsUnique(v25) )
                break;
            }
            goto LABEL_40;
          }
LABEL_32:
          AnyMultiplexedVm = v27;
          v4 = v22;
          if ( v22 <= v8 )
            continue;
        }
      }
      else
      {
LABEL_40:
        AnyMultiplexedVm = v27;
      }
      break;
    }
  }
  if ( v12 )
    MiUnlockPageTableInternal((__int64)AnyMultiplexedVm, v12, v11);
  if ( v13 )
  {
    v4 = v13 + 8 * (i >> 12);
    v20 = (__int64)(v13 << 25) >> 16;
    v5 = v7 - v20;
    if ( i + v20 <= v7 )
      v5 = i;
  }
  else
  {
    v20 = 0LL;
  }
  *a2 = v5;
  *a1 = v4;
  return v20;
}
