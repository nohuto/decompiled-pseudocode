/*
 * XREFs of _InitOLEFormats@0 @ 0x2930E4
 * Callers:
 *     <none>
 * Callees:
 *     _WPP_RECORDER_SF_@20 @ 0x1B668 (_WPP_RECORDER_SF_@20.c)
 */

int __stdcall InitOLEFormats()
{
  int v0; // esi

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(3, 13, &WPP_5beb818f3182338190d7890059714f79_Traceguids);
  v0 = 0;
  while ( (unsigned __int16)UserAddAtomEx(off_24D2A8[v0], 1, 2) )
  {
    if ( (unsigned int)++v0 >= 21 )
      return 1;
  }
  return 0;
}
