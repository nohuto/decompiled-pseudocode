/*
 * XREFs of sub_18003987C @ 0x18003987C
 * Callers:
 *     sub_180039C00 @ 0x180039C00 (sub_180039C00.c)
 *     sub_180039C40 @ 0x180039C40 (sub_180039C40.c)
 *     sub_180039C80 @ 0x180039C80 (sub_180039C80.c)
 *     sub_180039CC0 @ 0x180039CC0 (sub_180039CC0.c)
 *     sub_180039D80 @ 0x180039D80 (sub_180039D80.c)
 *     sub_180039F30 @ 0x180039F30 (sub_180039F30.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18003987C(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  struct _RTL_CRITICAL_SECTION *v3; // rbx

  *a3 = 0LL;
  v3 = (struct _RTL_CRITICAL_SECTION *)(a1 + 168);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 168));
  if ( *a2 )
  {
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 8LL))(*a2);
    *a3 = *a2;
  }
  if ( v3 )
    LeaveCriticalSection(v3);
  return 0LL;
}
