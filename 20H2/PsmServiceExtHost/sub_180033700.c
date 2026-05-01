/*
 * XREFs of sub_180033700 @ 0x180033700
 * Callers:
 *     sub_1800252D0 @ 0x1800252D0 (sub_1800252D0.c)
 * Callees:
 *     memcmp @ 0x180046816 (memcmp.c)
 */

int __fastcall sub_180033700(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  int result; // eax
  unsigned int v5; // eax
  const void *v6; // rsi
  ULONG v7; // edi
  ULONG v8; // eax

  v2 = a2 + 96;
  result = wcsicmp((const wchar_t *)a1, (const wchar_t *)(a2 + 96));
  if ( !result )
  {
    v5 = *(_DWORD *)(a1 + 200);
    if ( v5 >= *(_DWORD *)(v2 + 200) )
    {
      if ( v5 > *(_DWORD *)(v2 + 200) )
        return 1;
      v6 = (const void *)(v2 + 132);
      v7 = RtlLengthSid((PSID)(v2 + 132));
      v8 = RtlLengthSid((PSID)(a1 + 132));
      if ( v8 >= v7 )
      {
        if ( v8 <= v7 )
          return memcmp((const void *)(a1 + 132), v6, v8);
        return 1;
      }
    }
    return -1;
  }
  return result;
}
