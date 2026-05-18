/*
 * XREFs of sub_18010E620 @ 0x18010E620
 * Callers:
 *     sub_18010EC2C @ 0x18010EC2C (sub_18010EC2C.c)
 * Callees:
 *     sub_18010E594 @ 0x18010E594 (sub_18010E594.c)
 *     ??2@YAPEAX_K@Z @ 0x18011E768 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18010E620(__int64 a1, __int64 *a2, __int64 *a3, __int64 *a4)
{
  void *v8; // rax
  __int64 v9; // rcx

  v8 = operator new(0x40uLL);
  v9 = 0LL;
  if ( v8 )
    v9 = sub_18010E594((__int64)v8, a2, a3, a4);
  *(_OWORD *)a1 = 0LL;
  *(_QWORD *)a1 = v9 + 16;
  *(_QWORD *)(a1 + 8) = v9;
  return a1;
}
