/*
 * XREFs of WerpCreateCrashDataSection @ 0x1800DDA84
 * Callers:
 *     RtlReportExceptionEx @ 0x1800DCB70 (RtlReportExceptionEx.c)
 *     RtlReportExceptionHelper @ 0x1800DD040 (RtlReportExceptionHelper.c)
 * Callees:
 *     NtClose @ 0x18009D820 (NtClose.c)
 *     ZwMapViewOfSection @ 0x18009DB40 (ZwMapViewOfSection.c)
 *     NtUnmapViewOfSection @ 0x18009DB80 (NtUnmapViewOfSection.c)
 *     NtCreateSection @ 0x18009DF80 (NtCreateSection.c)
 *     memset @ 0x1800A4780 (memset.c)
 */

__int64 __fastcall WerpCreateCrashDataSection(_QWORD *a1, _QWORD *a2)
{
  int Section; // ebx

  if ( a1 )
    *a1 = 0LL;
  if ( a2 )
    *a2 = 0LL;
  if ( a1 )
  {
    if ( a2 )
    {
      Section = NtCreateSection();
      if ( Section >= 0 )
      {
        Section = ZwMapViewOfSection();
        if ( Section >= 0 )
        {
          memset(0LL, 0, 0xF8uLL);
          *a1 = 0LL;
          Section = 0;
          *a2 = 0LL;
        }
      }
    }
    else
    {
      return (unsigned int)-1073741584;
    }
  }
  else
  {
    return (unsigned int)-1073741585;
  }
  return (unsigned int)Section;
}
