/*
 * XREFs of sub_1800378A4 @ 0x1800378A4
 * Callers:
 *     sub_180037748 @ 0x180037748 (sub_180037748.c)
 *     sub_18007AF20 @ 0x18007AF20 (sub_18007AF20.c)
 * Callees:
 *     sub_180026B84 @ 0x180026B84 (sub_180026B84.c)
 *     sub_180026CA0 @ 0x180026CA0 (sub_180026CA0.c)
 */

__int64 __fastcall sub_1800378A4(__int64 a1, void *a2, unsigned int a3, int a4, _DWORD *a5)
{
  __int64 result; // rax

  result = sub_180026CA0(a1, a2, a3);
  if ( (int)result >= 0 )
  {
    sub_180026B84(a1, a2, a3, a4, a5);
    return 0LL;
  }
  return result;
}
