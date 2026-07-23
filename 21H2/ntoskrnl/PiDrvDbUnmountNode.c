/*
 * XREFs of PiDrvDbUnmountNode @ 0x1408B83D8
 * Callers:
 *     PiPnpRtlObjectActionCallback @ 0x14062B220 (PiPnpRtlObjectActionCallback.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14026A4C0 (RtlInitUnicodeString.c)
 *     PiDrvDbFindNode @ 0x1405103BC (PiDrvDbFindNode.c)
 */

__int64 __fastcall PiDrvDbUnmountNode(PCWSTR SourceString)
{
  int Node; // ecx
  int v2; // ecx
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF
  __int64 v5; // [rsp+48h] [rbp+10h] BYREF

  v5 = 0LL;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, SourceString);
  Node = PiDrvDbFindNode(&DestinationString, &v5);
  if ( Node >= 0 )
  {
    v2 = *(_DWORD *)(v5 + 64);
    if ( (v2 & 1) != 0 )
      return (unsigned int)-1073741790;
    else
      return (unsigned int)((v2 & 0x10) != 0 ? -1073741637 : -1073741790);
  }
  return (unsigned int)Node;
}
