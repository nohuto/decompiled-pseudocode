/*
 * XREFs of sub_18003CF58 @ 0x18003CF58
 * Callers:
 *     sub_18003BBF4 @ 0x18003BBF4 (sub_18003BBF4.c)
 *     sub_180121486 @ 0x180121486 (sub_180121486.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18003CF58(__int64 a1, __int64 a2)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a2 + 40);
  if ( v2 )
  {
    *(_QWORD *)(a2 + 40) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  return j_j__o_free(a2);
}
