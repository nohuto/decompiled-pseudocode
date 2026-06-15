/*
 * XREFs of sub_18002DCA0 @ 0x18002DCA0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18002DB2C @ 0x18002DB2C (sub_18002DB2C.c)
 */

__int64 __fastcall sub_18002DCA0(__int64 a1, unsigned int a2, __int64 a3, __int64 a4, _OWORD *a5, int a6)
{
  if ( !(unsigned __int8)RtlEqualWnfChangeStamps(a2, 0LL)
    && !(unsigned __int8)RtlEqualWnfChangeStamps(a2, (unsigned int)dword_18004F580) )
  {
    dword_18004F580 = a2;
    sub_18002DB2C(a4, a5, a6);
  }
  return 0LL;
}
