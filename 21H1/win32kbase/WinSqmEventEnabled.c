/*
 * XREFs of WinSqmEventEnabled @ 0x1C0054728
 * Callers:
 *     WinSqmEndSession @ 0x1C005437C (WinSqmEndSession.c)
 *     ?_WinSqmDWORDEvent@@YAXPEBU_EVENT_DESCRIPTOR@@PEAU_GUID@@KK@Z @ 0x1C00546A8 (-_WinSqmDWORDEvent@@YAXPEBU_EVENT_DESCRIPTOR@@PEAU_GUID@@KK@Z.c)
 *     WinSqmAddToStream @ 0x1C0144BB0 (WinSqmAddToStream.c)
 *     WinSqmAddToStreamEx @ 0x1C0144DA0 (WinSqmAddToStreamEx.c)
 *     WinSqmSetString @ 0x1C01450E8 (WinSqmSetString.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall WinSqmEventEnabled(PCEVENT_DESCRIPTOR EventDescriptor, void *Source1)
{
  unsigned int v2; // ebx
  char v4; // al
  bool v6; // zf

  v2 = 0;
  if ( qword_1C0252818 )
  {
    v4 = dword_1C0252810;
    if ( !dword_1C0252810 )
      return EtwEventEnabled(qword_1C0252818, EventDescriptor);
    if ( Source1 )
    {
      if ( RtlCompareMemory(Source1, &unk_1C0210E80, 0x10uLL) != 16 )
      {
        v6 = (dword_1C0252810 & 2) == 0;
        goto LABEL_10;
      }
      v4 = dword_1C0252810;
    }
    v6 = (v4 & 1) == 0;
LABEL_10:
    if ( !v6 )
      return v2;
    return EtwEventEnabled(qword_1C0252818, EventDescriptor);
  }
  return v2;
}
