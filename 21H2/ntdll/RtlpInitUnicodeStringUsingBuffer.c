/*
 * XREFs of RtlpInitUnicodeStringUsingBuffer @ 0x18003B458
 * Callers:
 *     RtlLcidToLocaleName @ 0x18003B2F0 (RtlLcidToLocaleName.c)
 *     RtlGetParentLocaleName @ 0x18003C490 (RtlGetParentLocaleName.c)
 *     RtlpGetCustomCultureDataFromFile @ 0x1800FD238 (RtlpGetCustomCultureDataFromFile.c)
 * Callees:
 *     RtlCreateUnicodeString @ 0x180038AF0 (RtlCreateUnicodeString.c)
 *     memmove @ 0x1800A44C0 (memmove.c)
 */

__int64 __fastcall RtlpInitUnicodeStringUsingBuffer(char a1, _WORD *a2, unsigned int a3, __int64 a4)
{
  unsigned __int64 v5; // rsi
  __int16 v6; // bx

  if ( a1 )
  {
    if ( RtlCreateUnicodeString(a4, a2) )
      return 0LL;
    return 3221225495LL;
  }
  else
  {
    if ( a3 < 0x55 )
    {
      v5 = 2LL * a3;
      if ( *(unsigned __int16 *)(a4 + 2) > v5 )
      {
        v6 = 2 * a3;
        memmove(*(void **)(a4 + 8), a2, (unsigned __int16)(2 * a3));
        *(_WORD *)(v5 + *(_QWORD *)(a4 + 8)) = 0;
        *(_WORD *)a4 = v6;
        return 0LL;
      }
    }
    return 3221225507LL;
  }
}
