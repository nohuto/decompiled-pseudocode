/*
 * XREFs of sub_18003F960 @ 0x18003F960
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18003F960(__int64 a1, __int64 a2)
{
  __int64 v4; // rcx

  v4 = *(_QWORD *)(a1 + 752);
  if ( v4 != a2 )
  {
    if ( a2 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
      v4 = *(_QWORD *)(a1 + 752);
    }
    *(_QWORD *)(a1 + 752) = a2;
    if ( v4 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  return 0LL;
}
