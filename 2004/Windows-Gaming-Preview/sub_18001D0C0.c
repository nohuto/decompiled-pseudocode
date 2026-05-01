/*
 * XREFs of sub_18001D0C0 @ 0x18001D0C0
 * Callers:
 *     sub_1800469A4 @ 0x1800469A4 (sub_1800469A4.c)
 * Callees:
 *     sub_1800266E0 @ 0x1800266E0 (sub_1800266E0.c)
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18001D0C0(__int64 *a1)
{
  __int64 v2; // rcx
  __int64 result; // rax
  __int64 v4; // rcx
  __int64 v5; // rcx

  v2 = a1[2];
  if ( v2 )
  {
    a1[2] = 0LL;
    result = sub_1800266E0(v2);
  }
  v4 = a1[1];
  if ( v4 )
  {
    a1[1] = 0LL;
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  v5 = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  return result;
}
