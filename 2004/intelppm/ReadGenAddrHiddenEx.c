/*
 * XREFs of ReadGenAddrHiddenEx @ 0x1C0008800
 * Callers:
 *     ReadGenAddrMaybeHiddenEx @ 0x1C0008830 (ReadGenAddrMaybeHiddenEx.c)
 *     InitCpcStatesInternal @ 0x1C0033C90 (InitCpcStatesInternal.c)
 * Callees:
 *     ReadGenAddrEx @ 0x1C0008744 (ReadGenAddrEx.c)
 *     ReadGenAddrHidden @ 0x1C0008798 (ReadGenAddrHidden.c)
 */

unsigned __int64 __fastcall ReadGenAddrHiddenEx(__int64 a1, _BYTE *a2)
{
  if ( !a2 )
    return 0LL;
  if ( *a2 == 10 )
    return ReadGenAddrEx(a2);
  return ReadGenAddrHidden(a1, a2);
}
