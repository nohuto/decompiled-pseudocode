/*
 * XREFs of sub_1800EA620 @ 0x1800EA620
 * Callers:
 *     sub_1800EA4FC @ 0x1800EA4FC (sub_1800EA4FC.c)
 *     sub_1800EA9AC @ 0x1800EA9AC (sub_1800EA9AC.c)
 * Callees:
 *     sub_18000F708 @ 0x18000F708 (sub_18000F708.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800D2EA8 @ 0x1800D2EA8 (sub_1800D2EA8.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall sub_1800EA620(__int64 *a1)
{
  __int64 v2; // rdx
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF
  __int64 v4; // [rsp+38h] [rbp+10h] BYREF

  v2 = *a1;
  if ( *(_QWORD *)(*a1 + 32) )
  {
    v4 = 0LL;
    sub_1800D2EA8(&v4, *(_QWORD *)(v2 + 48));
    v3 = 0LL;
    if ( (*(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v4 + 88LL))(v4, &v3) >= 0 )
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v3 + 32LL))(v3, *(_QWORD *)(*a1 + 32));
    sub_18000F708(&v3);
    sub_18000F708(&v4);
  }
}
