/*
 * XREFs of BiGetObjectIdentifier @ 0x1407723BC
 * Callers:
 *     BcdQueryObject @ 0x140770F24 (BcdQueryObject.c)
 *     BcdGetElementDataWithFlags @ 0x140771DE0 (BcdGetElementDataWithFlags.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140298F60 (RtlInitUnicodeString.c)
 *     RtlGUIDFromString @ 0x1405DD3D0 (RtlGUIDFromString.c)
 *     BiGetKeyName @ 0x140772420 (BiGetKeyName.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
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
