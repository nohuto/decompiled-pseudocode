/*
 * XREFs of sub_180075C4C @ 0x180075C4C
 * Callers:
 *     sub_180074BB0 @ 0x180074BB0 (sub_180074BB0.c)
 *     sub_1800760A8 @ 0x1800760A8 (sub_1800760A8.c)
 *     sub_180076240 @ 0x180076240 (sub_180076240.c)
 * Callees:
 *     sub_180010470 @ 0x180010470 (sub_180010470.c)
 *     sub_18006B900 @ 0x18006B900 (sub_18006B900.c)
 *     sub_180071664 @ 0x180071664 (sub_180071664.c)
 *     sub_180071C14 @ 0x180071C14 (sub_180071C14.c)
 */

__int64 __fastcall sub_180075C4C(__int64 a1, __int64 a2, unsigned __int64 a3, int a4, int a5, __int64 a6)
{
  __int64 v6; // rsi
  int v9; // ecx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v14; // [rsp+30h] [rbp-18h] BYREF
  __int16 v15; // [rsp+38h] [rbp-10h]

  v6 = a1 + 144;
  if ( a4 == 1 )
    v9 = *(_DWORD *)(*(_QWORD *)(a1 + 24) + 516LL);
  else
    v9 = 0;
  sub_180071664(a1, v6, 0LL, a3, v9, a4);
  if ( *(_DWORD *)(a1 + 184) )
  {
    if ( (unsigned int)dword_1800B31E0 > 4 && sub_180010470((__int64)&dword_1800B31E0, 1LL) )
    {
      v14 = *(_QWORD *)(a1 + 152);
      v15 = *(_WORD *)(a1 + 184);
      sub_18006B900(v10, byte_18009E623, v11, v12, &v14);
    }
    sub_180071C14(v6, a4, a5, 0LL, a6);
  }
  return *(unsigned int *)(a1 + 184);
}
