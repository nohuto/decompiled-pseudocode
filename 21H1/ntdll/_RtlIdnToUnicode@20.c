/*
 * XREFs of _RtlIdnToUnicode@20 @ 0x4B365300
 * Callers:
 *     _RtlCanonicalizeDomainName@12 @ 0x4B34D8C0 (_RtlCanonicalizeDomainName@12.c)
 * Callees:
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 *     _RtlpIdnToUnicodeWorker@28 @ 0x4B36535D (_RtlpIdnToUnicodeWorker@28.c)
 */

NTSTATUS __cdecl RtlIdnToUnicode(
        ULONG Flags,
        PCWSTR SourceString,
        LONG SourceStringLength,
        PWSTR DestinationString,
        PLONG DestinationStringLength)
{
  const WCHAR *Heap; // eax
  int v6; // ecx
  WCHAR *v7; // edi
  NTSTATUS v9; // esi
  SIZE_T v10; // [esp-4h] [ebp-10h]

  LODWORD(v10) = 1022;
  Heap = (const WCHAR *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, v10);
  v7 = (WCHAR *)Heap;
  if ( !Heap )
    return -1073741801;
  v9 = RtlpIdnToUnicodeWorker(SourceStringLength, DestinationString, (int)DestinationStringLength, Heap, v6);
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v7);
  return v9;
}
