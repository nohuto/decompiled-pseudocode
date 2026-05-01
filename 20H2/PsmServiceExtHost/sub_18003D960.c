/*
 * XREFs of sub_18003D960 @ 0x18003D960
 * Callers:
 *     sub_180046D50 @ 0x180046D50 (sub_180046D50.c)
 *     sub_180046D60 @ 0x180046D60 (sub_180046D60.c)
 * Callees:
 *     sub_1800466F8 @ 0x1800466F8 (sub_1800466F8.c)
 *     _guard_dispatch_icall_nop @ 0x180046860 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18003D960(__int64 a1)
{
  signed __int64 v1; // rax
  __int64 v2; // r10
  unsigned int v3; // ebx
  signed __int64 v4; // rtt

  v1 = *(_QWORD *)(a1 + 32);
  v2 = a1;
  while ( v1 >= 0 )
  {
    if ( (_DWORD)v1 == 0x7FFFFFFF )
      return 2147483646;
    v3 = v1 - 1;
    v4 = v1;
    v1 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 32), v1 - 1, v1);
    if ( v4 == v1 )
      goto LABEL_8;
  }
  v3 = sub_1800466F8(2 * v1 + 16);
LABEL_8:
  if ( !v3 )
  {
    if ( v2 )
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v2 + 48LL))(v2, 1LL);
    if ( qword_1800B5050 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_1800B5050 + 16LL))(qword_1800B5050);
  }
  return v3;
}
