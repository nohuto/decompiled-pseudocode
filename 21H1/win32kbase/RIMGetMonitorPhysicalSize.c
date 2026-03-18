/*
 * XREFs of RIMGetMonitorPhysicalSize @ 0x1C016D120
 * Callers:
 *     RIMCreatePointerDeviceInfo @ 0x1C0164C98 (RIMCreatePointerDeviceInfo.c)
 *     RIMVirtCreatePointerDeviceInfo @ 0x1C0168B18 (RIMVirtCreatePointerDeviceInfo.c)
 *     ?rimSetPointerDeviceOutputConfig@@YAXPEAURIMDEV@@PEAUtagHID_POINTER_DEVICE_INFO@@PEAVCLockedInputSpace@@PEAVCLockedInputSpaceRegion@@@Z @ 0x1C016C7D4 (-rimSetPointerDeviceOutputConfig@@YAXPEAURIMDEV@@PEAUtagHID_POINTER_DEVICE_INFO@@PEAVCLockedInpu.c)
 *     RIMIDECreatePointerDeviceInfo @ 0x1C016FF48 (RIMIDECreatePointerDeviceInfo.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C00678DC (WPP_RECORDER_SF_.c)
 *     GetMonitorPhysicalDimensions @ 0x1C01520F0 (GetMonitorPhysicalDimensions.c)
 */

__int64 __fastcall RIMGetMonitorPhysicalSize(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  int MonitorPhysicalDimensions; // eax
  int v5; // edx
  __int64 v6; // rcx
  signed int v7; // eax
  signed int v8; // ecx
  unsigned int v10; // [rsp+40h] [rbp+8h] BYREF
  unsigned int v11; // [rsp+48h] [rbp+10h] BYREF

  v10 = 0;
  v11 = 0;
  v2 = a2;
  *(_OWORD *)a1 = 0LL;
  if ( !a2 )
    v2 = *(_QWORD *)(gpDispInfo + 96);
  MonitorPhysicalDimensions = GetMonitorPhysicalDimensions(*(_QWORD *)(v2 + 232), &v10, &v11, 0LL, 0LL);
  if ( MonitorPhysicalDimensions >= 0 )
    goto LABEL_9;
  v6 = *(_QWORD *)(gpDispInfo + 96);
  if ( v2 != v6 )
    MonitorPhysicalDimensions = GetMonitorPhysicalDimensions(*(_QWORD *)(v6 + 232), &v10, &v11, 0LL, 0LL);
  if ( MonitorPhysicalDimensions >= 0 )
  {
LABEL_9:
    v7 = 1000 * v10;
    v8 = 1000 * v11;
    *(_DWORD *)(a1 + 8) = 1000 * v10;
    *(_DWORD *)(a1 + 12) = v8;
    if ( v7 <= 0 || v8 <= 0 )
    {
      *(_DWORD *)(a1 + 8) = 20320;
      *(_DWORD *)(a1 + 12) = 15240;
    }
  }
  else
  {
    *(_DWORD *)(a1 + 8) = 20320;
    *(_DWORD *)(a1 + 12) = 15240;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v5) = 3;
      WPP_RECORDER_SF_((_DWORD)gRimLog, v5, 1, 17, (__int64)&WPP_516b30da09af3a4d670a255114438942_Traceguids);
    }
  }
  return a1;
}
