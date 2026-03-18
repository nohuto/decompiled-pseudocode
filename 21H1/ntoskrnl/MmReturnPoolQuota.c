/*
 * XREFs of MmReturnPoolQuota @ 0x14031F3C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall MmReturnPoolQuota(int a1, __int64 a2)
{
  if ( a1 == 1 )
    qword_140C4C898 -= a2;
  else
    qword_140C4C8A0 -= a2;
}
