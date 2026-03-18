/*
 * XREFs of GetContextHelpId @ 0x1C02601D8
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C004B5F8 (xxxRealDefWindowProc.c)
 *     xxxHelpLoop @ 0x1C024FBFC (xxxHelpLoop.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetContextHelpId(_QWORD *a1)
{
  __int64 v1; // rdx
  unsigned int v2; // r8d

  v1 = a1[5];
  do
  {
    v2 = *(_DWORD *)(v1 + 280);
    if ( v2 )
      break;
    a1 = (_QWORD *)((*(_BYTE *)(v1 + 31) & 0xC0) == 0x40 ? a1[13] : a1[15]);
    if ( !a1 )
      break;
    v1 = a1[5];
  }
  while ( (*(_WORD *)(v1 + 42) & 0x2FFF) != 0x29D );
  return v2;
}
