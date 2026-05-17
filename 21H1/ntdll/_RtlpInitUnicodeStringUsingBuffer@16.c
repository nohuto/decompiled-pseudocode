/*
 * XREFs of _RtlpInitUnicodeStringUsingBuffer@16 @ 0x4B2D5B73
 * Callers:
 *     _RtlGetParentLocaleName@16 @ 0x4B2D41A0 (_RtlGetParentLocaleName@16.c)
 *     _RtlLcidToLocaleName@16 @ 0x4B2D5A10 (_RtlLcidToLocaleName@16.c)
 *     _RtlpGetCustomCultureDataFromFile@20 @ 0x4B363239 (_RtlpGetCustomCultureDataFromFile@20.c)
 * Callees:
 *     _RtlCreateUnicodeString@8 @ 0x4B2D40C0 (_RtlCreateUnicodeString@8.c)
 *     _memcpy @ 0x4B2F88B0 (_memcpy.c)
 */

int __fastcall RtlpInitUnicodeStringUsingBuffer(char a1, const unsigned __int16 *a2, unsigned int a3, int a4)
{
  if ( a1 )
  {
    if ( RtlCreateUnicodeString(a4, a2) )
      return 0;
    return -1073741801;
  }
  else
  {
    if ( a3 < 0x55 && *(unsigned __int16 *)(a4 + 2) > 2 * a3 )
    {
      memcpy(*(void **)(a4 + 4), a2, (unsigned __int16)(2 * a3));
      *(_WORD *)(2 * a3 + *(_DWORD *)(a4 + 4)) = 0;
      *(_WORD *)a4 = 2 * a3;
      return 0;
    }
    return -1073741789;
  }
}
