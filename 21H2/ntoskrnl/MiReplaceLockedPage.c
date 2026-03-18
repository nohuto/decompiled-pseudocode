/*
 * XREFs of MiReplaceLockedPage @ 0x1403D0BD4
 * Callers:
 *     MiTrimSharedPageFromViews @ 0x14027B820 (MiTrimSharedPageFromViews.c)
 * Callees:
 *     MiReleaseFreshPage @ 0x140268408 (MiReleaseFreshPage.c)
 *     MiLockProtoPoolPage @ 0x140273AF0 (MiLockProtoPoolPage.c)
 *     MiIsPfnFromSlabAllocation @ 0x140277C50 (MiIsPfnFromSlabAllocation.c)
 *     MiCanPageMove @ 0x140277C9C (MiCanPageMove.c)
 *     MiSearchNumaNodeTable @ 0x1402C1550 (MiSearchNumaNodeTable.c)
 *     MiGetPfnChannel @ 0x1402E8990 (MiGetPfnChannel.c)
 *     MiSetOriginalPtePfnFromFreeList @ 0x1402E89B0 (MiSetOriginalPtePfnFromFreeList.c)
 *     MiTradeActivePage @ 0x1402EA95C (MiTradeActivePage.c)
 *     MiGetPage @ 0x1403250B0 (MiGetPage.c)
 *     MiTbFlushType @ 0x140333AA0 (MiTbFlushType.c)
 *     MiUnlockProtoPoolPage @ 0x140334790 (MiUnlockProtoPoolPage.c)
 */

__int64 __fastcall MiReplaceLockedPage(__int64 a1, __m128i *a2, unsigned __int64 a3, unsigned int a4, unsigned int a5)
{
  int v9; // edi
  int PfnChannel; // eax
  __int64 Page; // rax
  __m128i *v12; // rbx
  __int64 v13; // rdi
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  unsigned int v17; // eax
  char v19; // [rsp+68h] [rbp+10h] BYREF

  if ( (a2[1].m128i_i64[1] & 0x3FFFFFFFFFFFFFFFLL) == 1 && a2[2].m128i_i16[0] == 1 && MiCanPageMove((__int64)a2) )
  {
    v19 = 17;
    v9 = *((_DWORD *)MiSearchNumaNodeTable(0xAAAAAAAAAAAAAAABuLL * ((__int64)a2[0x22000000000LL].m128i_i64 >> 4)) + 2);
    PfnChannel = MiGetPfnChannel((__int64)a2);
    Page = MiGetPage(
             *(_QWORD *)(qword_140C51F48 + 8 * (((unsigned __int64)a2[2].m128i_i64[1] >> 43) & 0x3FF)),
             (PfnChannel << byte_140C506CD) | (v9 << byte_140C506CC) | (-1431655765
                                                                      * ((__int64)a2[0x22000000000LL].m128i_i64 >> 4)) & dword_140C50738,
             a4);
    if ( Page != -1 )
    {
      v12 = (__m128i *)(48 * Page - 0x220000000000LL);
      v13 = MiLockProtoPoolPage(a2->m128i_i64[1] | 0x8000000000000000uLL, (__int64)&v19);
      if ( v13 )
      {
        if ( !MiIsPfnFromSlabAllocation((__int64)a2) )
        {
          v17 = MiTbFlushType(a1);
          if ( (unsigned int)MiTradeActivePage(a2, v12, a3, v17, a5, 0) )
          {
            LOBYTE(v14) = v19;
            MiUnlockProtoPoolPage(v13, v14, v15, v16);
            a2[1].m128i_i64[0] = ZeroPte;
            MiSetOriginalPtePfnFromFreeList((unsigned __int64 *)&a2[1]);
            MiReleaseFreshPage((__int64)a2);
            return 1LL;
          }
        }
        LOBYTE(v14) = v19;
        MiUnlockProtoPoolPage(v13, v14, v15, v16);
      }
      MiReleaseFreshPage((__int64)v12);
    }
  }
  return 0LL;
}
