/*
 * XREFs of EtwpGenerateFileName @ 0x14060A1EC
 * Callers:
 *     EtwpFlushBufferToLogfile @ 0x14060A094 (EtwpFlushBufferToLogfile.c)
 *     EtwpStartLogger @ 0x1406B5480 (EtwpStartLogger.c)
 *     EtwpIncrementTraceFile @ 0x140934DB4 (EtwpIncrementTraceFile.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14026A4C0 (RtlInitUnicodeString.c)
 *     RtlStringCbPrintfW @ 0x14026CAF0 (RtlStringCbPrintfW.c)
 *     memcmp @ 0x1403D2B50 (memcmp.c)
 *     wcschr @ 0x1403D4080 (wcschr.c)
 *     wcsrchr @ 0x1403D4270 (wcsrchr.c)
 *     wcsstr @ 0x1403D4300 (wcsstr.c)
 *     RtlFreeAnsiString @ 0x14063DA40 (RtlFreeAnsiString.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall EtwpGenerateFileName(unsigned __int16 *a1, volatile signed __int32 *a2, UNICODE_STRING *a3)
{
  const wchar_t *v5; // rcx
  wchar_t *v7; // rdi
  signed __int32 v8; // ebp
  __int64 v9; // r14
  unsigned __int32 v10; // ebp
  wchar_t *PoolWithTag; // rax
  WCHAR *v12; // rdi

  v5 = (const wchar_t *)*((_QWORD *)a1 + 1);
  if ( !v5 )
    return 3221225520LL;
  v7 = wcschr(v5, 0x25u);
  if ( v7 && v7 == wcsrchr(*((const wchar_t **)a1 + 1), 0x25u) && wcsstr(*((const wchar_t **)a1 + 1), L"%d") )
  {
    v8 = _InterlockedExchangeAdd(a2, 1u);
    v9 = a1[1];
    v10 = v8 + 1;
    PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v9 + 64, 0x50777445u);
    v12 = PoolWithTag;
    if ( !PoolWithTag )
      return 3221225495LL;
    if ( !RtlStringCbPrintfW(PoolWithTag, v9 + 64, *((NTSTRSAFE_PCWSTR *)a1 + 1), v10)
      && memcmp(*((const void **)a1 + 1), v12, *a1) )
    {
      RtlFreeAnsiString(a3);
      RtlInitUnicodeString(a3, v12);
      return 0LL;
    }
    ExFreePoolWithTag(v12, 0);
    return 3221225520LL;
  }
  return 3221225523LL;
}
