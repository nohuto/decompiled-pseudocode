/*
 * XREFs of MiFindLargePageMemory @ 0x1408DA244
 * Callers:
 *     MiAllocateLargeZeroPages @ 0x14055DC9C (MiAllocateLargeZeroPages.c)
 * Callees:
 *     MiGetLargestPageIndex @ 0x1402486D0 (MiGetLargestPageIndex.c)
 *     MiSufficientAvailablePages @ 0x140263410 (MiSufficientAvailablePages.c)
 *     MiAllocatePool @ 0x14027C2E0 (MiAllocatePool.c)
 *     MiCreateColorAnchors @ 0x1402936E4 (MiCreateColorAnchors.c)
 *     MiZeroInParallel @ 0x1402940B0 (MiZeroInParallel.c)
 *     MiDeleteColorAnchors @ 0x1402953FC (MiDeleteColorAnchors.c)
 *     MiProtectionToCacheAttribute @ 0x1402E6690 (MiProtectionToCacheAttribute.c)
 *     MiFindContiguousPages @ 0x14030C430 (MiFindContiguousPages.c)
 *     RtlAvlInsertNodeEx @ 0x1403212A0 (RtlAvlInsertNodeEx.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     MiUpdateLargePagePfns @ 0x14055EE3C (MiUpdateLargePagePfns.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

void __fastcall MiFindLargePageMemory(
        __int64 a1,
        unsigned int a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        unsigned int a5,
        char a6,
        __int64 a7)
{
  unsigned __int64 v8; // r13
  unsigned int v9; // eax
  ULONG_PTR v10; // r14
  _QWORD *Pool; // rdi
  int v12; // r12d
  unsigned int LargestPageIndex; // r15d
  unsigned __int64 v14; // rsi
  bool v15; // r8
  unsigned __int64 *v16; // r10
  unsigned __int64 v17; // rcx
  _QWORD *v18; // rdx
  _QWORD *v19; // rax
  unsigned int v20; // [rsp+60h] [rbp-51h]
  unsigned __int64 v21; // [rsp+68h] [rbp-49h] BYREF
  unsigned __int64 v22; // [rsp+70h] [rbp-41h]
  __int64 v23; // [rsp+78h] [rbp-39h]
  __int64 v24; // [rsp+80h] [rbp-31h]
  _OWORD v25[3]; // [rsp+88h] [rbp-29h] BYREF

  v21 = 0LL;
  v24 = a7;
  memset(v25, 0, sizeof(v25));
  v22 = a4;
  v8 = a3;
  v23 = a1;
  if ( (unsigned int)MiSufficientAvailablePages(a1, a3 + 160) && (unsigned int)MiCreateColorAnchors((__int64)v25, a2) )
  {
    v9 = MiProtectionToCacheAttribute(a5);
    v10 = BugCheckParameter3;
    Pool = 0LL;
    v20 = v9;
    v12 = 0;
    HIDWORD(v25[0]) = v9;
    LargestPageIndex = MiGetLargestPageIndex();
    if ( LargestPageIndex < 3 )
    {
      do
      {
        v14 = MiLargePageSizes[LargestPageIndex];
        if ( v8 >= v14 )
        {
          if ( v14 < v22 )
            break;
          if ( !Pool )
          {
            Pool = MiAllocatePool(64, 0x30uLL, 0x6C4C6D4Du);
            if ( !Pool )
              goto LABEL_25;
          }
          if ( (int)MiFindContiguousPages(
                      v23,
                      v14,
                      v10,
                      v14,
                      v14,
                      v20,
                      a2,
                      0x80000000,
                      1611661312,
                      0LL,
                      (__int64 *)&v21) >= 0 )
          {
            v8 -= v14;
            if ( (a6 & 2) == 0 && (unsigned int)MiUpdateLargePagePfns((__int64)v25, v21, v14, v20) == 1 )
              v12 = 1;
            v15 = 0;
            v16 = (unsigned __int64 *)v24;
            v17 = v21;
            *Pool = v21;
            Pool[1] = v14;
            *((_BYTE *)Pool + 16) = 1;
            v18 = (_QWORD *)*v16;
            if ( *v16 )
            {
              while ( 1 )
              {
                if ( v17 >= *(v18 - 3) )
                {
                  v19 = (_QWORD *)v18[1];
                  if ( !v19 )
                  {
                    v15 = 1;
                    break;
                  }
                }
                else
                {
                  v19 = (_QWORD *)*v18;
                  if ( !*v18 )
                    break;
                }
                v18 = v19;
              }
            }
            RtlAvlInsertNodeEx(v16, (unsigned __int64)v18, v15, Pool + 3);
            Pool = 0LL;
            if ( !v8 )
              goto LABEL_25;
            v10 = v21 - 1;
            if ( v21 - 1 > v14 )
              continue;
          }
        }
        v10 = BugCheckParameter3;
        ++LargestPageIndex;
      }
      while ( LargestPageIndex < 3 );
      if ( Pool )
        ExFreePoolWithTag(Pool, 0);
LABEL_25:
      if ( v12 )
        MiZeroInParallel((__int64 *)v25);
    }
    MiDeleteColorAnchors((__int64)v25);
  }
}
