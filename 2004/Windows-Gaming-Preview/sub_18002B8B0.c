/*
 * XREFs of sub_18002B8B0 @ 0x18002B8B0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall sub_18002B8B0(__int64 a1)
{
  __int64 v1; // r8
  int v2; // eax
  __int64 v3; // rcx
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  v1 = *(_QWORD *)(a1 + 232);
  if ( v1 && *(_QWORD *)(a1 + 216) )
  {
    v5 = 0LL;
    v2 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v1 + 104LL))(v1, &v5);
    v3 = v5;
    if ( v2 >= 0 && v5 )
    {
      v5 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
      return 1;
    }
    if ( v5 )
    {
      v5 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
    }
  }
  return 0;
}
