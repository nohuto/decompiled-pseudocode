/*
 * XREFs of _SbGetContextDetailsById@8 @ 0x4B385E8B
 * Callers:
 *     _SbpRecalculateDynamicContext@4 @ 0x4B385E62 (_SbpRecalculateDynamicContext@4.c)
 * Callees:
 *     <none>
 */

int __fastcall SbGetContextDetailsById(unsigned int a1, _DWORD *a2)
{
  int result; // eax

  result = 0;
  if ( a1 <= 4 )
  {
    *a2 = &SbSupportedOsList[7 * a1];
    return 1;
  }
  return result;
}
