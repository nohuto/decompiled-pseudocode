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
        _UNICODE_STRING *a2,
        __int64 a3,
        int a4,
        __int64 a5,
        __int64 ***a6,
        __int64 a7)
{
  unsigned int v7; // edi
  _UNICODE_STRING *v9; // rsi
  BOOLEAN v11; // al
  _UNICODE_STRING *v12; // rcx
  __int64 **i; // rbx

  v7 = 0;
  v9 = a2;
  *a6 = 0LL;
  if ( (a4 & 0x20) != 0 )
  {
    if ( RtlEqualUnicodeString((PUNICODE_STRING)&stru_18011E320, a2, 1u) )
    {
      if ( a5 == a1[15] || a5 == a1[16] )
        v9 = (_UNICODE_STRING *)&unk_18011E360;
    }
    else
    {
      v11 = RtlPrefixUnicodeString((PUNICODE_STRING)&stru_18011E330, v9, 1u);
      v12 = (_UNICODE_STRING *)&unk_18011E360;
      if ( !v11 )
        v12 = v9;
      v9 = v12;
    }
  }
  for ( i = (__int64 **)a1[12]; ; i = (__int64 **)*i )
  {
    if ( i == a1 + 12 )
      return (unsigned int)LdrpCreatePendingEnclaveModule(a1, (const void **)v9, a4, 8, a3, a5, a6, a7);
    if ( RtlEqualUnicodeString(v9, (PUNICODE_STRING)i[22], 1u) )
      break;
  }
  *a6 = i;
  return v7;
}
