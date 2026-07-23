/*
 * XREFs of EtwpCheckForPoolTagFilterExtension @ 0x140798AE8
 * Callers:
 *     EtwpStartLogger @ 0x1406B5480 (EtwpStartLogger.c)
 *     EtwpUpdateTrace @ 0x140796F68 (EtwpUpdateTrace.c)
 * Callees:
 *     EtwpGetFlagExtension @ 0x1406B5200 (EtwpGetFlagExtension.c)
 *     EtwpUpdateTagFilter @ 0x140798B50 (EtwpUpdateTagFilter.c)
 */

__int64 __fastcall EtwpCheckForPoolTagFilterExtension(__int64 a1, __int64 a2, char a3)
{
  unsigned __int16 *FlagExtension; // rax
  __int64 v5; // r11
  __int64 v6; // rcx
  __int64 v8; // rdx

  FlagExtension = EtwpGetFlagExtension(a2, 4);
  if ( !FlagExtension )
  {
    if ( a3 )
    {
      v6 = 5 * v5;
      *(_DWORD *)&EtwpPoolTagFilter[2 * v6 + 2] = 42;
      EtwpPoolTagFilter[2 * v6] = 1;
    }
    return 0LL;
  }
  v8 = *FlagExtension;
  LOWORD(v8) = (unsigned __int16)(4 * v8 - 4) >> 2;
  if ( (unsigned __int16)v8 <= 4u )
  {
    EtwpUpdateTagFilter(FlagExtension + 2, v8, &EtwpPoolTagFilter[10 * v5]);
    return 0LL;
  }
  return 3221225485LL;
}
