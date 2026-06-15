/*
 * XREFs of sub_180142750 @ 0x180142750
 * Callers:
 *     sub_1800753C0 @ 0x1800753C0 (sub_1800753C0.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180142750(__int64 a1, __int64 *a2, _QWORD *a3)
{
  unsigned int v3; // ebx
  __int64 v4; // rax

  v3 = 0;
  if ( !a3 )
    return (unsigned int)-2147467261;
  v4 = *a2 - 0x4CE91B36E659BA9BLL;
  if ( *a2 == 0x4CE91B36E659BA9BLL )
    v4 = a2[1] - 0x53BB97DFECEAFB6LL;
  if ( !v4 )
  {
    *a3 = a1;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
    return v3;
  }
  return sub_1800CA2A0(a1 + 8, a2, a3);
}
