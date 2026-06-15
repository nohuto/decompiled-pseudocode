/*
 * XREFs of sub_1800448A0 @ 0x1800448A0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800448A0(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rcx
  __int64 result; // rax

  v4 = *(_QWORD *)(a1 + 80);
  if ( v4 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
    v4 = *(_QWORD *)(a1 + 80);
  }
  result = 0LL;
  *a2 = v4;
  return result;
}
