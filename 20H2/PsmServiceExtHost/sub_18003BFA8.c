/*
 * XREFs of sub_18003BFA8 @ 0x18003BFA8
 * Callers:
 *     sub_18003BC18 @ 0x18003BC18 (sub_18003BC18.c)
 *     sub_18007F780 @ 0x18007F780 (sub_18007F780.c)
 *     sub_18007FFAC @ 0x18007FFAC (sub_18007FFAC.c)
 *     sub_18008011C @ 0x18008011C (sub_18008011C.c)
 *     sub_180081898 @ 0x180081898 (sub_180081898.c)
 * Callees:
 *     sub_18000F390 @ 0x18000F390 (sub_18000F390.c)
 *     sub_18001E380 @ 0x18001E380 (sub_18001E380.c)
 *     sub_180026040 @ 0x180026040 (sub_180026040.c)
 *     sub_18003C03C @ 0x18003C03C (sub_18003C03C.c)
 */

__int64 __fastcall sub_18003BFA8(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 *v5; // rbx

  result = sub_18003C03C(a1, a1 + 12, (unsigned int)(*(_DWORD *)(a1 + 8) + 1));
  if ( (int)result >= 0 )
  {
    *(_OWORD *)(*(_QWORD *)a1 + 16LL * (unsigned int)(*(_DWORD *)(a1 + 8))++) = 0LL;
    v5 = (__int64 *)(*(_QWORD *)a1 + 16LL * (unsigned int)(*(_DWORD *)(a1 + 8) - 1));
    sub_18001E380();
    *v5 = sub_180026040(a2);
    sub_18000F390();
    v5[1] = *(_QWORD *)(a2 + 800);
    return 0LL;
  }
  return result;
}
