/*
 * XREFs of ?CreateNode@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GKIG@Z @ 0x1C0191D4C
 * Callers:
 *     ?CreateInputPointerNode@CTouchProcessor@@AEAA_NPEAUtagPOINTEREVENTINT@@@Z @ 0x1C0191A50 (-CreateInputPointerNode@CTouchProcessor@@AEAA_NPEAUtagPOINTEREVENTINT@@@Z.c)
 *     ?UpdateActivePointer@CTouchProcessor@@QEAAGPEBUCPointerInputFrame@@PEAUtagPOINTEREVENTINT@@PEAUtagCHitTestState@@PEAVCInputDest@@PEAKPEAGPEAIKG@Z @ 0x1C01A3024 (-UpdateActivePointer@CTouchProcessor@@QEAAGPEBUCPointerInputFrame@@PEAUtagPOINTEREVENTINT@@PEAUt.c)
 * Callees:
 *     isChildPartition @ 0x1C0064F84 (isChildPartition.c)
 *     isRootPartition @ 0x1C0065868 (isRootPartition.c)
 *     WPP_RECORDER_SF_ @ 0x1C00678DC (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C006ACC8 (WPP_RECORDER_SF_d.c)
 *     Win32FreePool @ 0x1C008C9A0 (Win32FreePool.c)
 *     Win32AllocPoolZInit @ 0x1C0090430 (Win32AllocPoolZInit.c)
 *     ?GetNextChildPointerId@CTouchProcessor@@AEAAGG@Z @ 0x1C01967A0 (-GetNextChildPointerId@CTouchProcessor@@AEAAGG@Z.c)
 *     ?GetNextPointerId@CTouchProcessor@@AEAAGXZ @ 0x1C0196868 (-GetNextPointerId@CTouchProcessor@@AEAAGXZ.c)
 *     ?GetNextRootPointerId@CTouchProcessor@@AEAAGXZ @ 0x1C01968D4 (-GetNextRootPointerId@CTouchProcessor@@AEAAGXZ.c)
 *     ?SetNewValidState@CTouchProcessor@@QEAAHIPEAUCInputPointerNode@@@Z @ 0x1C019FD74 (-SetNewValidState@CTouchProcessor@@QEAAHIPEAUCInputPointerNode@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

struct CInputPointerNode *__fastcall CTouchProcessor::CreateNode(
        CTouchProcessor *this,
        __int16 a2,
        unsigned int a3,
        unsigned int a4,
        unsigned __int16 a5)
{
  __int16 v7; // r14
  CTouchProcessor *v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // rcx
  char *v11; // rbx
  __int16 v12; // dx
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
  _QWORD *v23; // rax
  __int64 v24; // rcx
  char *v25; // rdi
  __int64 v26; // rax

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
        (__int64)&WPP_6cc13e1a12c13a444721acaa10d1d35b_Traceguids);
    }
  }
  if ( *((struct _KTHREAD **)v8 + 9) != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this);
  if ( a3 < 2 || a3 > 3 && a3 != 5 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return 0LL;
    LOBYTE(a2) = 2;
    WPP_RECORDER_SF_d(
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      a2,
      7,
      243,
      (__int64)&WPP_6cc13e1a12c13a444721acaa10d1d35b_Traceguids,
      a3);
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return 0LL;
    v13 = WPP_GLOBAL_Control;
    if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      return 0LL;
    v14 = 244;
    goto LABEL_38;
  }
  v11 = (char *)Win32AllocPoolZInit(0x120uLL, 0x70697355u);
  if ( !v11 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return 0LL;
    LOBYTE(v9) = 2;
    WPP_RECORDER_SF_(
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      (_WORD)v9,
      7,
      245,
      (__int64)&WPP_6cc13e1a12c13a444721acaa10d1d35b_Traceguids);
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return 0LL;
    v13 = WPP_GLOBAL_Control;
    if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      return 0LL;
    v14 = 246;
LABEL_38:
    LOBYTE(v12) = 5;
    WPP_RECORDER_SF_(v13->DeviceExtension, v12, 7, v14, (__int64)&WPP_6cc13e1a12c13a444721acaa10d1d35b_Traceguids);
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
  *((_DWORD *)v11 + 14) = a3;
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
  if ( !(unsigned int)CTouchProcessor::SetNewValidState(v8, a4, (struct CInputPointerNode *)v11) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v20) = 2;
      WPP_RECORDER_SF_(
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        (_WORD)v20,
        7,
        247,
        (__int64)&WPP_6cc13e1a12c13a444721acaa10d1d35b_Traceguids);
    }
    Win32FreePool((__int64)v11, v20, v22);
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return 0LL;
    v13 = WPP_GLOBAL_Control;
    if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      return 0LL;
    v14 = 248;
    goto LABEL_38;
  }
  if ( *((_DWORD *)v11 + 13) == 3 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v21);
  v23 = (_QWORD *)((char *)v8 + 144);
  v24 = *((_QWORD *)v8 + 18);
  if ( *(CTouchProcessor **)(v24 + 8) != (CTouchProcessor *)((char *)v8 + 144)
    || (*(_QWORD *)v11 = v24,
        v25 = (char *)v8 + 160,
        *((_QWORD *)v11 + 1) = v23,
        *(_QWORD *)(v24 + 8) = v11,
        *v23 = v11,
        v26 = *(_QWORD *)v25,
        *(char **)(*(_QWORD *)v25 + 8LL) != v25) )
  {
    __fastfail(3u);
  }
  *v18 = v26;
  *((_QWORD *)v11 + 3) = v25;
  *(_QWORD *)(v26 + 8) = v18;
  *(_QWORD *)v25 = v18;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v20) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      (_WORD)v20,
      7,
      249,
      (__int64)&WPP_6cc13e1a12c13a444721acaa10d1d35b_Traceguids);
  }
  return (struct CInputPointerNode *)v11;
}
