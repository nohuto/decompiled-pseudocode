/*
 * XREFs of sub_18003BAA0 @ 0x18003BAA0
 * Callers:
 *     sub_18003B97C @ 0x18003B97C (sub_18003B97C.c)
 * Callees:
 *     sub_18003BB4C @ 0x18003BB4C (sub_18003BB4C.c)
 *     sub_18003BB80 @ 0x18003BB80 (sub_18003BB80.c)
 *     sub_18003BBC4 @ 0x18003BBC4 (sub_18003BBC4.c)
 *     sub_18003BC18 @ 0x18003BC18 (sub_18003BC18.c)
 */

__int64 __fastcall sub_18003BAA0(__int64 a1, int a2, int a3)
{
  int v6; // eax
  int v7; // edi
  int v8; // edx
  int v9; // r8d

  ((void (*)(void))sub_18003BB80)();
  v6 = *(_DWORD *)(a1 + 132);
  if ( (v6 & 2) != 0 )
  {
    v7 = -1073740682;
  }
  else
  {
    *(_DWORD *)(a1 + 132) = v6 | 2;
    v7 = 0;
  }
  sub_18003BB4C(a1);
  if ( v7 >= 0 )
  {
    v7 = sub_18003BC18(a1, v8, v9, a2, a3);
    if ( v7 >= 0 )
    {
      sub_18003BBC4((*(_QWORD *)(a1 + 32) & 0xFFFFFFFFFFFFFFFCuLL) + 376, a1);
      v7 = 0;
    }
    sub_18003BB80(a1);
    *(_DWORD *)(a1 + 132) &= ~2u;
    sub_18003BB4C(a1);
  }
  return (unsigned int)v7;
}
