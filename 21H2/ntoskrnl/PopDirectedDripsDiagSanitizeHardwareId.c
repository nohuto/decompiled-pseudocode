/*
 * XREFs of PopDirectedDripsDiagSanitizeHardwareId @ 0x1408F80C4
 * Callers:
 *     PopDirectedDripsDiagRundownDevices @ 0x1408F7924 (PopDirectedDripsDiagRundownDevices.c)
 * Callees:
 *     RtlPrefixUnicodeString @ 0x1406DD340 (RtlPrefixUnicodeString.c)
 */

const UNICODE_STRING *__fastcall PopDirectedDripsDiagSanitizeHardwareId(unsigned __int16 *a1)
{
  __int64 v1; // rdx
  unsigned int v2; // ebx
  unsigned __int16 *v3; // rsi
  __int64 v4; // r14
  unsigned int i; // edi
  UNICODE_STRING String2; // [rsp+20h] [rbp-18h] BYREF

  v1 = 0LL;
  v2 = *a1 >> 1;
  v3 = a1;
  String2 = 0LL;
  if ( v2 )
  {
    v4 = *((_QWORD *)a1 + 1);
    while ( 1 )
    {
      for ( i = v1; i < v2; ++i )
      {
        if ( *(_WORD *)(v4 + 2LL * i) == 44 )
          break;
      }
      String2.Buffer = (wchar_t *)(v4 + 2 * v1);
      String2.Length = 2 * (i - v1);
      String2.MaximumLength = String2.Length;
      if ( RtlPrefixUnicodeString(&PopBthEnumEnumeratorPrefix, &String2, 1u) )
        break;
      v1 = i + 1;
      if ( (unsigned int)v1 >= v2 )
        return (const UNICODE_STRING *)v3;
    }
    return &PopBthEnumEnumeratorPrefix;
  }
  return (const UNICODE_STRING *)v3;
}
