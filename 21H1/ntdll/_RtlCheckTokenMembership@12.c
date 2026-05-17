/*
 * XREFs of _RtlCheckTokenMembership@12 @ 0x4B346090
 * Callers:
 *     <none>
 * Callees:
 *     _RtlCheckTokenMembershipEx@16 @ 0x4B2D5F50 (_RtlCheckTokenMembershipEx@16.c)
 */

int __stdcall RtlCheckTokenMembership(void *a1, unsigned __int8 *Src, _BYTE *a3)
{
  return RtlCheckTokenMembershipEx(a1, Src, 0, a3);
}
