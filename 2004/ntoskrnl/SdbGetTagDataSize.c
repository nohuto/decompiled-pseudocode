/*
 * XREFs of SdbGetTagDataSize @ 0x140744990
 * Callers:
 *     SdbpGetIndex @ 0x1407441E4 (SdbpGetIndex.c)
 *     SdbpGetFirstIndexedRecord @ 0x1407442FC (SdbpGetFirstIndexedRecord.c)
 *     SdbpReadTagData @ 0x140744590 (SdbpReadTagData.c)
 *     SdbpGetNextTagId @ 0x140744908 (SdbpGetNextTagId.c)
 *     SdbpGetNextIndexedRecord @ 0x1407AEACC (SdbpGetNextIndexedRecord.c)
 *     SdbQueryDataExTagID @ 0x1407AF428 (SdbQueryDataExTagID.c)
 *     KsepDbReadKData @ 0x1408BC730 (KsepDbReadKData.c)
 *     SdbpGetMatchingTextAttributes @ 0x14096240C (SdbpGetMatchingTextAttributes.c)
 *     SdbpGetRegistryMatchingAttributes @ 0x140962638 (SdbpGetRegistryMatchingAttributes.c)
 * Callees:
 *     AslLogCallPrintf @ 0x1407405C4 (AslLogCallPrintf.c)
 *     SdbGetTagFromTagID @ 0x140744A44 (SdbGetTagFromTagID.c)
 *     SdbpReadMappedData @ 0x140744A7C (SdbpReadMappedData.c)
 */

__int64 __fastcall SdbGetTagDataSize(__int64 a1, __int64 a2)
{
  int v2; // ebx
  int v4; // eax
  __int64 result; // rax
  unsigned int v6; // [rsp+38h] [rbp+10h] BYREF

  v2 = a2;
  v4 = SdbGetTagFromTagID(a1, a2) & 0xF000;
  switch ( v4 )
  {
    case 12288:
      result = 2LL;
      break;
    case 24576:
    case 16384:
      result = 4LL;
      break;
    case 20480:
      result = 8LL;
      break;
    case 4096:
      result = 0LL;
      break;
    case 8192:
      result = 1LL;
      break;
    default:
      v6 = 0;
      if ( !(unsigned int)SdbpReadMappedData(a1, (unsigned int)(v2 + 2), &v6, 4LL) )
        AslLogCallPrintf(1LL);
      result = v6;
      break;
  }
  if ( (int)result + v2 < (unsigned int)result || (unsigned int)(result + v2) > *(_DWORD *)(a1 + 20) )
  {
    AslLogCallPrintf(1LL);
    return 0xFFFFFFFFLL;
  }
  return result;
}
