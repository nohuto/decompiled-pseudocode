/*
 * XREFs of sub_180070804 @ 0x180070804
 * Callers:
 *     sub_180014E9C @ 0x180014E9C (sub_180014E9C.c)
 * Callees:
 *     sub_180044640 @ 0x180044640 (sub_180044640.c)
 */

_BOOL8 __fastcall sub_180070804(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v4; // rbx

  v2 = a2;
  if ( a2 == -2 )
    v2 = *(_QWORD *)(a1 + 48);
  RtlAcquireSRWLockShared(a1);
  v4 = sub_180044640(a1, v2, 15);
  RtlReleaseSRWLockShared(a1);
  return v4 != 0;
}
