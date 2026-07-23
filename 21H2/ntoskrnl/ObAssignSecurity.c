/*
 * XREFs of ObAssignSecurity @ 0x1407734F0
 * Callers:
 *     <none>
 * Callees:
 *     ObpAssignSecurity @ 0x140657DCC (ObpAssignSecurity.c)
 */

__int64 __fastcall ObAssignSecurity(__int64 a1, __int64 a2, void *a3, struct _OBJECT_TYPE *a4)
{
  return ObpAssignSecurity(a1, a2, a3, a4, 0, 0);
}
