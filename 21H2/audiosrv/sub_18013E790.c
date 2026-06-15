/*
 * XREFs of sub_18013E790 @ 0x18013E790
 * Callers:
 *     <none>
 * Callees:
 *     sub_180066980 @ 0x180066980 (sub_180066980.c)
 *     sub_180111BF0 @ 0x180111BF0 (sub_180111BF0.c)
 *     sub_180112C10 @ 0x180112C10 (sub_180112C10.c)
 */

__int64 __fastcall sub_18013E790(__int64 a1, __int64 a2)
{
  unsigned int v4; // ebx
  _QWORD *v5; // rax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v8; // [rsp+28h] [rbp-10h]

  v4 = 0;
  sub_180066980((__int64)&lpCriticalSection, (struct _RTL_CRITICAL_SECTION *)(a1 + 72));
  if ( a2 && (v5 = sub_180111BF0((_QWORD *)(a1 + 24), a2)) != 0LL )
    sub_180112C10((_QWORD *)(a1 + 24), v5);
  else
    v4 = -2147024809;
  if ( v8 )
    LeaveCriticalSection(lpCriticalSection);
  return v4;
}
