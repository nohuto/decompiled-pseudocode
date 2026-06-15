/*
 * XREFs of sub_18010CAB0 @ 0x18010CAB0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18010D658 @ 0x18010D658 (sub_18010D658.c)
 */

__int64 __fastcall sub_18010CAB0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned int *a5, int a6)
{
  __int64 v6; // rdx

  v6 = 3LL;
  if ( a6 == 4 )
    v6 = *a5;
  sub_18010D658(a4, v6);
  return 0LL;
}
