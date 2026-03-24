/*
 * XREFs of MiWriteAweClusterPte @ 0x14054E1E4
 * Callers:
 *     MiWriteAwePtes @ 0x14054E298 (MiWriteAwePtes.c)
 * Callees:
 *     MiWriteValidPteNewPage @ 0x1402B68F8 (MiWriteValidPteNewPage.c)
 *     MiRewritePteWithLockBit @ 0x1403B6C18 (MiRewritePteWithLockBit.c)
 */

void __fastcall MiWriteAweClusterPte(__int64 a1, __int64 *a2, __int64 a3, int a4, __int64 a5)
{
  __int64 i; // rsi

  if ( a4 )
  {
    for ( i = a5; i; --i )
    {
      if ( a4 == 1 )
      {
        MiWriteValidPteNewPage(a2, a3, 1);
      }
      else if ( (unsigned int)(a4 - 2) <= 1 )
      {
        MiRewritePteWithLockBit(a1, a2, a3);
      }
      else
      {
        *a2 = a3;
      }
      if ( (a3 & 1) != 0 )
        a3 ^= (a3 ^ (a3 + 4096)) & 0xFFFFFFFFF000LL;
      ++a2;
    }
  }
}
