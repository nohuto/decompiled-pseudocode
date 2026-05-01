/*
 * XREFs of sub_180026760 @ 0x180026760
 * Callers:
 *     sub_18001C4E4 @ 0x18001C4E4 (sub_18001C4E4.c)
 *     sub_18001DCEC @ 0x18001DCEC (sub_18001DCEC.c)
 *     sub_180025960 @ 0x180025960 (sub_180025960.c)
 *     sub_180025980 @ 0x180025980 (sub_180025980.c)
 *     sub_1800267D0 @ 0x1800267D0 (sub_1800267D0.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180026760(volatile signed __int64 *a1)
{
  signed __int64 v1; // rax
  unsigned __int32 v2; // ebx
  signed __int64 v3; // rtt

  v1 = *((_QWORD *)a1 + 7);
  while ( v1 >= 0 )
  {
    v2 = v1 - 1;
    v3 = v1;
    v1 = _InterlockedCompareExchange64(a1 + 7, v1 - 1, v1);
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
