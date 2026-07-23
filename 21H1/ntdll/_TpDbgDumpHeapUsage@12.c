/*
 * XREFs of _TpDbgDumpHeapUsage@12 @ 0x4B384700
 * Callers:
 *     <none>
 * Callees:
 *     _RtlpHpAppCompatDontChangePolicy@0 @ 0x4B2ED850 (_RtlpHpAppCompatDontChangePolicy@0.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     _RtlQueryTagHeap@20 @ 0x4B356E90 (_RtlQueryTagHeap@20.c)
 */

PWSTR __stdcall TpDbgDumpHeapUsage(
        BOOLEAN a1,
        int (__thiscall *a2)(_DWORD, int, unsigned int, PWSTR, ULONG, ULONG, _DWORD),
        int a3)
{
  unsigned int i; // esi
  PWSTR result; // eax
  _RTL_HEAP_TAG_INFO TagInfo; // [esp+10h] [ebp-10h] BYREF

  for ( i = 0; i < 0xE; ++i )
  {
    result = RtlQueryTagHeap(NtCurrentPeb()->ProcessHeap, 0, i + (TppHeapTag >> 18), a1, &TagInfo);
    if ( result )
      result = (PWSTR)a2(
                        a2,
                        a3,
                        i + TppHeapTag,
                        result,
                        TagInfo.NumberOfAllocations,
                        TagInfo.NumberOfFrees,
                        TagInfo.BytesAllocated);
  }
  return result;
}
