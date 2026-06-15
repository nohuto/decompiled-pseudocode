/*
 * XREFs of sub_18000E1A0 @ 0x18000E1A0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180039D98 @ 0x180039D98 (sub_180039D98.c)
 */

BOOL __fastcall sub_18000E1A0(__int64 a1)
{
  _QWORD *v1; // rcx
  BOOL result; // eax

  v1 = *(_QWORD **)(a1 + 16);
  if ( v1 )
  {
    *v1 = &off_18003ED28;
    return sub_180039D98(v1);
  }
  return result;
}
