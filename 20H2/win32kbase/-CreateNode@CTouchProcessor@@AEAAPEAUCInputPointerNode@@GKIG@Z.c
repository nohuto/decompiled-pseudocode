/*
 * XREFs of ?CreateNode@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GKIG@Z @ 0x1C0189B24
 * Callers:
 *     ?CreateInputPointerNode@CTouchProcessor@@AEAA_NPEAUtagPOINTEREVENTINT@@@Z @ 0x1C0189828 (-CreateInputPointerNode@CTouchProcessor@@AEAA_NPEAUtagPOINTEREVENTINT@@@Z.c)
 *     ?UpdateActivePointer@CTouchProcessor@@QEAAGPEBUCPointerInputFrame@@PEAUtagPOINTEREVENTINT@@PEAUtagCHitTestState@@PEAVCInputDest@@PEAKPEAGPEAIKG@Z @ 0x1C019ADC4 (-UpdateActivePointer@CTouchProcessor@@QEAAGPEBUCPointerInputFrame@@PEAUtagPOINTEREVENTINT@@PEAUt.c)
 * Callees:
 *     isChildPartition @ 0x1C0036370 (isChildPartition.c)
 *     isRootPartition @ 0x1C0036A7C (isRootPartition.c)
 *     WPP_RECORDER_SF_ @ 0x1C004F07C (WPP_RECORDER_SF_.c)
 *     Win32FreePool @ 0x1C0057A50 (Win32FreePool.c)
 *     WPP_RECORDER_SF_d @ 0x1C0063040 (WPP_RECORDER_SF_d.c)
 *     Win32AllocPoolZInit @ 0x1C006B1A0 (Win32AllocPoolZInit.c)
 *     ?GetNextChildPointerId@CTouchProcessor@@AEAAGG@Z @ 0x1C018E580 (-GetNextChildPointerId@CTouchProcessor@@AEAAGG@Z.c)
 *     ?GetNextPointerId@CTouchProcessor@@AEAAGXZ @ 0x1C018E648 (-GetNextPointerId@CTouchProcessor@@AEAAGXZ.c)
 *     ?GetNextRootPointerId@CTouchProcessor@@AEAAGXZ @ 0x1C018E6B4 (-GetNextRootPointerId@CTouchProcessor@@AEAAGXZ.c)
 *     ?SetNewValidState@CTouchProcessor@@QEAAHIPEAUCInputPointerNode@@@Z @ 0x1C0197B54 (-SetNewValidState@CTouchProcessor@@QEAAHIPEAUCInputPointerNode@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
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
  int v9; // edx
  char *v10; // rbx
  int v11; // edx
  PDEVICE_OBJECT v12; // rcx
  int v13; // r9d
  unsigned __int16 NextRootPointerId; // ax
  _QWORD *v15; // rsi
  unsigned int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  _QWORD *v21; // rax
  __int64 v22; // rcx
  char *v23; // rdi
  __int64 v24; // rax

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
        242,
        (__int64)&WPP_50814762fbc63e38c7e5eacf83347307_Traceguids);
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
      243,
      (__int64)&WPP_50814762fbc63e38c7e5eacf83347307_Traceguids,
      v6);
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return 0LL;
    v12 = WPP_GLOBAL_Control;
    if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      return 0LL;
    v13 = 244;
    goto LABEL_38;
  }
  v10 = (char *)Win32AllocPoolZInit(0x120uLL, 0x70697355u);
  if ( !v10 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return 0LL;
    LOBYTE(v9) = 2;
    WPP_RECORDER_SF_(
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      v9,
      7,
      245,
      (__int64)&WPP_50814762fbc63e38c7e5eacf83347307_Traceguids);
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return 0LL;
    v12 = WPP_GLOBAL_Control;
    if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      return 0LL;
    v13 = 246;
LABEL_38:
    LOBYTE(v11) = 5;
    WPP_RECORDER_SF_(v12->DeviceExtension, v11, 7, v13, (__int64)&WPP_50814762fbc63e38c7e5eacf83347307_Traceguids);
    return 0LL;
  }
  if ( isRootPartition() )
  {
    NextRootPointerId = CTouchProcessor::GetNextRootPointerId(v8);
  }
  else if ( isChildPartition() )
  {
    NextRootPointerId = CTouchProcessor::GetNextChildPointerId(v8, a5);
  }
  else
  {
    NextRootPointerId = CTouchProcessor::GetNextPointerId(v8);
  }
  *((_WORD *)v10 + 16) = NextRootPointerId;
  *((_DWORD *)v10 + 14) = v6;
  *((_QWORD *)v10 + 31) = v10 + 240;
  v15 = v10 + 16;
  *((_QWORD *)v10 + 30) = v10 + 240;
  *((_QWORD *)v10 + 1) = v10;
  *((_QWORD *)v10 + 29) = v10 + 224;
  *((_QWORD *)v10 + 28) = v10 + 224;
  *((_QWORD *)v10 + 34) = v10 + 264;
  *((_QWORD *)v10 + 33) = v10 + 264;
  v16 = *((_DWORD *)v10 + 70) & 0xFFFFF4BF;
  *(_QWORD *)v10 = v10;
  *((_QWORD *)v10 + 3) = v10 + 16;
  *((_QWORD *)v10 + 2) = v10 + 16;
  *((_DWORD *)v10 + 70) = v16 | 0x480;
  *((_WORD *)v10 + 17) = v7;
  *((_WORD *)v10 + 128) = 0;
  *((_DWORD *)v10 + 13) = 0;
  if ( !(unsigned int)CTouchProcessor::SetNewValidState(v8, v5, (struct CInputPointerNode *)v10) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v17) = 2;
      WPP_RECORDER_SF_(
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        v17,
        7,
        247,
        (__int64)&WPP_50814762fbc63e38c7e5eacf83347307_Traceguids);
    }
    Win32FreePool((__int64)v10);
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return 0LL;
    v12 = WPP_GLOBAL_Control;
    if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      return 0LL;
    v13 = 248;
    goto LABEL_38;
  }
  if ( *((_DWORD *)v10 + 13) == 3 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v18, v17, v19, v20);
  v21 = (_QWORD *)((char *)v8 + 144);
  v22 = *((_QWORD *)v8 + 18);
  if ( *(CTouchProcessor **)(v22 + 8) != (CTouchProcessor *)((char *)v8 + 144)
    || (*(_QWORD *)v10 = v22,
        v23 = (char *)v8 + 160,
        *((_QWORD *)v10 + 1) = v21,
        *(_QWORD *)(v22 + 8) = v10,
        *v21 = v10,
        v24 = *(_QWORD *)v23,
        *(char **)(*(_QWORD *)v23 + 8LL) != v23) )
  {
    __fastfail(3u);
  }
  *v15 = v24;
  *((_QWORD *)v10 + 3) = v23;
  *(_QWORD *)(v24 + 8) = v15;
  *(_QWORD *)v23 = v15;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v17) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v17,
      7,
      249,
      (__int64)&WPP_50814762fbc63e38c7e5eacf83347307_Traceguids);
  }
  return (struct CInputPointerNode *)v10;
}
