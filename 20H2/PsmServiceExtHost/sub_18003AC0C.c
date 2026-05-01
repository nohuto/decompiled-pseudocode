/*
 * XREFs of sub_18003AC0C @ 0x18003AC0C
 * Callers:
 *     sub_180038D80 @ 0x180038D80 (sub_180038D80.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180046860 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall sub_18003AC0C(__int64 a1, _QWORD *a2)
{
  __int64 (__fastcall *v2)(__int64, _QWORD); // rax
  int v3; // ebx
  int v5; // edx
  unsigned int v6; // ecx

  v2 = (__int64 (__fastcall *)(__int64, _QWORD))qword_1800B4F10;
  v3 = 0;
  if ( qword_1800B4F10 || (v2 = (__int64 (__fastcall *)(__int64, _QWORD))qword_1800B5028) != 0LL )
    v5 = v2(16669694LL, 0LL);
  else
    v5 = 0;
  *a2 = 0LL;
  v6 = 2 * (v5 & 0x80 | (4 * (v5 & 0x40 | (4 * (v5 & 3)))));
  if ( (v5 & 0xFFFFFF3F) != 0 )
  {
    if ( (v5 & 0xFFFFFF3F) == 2 )
      v3 = 16;
    v6 |= v3;
  }
  *(_DWORD *)a2 = v6 ^ ((unsigned __int8)v6 ^ (unsigned __int8)(v6 >> 1)) & 8;
  return a2;
}
