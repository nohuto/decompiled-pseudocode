/*
 * XREFs of sub_180007FE0 @ 0x180007FE0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180007A7C @ 0x180007A7C (sub_180007A7C.c)
 */

void sub_180007FE0()
{
  if ( byte_18005A430 )
  {
    AcquireSRWLockExclusive(&stru_18005A438);
    sub_180007A7C((__int64)&byte_18005A430);
    byte_18005A448 = 0;
    ReleaseSRWLockExclusive(&stru_18005A438);
  }
}
