/*
 * XREFs of sub_180033D50 @ 0x180033D50
 * Callers:
 *     sub_180074AC0 @ 0x180074AC0 (sub_180074AC0.c)
 *     sub_180074AD0 @ 0x180074AD0 (sub_180074AD0.c)
 *     sub_180074AE0 @ 0x180074AE0 (sub_180074AE0.c)
 *     sub_1800E3438 @ 0x1800E3438 (sub_1800E3438.c)
 * Callees:
 *     sub_18006D208 @ 0x18006D208 (sub_18006D208.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180033D50(__int64 a1)
{
  signed __int64 v2; // rax
  unsigned int v3; // ebx
  signed __int64 v4; // rtt
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp+8h] BYREF

  (*(void (__fastcall **)(_QWORD, LPCRITICAL_SECTION *))(**(_QWORD **)(a1 + 112) + 72LL))(
    *(_QWORD *)(a1 + 112),
    &lpCriticalSection);
  v2 = *(_QWORD *)(a1 + 40);
  while ( v2 >= 0 )
  {
    if ( (_DWORD)v2 == 0x7FFFFFFF )
    {
      v3 = 2147483646;
      goto LABEL_11;
    }
    v3 = v2 - 1;
    v4 = v2;
    v2 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 40), v2 - 1, v2);
    if ( v4 == v2 )
      goto LABEL_8;
  }
  v3 = sub_18006D208(2 * v2 + 16);
LABEL_8:
  if ( !v3 )
  {
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 48LL))(a1, 1LL);
    if ( qword_18019E418 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_18019E418 + 16LL))(qword_18019E418);
  }
LABEL_11:
  if ( lpCriticalSection )
    LeaveCriticalSection(lpCriticalSection);
  return v3;
}
