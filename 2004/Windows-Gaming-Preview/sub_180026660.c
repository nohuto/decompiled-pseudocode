/*
 * XREFs of sub_180026660 @ 0x180026660
 * Callers:
 *     sub_18001B11C @ 0x18001B11C (sub_18001B11C.c)
 *     sub_18001E51C @ 0x18001E51C (sub_18001E51C.c)
 *     sub_180025640 @ 0x180025640 (sub_180025640.c)
 *     sub_180025660 @ 0x180025660 (sub_180025660.c)
 *     sub_1800266D0 @ 0x1800266D0 (sub_1800266D0.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180026660(volatile signed __int64 *a1)
{
  signed __int64 v1; // rax
  unsigned __int32 v2; // ebx
  signed __int64 v3; // rtt

  v1 = *((_QWORD *)a1 + 4);
  while ( v1 >= 0 )
  {
    v2 = v1 - 1;
    v3 = v1;
    v1 = _InterlockedCompareExchange64(a1 + 4, v1 - 1, v1);
    if ( v3 == v1 )
      goto LABEL_5;
  }
  v2 = _InterlockedDecrement((volatile signed __int32 *)(2 * v1 + 16));
LABEL_5:
  if ( !v2 )
  {
    if ( a1 )
      (*(void (__fastcall **)(volatile signed __int64 *, __int64))(*a1 + 48))(a1, 1LL);
    if ( qword_18005ADB0 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_18005ADB0 + 16LL))(qword_18005ADB0);
  }
  return v2;
}
