/*
 * XREFs of MiUpdatePfnOnSlabStandbyList @ 0x140305BA0
 * Callers:
 *     MiInsertPageInList @ 0x14028EB00 (MiInsertPageInList.c)
 *     MiReplaceTransitionPage @ 0x14034B1EC (MiReplaceTransitionPage.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiUpdatePfnOnSlabStandbyList(unsigned __int64 *a1, int a2)
{
  unsigned __int64 v2; // rax
  unsigned __int64 result; // rax

  v2 = *a1;
  if ( a2 )
  {
    result = v2 | 0x8000000000000000uLL;
  }
  else
  {
    *((_WORD *)a1 + 18) = 0;
    a1[3] &= 0xFF00000FFFFFFFFFuLL;
    result = v2 & 0xFFFFFFFFFLL;
    *((_BYTE *)a1 + 39) = 0;
  }
  *a1 = result;
  return result;
}
