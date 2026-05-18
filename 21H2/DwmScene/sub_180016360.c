/*
 * XREFs of sub_180016360 @ 0x180016360
 * Callers:
 *     <none>
 * Callees:
 *     sub_18001C56C @ 0x18001C56C (sub_18001C56C.c)
 */

void sub_180016360()
{
  if ( byte_18020F020 )
  {
    AcquireSRWLockExclusive(&SRWLock);
    sub_18001C56C(&byte_18020F020);
    byte_18020F038 = 0;
    ReleaseSRWLockExclusive(&SRWLock);
  }
}
