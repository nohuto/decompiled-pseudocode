/*
 * XREFs of EnableCallback @ 0x1C005C020
 * Callers:
 *     <none>
 * Callees:
 *     sub_1C005C970 @ 0x1C005C970 (sub_1C005C970.c)
 */

void __fastcall EnableCallback(LPCGUID SourceId, __int64 ControlCode, __int64 Level, ULONGLONG MatchAnyKeyword)
{
  if ( (_DWORD)ControlCode )
  {
    dword_1C006B650 = 1;
    sub_1C005C970(SourceId, ControlCode, Level, MatchAnyKeyword);
  }
  else
  {
    dword_1C006B650 = 0;
  }
}
