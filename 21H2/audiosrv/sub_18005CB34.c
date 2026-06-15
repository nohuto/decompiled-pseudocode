/*
 * XREFs of sub_18005CB34 @ 0x18005CB34
 * Callers:
 *     sub_18005C8D0 @ 0x18005C8D0 (sub_18005C8D0.c)
 *     sub_1800BF4C0 @ 0x1800BF4C0 (sub_1800BF4C0.c)
 *     sub_1800BFAD0 @ 0x1800BFAD0 (sub_1800BFAD0.c)
 *     sub_1800BFDE0 @ 0x1800BFDE0 (sub_1800BFDE0.c)
 *     sub_1800C00CC @ 0x1800C00CC (sub_1800C00CC.c)
 * Callees:
 *     sub_18005CCC8 @ 0x18005CCC8 (sub_18005CCC8.c)
 *     sub_1800B8610 @ 0x1800B8610 (sub_1800B8610.c)
 */

__int64 __fastcall sub_18005CB34(_QWORD *a1, unsigned __int64 a2, __int64 a3)
{
  __int64 v6; // rbx
  __int64 result; // rax

  if ( a2 >= a1[1] && !(unsigned __int8)sub_18005CCC8(a1, a2 + 1) )
    sub_1800B8610(2147942414LL);
  v6 = *a1 + (a2 << 6);
  *(_DWORD *)v6 = *(_DWORD *)a3;
  *(_QWORD *)(v6 + 56) = *(_QWORD *)(a3 + 56);
  *(_DWORD *)(v6 + 4) = *(_DWORD *)(a3 + 4);
  *(_QWORD *)(v6 + 24) = *(_QWORD *)(a3 + 24);
  *(_QWORD *)(v6 + 32) = *(_QWORD *)(a3 + 32);
  *(_QWORD *)(v6 + 40) = *(_QWORD *)(a3 + 40);
  *(_QWORD *)(v6 + 48) = *(_QWORD *)(a3 + 48);
  *(_DWORD *)(v6 + 8) = *(_DWORD *)(a3 + 8);
  *(_DWORD *)(v6 + 12) = *(_DWORD *)(a3 + 12);
  *(_DWORD *)(v6 + 16) = *(_DWORD *)(a3 + 16);
  result = *(unsigned int *)(a3 + 20);
  *(_DWORD *)(v6 + 20) = result;
  return result;
}
