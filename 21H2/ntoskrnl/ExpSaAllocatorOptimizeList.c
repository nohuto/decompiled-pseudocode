/*
 * XREFs of ExpSaAllocatorOptimizeList @ 0x1405BA5F4
 * Callers:
 *     ExpSaAllocatorAllocate @ 0x14039171C (ExpSaAllocatorAllocate.c)
 *     ExpSaAllocatorFree @ 0x1403944A4 (ExpSaAllocatorFree.c)
 * Callees:
 *     ExpSaPageGroupDescriptorFree @ 0x1405BA70C (ExpSaPageGroupDescriptorFree.c)
 */

void __fastcall ExpSaAllocatorOptimizeList(__int64 a1)
{
  int v1; // ebx
  __int64 v3; // rsi
  ULONG_PTR v4; // rcx
  ULONG_PTR v5; // rbp
  ULONG_PTR v6; // rax
  ULONG_PTR *v7; // rdx
  ULONG_PTR v8; // rax
  ULONG_PTR *v9; // rdx
  ULONG_PTR *v10; // rdx

  v1 = *(_DWORD *)(a1 + 64);
  if ( (v1 & 2) != 0 )
  {
    v3 = a1 + 8;
    v4 = *(_QWORD *)(a1 + 8);
    if ( v4 != v3 )
    {
      do
      {
        v5 = *(_QWORD *)v4;
        if ( *(_DWORD *)(v4 + 36) == 512 )
        {
          v6 = *(_QWORD *)v4;
          if ( *(_QWORD *)(*(_QWORD *)v4 + 8LL) != v4 )
            goto LABEL_15;
          v7 = *(ULONG_PTR **)(v4 + 8);
          if ( *v7 != v4 )
            goto LABEL_15;
          *v7 = v6;
          *(_QWORD *)(v6 + 8) = v7;
          ExpSaPageGroupDescriptorFree(v4);
        }
        else if ( !*(_DWORD *)(v4 + 36) )
        {
          v8 = *(_QWORD *)v4;
          *(_DWORD *)(v4 + 40) = 1;
          if ( *(_QWORD *)(v8 + 8) != v4
            || (v9 = *(ULONG_PTR **)(v4 + 8), *v9 != v4)
            || (*v9 = v8, *(_QWORD *)(v8 + 8) = v9, v10 = *(ULONG_PTR **)(a1 + 32), *v10 != a1 + 24) )
          {
LABEL_15:
            __fastfail(3u);
          }
          *(_QWORD *)v4 = a1 + 24;
          *(_QWORD *)(v4 + 8) = v10;
          *v10 = v4;
          *(_QWORD *)(a1 + 32) = v4;
        }
        v4 = v5;
      }
      while ( v5 != v3 );
    }
    *(_DWORD *)(a1 + 64) = v1 & 0xFFFFFFFD;
  }
}
