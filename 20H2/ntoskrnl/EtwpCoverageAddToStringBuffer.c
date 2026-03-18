/*
 * XREFs of EtwpCoverageAddToStringBuffer @ 0x140327518
 * Callers:
 *     EtwTelemetryCoverageReport @ 0x1403272E0 (EtwTelemetryCoverageReport.c)
 *     EtwpCoverageRecord @ 0x1406D72E4 (EtwpCoverageRecord.c)
 * Callees:
 *     RtlStringCchCopyA @ 0x140327564 (RtlStringCchCopyA.c)
 */

__int64 __fastcall EtwpCoverageAddToStringBuffer(__int64 a1, const char *a2, int a3)
{
  size_t v4; // rdi
  char *v5; // rcx
  size_t v7; // rdx

  v4 = (unsigned int)(a3 + 1);
  v5 = *(char **)(a1 + 24);
  v7 = *(_QWORD *)(a1 + 16) - (_QWORD)v5;
  if ( v7 < v4 )
    return 0LL;
  RtlStringCchCopyA(v5, v7, a2);
  *(_QWORD *)(a1 + 24) += v4;
  return 1LL;
}
