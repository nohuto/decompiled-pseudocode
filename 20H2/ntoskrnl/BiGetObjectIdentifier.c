/*
 * XREFs of BiGetObjectIdentifier @ 0x1407809BC
 * Callers:
 *     BcdQueryObject @ 0x14077F524 (BcdQueryObject.c)
 *     BcdGetElementDataWithFlags @ 0x1407803E0 (BcdGetElementDataWithFlags.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140210D50 (RtlInitUnicodeString.c)
 *     RtlGUIDFromString @ 0x1406409E0 (RtlGUIDFromString.c)
 *     BiGetKeyName @ 0x140780A20 (BiGetKeyName.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall BiGetObjectIdentifier(__int64 a1, GUID *a2)
{
  __int64 result; // rax
  unsigned int v4; // ebx
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF
  PCWSTR SourceString; // [rsp+50h] [rbp+18h] BYREF

  SourceString = 0LL;
  DestinationString = 0LL;
  result = BiGetKeyName(a1, &SourceString);
  if ( (int)result >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, SourceString);
    v4 = RtlGUIDFromString(&DestinationString, a2);
    ExFreePoolWithTag((PVOID)SourceString, 0x4B444342u);
    return v4;
  }
  return result;
}
