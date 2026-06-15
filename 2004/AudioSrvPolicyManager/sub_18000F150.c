/*
 * XREFs of sub_18000F150 @ 0x18000F150
 * Callers:
 *     sub_18000B210 @ 0x18000B210 (sub_18000B210.c)
 *     sub_18000B460 @ 0x18000B460 (sub_18000B460.c)
 *     sub_18000C840 @ 0x18000C840 (sub_18000C840.c)
 *     sub_18000D0F8 @ 0x18000D0F8 (sub_18000D0F8.c)
 *     sub_1800147A0 @ 0x1800147A0 (sub_1800147A0.c)
 *     sub_180026030 @ 0x180026030 (sub_180026030.c)
 *     sub_18002B104 @ 0x18002B104 (sub_18002B104.c)
 *     sub_180032EA0 @ 0x180032EA0 (sub_180032EA0.c)
 *     sub_180034200 @ 0x180034200 (sub_180034200.c)
 * Callees:
 *     sub_18000F0A8 @ 0x18000F0A8 (sub_18000F0A8.c)
 *     sub_18000F0C0 @ 0x18000F0C0 (sub_18000F0C0.c)
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall sub_18000F150(_QWORD *a1, const void **a2)
{
  const void *v2; // rbp
  volatile signed __int32 *v4; // rbx
  __int64 (__fastcall ***v5)(_QWORD, _QWORD, __int64); // rax
  _DWORD *v6; // rsi

  v2 = *a2;
  v4 = (volatile signed __int32 *)((char *)*a2 - 24);
  v5 = (__int64 (__fastcall ***)(_QWORD, _QWORD, __int64))(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)v4 + 32LL))(*(_QWORD *)v4);
  if ( *((int *)v4 + 4) >= 0 && v5 == *(__int64 (__fastcall ****)(_QWORD, _QWORD, __int64))v4 )
  {
    _InterlockedIncrement(v4 + 4);
  }
  else
  {
    v6 = v4 + 2;
    v4 = (volatile signed __int32 *)(**v5)(v5, *((unsigned int *)v4 + 2), 2LL);
    if ( !v4 )
      sub_18000F0A8();
    *((_DWORD *)v4 + 2) = *v6;
    sub_18000F0C0((void *)(v4 + 6), *v6 + 1, v2, *v6 + 1);
  }
  *a1 = v4 + 6;
  return a1;
}
