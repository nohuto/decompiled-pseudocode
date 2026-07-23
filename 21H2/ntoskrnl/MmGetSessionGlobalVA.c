/*
 * XREFs of MmGetSessionGlobalVA @ 0x140679DF4
 * Callers:
 *     PfpLogApplicationEvent @ 0x1402735A8 (PfpLogApplicationEvent.c)
 *     PfpPrivSourceEnum @ 0x1406A53B4 (PfpPrivSourceEnum.c)
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
