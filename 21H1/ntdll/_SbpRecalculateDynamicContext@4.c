/*
 * XREFs of _SbpRecalculateDynamicContext@4 @ 0x4B385E62
 * Callers:
 *     _SbUpdateSwitchContextBasedOnDll@12 @ 0x4B2B989E (_SbUpdateSwitchContextBasedOnDll@12.c)
 * Callees:
 *     _SbGetContextDetailsById@8 @ 0x4B385E8B (_SbGetContextDetailsById@8.c)
 */

int __thiscall SbpRecalculateDynamicContext(_DWORD *this)
{
  int result; // eax
  unsigned int i; // ecx

  result = 0;
  if ( this )
  {
    *this = 0;
    for ( i = 0; i < 5; ++i )
    {
      if ( dword_4B3A38D4[2 * i] )
        break;
    }
    if ( i < 5 )
    {
      SbGetContextDetailsById();
      return 1;
    }
  }
  return result;
}
