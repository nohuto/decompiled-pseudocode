/*
 * XREFs of sub_18013E810 @ 0x18013E810
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800579A4 @ 0x1800579A4 (sub_1800579A4.c)
 *     sub_180066980 @ 0x180066980 (sub_180066980.c)
 *     sub_180111BF0 @ 0x180111BF0 (sub_180111BF0.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18013E810(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v6; // ebx
  _QWORD *v7; // rax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v10; // [rsp+28h] [rbp-10h]

  v6 = 0;
  sub_180066980((__int64)&lpCriticalSection, (struct _RTL_CRITICAL_SECTION *)(a1 + 72));
  if ( a2 && (v7 = sub_180111BF0((_QWORD *)(a1 + 24), a2)) != 0LL )
  {
    if ( v7[2] != a3 )
      sub_1800579A4(v7 + 2, a3);
  }
  else
  {
    v6 = -2147024809;
  }
  if ( v10 )
    LeaveCriticalSection(lpCriticalSection);
  return v6;
}
