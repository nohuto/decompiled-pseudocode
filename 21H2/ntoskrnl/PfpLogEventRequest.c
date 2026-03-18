/*
 * XREFs of PfpLogEventRequest @ 0x140986E88
 * Callers:
 *     PfSetSuperfetchInformation @ 0x1406AD6BC (PfSetSuperfetchInformation.c)
 * Callees:
 *     PfLogEvent @ 0x14036044C (PfLogEvent.c)
 *     MmGetDefaultPagePriority @ 0x140360698 (MmGetDefaultPagePriority.c)
 *     MmIssueMemoryListCommand @ 0x140862398 (MmIssueMemoryListCommand.c)
 *     PfGenerateTrace @ 0x140988074 (PfGenerateTrace.c)
 *     PfTSetTracingPriority @ 0x140A6AD80 (PfTSetTracingPriority.c)
 */

__int64 __fastcall PfpLogEventRequest(int *a1)
{
  __int64 v2; // rcx
  __int64 DefaultPagePriority; // rcx
  unsigned int v4; // ecx
  int v5; // edi
  int v7; // [rsp+30h] [rbp+8h] BYREF

  if ( (*a1 & 0x1Fu) - 2 <= 1 )
  {
    v2 = *((_QWORD *)a1 + 1);
    *(_OWORD *)v2 = xmmword_140C4EC70;
    *(_QWORD *)(v2 + 16) = unk_140C4EC80;
    if ( (*a1 & 0x1F) == 2 )
      DefaultPagePriority = (*(_DWORD *)(v2 + 24) >> 5) & 7;
    else
      DefaultPagePriority = (unsigned int)MmGetDefaultPagePriority();
    PfTSetTracingPriority(DefaultPagePriority);
  }
  if ( (*(_BYTE *)a1 & 0x1F) == 0x1B && (*(_DWORD *)(*((_QWORD *)a1 + 1) + 8LL) & 3) == 1 )
    _InterlockedAnd(&dword_140CF5E54, 0xFFFFFFFE);
  v4 = *a1;
  v5 = dword_140C5451C
     + ((((MEMORY[0xFFFFF78000000004] * HIDWORD(MEMORY[0xFFFFF78000000320])) << 8)
       + ((MEMORY[0xFFFFF78000000004] * (unsigned __int64)MEMORY[0xFFFFF78000000320]) >> 24)) >> 10);
  if ( (*a1 & 0x20) != 0 )
  {
    v7 = ((unsigned int)*a1 >> 6) & 1;
    MmIssueMemoryListCommand((unsigned int *)&v7, 4u, 0);
    PfGenerateTrace(&Thread, 0LL);
    v4 = *a1;
  }
  return PfLogEvent(v4 & 0x1F, v5, *((const void **)a1 + 1), v4 >> 7);
}
