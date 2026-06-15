/*
 * XREFs of sub_1800563F0 @ 0x1800563F0
 * Callers:
 *     sub_180075380 @ 0x180075380 (sub_180075380.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800563F0(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  unsigned int v3; // ebx
  __int64 v4; // rax

  v3 = 0;
  if ( !a3 )
    return (unsigned int)-2147467261;
  v4 = *a2 - 0x46423F8F04DCFACCLL;
  if ( *a2 == 0x46423F8F04DCFACCLL )
    v4 = a2[1] - 0x610A60A56B32F782LL;
  if ( !v4 )
  {
    *a3 = a1;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
    return v3;
  }
  return sub_1800CA2A0(a1 + 8, a2, a3, a1);
}
