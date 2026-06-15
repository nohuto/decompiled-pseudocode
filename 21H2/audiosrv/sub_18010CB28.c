/*
 * XREFs of sub_18010CB28 @ 0x18010CB28
 * Callers:
 *     sub_18010D978 @ 0x18010D978 (sub_18010D978.c)
 *     sub_18010DFFC @ 0x18010DFFC (sub_18010DFFC.c)
 * Callees:
 *     sub_18010BCE0 @ 0x18010BCE0 (sub_18010BCE0.c)
 */

void __fastcall sub_18010CB28(const CHAR *a1, int a2, __int64 a3, __int64 a4)
{
  const CHAR *v4; // rax
  const CHAR *v5; // [rsp+40h] [rbp+8h] BYREF

  v5 = a1;
  if ( (unsigned int)CallbackContext > 4 )
  {
    v4 = "Started";
    if ( !a2 )
      v4 = "Shutdown";
    v5 = v4;
    sub_18010BCE0((__int64)&CallbackContext, byte_18016983B, a3, a4, &v5);
  }
}
