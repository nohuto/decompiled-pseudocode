/*
 * XREFs of MmGetSessionGlobalVA @ 0x1406CB504
 * Callers:
 *     PfpLogApplicationEvent @ 0x1402D48C8 (PfpLogApplicationEvent.c)
 *     PfpPrivSourceEnum @ 0x1406CE0D0 (PfpPrivSourceEnum.c)
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
