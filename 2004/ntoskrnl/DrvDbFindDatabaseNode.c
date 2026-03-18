/*
 * XREFs of DrvDbFindDatabaseNode @ 0x1406C5084
 * Callers:
 *     DrvDbDispatchDriverDatabase @ 0x1406C38D0 (DrvDbDispatchDriverDatabase.c)
 *     DrvDbGetObjectDatabaseNode @ 0x1406C421C (DrvDbGetObjectDatabaseNode.c)
 *     DrvDbSetDriverDatabaseMappedProperty @ 0x14071C518 (DrvDbSetDriverDatabaseMappedProperty.c)
 *     DrvDbGetDriverDatabaseMappedProperty @ 0x14073DB1C (DrvDbGetDriverDatabaseMappedProperty.c)
 *     DrvDbOpenDriverDatabaseRegKey @ 0x14073DCF0 (DrvDbOpenDriverDatabaseRegKey.c)
 *     DrvDbSuspendDatabase @ 0x14078CB7C (DrvDbSuspendDatabase.c)
 *     DrvDbRegisterDatabase @ 0x14078D570 (DrvDbRegisterDatabase.c)
 *     DrvDbGetDriverDatabaseMappedPropertyKeys @ 0x140979EB4 (DrvDbGetDriverDatabaseMappedPropertyKeys.c)
 *     DrvDbUnregisterDatabase @ 0x14097B320 (DrvDbUnregisterDatabase.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140202C20 (RtlInitUnicodeStringEx.c)
 *     RtlEqualUnicodeString @ 0x140681E80 (RtlEqualUnicodeString.c)
 */

__int64 __fastcall DrvDbFindDatabaseNode(__int64 a1, const WCHAR *a2, const UNICODE_STRING **a3)
{
  NTSTATUS inited; // edi
  const UNICODE_STRING **v6; // rsi
  const UNICODE_STRING *i; // rbx
  UNICODE_STRING String2; // [rsp+20h] [rbp-18h] BYREF

  *a3 = 0LL;
  String2 = 0LL;
  inited = RtlInitUnicodeStringEx(&String2, a2);
  if ( inited >= 0 )
  {
    v6 = (const UNICODE_STRING **)(a1 + 16);
    inited = -1073741772;
    for ( i = *v6; i != (const UNICODE_STRING *)v6; i = *(const UNICODE_STRING **)&i->Length )
    {
      if ( RtlEqualUnicodeString(i + 1, &String2, 1u) )
      {
        inited = 0;
        *a3 = i;
        return (unsigned int)inited;
      }
    }
  }
  return (unsigned int)inited;
}
