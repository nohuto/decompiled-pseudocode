/*
 * XREFs of ?CalculateVerticalActivePixelsFrom@MonDescParser@@YAJGGGPEAG@Z @ 0x1C001F520
 * Callers:
 *     ?ModeFromStandardTimingBlock@EDID_MODES@MonDescParser@@QEAAJAEAVEDID_PARSER_STANDARD_TIMING@2@EPEAU_VideoModeDescriptor@@@Z @ 0x1C001EF24 (-ModeFromStandardTimingBlock@EDID_MODES@MonDescParser@@QEAAJAEAVEDID_PARSER_STANDARD_TIMING@2@EP.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MonDescParser::CalculateVerticalActivePixelsFrom(
        MonDescParser *this,
        unsigned __int16 a2,
        unsigned __int16 a3,
        _WORD *a4)
{
  int v4; // eax
  int v5; // ecx
  int v6; // eax
  int v7; // edx

  v4 = a3 * (unsigned __int16)this;
  v5 = a2;
  *a4 = 0;
  v7 = v4 % a2;
  v6 = v4 / v5;
  if ( v7 )
    return 3223126020LL;
  *a4 = v6;
  return 0LL;
}
