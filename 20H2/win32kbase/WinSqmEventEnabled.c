/*
 * XREFs of WinSqmEventEnabled @ 0x1C00720A8
 * Callers:
 *     WinSqmEndSession @ 0x1C0071CF4 (WinSqmEndSession.c)
 *     ?_WinSqmDWORDEvent@@YAXPEBU_EVENT_DESCRIPTOR@@PEAU_GUID@@KK@Z @ 0x1C0072028 (-_WinSqmDWORDEvent@@YAXPEBU_EVENT_DESCRIPTOR@@PEAU_GUID@@KK@Z.c)
 *     WinSqmAddToStream @ 0x1C013C510 (WinSqmAddToStream.c)
 *     WinSqmAddToStreamEx @ 0x1C013C700 (WinSqmAddToStreamEx.c)
 *     WinSqmSetString @ 0x1C013CA48 (WinSqmSetString.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall WinSqmEventEnabled(PCEVENT_DESCRIPTOR EventDescriptor, void *Source1)
{
  unsigned int v2; // ebx
  char v4; // al
  bool v6; // zf

  v2 = 0;
  if ( RegHandle )
  {
    v4 = dword_1C024A7F0;
    if ( !dword_1C024A7F0 )
      return EtwEventEnabled(RegHandle, EventDescriptor);
    if ( Source1 )
    {
      if ( RtlCompareMemory(Source1, &unk_1C02076D8, 0x10uLL) != 16 )
      {
        v6 = (dword_1C024A7F0 & 2) == 0;
        goto LABEL_10;
      }
      v4 = dword_1C024A7F0;
    }
    v6 = (v4 & 1) == 0;
LABEL_10:
    if ( !v6 )
      return v2;
    return EtwEventEnabled(RegHandle, EventDescriptor);
  }
  return v2;
}
