/*
 * XREFs of KiAffinityContainsProcessorsOtherThanSelf @ 0x1402F4380
 * Callers:
 *     KiExecuteAllDpcs @ 0x1402A9790 (KiExecuteAllDpcs.c)
 *     KiPreprocessFlushTb @ 0x1402F3FE0 (KiPreprocessFlushTb.c)
 *     KiIpiSendRequestEx @ 0x1402F42D4 (KiIpiSendRequestEx.c)
 *     MiFlushTbList @ 0x14032F1B0 (MiFlushTbList.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiAffinityContainsProcessorsOtherThanSelf(__int64 a1, _WORD *a2)
{
  unsigned __int16 v2; // ax
  __int64 v3; // r9

  v2 = 0;
  if ( !*a2 )
    return 0LL;
  while ( 1 )
  {
    v3 = *(_QWORD *)&a2[4 * v2 + 4];
    if ( v3 )
    {
      if ( v2 != *(unsigned __int8 *)(a1 + 208) || v3 != *(_QWORD *)(a1 + 200) )
        break;
    }
    if ( ++v2 >= *a2 )
      return 0LL;
  }
  return 1LL;
}
