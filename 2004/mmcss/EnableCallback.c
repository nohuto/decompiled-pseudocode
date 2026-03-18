/*
 * XREFs of EnableCallback @ 0x1C000C2C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall EnableCallback(LPCGUID SourceId, ULONG ControlCode, UCHAR Level, ULONGLONG MatchAnyKeyword)
{
  if ( ControlCode )
  {
    RegHandle = qword_1C0007348;
    byte_1C0007358 = 1;
  }
  else
  {
    RegHandle = 0LL;
    byte_1C0007358 = 0;
  }
}
