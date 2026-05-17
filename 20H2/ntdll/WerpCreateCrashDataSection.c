/*
 * XREFs of WerpCreateCrashDataSection @ 0x1800DDCD4
 * Callers:
 *     RtlReportExceptionEx @ 0x1800DCDC0 (RtlReportExceptionEx.c)
 *     RtlReportExceptionHelper @ 0x1800DD290 (RtlReportExceptionHelper.c)
 * Callees:
 *     NtClose @ 0x18009D290 (NtClose.c)
 *     ZwMapViewOfSection @ 0x18009D5B0 (ZwMapViewOfSection.c)
 *     NtUnmapViewOfSection @ 0x18009D5F0 (NtUnmapViewOfSection.c)
 *     NtCreateSection @ 0x18009D9F0 (NtCreateSection.c)
 *     memset @ 0x1800A4180 (memset.c)
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
