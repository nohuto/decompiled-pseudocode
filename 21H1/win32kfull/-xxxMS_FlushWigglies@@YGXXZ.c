/*
 * XREFs of ?xxxMS_FlushWigglies@@YGXXZ @ 0x1746F4
 * Callers:
 *     _xxxDrawDragRectEx@16 @ 0x176775 (_xxxDrawDragRectEx@16.c)
 *     _xxxInitializeMoveSizeData@20 @ 0x176FCC (_xxxInitializeMoveSizeData@20.c)
 * Callees:
 *     _WPP_RECORDER_SF_@20 @ 0x1B668 (_WPP_RECORDER_SF_@20.c)
 *     _xxxInternalGetMessage@24 @ 0xA199C (_xxxInternalGetMessage@24.c)
 */

void __stdcall xxxMS_FlushWigglies()
{
  _DWORD v0[7]; // [esp+Ch] [ebp-1Ch] BYREF

  memset(v0, 0, sizeof(v0));
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(1, 15, &WPP_44fe173a72dc32ad3264e41cf6895406_Traceguids);
  while ( xxxInternalGetMessage(v0, (struct tagMSG *)0x200, 0x200u, 3u, 0) )
    ;
}
