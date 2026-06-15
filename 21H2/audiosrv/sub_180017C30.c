/*
 * XREFs of sub_180017C30 @ 0x180017C30
 * Callers:
 *     <none>
 * Callees:
 *     sub_18006A148 @ 0x18006A148 (sub_18006A148.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall sub_180017C30(_QWORD *a1, char a2)
{
  volatile signed __int32 *v4; // rdx

  *a1 = off_1801467A0;
  v4 = (volatile signed __int32 *)(a1[1] - 24LL);
  if ( _InterlockedExchangeAdd(v4 + 4, 0xFFFFFFFF) <= 1 )
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v4 + 8LL))(*(_QWORD *)v4);
  if ( (a2 & 1) != 0 )
    sub_18006A148(a1, 56LL);
  return a1;
}
