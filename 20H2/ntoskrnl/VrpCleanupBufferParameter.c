/*
 * XREFs of VrpCleanupBufferParameter @ 0x1405D2960
 * Callers:
 *     VrpPostEnumerateKey @ 0x1405D0DA4 (VrpPostEnumerateKey.c)
 *     VrpPostQueryKey @ 0x1405D2734 (VrpPostQueryKey.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall VrpCleanupBufferParameter(char a1, PVOID *a2)
{
  if ( a1 == 1 && *a2 )
  {
    ExFreePoolWithTag(*a2, 0x67655256u);
    *a2 = 0LL;
  }
  return 0LL;
}
