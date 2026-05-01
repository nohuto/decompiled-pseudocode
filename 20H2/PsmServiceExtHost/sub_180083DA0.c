/*
 * XREFs of sub_180083DA0 @ 0x180083DA0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18008431C @ 0x18008431C (sub_18008431C.c)
 */

__int64 __fastcall sub_180083DA0(
        __int64 a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        __int64 a7,
        __int64 a8,
        __int64 a9)
{
  __int64 v12; // rbx
  __int64 result; // rax

  RtlAcquireSRWLockShared(&unk_1800B4EA0);
  v12 = qword_1800B4E98;
  RtlReleaseSRWLockShared(&unk_1800B4EA0);
  if ( !v12 )
    return 3221225659LL;
  result = sub_18008431C(a2, a3, a4, a5, a6, a7, a8, a9, v12);
  if ( (int)result >= 0 )
    return 0LL;
  return result;
}
