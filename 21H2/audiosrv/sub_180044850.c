/*
 * XREFs of sub_180044850 @ 0x180044850
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180044850(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rcx
  __int64 result; // rax

  v4 = *(_QWORD *)(a1 + 72);
  if ( v4 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
    v4 = *(_QWORD *)(a1 + 72);
  }
  result = 0LL;
  *a2 = v4;
  return result;
}
