/*
 * XREFs of sub_180020210 @ 0x180020210
 * Callers:
 *     <none>
 * Callees:
 *     sub_18001B2F8 @ 0x18001B2F8 (sub_18001B2F8.c)
 *     sub_18001FDD8 @ 0x18001FDD8 (sub_18001FDD8.c)
 *     sub_18001FE84 @ 0x18001FE84 (sub_18001FE84.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall sub_180020210(__int64 *a1, __int64 a2, __int64 a3)
{
  if ( a3 == -1 )
  {
    sub_18001FDD8((RTL_SRWLOCK *)&byte_18021F950, a1, a2);
  }
  else
  {
    *a1 = 0LL;
    if ( byte_18021F950 )
    {
      AcquireSRWLockExclusive(&stru_18021F970);
      if ( sub_18001B2F8((__int64)&byte_18021F950) )
        sub_18001FE84((__int64)&stru_18021F998, a1, a2, a3);
      ReleaseSRWLockExclusive(&stru_18021F970);
    }
  }
}
