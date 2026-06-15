/*
 * XREFs of sub_18001E7B8 @ 0x18001E7B8
 * Callers:
 *     sub_1800093C0 @ 0x1800093C0 (sub_1800093C0.c)
 *     sub_18001E510 @ 0x18001E510 (sub_18001E510.c)
 *     sub_18001FA04 @ 0x18001FA04 (sub_18001FA04.c)
 *     sub_18001FEA0 @ 0x18001FEA0 (sub_18001FEA0.c)
 *     sub_18002BB70 @ 0x18002BB70 (sub_18002BB70.c)
 *     sub_18002C120 @ 0x18002C120 (sub_18002C120.c)
 * Callees:
 *     sub_18001E6B8 @ 0x18001E6B8 (sub_18001E6B8.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18001E7B8(__int64 a1, int a2, int a3)
{
  struct _RTL_CRITICAL_SECTION *v6; // rdi
  _QWORD *v7; // rbx
  __int64 v8; // rdx

  v6 = (struct _RTL_CRITICAL_SECTION *)(a1 + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 32));
  v7 = *(_QWORD **)(a1 + 72);
  while ( v7 )
  {
    v8 = v7[2];
    v7 = (_QWORD *)*v7;
    if ( *(_DWORD *)(v8 + 212) == a2 )
      sub_18001E6B8(a1, v8, 0xD1u, a3);
  }
  if ( v6 )
    LeaveCriticalSection(v6);
  return 0LL;
}
