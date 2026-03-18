/*
 * XREFs of CmpVEAddHiveToSIDMappingTable @ 0x1406EBEA4
 * Callers:
 *     CmpLoadKeyCommon @ 0x1402E1B78 (CmpLoadKeyCommon.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140206450 (RtlInitUnicodeString.c)
 *     CmpAddStringToMapping @ 0x1406EBF40 (CmpAddStringToMapping.c)
 */

__int64 __fastcall CmpVEAddHiveToSIDMappingTable(__int64 a1, __int64 a2)
{
  _WORD *v4; // r8
  unsigned __int16 MaximumLength; // ax
  unsigned __int16 Length; // cx
  __int64 result; // rax
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  v4 = (_WORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 16) + 8LL)
               + 2 * (((unsigned __int64)**(unsigned __int16 **)(a2 + 16) - 2) >> 1));
  if ( *v4 != 92 )
  {
    MaximumLength = DestinationString.MaximumLength;
    Length = DestinationString.Length;
    do
    {
      --v4;
      Length += 2;
      MaximumLength += 2;
    }
    while ( *v4 != 92 );
    DestinationString.MaximumLength = MaximumLength;
    DestinationString.Length = Length;
  }
  DestinationString.Buffer = v4 + 1;
  result = CmpAddStringToMapping(&DestinationString, a1);
  if ( (int)result >= 0 )
  {
    *(_DWORD *)(a1 + 4152) |= 2u;
    return 0LL;
  }
  return result;
}
