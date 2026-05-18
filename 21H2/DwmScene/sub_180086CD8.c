/*
 * XREFs of sub_180086CD8 @ 0x180086CD8
 * Callers:
 *     sub_18008DCC8 @ 0x18008DCC8 (sub_18008DCC8.c)
 * Callees:
 *     sub_18008933C @ 0x18008933C (sub_18008933C.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180086CD8(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  _QWORD *v5; // rdi
  _QWORD *i; // rbx

  result = sub_18008933C(a1);
  v5 = *(_QWORD **)(a1 + 384);
  for ( i = *(_QWORD **)(a1 + 376); i != v5; i += 2 )
  {
    if ( *(_BYTE *)(*i + 72LL) )
      result = (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*i + 48LL))(*i, a2);
  }
  return result;
}
