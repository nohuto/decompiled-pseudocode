/*
 * XREFs of sub_18002DC30 @ 0x18002DC30
 * Callers:
 *     <none>
 * Callees:
 *     sub_18002D9A0 @ 0x18002D9A0 (sub_18002D9A0.c)
 */

__int64 __fastcall sub_18002DC30(__int64 a1, unsigned int a2, __int64 a3, __int64 a4, _DWORD *a5, int a6)
{
  if ( !(unsigned __int8)RtlEqualWnfChangeStamps(a2, 0LL)
    && !(unsigned __int8)RtlEqualWnfChangeStamps(a2, (unsigned int)dword_18004F57C) )
  {
    dword_18004F57C = a2;
    sub_18002D9A0(a4, a5, a6);
  }
  return 0LL;
}
