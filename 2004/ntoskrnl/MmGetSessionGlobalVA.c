/*
 * XREFs of MmGetSessionGlobalVA @ 0x140706DAC
 * Callers:
 *     PfpLogApplicationEvent @ 0x14026BC84 (PfpLogApplicationEvent.c)
 *     PfpPrivSourceEnum @ 0x1406980C8 (PfpPrivSourceEnum.c)
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
