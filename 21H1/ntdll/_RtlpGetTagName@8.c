/*
 * XREFs of _RtlpGetTagName@8 @ 0x4B35809A
 * Callers:
 *     _RtlDebugAllocateHeap@12 @ 0x4B35EF05 (_RtlDebugAllocateHeap@12.c)
 *     _RtlDebugFreeHeap@12 @ 0x4B35F758 (_RtlDebugFreeHeap@12.c)
 *     _RtlDebugReAllocateHeap@16 @ 0x4B35FC56 (_RtlDebugReAllocateHeap@16.c)
 * Callees:
 *     _RtlStringCbPrintfW @ 0x4B33765B (_RtlStringCbPrintfW.c)
 */

wchar_t *__fastcall RtlpGetTagName(int a1, unsigned __int16 a2)
{
  int v2; // edx
  int v4; // ecx

  if ( !RtlpGlobalTagHeap || !a2 )
    return 0;
  if ( (a2 & 0x8000u) == 0 )
  {
    if ( (a2 & 0x800) != 0 )
    {
      a2 &= ~0x800u;
      if ( a2 < *(_WORD *)(RtlpGlobalTagHeap + 132) )
      {
        v4 = *(_DWORD *)(RtlpGlobalTagHeap + 136);
        goto LABEL_16;
      }
    }
    else if ( a2 < *(_WORD *)(a1 + 132) )
    {
      v4 = *(_DWORD *)(a1 + 136);
LABEL_16:
      if ( v4 )
        return (wchar_t *)(v4 + (a2 << 6) + 16);
    }
    return 0;
  }
  v2 = a2 & 0x7FFF;
  if ( (unsigned __int16)v2 >= 0x81u || !*(_DWORD *)(a1 + 188) )
    return 0;
  if ( (_WORD)v2 )
  {
    if ( (unsigned __int16)v2 >= 0x80u )
      RtlStringCbPrintfW(&Buffer, 0x30u, (wchar_t *)L"VirtualAlloc");
    else
      RtlStringCbPrintfW(&Buffer, 0x30u, (wchar_t *)L"Objects=%4u", 8 * v2);
  }
  else
  {
    RtlStringCbPrintfW(&Buffer, 0x30u, L"Objects>%4u", 1024);
  }
  return &Buffer;
}
