/*
 * XREFs of sub_180018D78 @ 0x180018D78
 * Callers:
 *     sub_18001A5D0 @ 0x18001A5D0 (sub_18001A5D0.c)
 *     sub_1801208CB @ 0x1801208CB (sub_1801208CB.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180018D78(_QWORD *a1)
{
  __int64 result; // rax
  __int64 v3; // rcx

  result = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(qword_180218710 + 40) + 1048LL))(
             *(_QWORD *)(qword_180218710 + 40),
             *a1,
             0LL);
  v3 = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  return result;
}
