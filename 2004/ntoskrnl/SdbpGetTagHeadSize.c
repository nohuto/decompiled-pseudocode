/*
 * XREFs of SdbpGetTagHeadSize @ 0x1407448B8
 * Callers:
 *     SdbpGetMappedTagData @ 0x140744454 (SdbpGetMappedTagData.c)
 *     SdbpReadTagData @ 0x140744590 (SdbpReadTagData.c)
 *     SdbpGetNextTagId @ 0x140744908 (SdbpGetNextTagId.c)
 * Callees:
 *     AslLogCallPrintf @ 0x1407405C4 (AslLogCallPrintf.c)
 *     SdbpReadMappedData @ 0x140744A7C (SdbpReadMappedData.c)
 */

__int64 __fastcall SdbpGetTagHeadSize(__int64 a1, __int64 a2)
{
  __int16 v3; // [rsp+40h] [rbp+18h] BYREF

  v3 = 0;
  if ( (unsigned int)SdbpReadMappedData(a1, a2, &v3, 2LL) )
    return (v3 & 0xF000u) < 0x7000 ? 2 : 6;
  AslLogCallPrintf(1LL);
  return 0LL;
}
