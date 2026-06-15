/*
 * XREFs of sub_1801335D0 @ 0x1801335D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1801335D0(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rcx

  if ( a2 )
  {
    v4 = *(_QWORD *)(a4 + 128);
    if ( !v4 )
      __fastfail(7u);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 32LL))(v4);
  }
  return 0LL;
}
