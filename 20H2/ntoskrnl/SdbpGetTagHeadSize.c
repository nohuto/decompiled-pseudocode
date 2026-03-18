/*
 * XREFs of SdbpGetTagHeadSize @ 0x140753498
 * Callers:
 *     SdbpGetMappedTagData @ 0x140753034 (SdbpGetMappedTagData.c)
 *     SdbpReadTagData @ 0x140753170 (SdbpReadTagData.c)
 *     SdbpGetNextTagId @ 0x1407534E8 (SdbpGetNextTagId.c)
 * Callees:
 *     AslLogCallPrintf @ 0x14074F1A4 (AslLogCallPrintf.c)
 *     SdbpReadMappedData @ 0x14075365C (SdbpReadMappedData.c)
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
