/*
 * XREFs of MmReturnPoolQuota @ 0x14024D920
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall MmReturnPoolQuota(int a1, __int64 a2)
{
  if ( a1 == 1 )
    qword_140C4C998 -= a2;
  else
    qword_140C4C9A0 -= a2;
}
