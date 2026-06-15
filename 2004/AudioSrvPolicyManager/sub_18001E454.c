/*
 * XREFs of sub_18001E454 @ 0x18001E454
 * Callers:
 *     sub_180010BC0 @ 0x180010BC0 (sub_180010BC0.c)
 *     sub_180012518 @ 0x180012518 (sub_180012518.c)
 *     sub_18001E848 @ 0x18001E848 (sub_18001E848.c)
 *     sub_18001FCE0 @ 0x18001FCE0 (sub_18001FCE0.c)
 *     sub_18001FEA0 @ 0x18001FEA0 (sub_18001FEA0.c)
 *     sub_18001FF60 @ 0x18001FF60 (sub_18001FF60.c)
 *     sub_180025140 @ 0x180025140 (sub_180025140.c)
 *     sub_180025490 @ 0x180025490 (sub_180025490.c)
 *     sub_18002BB70 @ 0x18002BB70 (sub_18002BB70.c)
 *     sub_18002C120 @ 0x18002C120 (sub_18002C120.c)
 * Callees:
 *     sub_180010800 @ 0x180010800 (sub_180010800.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18001E454(__int64 a1, int a2, unsigned int a3)
{
  struct _RTL_CRITICAL_SECTION *v6; // rdi
  _QWORD *v7; // rbx
  __int64 v8; // rsi

  v6 = (struct _RTL_CRITICAL_SECTION *)(a1 + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 32));
  v7 = *(_QWORD **)(a1 + 72);
  while ( v7 )
  {
    v8 = v7[2];
    v7 = (_QWORD *)*v7;
    if ( *(_DWORD *)(v8 + 212) == a2 )
    {
      EnterCriticalSection(v6);
      sub_180010800(v8, a3);
      if ( v6 )
        LeaveCriticalSection(v6);
    }
  }
  if ( v6 )
    LeaveCriticalSection(v6);
  return 0LL;
}
