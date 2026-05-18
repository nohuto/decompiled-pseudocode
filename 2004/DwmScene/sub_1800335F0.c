/*
 * XREFs of sub_1800335F0 @ 0x1800335F0
 * Callers:
 *     sub_180032C14 @ 0x180032C14 (sub_180032C14.c)
 * Callees:
 *     sub_180033A54 @ 0x180033A54 (sub_180033A54.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800335F0(__int64 a1, char a2)
{
  __int64 result; // rax

  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 144) + 880LL))(*(_QWORD *)(a1 + 144));
  result = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 144) + 888LL))(*(_QWORD *)(a1 + 144));
  if ( a2 )
    return sub_180033A54(a1);
  return result;
}
