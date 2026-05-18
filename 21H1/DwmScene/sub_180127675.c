/*
 * XREFs of sub_180127675 @ 0x180127675
 * Callers:
 *     <none>
 * Callees:
 *     sub_1801163DC @ 0x1801163DC (sub_1801163DC.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180127675(__int64 a1, __int64 a2)
{
  const char *v2; // rax

  v2 = (const char *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a2 + 80) + 8LL))(*(_QWORD *)(a2 + 80));
  sub_1801163DC(&qword_18020C6D0, 3, "Exception in Display Destructor, message=%s", v2);
  return 0LL;
}
