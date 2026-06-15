/*
 * XREFs of sub_180046360 @ 0x180046360
 * Callers:
 *     sub_18002A54C @ 0x18002A54C (sub_18002A54C.c)
 *     sub_180055130 @ 0x180055130 (sub_180055130.c)
 *     sub_180074820 @ 0x180074820 (sub_180074820.c)
 *     sub_180074830 @ 0x180074830 (sub_180074830.c)
 *     sub_180074840 @ 0x180074840 (sub_180074840.c)
 *     sub_1800D4EA4 @ 0x1800D4EA4 (sub_1800D4EA4.c)
 * Callees:
 *     sub_18006D208 @ 0x18006D208 (sub_18006D208.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180046360(__int64 a1)
{
  signed __int64 v1; // rax
  __int64 v2; // r10
  unsigned int v3; // ebx
  signed __int64 v4; // rtt

  v1 = *(_QWORD *)(a1 + 40);
  v2 = a1;
  while ( v1 >= 0 )
  {
    if ( (_DWORD)v1 == 0x7FFFFFFF )
      return 2147483646;
    v3 = v1 - 1;
    v4 = v1;
    v1 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 40), v1 - 1, v1);
    if ( v4 == v1 )
      goto LABEL_8;
  }
  v3 = sub_18006D208(2 * v1 + 16);
LABEL_8:
  if ( !v3 )
  {
    if ( v2 )
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v2 + 48LL))(v2, 1LL);
    if ( qword_18019E418 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_18019E418 + 16LL))(qword_18019E418);
  }
  return v3;
}
