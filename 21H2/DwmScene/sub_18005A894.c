/*
 * XREFs of sub_18005A894 @ 0x18005A894
 * Callers:
 *     sub_1800494AC @ 0x1800494AC (sub_1800494AC.c)
 *     sub_18005ABE8 @ 0x18005ABE8 (sub_18005ABE8.c)
 *     sub_18005B5DC @ 0x18005B5DC (sub_18005B5DC.c)
 *     sub_1800618F0 @ 0x1800618F0 (sub_1800618F0.c)
 *     sub_180061CF8 @ 0x180061CF8 (sub_180061CF8.c)
 *     sub_180062194 @ 0x180062194 (sub_180062194.c)
 *     sub_180064394 @ 0x180064394 (sub_180064394.c)
 *     sub_180068494 @ 0x180068494 (sub_180068494.c)
 *     sub_18008C0A4 @ 0x18008C0A4 (sub_18008C0A4.c)
 *     sub_1800995B8 @ 0x1800995B8 (sub_1800995B8.c)
 *     sub_1800C09DC @ 0x1800C09DC (sub_1800C09DC.c)
 *     sub_1800D0174 @ 0x1800D0174 (sub_1800D0174.c)
 *     sub_1800DDC68 @ 0x1800DDC68 (sub_1800DDC68.c)
 *     sub_1800E1A88 @ 0x1800E1A88 (sub_1800E1A88.c)
 *     sub_18010F1F4 @ 0x18010F1F4 (sub_18010F1F4.c)
 *     sub_180113810 @ 0x180113810 (sub_180113810.c)
 * Callees:
 *     ?_Xlen@?$vector@PEAXV?$allocator@PEAX@std@@@std@@IEBAXXZ_1 @ 0x18002C608 (-_Xlen@-$vector@PEAXV-$allocator@PEAX@std@@@std@@IEBAXXZ_1.c)
 *     sub_180049504 @ 0x180049504 (sub_180049504.c)
 *     memcpy @ 0x180123964 (memcpy.c)
 *     memmove @ 0x180123982 (memmove.c)
 */

const void **__fastcall sub_18005A894(_QWORD *a1, size_t a2, char *a3, unsigned __int64 Size)
{
  unsigned __int64 v6; // r8
  _QWORD *v7; // rsi
  bool v8; // cf
  _BYTE *v9; // r15
  size_t v10; // rbx

  v6 = a1[2];
  v7 = a1;
  if ( v6 < a2 )
    std::vector<void *>::_Xlen();
  if ( Size > a1[3] - v6 )
  {
    LOBYTE(v6) = 0;
    return sub_180049504((const void **)a1, Size, v6, a2, a3, Size);
  }
  else
  {
    v8 = a1[3] < 0x10uLL;
    a1[2] = v6 + Size;
    if ( !v8 )
      a1 = (_QWORD *)*a1;
    v9 = (char *)a1 + a2;
    if ( &a3[Size] <= (char *)a1 + a2 || a3 > (char *)a1 + v6 )
    {
      v10 = Size;
    }
    else if ( v9 > a3 )
    {
      v10 = v9 - a3;
    }
    else
    {
      v10 = 0LL;
    }
    memmove(&v9[Size], v9, v6 - a2 + 1);
    memcpy(v9, a3, v10);
    memcpy(&v9[v10], &a3[v10 + Size], Size - v10);
    return (const void **)v7;
  }
}
