/*
 * XREFs of sub_1C003C3F8 @ 0x1C003C3F8
 * Callers:
 *     sub_1C001A410 @ 0x1C001A410 (sub_1C001A410.c)
 *     sub_1C001B290 @ 0x1C001B290 (sub_1C001B290.c)
 * Callees:
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D060 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1C003C3F8(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v7; // ebx
  void (__fastcall *v8)(__int64, __int64, __int64); // rax

  v7 = 0;
  v8 = (void (__fastcall *)(__int64, __int64, __int64))*((_QWORD *)sub_1C000F050(a1) + 599);
  if ( v8 )
    v8(a2, a3, a4);
  else
    return (unsigned int)-1073741822;
  return v7;
}
