/*
 * XREFs of sub_1800FA010 @ 0x1800FA010
 * Callers:
 *     sub_1800FA778 @ 0x1800FA778 (sub_1800FA778.c)
 *     sub_1800FA9A0 @ 0x1800FA9A0 (sub_1800FA9A0.c)
 * Callees:
 *     sub_18006A148 @ 0x18006A148 (sub_18006A148.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall sub_1800FA010(_QWORD *a1)
{
  struct _TP_WORK *v2; // rcx
  __int64 v3; // rcx

  v2 = (struct _TP_WORK *)a1[2];
  if ( v2 )
    CloseThreadpoolWork(v2);
  v3 = a1[1];
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  if ( *a1 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 16LL))(*a1);
  sub_18006A148(a1);
  return a1;
}
