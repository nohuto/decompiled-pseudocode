/*
 * XREFs of RtlCheckTokenMembership @ 0x1800E6610
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlCheckTokenMembership(void *a1, void *a2, _BYTE *a3)
{
  return RtlCheckTokenMembershipEx(a1, a2, 0, a3);
}
