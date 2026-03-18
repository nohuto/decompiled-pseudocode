/*
 * XREFs of MiFindLargePageMemory @ 0x140982F64
 * Callers:
 *     MiAllocateLargeZeroPages @ 0x1405C0D40 (MiAllocateLargeZeroPages.c)
 * Callees:
 *     MiGetLargestPageIndex @ 0x14023A8F8 (MiGetLargestPageIndex.c)
 *     MiCreatePageChains @ 0x140263558 (MiCreatePageChains.c)
 *     MiZeroInParallel @ 0x14026446C (MiZeroInParallel.c)
 *     MiDereferencePageChains @ 0x1402646FC (MiDereferencePageChains.c)
 *     MiFindContiguousPagesEx @ 0x140277D10 (MiFindContiguousPagesEx.c)
 *     MiAllocatePool @ 0x1402828F0 (MiAllocatePool.c)
 *     MiSufficientAvailablePages @ 0x140285380 (MiSufficientAvailablePages.c)
 *     RtlAvlInsertNodeEx @ 0x14030EFD0 (RtlAvlInsertNodeEx.c)
 *     MiProtectionToCacheAttribute @ 0x14033D7D0 (MiProtectionToCacheAttribute.c)
 *     MiUpdateLargePagePfns @ 0x1405C32E4 (MiUpdateLargePagePfns.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall MiFindLargePageMemory(__int64 a1, unsigned __int64 *a2)
{
  unsigned __int64 v3; // rbp
  char *PageChains; // r15
  ULONG_PTR v5; // r14
  _QWORD *Pool; // rbx
  int v7; // r13d
  unsigned int LargestPageIndex; // r12d
  unsigned __int64 v9; // rsi
  bool v10; // r8
  unsigned __int64 v11; // rcx
  _QWORD *v12; // rdx
  _QWORD *v13; // rax
  unsigned int v14; // [rsp+C0h] [rbp+8h]
  unsigned __int64 v16; // [rsp+D0h] [rbp+18h] BYREF
  __int64 v17; // [rsp+D8h] [rbp+20h]

  v16 = 0LL;
  v17 = *(_QWORD *)(a1 + 8);
  v3 = *(_QWORD *)(a1 + 16) - *(_QWORD *)(a1 + 72);
  if ( (unsigned int)MiSufficientAvailablePages(
                       v17,
                       v3 + ((unsigned __int8)-((*(_DWORD *)(v17 + 4) & 0x20) == 0) & 0xA0)) )
  {
    v14 = MiProtectionToCacheAttribute(*(_DWORD *)(a1 + 36));
    PageChains = (char *)MiCreatePageChains(*(unsigned int *)(a1 + 32), v14);
    if ( PageChains )
    {
      v5 = qword_140C590C8;
      Pool = 0LL;
      v7 = 0;
      LargestPageIndex = MiGetLargestPageIndex();
      if ( LargestPageIndex < 3 )
      {
        do
        {
          v9 = MiLargePageSizes[LargestPageIndex];
          if ( v3 >= v9 )
          {
            if ( v9 < *(_QWORD *)(a1 + 24) )
              break;
            if ( !Pool )
            {
              Pool = MiAllocatePool(64, 0x30uLL, 0x6C4C6D4Du);
              if ( !Pool )
                goto LABEL_25;
            }
            if ( (int)MiFindContiguousPagesEx(
                        v17,
                        v9,
                        v5,
                        v9,
                        0,
                        v9,
                        v14,
                        *(_DWORD *)(a1 + 32),
                        0x80000000,
                        1611661312,
                        0,
                        0LL,
                        (__int64 *)&v16) >= 0 )
            {
              v3 -= v9;
              if ( (*(_DWORD *)a1 & 8) == 0 && (unsigned int)MiUpdateLargePagePfns((__int64)PageChains, v16, v9, v14) )
                v7 = 1;
              v10 = 0;
              v11 = v16;
              *Pool = v16;
              Pool[1] = v9;
              *((_BYTE *)Pool + 16) = 1;
              v12 = (_QWORD *)*a2;
              if ( *a2 )
              {
                while ( 1 )
                {
                  if ( v11 >= *(v12 - 3) )
                  {
                    v13 = (_QWORD *)v12[1];
                    if ( !v13 )
                    {
                      v10 = 1;
                      break;
                    }
                  }
                  else
                  {
                    v13 = (_QWORD *)*v12;
                    if ( !*v12 )
                      break;
                  }
                  v12 = v13;
                }
              }
              RtlAvlInsertNodeEx(a2, (unsigned __int64)v12, v10, Pool + 3);
              Pool = 0LL;
              if ( !v3 )
                goto LABEL_25;
              v5 = v16 - 1;
              if ( v16 - 1 > v9 )
                continue;
            }
          }
          v5 = qword_140C590C8;
          ++LargestPageIndex;
        }
        while ( LargestPageIndex < 3 );
        if ( Pool )
          ExFreePoolWithTag(Pool, 0);
LABEL_25:
        if ( v7 )
          MiZeroInParallel(PageChains);
      }
      MiDereferencePageChains((volatile signed __int32 *)PageChains);
    }
  }
}
