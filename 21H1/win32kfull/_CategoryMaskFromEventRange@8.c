/*
 * XREFs of _CategoryMaskFromEventRange@8 @ 0x14AC0
 * Callers:
 *     __SetWinEventHook@32 @ 0x148F0 (__SetWinEventHook@32.c)
 *     _DestroyEventHook@4 @ 0x14A42 (_DestroyEventHook@4.c)
 * Callees:
 *     <none>
 */

int __fastcall CategoryMaskFromEventRange(unsigned int a1, unsigned int a2)
{
  int v2; // edi
  unsigned int i; // esi

  v2 = 0;
  for ( i = 0; i < 30; i += 2 )
  {
    if ( dword_26BDF8[i] > a2 )
      break;
    if ( dword_26BE00[i] - 1 >= a1 )
      v2 |= dword_26BDFC[i];
  }
  return v2;
}
