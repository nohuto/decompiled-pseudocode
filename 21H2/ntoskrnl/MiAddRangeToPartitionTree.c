/*
 * XREFs of MiAddRangeToPartitionTree @ 0x1405613AC
 * Callers:
 *     MiAddMdlToPartitionTree @ 0x1405612C0 (MiAddMdlToPartitionTree.c)
 *     MiAllocatePartitionPhysicalPages @ 0x1408DAAD8 (MiAllocatePartitionPhysicalPages.c)
 *     MiHotAddPartitionMemory @ 0x1408DB3DC (MiHotAddPartitionMemory.c)
 * Callees:
 *     MiAllocatePool @ 0x14027C2E0 (MiAllocatePool.c)
 *     RtlClearBitsEx @ 0x140309050 (RtlClearBitsEx.c)
 *     RtlAvlInsertNodeEx @ 0x1403212A0 (RtlAvlInsertNodeEx.c)
 *     RtlSetBitsEx @ 0x140321750 (RtlSetBitsEx.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

_BOOL8 __fastcall MiAddRangeToPartitionTree(unsigned __int64 *a1, __int64 a2, unsigned __int64 a3, int a4)
{
  unsigned __int64 v5; // rdi
  int v6; // r12d
  unsigned __int64 v7; // rsi
  __int64 v8; // rax
  __int64 v9; // r8
  __int64 v10; // r13
  unsigned __int64 v11; // rbp
  _QWORD *v12; // rax
  unsigned __int64 v13; // r8
  __int64 v14; // rdx
  unsigned __int64 v15; // rcx
  _QWORD *Pool; // rbx
  PVOID v17; // rax
  __int64 v18; // r15
  __int64 v19; // rcx
  bool v20; // r8
  _QWORD *v21; // rdx
  unsigned __int64 v22; // rcx
  _QWORD *v23; // rax
  __int64 v24; // rdx
  unsigned __int64 v25; // rbx
  unsigned __int64 v26; // rdx
  __int64 v28; // [rsp+20h] [rbp-88h]
  unsigned __int64 *v29; // [rsp+B0h] [rbp+8h]
  __int64 v30; // [rsp+B8h] [rbp+10h]
  __int64 v31; // [rsp+C0h] [rbp+18h]
  int v32; // [rsp+C8h] [rbp+20h]

  v32 = a4;
  v30 = a2;
  v29 = a1;
  v5 = 0LL;
  v6 = 0;
  v7 = 0LL;
  v8 = a2 & 0x7FFFFFFFFFFC0000LL;
  v9 = a2 + 0x3FFFF;
  v28 = a2 + 0x3FFFF;
  v31 = a2 & 0x7FFFFFFFFFFC0000LL;
LABEL_2:
  v5 = v8 | v5 & 0x8000000000000000uLL;
  v10 = a2;
  v11 = (a3 + v9 - (v5 & 0x7FFFFFFFFFFFFFFFLL)) >> 18;
LABEL_3:
  if ( v11 )
  {
    v12 = (_QWORD *)*a1;
    if ( !*a1 )
      goto LABEL_11;
    v13 = v5 & 0x7FFFFFFFFFFFFFFFLL;
    while ( 1 )
    {
      v14 = v12[3];
      v15 = v14 & 0x7FFFFFFFFFFFFFFFLL;
      if ( v13 < (v14 & 0x7FFFFFFFFFFFFFFFuLL) )
      {
        v12 = (_QWORD *)*v12;
      }
      else
      {
        if ( v13 <= v15 )
        {
          if ( v12 )
          {
            v18 = (__int64)(v12 + 4);
            if ( v14 >= 0 || a4 != 1 )
            {
              v12[3] = v15;
              v14 &= ~0x8000000000000000uLL;
            }
            goto LABEL_21;
          }
LABEL_11:
          Pool = MiAllocatePool(64, 0x30uLL, 0x7070694Du);
          if ( Pool )
          {
            v17 = MiAllocatePool(64, 0x8000uLL, 0x6270694Du);
            if ( v17 )
            {
              v18 = (__int64)(Pool + 4);
              Pool[4] = 0x40000LL;
              Pool[5] = v17;
              v19 = Pool[3] ^ (v5 ^ Pool[3]) & 0x7FFFFFFFFFFFFFFFLL;
              Pool[3] = v19;
              if ( v32 == 1 )
              {
                v19 |= 0x8000000000000000uLL;
                Pool[3] = v19;
              }
              v20 = 0;
              v21 = (_QWORD *)*v29;
              if ( *v29 )
              {
                v22 = v19 & 0x7FFFFFFFFFFFFFFFLL;
                while ( 1 )
                {
                  if ( v22 < (v21[3] & 0x7FFFFFFFFFFFFFFFuLL) )
                  {
                    v23 = (_QWORD *)*v21;
                    if ( !*v21 )
                      break;
                  }
                  else
                  {
                    v23 = (_QWORD *)v21[1];
                    if ( !v23 )
                    {
                      v20 = 1;
                      break;
                    }
                  }
                  v21 = v23;
                }
              }
              RtlAvlInsertNodeEx(v29, (unsigned __int64)v21, v20, Pool);
              v14 = Pool[3];
LABEL_21:
              v24 = v14 & 0x7FFFFFFFFFFFFFFFLL;
              v25 = a3;
              if ( v24 - v10 + 0x40000 <= a3 )
                v25 = v24 - v10 + 0x40000;
              v26 = v10 - v24;
              if ( v6 )
              {
                RtlClearBitsEx(v18, v26, v25);
              }
              else
              {
                RtlSetBitsEx(v18, v26, v25);
                v7 += v25;
              }
              a1 = v29;
              a4 = v32;
              v10 += v25;
              a3 -= v25;
              --v11;
              v5 ^= (v5 ^ (v5 + 0x40000)) & 0x7FFFFFFFFFFFFFFFLL;
              goto LABEL_3;
            }
            ExFreePoolWithTag(Pool, 0);
          }
          v6 = 1;
          if ( v7 )
          {
            a1 = v29;
            a3 = v7;
            a2 = v30;
            v8 = v31;
            a4 = v32;
            v9 = v28;
            goto LABEL_2;
          }
          return 0LL;
        }
        v12 = (_QWORD *)v12[1];
      }
      if ( !v12 )
        goto LABEL_11;
    }
  }
  return v6 != 1;
}
