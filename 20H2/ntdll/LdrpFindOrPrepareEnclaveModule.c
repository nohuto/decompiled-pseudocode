/*
 * XREFs of LdrpFindOrPrepareEnclaveModule @ 0x1800CD7D0
 * Callers:
 *     LdrpLoadDependentModule @ 0x180017BE0 (LdrpLoadDependentModule.c)
 *     LdrpEnclaveAddDependentModule @ 0x1800CD5BC (LdrpEnclaveAddDependentModule.c)
 * Callees:
 *     RtlPrefixUnicodeString @ 0x180015F60 (RtlPrefixUnicodeString.c)
 *     RtlEqualUnicodeString @ 0x180020D10 (RtlEqualUnicodeString.c)
 *     LdrpCreatePendingEnclaveModule @ 0x1800CD254 (LdrpCreatePendingEnclaveModule.c)
 */

__int64 __fastcall LdrpFindOrPrepareEnclaveModule(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        int a4,
        __int64 a5,
        _QWORD *a6,
        __int64 a7)
{
  unsigned int v7; // edi
  const void **v9; // rsi
  char v11; // al
  const void **v12; // rcx
  _QWORD *i; // rbx

  v7 = 0;
  v9 = (const void **)a2;
  *a6 = 0LL;
  if ( (a4 & 0x20) != 0 )
  {
    if ( RtlEqualUnicodeString(word_18011E320, a2, 1) )
    {
      if ( a5 == a1[15] || a5 == a1[16] )
        v9 = (const void **)&unk_18011E360;
    }
    else
    {
      v11 = RtlPrefixUnicodeString(L"\b\n", (__int64)v9, 1);
      v12 = (const void **)&unk_18011E360;
      if ( !v11 )
        v12 = v9;
      v9 = v12;
    }
  }
  for ( i = (_QWORD *)a1[12]; ; i = (_QWORD *)*i )
  {
    if ( i == a1 + 12 )
      return (unsigned int)LdrpCreatePendingEnclaveModule(a1, v9, a4, 8, a3, a5, a6, a7);
    if ( RtlEqualUnicodeString((unsigned __int16 *)v9, i[22], 1) )
      break;
  }
  *a6 = i;
  return v7;
}
