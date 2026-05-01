/*
 * XREFs of sub_180022880 @ 0x180022880
 * Callers:
 *     <none>
 * Callees:
 *     sub_180022440 @ 0x180022440 (sub_180022440.c)
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180022880(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  unsigned int v4; // edi

  v2 = a1 - 168;
  if ( a1 != 168 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(a1 - 168);
  v4 = sub_180022440(v2, a2);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  return v4;
}
