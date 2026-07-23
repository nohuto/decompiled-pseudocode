/*
 * XREFs of PipDeleteBindingId @ 0x14089DD34
 * Callers:
 *     IoResolveDependency @ 0x1403BF8D0 (IoResolveDependency.c)
 * Callees:
 *     RtlEqualUnicodeString @ 0x1406F0B70 (RtlEqualUnicodeString.c)
 *     PipFreeBindingId @ 0x1407CD934 (PipFreeBindingId.c)
 */

__int64 __fastcall PipDeleteBindingId(__int64 a1, const UNICODE_STRING *a2)
{
  __int64 v2; // rsi
  UNICODE_STRING *v4; // rbx
  unsigned int v5; // ebp
  __int64 v6; // rdi
  wchar_t *Buffer; // rax

  v2 = a1 + 56;
  v4 = *(UNICODE_STRING **)(a1 + 56);
  v5 = -1073741275;
  if ( v4 != (UNICODE_STRING *)(a1 + 56) )
  {
    while ( 1 )
    {
      v6 = *(_QWORD *)&v4->Length;
      if ( RtlEqualUnicodeString(v4 + 1, a2, 0) )
        break;
      v4 = (UNICODE_STRING *)v6;
      if ( v6 == v2 )
        return v5;
    }
    if ( *(UNICODE_STRING **)(v6 + 8) != v4 || (Buffer = v4->Buffer, *(UNICODE_STRING **)Buffer != v4) )
      __fastfail(3u);
    *(_QWORD *)Buffer = v6;
    *(_QWORD *)(v6 + 8) = Buffer;
    PipFreeBindingId(v4);
    return 0;
  }
  return v5;
}
