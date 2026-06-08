/*
 * XREFs of ReadGenAddrHiddenEx @ 0x1C0002EB8
 * Callers:
 *     ReadGenAddrMaybeHiddenEx @ 0x1C0002EE8 (ReadGenAddrMaybeHiddenEx.c)
 *     InitCpcStatesInternal @ 0x1C002DEF8 (InitCpcStatesInternal.c)
 * Callees:
 *     ReadGenAddrEx @ 0x1C0002DFC (ReadGenAddrEx.c)
 *     ReadGenAddrHidden @ 0x1C0002E50 (ReadGenAddrHidden.c)
 */

unsigned __int64 __fastcall ReadGenAddrHiddenEx(__int64 a1, _BYTE *a2)
{
  if ( !a2 )
    return 0LL;
  if ( *a2 == 10 )
    return ReadGenAddrEx(a2);
  return ReadGenAddrHidden(a1, a2);
}
