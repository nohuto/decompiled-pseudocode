/*
 * XREFs of sub_18010A130 @ 0x18010A130
 * Callers:
 *     sub_1801060DC @ 0x1801060DC (sub_1801060DC.c)
 *     sub_180106E0C @ 0x180106E0C (sub_180106E0C.c)
 *     sub_180106EC4 @ 0x180106EC4 (sub_180106EC4.c)
 *     sub_180106F68 @ 0x180106F68 (sub_180106F68.c)
 *     sub_180107084 @ 0x180107084 (sub_180107084.c)
 *     sub_180108504 @ 0x180108504 (sub_180108504.c)
 *     sub_180108B84 @ 0x180108B84 (sub_180108B84.c)
 *     sub_18010AFAC @ 0x18010AFAC (sub_18010AFAC.c)
 *     sub_18010B268 @ 0x18010B268 (sub_18010B268.c)
 *     sub_18010B7C4 @ 0x18010B7C4 (sub_18010B7C4.c)
 *     sub_18010BA60 @ 0x18010BA60 (sub_18010BA60.c)
 * Callees:
 *     sub_1801096D0 @ 0x1801096D0 (sub_1801096D0.c)
 */

ULONG __fastcall sub_18010A130(const CHAR *a1, int a2, __int64 a3, __int64 a4)
{
  ULONG result; // eax
  int v5; // [rsp+50h] [rbp+18h] BYREF
  const CHAR *v6; // [rsp+58h] [rbp+20h] BYREF

  if ( (unsigned int)CallbackContext > 5 )
  {
    v5 = a2;
    v6 = a1;
    return sub_1801096D0((__int64)&CallbackContext, (unsigned __int8 *)&unk_180169262, a3, a4, &v6, (__int64)&v5);
  }
  return result;
}
