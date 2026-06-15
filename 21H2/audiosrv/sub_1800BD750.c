/*
 * XREFs of sub_1800BD750 @ 0x1800BD750
 * Callers:
 *     <none>
 * Callees:
 *     sub_18005E8F8 @ 0x18005E8F8 (sub_18005E8F8.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800BD750(__int64 a1, __int64 *a2, _QWORD *a3)
{
  __int64 v4; // rdi
  __int64 v5; // rax
  int v6; // ebx

  v4 = a1;
  if ( a3 )
  {
    v5 = *a2;
    if ( !*a2 )
      v5 = a2[1] - 0x46000000000000C0LL;
    if ( v5 )
    {
      v6 = -2147467262;
      v4 = 0LL;
    }
    else
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
      v6 = 0;
    }
    *a3 = v4;
  }
  else
  {
    v6 = -2147467261;
  }
  if ( v6 < 0 )
    sub_18005E8F8((__int64)"CMeterControlBase::QueryInterface", 133, v6);
  return (unsigned int)v6;
}
