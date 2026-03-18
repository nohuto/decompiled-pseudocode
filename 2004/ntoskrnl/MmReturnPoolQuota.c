/*
 * XREFs of MmReturnPoolQuota @ 0x14035CED0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall MmReturnPoolQuota(int a1, __int64 a2)
{
  if ( a1 == 1 )
    qword_140C4C758 -= a2;
  else
    qword_140C4C760 -= a2;
}
