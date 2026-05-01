/*
 * XREFs of sub_180003414 @ 0x180003414
 * Callers:
 *     sub_180046E81 @ 0x180046E81 (sub_180046E81.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_180003414(struct _RTL_CRITICAL_SECTION **a1)
{
  struct _RTL_CRITICAL_SECTION *v1; // rcx

  v1 = *a1;
  if ( v1 )
    LeaveCriticalSection(v1);
}
