/*
 * XREFs of DrvDbFindDatabaseNode @ 0x1406C2248
 * Callers:
 *     DrvDbGetDriverDatabaseMappedProperty @ 0x1406C1FDC (DrvDbGetDriverDatabaseMappedProperty.c)
 *     DrvDbGetObjectDatabaseNode @ 0x140784454 (DrvDbGetObjectDatabaseNode.c)
 *     DrvDbDispatchDriverDatabase @ 0x140788A80 (DrvDbDispatchDriverDatabase.c)
 *     DrvDbSetDriverDatabaseMappedProperty @ 0x14081D0F0 (DrvDbSetDriverDatabaseMappedProperty.c)
 *     DrvDbSuspendDatabase @ 0x1408265D0 (DrvDbSuspendDatabase.c)
 *     DrvDbRegisterDatabase @ 0x1408273E0 (DrvDbRegisterDatabase.c)
 *     DrvDbOpenDriverDatabaseRegKey @ 0x140859460 (DrvDbOpenDriverDatabaseRegKey.c)
 *     DrvDbGetDriverDatabaseMappedPropertyKeys @ 0x140A2E2C4 (DrvDbGetDriverDatabaseMappedPropertyKeys.c)
 *     DrvDbUnregisterDatabase @ 0x140A304B4 (DrvDbUnregisterDatabase.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x1402DFB70 (RtlInitUnicodeStringEx.c)
 *     RtlEqualUnicodeString @ 0x1407CD6A0 (RtlEqualUnicodeString.c)
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
