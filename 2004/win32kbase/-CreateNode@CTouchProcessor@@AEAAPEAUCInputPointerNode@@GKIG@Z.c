/*
 * XREFs of ?CreateNode@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GKIG@Z @ 0x1C018C04C
 * Callers:
 *     ?CreateInputPointerNode@CTouchProcessor@@AEAA_NPEAUtagPOINTEREVENTINT@@@Z @ 0x1C018BD50 (-CreateInputPointerNode@CTouchProcessor@@AEAA_NPEAUtagPOINTEREVENTINT@@@Z.c)
 *     ?UpdateActivePointer@CTouchProcessor@@QEAAGPEBUCPointerInputFrame@@PEAUtagPOINTEREVENTINT@@PEAUtagCHitTestState@@PEAVCInputDest@@PEAKPEAGPEAIKG@Z @ 0x1C019D2C4 (-UpdateActivePointer@CTouchProcessor@@QEAAGPEBUCPointerInputFrame@@PEAUtagPOINTEREVENTINT@@PEAUt.c)
 * Callees:
 *     Win32AllocPoolZInit @ 0x1C000EDD0 (Win32AllocPoolZInit.c)
 *     isChildPartition @ 0x1C0070954 (isChildPartition.c)
 *     isRootPartition @ 0x1C0071238 (isRootPartition.c)
 *     WPP_RECORDER_SF_ @ 0x1C0072EBC (WPP_RECORDER_SF_.c)
 *     Win32FreePool @ 0x1C0096F60 (Win32FreePool.c)
 *     WPP_RECORDER_SF_d @ 0x1C00AA920 (WPP_RECORDER_SF_d.c)
 *     ?GetNextChildPointerId@CTouchProcessor@@AEAAGG@Z @ 0x1C0190AA0 (-GetNextChildPointerId@CTouchProcessor@@AEAAGG@Z.c)
 *     ?GetNextPointerId@CTouchProcessor@@AEAAGXZ @ 0x1C0190B68 (-GetNextPointerId@CTouchProcessor@@AEAAGXZ.c)
 *     ?GetNextRootPointerId@CTouchProcessor@@AEAAGXZ @ 0x1C0190BD4 (-GetNextRootPointerId@CTouchProcessor@@AEAAGXZ.c)
 *     ?SetNewValidState@CTouchProcessor@@QEAAHIPEAUCInputPointerNode@@@Z @ 0x1C019A084 (-SetNewValidState@CTouchProcessor@@QEAAHIPEAUCInputPointerNode@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

struct CInputPointerNode *__fastcall CTouchProcessor::CreateNode(
        CTouchProcessor *this,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned __int16 a5)
{
  unsigned int v5; // ebp
  unsigned int v6; // esi
  __int16 v7; // r14
  CTouchProcessor *v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // rcx
  char *v11; // rbx
  int v12; // edx
  PDEVICE_OBJECT v13; // rcx
  int v14; // r9d
  __int64 v15; // rdx
  __int64 v16; // rcx
  unsigned __int16 NextRootPointerId; // ax
  _QWORD *v18; // rsi
  unsigned int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  _QWORD *v24; // rax
  __int64 v25; // rcx
  char *v26; // rdi
  __int64 v27; // rax

  v5 = a4;
  v6 = a3;
  v7 = a2;
  v8 = this;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    this = (CTouchProcessor *)WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      LOBYTE(a2) = 5;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        a2,
        7,
        243,
        (__int64)&WPP_8113a81d21a7371434699e4b0bdc9bc8_Traceguids);
    }
  }
  if ( *((struct _KTHREAD **)v8 + 9) != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3, a4);
  if ( v6 < 2 || v6 > 3 && v6 != 5 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return 0LL;
    LOBYTE(a2) = 2;
    WPP_RECORDER_SF_d(
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      a2,
      7,
      244,
      (__int64)&WPP_8113a81d21a7371434699e4b0bdc9bc8_Traceguids,
      v6);
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return 0LL;
    v13 = WPP_GLOBAL_Control;
    if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      return 0LL;
    v14 = 245;
    goto LABEL_38;
  }
  v11 = (char *)Win32AllocPoolZInit(0x120uLL, 1885958997LL);
  if ( !v11 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return 0LL;
    LOBYTE(v9) = 2;
    WPP_RECORDER_SF_(
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      v9,
      7,
      246,
      (__int64)&WPP_8113a81d21a7371434699e4b0bdc9bc8_Traceguids);
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return 0LL;
    v13 = WPP_GLOBAL_Control;
    if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      return 0LL;
    v14 = 247;
LABEL_38:
    LOBYTE(v12) = 5;
    WPP_RECORDER_SF_(v13->DeviceExtension, v12, 7, v14, (__int64)&WPP_8113a81d21a7371434699e4b0bdc9bc8_Traceguids);
    return 0LL;
  }
  if ( isRootPartition(v10, v9) )
  {
    NextRootPointerId = CTouchProcessor::GetNextRootPointerId(v8);
  }
  else if ( isChildPartition(v16, v15) )
  {
    NextRootPointerId = CTouchProcessor::GetNextChildPointerId(v8, a5);
  }
  else
  {
    NextRootPointerId = CTouchProcessor::GetNextPointerId(v8);
  }
  *((_WORD *)v11 + 16) = NextRootPointerId;
  *((_DWORD *)v11 + 14) = v6;
  *((_QWORD *)v11 + 31) = v11 + 240;
  v18 = v11 + 16;
  *((_QWORD *)v11 + 30) = v11 + 240;
  *((_QWORD *)v11 + 1) = v11;
  *((_QWORD *)v11 + 29) = v11 + 224;
  *((_QWORD *)v11 + 28) = v11 + 224;
  *((_QWORD *)v11 + 34) = v11 + 264;
  *((_QWORD *)v11 + 33) = v11 + 264;
  v19 = *((_DWORD *)v11 + 70) & 0xFFFFF4BF;
  *(_QWORD *)v11 = v11;
  *((_QWORD *)v11 + 3) = v11 + 16;
  *((_QWORD *)v11 + 2) = v11 + 16;
  *((_DWORD *)v11 + 70) = v19 | 0x480;
  *((_WORD *)v11 + 17) = v7;
  *((_WORD *)v11 + 128) = 0;
  *((_DWORD *)v11 + 13) = 0;
  if ( !(unsigned int)CTouchProcessor::SetNewValidState(v8, v5, (struct CInputPointerNode *)v11) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v20) = 2;
      WPP_RECORDER_SF_(
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        v20,
        7,
        248,
        (__int64)&WPP_8113a81d21a7371434699e4b0bdc9bc8_Traceguids);
    }
    Win32FreePool((__int64)v11);
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return 0LL;
    v13 = WPP_GLOBAL_Control;
    if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      return 0LL;
    v14 = 249;
    goto LABEL_38;
  }
  if ( *((_DWORD *)v11 + 13) == 3 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v21, v20, v22, v23);
  v24 = (_QWORD *)((char *)v8 + 144);
  v25 = *((_QWORD *)v8 + 18);
  if ( *(CTouchProcessor **)(v25 + 8) != (CTouchProcessor *)((char *)v8 + 144)
    || (*(_QWORD *)v11 = v25,
        v26 = (char *)v8 + 160,
        *((_QWORD *)v11 + 1) = v24,
        *(_QWORD *)(v25 + 8) = v11,
        *v24 = v11,
        v27 = *(_QWORD *)v26,
        *(char **)(*(_QWORD *)v26 + 8LL) != v26) )
  {
    __fastfail(3u);
  }
  *v18 = v27;
  *((_QWORD *)v11 + 3) = v26;
  *(_QWORD *)(v27 + 8) = v18;
  *(_QWORD *)v26 = v18;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v20) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v20,
      7,
      250,
      (__int64)&WPP_8113a81d21a7371434699e4b0bdc9bc8_Traceguids);
  }
  return (struct CInputPointerNode *)v11;
}
