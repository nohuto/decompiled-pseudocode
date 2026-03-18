/*
 * XREFs of WinSqmEventEnabled @ 0x1C0061348
 * Callers:
 *     WinSqmEndSession @ 0x1C0060F98 (WinSqmEndSession.c)
 *     ?_WinSqmDWORDEvent@@YAXPEBU_EVENT_DESCRIPTOR@@PEAU_GUID@@KK@Z @ 0x1C00612C8 (-_WinSqmDWORDEvent@@YAXPEBU_EVENT_DESCRIPTOR@@PEAU_GUID@@KK@Z.c)
 *     WinSqmAddToStream @ 0x1C013E860 (WinSqmAddToStream.c)
 *     WinSqmAddToStreamEx @ 0x1C013EA50 (WinSqmAddToStreamEx.c)
 *     WinSqmSetString @ 0x1C013ED98 (WinSqmSetString.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall WinSqmEventEnabled(PCEVENT_DESCRIPTOR EventDescriptor, void *Source1)
{
  unsigned int v2; // ebx
  char v4; // al
  bool v6; // zf

  v2 = 0;
  if ( qword_1C024C800 )
  {
    v4 = dword_1C024C7F8;
    if ( !dword_1C024C7F8 )
      return EtwEventEnabled(qword_1C024C800, EventDescriptor);
    if ( Source1 )
    {
      if ( RtlCompareMemory(Source1, &unk_1C020ADC8, 0x10uLL) != 16 )
      {
        v6 = (dword_1C024C7F8 & 2) == 0;
        goto LABEL_10;
      }
      v4 = dword_1C024C7F8;
    }
    v6 = (v4 & 1) == 0;
LABEL_10:
    if ( !v6 )
      return v2;
    return EtwEventEnabled(qword_1C024C800, EventDescriptor);
  }
  return v2;
}
