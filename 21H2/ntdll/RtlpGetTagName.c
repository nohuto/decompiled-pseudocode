/*
 * XREFs of RtlpGetTagName @ 0x1800F4038
 * Callers:
 *     RtlDebugAllocateHeap @ 0x1800F89A0 (RtlDebugAllocateHeap.c)
 *     RtlDebugFreeHeap @ 0x1800F93AC (RtlDebugFreeHeap.c)
 *     RtlDebugReAllocateHeap @ 0x1800F9990 (RtlDebugReAllocateHeap.c)
 * Callees:
 *     RtlStringCbPrintfW @ 0x1800D8680 (RtlStringCbPrintfW.c)
 */

wchar_t *__fastcall RtlpGetTagName(__int64 a1, unsigned __int16 a2)
{
  unsigned __int16 v2; // dx
  __int64 v4; // r8

  if ( !RtlpGlobalTagHeap || !a2 )
    return 0LL;
  if ( (a2 & 0x8000u) == 0 )
  {
    if ( (a2 & 0x800) != 0 )
    {
      a2 &= ~0x800u;
      if ( a2 < *(_WORD *)(RtlpGlobalTagHeap + 224) )
      {
        v4 = *(_QWORD *)(RtlpGlobalTagHeap + 232);
        goto LABEL_16;
      }
    }
    else if ( a2 < *(_WORD *)(a1 + 224) )
    {
      v4 = *(_QWORD *)(a1 + 232);
LABEL_16:
      if ( v4 )
        return (wchar_t *)(v4 + 20 + 72LL * a2);
    }
    return 0LL;
  }
  v2 = a2 & 0x7FFF;
  if ( v2 >= 0x81u || !*(_QWORD *)(a1 + 328) )
    return 0LL;
  if ( v2 )
  {
    if ( v2 >= 0x80u )
      RtlStringCbPrintfW(&Buffer, 0x30uLL, L"VirtualAlloc", 0LL);
    else
      RtlStringCbPrintfW(&Buffer, 0x30uLL, L"Objects=%4u", 16 * (unsigned int)v2);
  }
  else
  {
    RtlStringCbPrintfW(&Buffer, 0x30uLL, L"Objects>%4u", 2048LL);
  }
  return &Buffer;
}
