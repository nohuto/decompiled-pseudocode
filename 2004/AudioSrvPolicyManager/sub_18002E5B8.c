/*
 * XREFs of sub_18002E5B8 @ 0x18002E5B8
 * Callers:
 *     unknown_libname_24 @ 0x18003C947 (unknown_libname_24.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_18002E5B8(struct _RTL_CRITICAL_SECTION **a1)
{
  struct _RTL_CRITICAL_SECTION *v2; // rcx

  v2 = *a1;
  if ( v2 )
  {
    LeaveCriticalSection(v2);
    *a1 = 0LL;
  }
}
