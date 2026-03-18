/*
 * XREFs of KiAffinityContainsProcessorsOtherThanSelf @ 0x14021F0D0
 * Callers:
 *     KiIpiSendRequestEx @ 0x1402BF9B0 (KiIpiSendRequestEx.c)
 *     KiPreprocessFlushTb @ 0x1402BFF00 (KiPreprocessFlushTb.c)
 *     KxFlushEntireTb @ 0x1402EA300 (KxFlushEntireTb.c)
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
