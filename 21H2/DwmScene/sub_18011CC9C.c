/*
 * XREFs of sub_18011CC9C @ 0x18011CC9C
 * Callers:
 *     sub_18011FF84 @ 0x18011FF84 (sub_18011FF84.c)
 * Callees:
 *     sub_18008A420 @ 0x18008A420 (sub_18008A420.c)
 *     sub_18011FF14 @ 0x18011FF14 (sub_18011FF14.c)
 *     ??2@YAPEAX_K@Z @ 0x180124038 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18011CC9C(__int64 a1, __int64 a2)
{
  _QWORD *v4; // rax
  unsigned __int64 v5; // rdx
  _QWORD v7[3]; // [rsp+20h] [rbp-18h] BYREF

  v7[1] = a1;
  *(_DWORD *)a1 = *(_DWORD *)a2;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  v4 = operator new(0xB0uLL);
  *v4 = v4;
  v4[1] = v4;
  *(_QWORD *)(a1 + 8) = v4;
  v7[0] = v4;
  v5 = (__int64)(*(_QWORD *)(a2 + 32) - *(_QWORD *)(a2 + 24)) >> 3;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  sub_18008A420((_QWORD *)(a1 + 24), v5, v7);
  *(_QWORD *)(a1 + 48) = *(_QWORD *)(a2 + 48);
  *(_QWORD *)(a1 + 56) = *(_QWORD *)(a2 + 56);
  sub_18011FF14(a1, **(_QWORD **)(a2 + 8), *(_QWORD *)(a2 + 8));
  return a1;
}
