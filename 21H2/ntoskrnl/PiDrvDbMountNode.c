/*
 * XREFs of PiDrvDbMountNode @ 0x1408B61D4
 * Callers:
 *     PiPnpRtlObjectActionCallback @ 0x14062B220 (PiPnpRtlObjectActionCallback.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14026A4C0 (RtlInitUnicodeString.c)
 *     PiDrvDbFindNode @ 0x1405103BC (PiDrvDbFindNode.c)
 *     RtlFreeAnsiString @ 0x14063DA40 (RtlFreeAnsiString.c)
 */

__int64 __fastcall PiDrvDbMountNode(PCWSTR SourceString)
{
  unsigned int v2; // ebx
  UNICODE_STRING String2; // [rsp+20h] [rbp-30h] BYREF
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-20h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+40h] [rbp-10h] BYREF
  __int64 v7; // [rsp+68h] [rbp+18h] BYREF

  v7 = 0LL;
  String2 = 0LL;
  DestinationString = 0LL;
  UnicodeString = 0LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  RtlInitUnicodeString(&UnicodeString, 0LL);
  RtlInitUnicodeString(&String2, SourceString);
  if ( (int)PiDrvDbFindNode(&String2, &v7) < 0 )
    v2 = -1073741637;
  else
    v2 = (*(_DWORD *)(v7 + 64) & 1) != 0 ? -1073741790 : 0x40000000;
  RtlFreeAnsiString(&DestinationString);
  RtlFreeAnsiString(&UnicodeString);
  return v2;
}
