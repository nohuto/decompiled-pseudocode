/*
 * XREFs of PfpLogEventRequest @ 0x1407640CC
 * Callers:
 *     PfSetSuperfetchInformation @ 0x1406A9D30 (PfSetSuperfetchInformation.c)
 * Callees:
 *     PfLogEvent @ 0x14026C1B8 (PfLogEvent.c)
 *     MmGetDefaultPagePriority @ 0x1402FE7D4 (MmGetDefaultPagePriority.c)
 *     PfGenerateTrace @ 0x1407642B4 (PfGenerateTrace.c)
 *     MmIssueMemoryListCommand @ 0x14077AB44 (MmIssueMemoryListCommand.c)
 *     PfTSetTracingPriority @ 0x1409ADFBC (PfTSetTracingPriority.c)
 */

__int64 __fastcall PfpLogEventRequest(int *a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v5; // ecx
  int v6; // edi
  __int64 v8; // rcx
  __int64 DefaultPagePriority; // rcx
  int v10; // [rsp+30h] [rbp+8h] BYREF

  if ( (*a1 & 0x1Fu) - 2 <= 1 )
  {
    v8 = *((_QWORD *)a1 + 1);
    *(_OWORD *)v8 = xmmword_140C4FCD0;
    *(_QWORD *)(v8 + 16) = unk_140C4FCE0;
    if ( (*a1 & 0x1F) == 2 )
      DefaultPagePriority = (*(_DWORD *)(v8 + 24) >> 5) & 7;
    else
      DefaultPagePriority = (unsigned int)MmGetDefaultPagePriority();
    PfTSetTracingPriority(DefaultPagePriority);
  }
  if ( (*(_BYTE *)a1 & 0x1F) == 0x1B && (*(_DWORD *)(*((_QWORD *)a1 + 1) + 8LL) & 3) == 1 )
    _InterlockedAnd(&dword_140CEBF94, 0xFFFFFFFE);
  v5 = *a1;
  v6 = dword_140C500DC
     + ((((MEMORY[0xFFFFF78000000004] * HIDWORD(MEMORY[0xFFFFF78000000320])) << 8)
       + ((MEMORY[0xFFFFF78000000004] * (unsigned __int64)MEMORY[0xFFFFF78000000320]) >> 24)) >> 10);
  if ( (*a1 & 0x20) != 0 )
  {
    v10 = ((unsigned int)*a1 >> 6) & 1;
    MmIssueMemoryListCommand(&v10, 4LL, 0LL, a4);
    PfGenerateTrace(&Thread, 0LL);
    v5 = *a1;
  }
  return PfLogEvent(v5 & 0x1F, v6, *((const void **)a1 + 1), v5 >> 7);
}
