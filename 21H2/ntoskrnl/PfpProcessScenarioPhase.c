/*
 * XREFs of PfpProcessScenarioPhase @ 0x14081BB14
 * Callers:
 *     PfSetSuperfetchInformation @ 0x1406AD6BC (PfSetSuperfetchInformation.c)
 *     PfSnSetPrefetcherInformation @ 0x1407D7634 (PfSnSetPrefetcherInformation.c)
 * Callees:
 *     PsGetCurrentProcessSessionId @ 0x140287F00 (PsGetCurrentProcessSessionId.c)
 *     MmGetNextSession @ 0x1402A1770 (MmGetNextSession.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     RtlGetActiveConsoleId @ 0x1402DEB60 (RtlGetActiveConsoleId.c)
 *     PfpLogScenarioEvent @ 0x140986F94 (PfpLogScenarioEvent.c)
 *     PfPowerActionNotify @ 0x140A49250 (PfPowerActionNotify.c)
 *     PfpScenCtxScenarioSet @ 0x140A540E0 (PfpScenCtxScenarioSet.c)
 *     PfpScenCtxPrefetchWait @ 0x140A6AACC (PfpScenCtxPrefetchWait.c)
 */

__int64 __fastcall PfpProcessScenarioPhase(_DWORD *a1, char a2)
{
  int v3; // ecx
  unsigned int v4; // edi
  int v6; // ecx
  int ActiveConsoleId; // ebx
  int v8; // ecx
  int v9; // ebx
  unsigned int v10; // ebx
  void *v11; // rcx
  void *NextSession; // rax

  if ( *a1 != 4 )
    return (unsigned int)-1073741811;
  v3 = a1[1];
  if ( (unsigned int)(v3 - 1) > 4 )
    return (unsigned int)-1073741701;
  if ( v3 <= 2 )
    goto LABEL_4;
  if ( v3 != 3 )
  {
    if ( v3 == 4 )
    {
      v6 = a1[2];
      v4 = 0;
      if ( v6 )
      {
        if ( v6 == 1 )
        {
          ActiveConsoleId = RtlGetActiveConsoleId();
          if ( (unsigned int)PsGetCurrentProcessSessionId() == ActiveConsoleId )
          {
            PfpScenCtxScenarioSet((ULONG_PTR)&qword_140C54520);
            if ( dword_140C4EB78 < (unsigned int)dword_140C4EB7C )
              PfpLogScenarioEvent(5, 2, 3, dword_140C54554, 1);
          }
        }
        return v4;
      }
LABEL_16:
      PfpScenCtxScenarioSet((ULONG_PTR)&qword_140C54520);
      return v4;
    }
    if ( v3 == 5 )
    {
LABEL_4:
      v4 = 0;
      if ( a2 )
        return (unsigned int)-1073741790;
      else
        PfPowerActionNotify((unsigned int)a1[2]);
      return v4;
    }
    return (unsigned int)-1073741811;
  }
  v8 = a1[2];
  v4 = 0;
  if ( v8 )
  {
    if ( v8 != 1 || dword_140C54550 != 3 )
      return v4;
    PfpScenCtxPrefetchWait((ULONG_PTR)&qword_140C54520);
    PfpLogScenarioEvent(3, 0, 0, dword_140C54554, 0);
    goto LABEL_16;
  }
  v9 = RtlGetActiveConsoleId();
  if ( (unsigned int)PsGetCurrentProcessSessionId() == v9 && dword_140C4EB78 < (unsigned int)dword_140C4EB7C )
  {
    v10 = 0;
    v11 = 0LL;
    while ( 1 )
    {
      NextSession = (void *)MmGetNextSession(v11);
      if ( !NextSession )
        break;
      ++v10;
      v11 = NextSession;
      if ( v10 >= 3 )
      {
        ObfDereferenceObject(NextSession);
        goto LABEL_16;
      }
    }
  }
  return v4;
}
