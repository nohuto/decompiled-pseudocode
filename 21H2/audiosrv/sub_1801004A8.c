/*
 * XREFs of sub_1801004A8 @ 0x1801004A8
 * Callers:
 *     sub_180100800 @ 0x180100800 (sub_180100800.c)
 * Callees:
 *     sub_18006A148 @ 0x18006A148 (sub_18006A148.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall sub_1801004A8(_QWORD *a1)
{
  struct _TP_WORK *v2; // rcx
  __int64 v3; // rcx

  v2 = (struct _TP_WORK *)a1[4];
  if ( v2 )
    CloseThreadpoolWork(v2);
  v3 = a1[3];
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  sub_18006A148(a1);
  return a1;
}
