/*
 * XREFs of sub_1800224F0 @ 0x1800224F0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180039D98 @ 0x180039D98 (sub_180039D98.c)
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall sub_1800224F0(_QWORD *a1, char a2)
{
  __int64 v4; // rdi

  *a1 = off_18003F2A8;
  v4 = qword_18004FE78;
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(qword_18004FE78 + 8), 0xFFFFFFFF) == 1 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v4 + 8LL))(v4, 1LL);
  }
  *a1 = &off_18003EAC8;
  if ( (a2 & 1) != 0 )
    sub_180039D98(a1);
  return a1;
}
