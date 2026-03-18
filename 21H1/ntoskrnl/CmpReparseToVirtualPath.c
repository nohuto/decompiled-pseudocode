/*
 * XREFs of CmpReparseToVirtualPath @ 0x1406D0328
 * Callers:
 *     CmKeyBodyRemapToVirtualForEnum @ 0x1405EACD0 (CmKeyBodyRemapToVirtualForEnum.c)
 *     CmKeyBodyReplicateToVirtual @ 0x1406D0150 (CmKeyBodyReplicateToVirtual.c)
 *     CmpVEExecuteCreateLogic @ 0x1406D038C (CmpVEExecuteCreateLogic.c)
 *     CmKeyBodyRemapToVirtual @ 0x14086B220 (CmKeyBodyRemapToVirtual.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140206450 (RtlInitUnicodeString.c)
 *     RtlFreeAnsiString @ 0x1405D8770 (RtlFreeAnsiString.c)
 *     CmRealKCBToVirtualPath @ 0x14068F388 (CmRealKCBToVirtualPath.c)
 *     CmpVirtualPathPresent @ 0x14086C7D8 (CmpVirtualPathPresent.c)
 */

char __fastcall CmpReparseToVirtualPath(__int64 a1, __int64 a2, __int64 a3, UNICODE_STRING *a4)
{
  char v7; // bl
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  if ( (*(_DWORD *)(a1 + 184) & 0x800000) != 0 && (int)CmRealKCBToVirtualPath(a1, 0LL, a3, &DestinationString) >= 0 )
  {
    v7 = CmpVirtualPathPresent(&DestinationString);
    if ( v7 )
    {
      *a4 = DestinationString;
      RtlInitUnicodeString(&DestinationString, 0LL);
      v7 = 1;
    }
  }
  else
  {
    v7 = 0;
  }
  if ( DestinationString.Buffer )
    RtlFreeAnsiString(&DestinationString);
  return v7;
}
