/*
 * XREFs of MmGetSessionGlobalVA @ 0x14064C654
 * Callers:
 *     PfpLogApplicationEvent @ 0x140244348 (PfpLogApplicationEvent.c)
 *     PfpPrivSourceEnum @ 0x1406593DC (PfpPrivSourceEnum.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MmGetSessionGlobalVA(__int64 a1)
{
  if ( (*(_DWORD *)(a1 + 2172) & 0x1000) != 0 )
    return 0LL;
  else
    return *(_QWORD *)(a1 + 1368);
}
