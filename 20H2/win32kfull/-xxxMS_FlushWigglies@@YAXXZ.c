/*
 * XREFs of ?xxxMS_FlushWigglies@@YAXXZ @ 0x1C020EA80
 * Callers:
 *     xxxDrawDragRectEx @ 0x1C02110D4 (xxxDrawDragRectEx.c)
 *     xxxInitializeMoveSizeData @ 0x1C02119DC (xxxInitializeMoveSizeData.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0040298 (WPP_RECORDER_SF_.c)
 *     xxxInternalGetMessage @ 0x1C007E984 (xxxInternalGetMessage.c)
 */

void __fastcall xxxMS_FlushWigglies(int a1)
{
  _OWORD v1[3]; // [rsp+30h] [rbp-38h] BYREF

  memset(v1, 0, sizeof(v1));
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(a1, 4, 1, 15, (__int64)&WPP_44fe173a72dc32ad3264e41cf6895406_Traceguids);
  while ( (unsigned int)xxxInternalGetMessage(v1, 0LL, 0x200u, 0x200u, 3, 0) )
    ;
}
