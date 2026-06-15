/*
 * XREFs of sub_1800E6C70 @ 0x1800E6C70
 * Callers:
 *     <none>
 * Callees:
 *     sub_18006A148 @ 0x18006A148 (sub_18006A148.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

int __fastcall sub_1800E6C70(_QWORD *a1, char a2)
{
  __int64 v4; // rcx
  int result; // eax

  v4 = a1[1];
  if ( v4 )
  {
    a1[1] = 0LL;
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  if ( a2 )
    return sub_18006A148(a1);
  return result;
}
