/*
 * XREFs of sub_180080390 @ 0x180080390
 * Callers:
 *     <none>
 * Callees:
 *     _wsetlocale_set_cat @ 0x180079634 (_wsetlocale_set_cat.c)
 */

__int64 __fastcall sub_180080390(__int64 a1, const WCHAR *a2, __int64 a3, unsigned int a4, unsigned int a5, _BYTE *a6)
{
  __int64 result; // rax
  _DWORD v7[6]; // [rsp+30h] [rbp-18h] BYREF

  result = wsetlocale_set_cat(*(_QWORD *)&qword_1800B41A8 + 1768LL, a2, a3, a4, a5, v7);
  if ( (int)result >= 0 )
  {
    *a6 = v7[0];
    return 0LL;
  }
  return result;
}
