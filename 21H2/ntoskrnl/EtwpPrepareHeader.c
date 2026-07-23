/*
 * XREFs of EtwpPrepareHeader @ 0x1406399D4
 * Callers:
 *     EtwpFlushBuffer @ 0x14063990C (EtwpFlushBuffer.c)
 *     EtwpAddLogHeader @ 0x1406B76C8 (EtwpAddLogHeader.c)
 *     EtwpBufferingModeFlush @ 0x14093D358 (EtwpBufferingModeFlush.c)
 * Callees:
 *     memset @ 0x140414300 (memset.c)
 */

__int64 __fastcall EtwpPrepareHeader(__int64 a1, __int64 a2, __int16 a3)
{
  int v3; // eax
  __int64 v5; // rcx

  v3 = *(_DWORD *)(a2 + 4);
  if ( !v3 )
    v3 = *(_DWORD *)(a2 + 8);
  *(_DWORD *)(a2 + 48) = v3;
  if ( a3 != 1 && v3 == 72 )
    return 2147483682LL;
  *(_WORD *)(a2 + 52) = a3 | 0x20;
  if ( *(_QWORD *)(a1 + 816) || (a3 & 0x40) == 0 )
  {
    v5 = *(unsigned int *)(a2 + 48);
    if ( *(_DWORD *)a2 - (int)v5 > 0 )
      memset((void *)(a2 + v5), 255, *(_DWORD *)a2 - (int)v5);
  }
  if ( *(_DWORD *)(a2 + 48) == 72 )
    return 2147483682LL;
  else
    return 0LL;
}
