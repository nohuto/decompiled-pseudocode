/*
 * XREFs of sub_18002B0D4 @ 0x18002B0D4
 * Callers:
 *     sub_18003C4EB @ 0x18003C4EB (sub_18003C4EB.c)
 * Callees:
 *     sub_180025BB0 @ 0x180025BB0 (sub_180025BB0.c)
 *     sub_180039D98 @ 0x180039D98 (sub_180039D98.c)
 */

BOOL __fastcall sub_18002B0D4(__int64 *a1)
{
  void *v1; // rbx
  BOOL result; // eax

  v1 = (void *)*a1;
  if ( *a1 )
  {
    sub_180025BB0(*a1);
    return sub_180039D98(v1);
  }
  return result;
}
