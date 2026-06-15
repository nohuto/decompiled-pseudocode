/*
 * XREFs of sub_1800384A4 @ 0x1800384A4
 * Callers:
 *     sub_180037338 @ 0x180037338 (sub_180037338.c)
 * Callees:
 *     sub_180003AB0 @ 0x180003AB0 (sub_180003AB0.c)
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800384A4(_DWORD *a1, _QWORD *a2)
{
  int v2; // ebx
  int v3; // edx
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  *a2 = 0LL;
  v2 = a1[2];
  if ( v2 )
  {
    if ( v2 != -2147221164 )
    {
      if ( v2 >= 0 )
        return (unsigned int)v2;
      v3 = 163;
LABEL_5:
      sub_180003AB0(
        retaddr,
        v3,
        (__int64)"onecoreuap\\base\\embedded\\sys\\lockdown\\config\\lib\\aamanagerhelper.cpp",
        v2);
      return (unsigned int)v2;
    }
  }
  else
  {
    v2 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)a1 + 56LL))(*(_QWORD *)a1);
    if ( v2 < 0 )
    {
      v3 = 165;
      goto LABEL_5;
    }
  }
  return 0LL;
}
