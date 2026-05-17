/*
 * XREFs of RtlCheckForOrphanedCriticalSections @ 0x18007E000
 * Callers:
 *     <none>
 * Callees:
 *     RtlCheckHeldCriticalSections @ 0x18007E030 (RtlCheckHeldCriticalSections.c)
 */

__int64 __fastcall RtlCheckForOrphanedCriticalSections(__int64 a1)
{
  __int64 v2; // [rsp+38h] [rbp+10h] BYREF

  v2 = 0LL;
  return RtlCheckHeldCriticalSections(a1, &v2);
}
