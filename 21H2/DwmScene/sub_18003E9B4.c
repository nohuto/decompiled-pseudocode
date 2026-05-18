/*
 * XREFs of sub_18003E9B4 @ 0x18003E9B4
 * Callers:
 *     sub_180126C18 @ 0x180126C18 (sub_180126C18.c)
 *     sub_180126CCE @ 0x180126CCE (sub_180126CCE.c)
 *     sub_180126D2E @ 0x180126D2E (sub_180126D2E.c)
 *     sub_1801309B8 @ 0x1801309B8 (sub_1801309B8.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18003E9B4(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // rcx
  __int64 result; // rax

  v2 = a1 + 8;
  v3 = *(_QWORD *)(a1 + 64);
  if ( v3 )
  {
    LOBYTE(a2) = v3 != v2;
    result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v3 + 32LL))(v3, a2);
    *(_QWORD *)(v2 + 56) = 0LL;
  }
  return result;
}
