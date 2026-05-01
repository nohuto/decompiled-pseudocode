/*
 * XREFs of sub_180064E68 @ 0x180064E68
 * Callers:
 *     sub_180064EDC @ 0x180064EDC (sub_180064EDC.c)
 *     sub_180065E18 @ 0x180065E18 (sub_180065E18.c)
 *     sub_180065EA8 @ 0x180065EA8 (sub_180065EA8.c)
 * Callees:
 *     sub_180065F34 @ 0x180065F34 (sub_180065F34.c)
 */

DWORD __fastcall sub_180064E68(int a1, int a2, int a3, __int64 a4, int a5, __int64 a6)
{
  DWORD result; // eax

  result = GetLastError();
  if ( !result )
  {
    sub_180065F34(a1, a2, a3, 0, 0LL, a6, 2, -2147024228);
    return 668;
  }
  return result;
}
