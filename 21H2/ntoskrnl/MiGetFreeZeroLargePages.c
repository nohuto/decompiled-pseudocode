/*
 * XREFs of MiGetFreeZeroLargePages @ 0x1403F6914
 * Callers:
 *     MiDemoteLocalLargePage @ 0x1402D6960 (MiDemoteLocalLargePage.c)
 *     MiGetLargePage @ 0x14030E784 (MiGetLargePage.c)
 *     MiFindLargeNodePage @ 0x140395020 (MiFindLargeNodePage.c)
 *     MiGetLargePagesDemoteAsNeeded @ 0x1403F5870 (MiGetLargePagesDemoteAsNeeded.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     MiUnlinkNodeLargePages @ 0x1403F70E8 (MiUnlinkNodeLargePages.c)
 */

__int64 __fastcall MiGetFreeZeroLargePages(__int64 a1, int a2, int a3, int a4, unsigned int a5, int a6, int a7, int a8)
{
  int v8; // ebx
  __int128 *v9; // rcx
  __int128 v11; // [rsp+50h] [rbp-38h] BYREF

  v8 = a1;
  v11 = 0LL;
  if ( a2 == 2 )
  {
    DWORD2(v11) = a6;
    v9 = &v11;
  }
  else
  {
    v9 = (__int128 *)(4544LL * a5 + *(_QWORD *)(a1 + 16) + 4336LL);
  }
  return MiUnlinkNodeLargePages(v8, a2, a3, a5, a7, a8, (__int64)v9, a4 | 2u, 0LL);
}
