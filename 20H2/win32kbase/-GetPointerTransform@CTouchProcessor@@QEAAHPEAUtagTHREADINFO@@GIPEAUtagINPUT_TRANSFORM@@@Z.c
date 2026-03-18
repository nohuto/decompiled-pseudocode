/*
 * XREFs of ?GetPointerTransform@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GIPEAUtagINPUT_TRANSFORM@@@Z @ 0x1C019169C
 * Callers:
 *     NtUserGetPointerInputTransform @ 0x1C0131F10 (NtUserGetPointerInputTransform.c)
 * Callees:
 *     ValidateHwndEx @ 0x1C004C330 (ValidateHwndEx.c)
 *     UserSetLastError @ 0x1C004C5CC (UserSetLastError.c)
 *     WPP_RECORDER_SF_ @ 0x1C004F07C (WPP_RECORDER_SF_.c)
 *     Win32FreePool @ 0x1C0057A50 (Win32FreePool.c)
 *     WPP_RECORDER_SF_d @ 0x1C0063040 (WPP_RECORDER_SF_d.c)
 *     Win32AllocPoolZInit @ 0x1C006B1A0 (Win32AllocPoolZInit.c)
 *     ValidateHbwnd @ 0x1C0119F80 (ValidateHbwnd.c)
 *     ?GetPointerDataQPCTimeList@CTouchProcessor@@QEAAH_KIPEA_KPEAH@Z @ 0x1C018ECC0 (-GetPointerDataQPCTimeList@CTouchProcessor@@QEAAH_KIPEA_KPEAH@Z.c)
 *     ?GetThreadPointerData@CTouchProcessor@@QEAA_KPEAUtagTHREADINPUTPOINTERLIST@@GPEAKPEAHPEAPEAUHWND__@@@Z @ 0x1C0191EF0 (-GetThreadPointerData@CTouchProcessor@@QEAA_KPEAUtagTHREADINPUTPOINTERLIST@@GPEAKPEAHPEAPEAUHWND.c)
 *     WPP_RECORDER_SF_L @ 0x1C019C15C (WPP_RECORDER_SF_L.c)
 *     ApiSetGetInputTransformList @ 0x1C01C9088 (ApiSetGetInputTransformList.c)
 *     ApiSetHasInputTransform @ 0x1C01C9940 (ApiSetHasInputTransform.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CTouchProcessor::GetPointerTransform(
        CTouchProcessor *this,
        struct tagTHREADINFO *a2,
        __int64 a3,
        __int64 a4,
        struct tagINPUT_TRANSFORM *a5)
{
  CTouchProcessor *v6; // rbp
  int v7; // ebx
  __int64 v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  int *ThreadPointerData; // r14
  HWND v13; // rsi
  __int64 v14; // rcx
  unsigned __int64 *v16; // rbx
  __int64 v17; // rdx
  unsigned int PointerDataQPCTimeList; // ebp
  int v19; // r9d
  __int64 v20; // rcx
  int v21; // ecx
  int v22; // r9d
  HWND *v23; // [rsp+28h] [rbp-40h]
  unsigned __int64 v24[7]; // [rsp+30h] [rbp-38h] BYREF
  HWND v25; // [rsp+70h] [rbp+8h] BYREF
  int v26; // [rsp+80h] [rbp+18h] BYREF

  v24[0] = 0LL;
  v25 = 0LL;
  v6 = gpTouchProcessor;
  v7 = (unsigned __int16)a3;
  v8 = (unsigned int)a4;
  if ( (_WORD)a3 == 1 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3, a4);
  ThreadPointerData = (int *)CTouchProcessor::GetThreadPointerData(
                               v6,
                               (struct tagTHREADINFO *)((char *)a2 + 1088),
                               v7,
                               0LL,
                               0LL,
                               &v25);
  if ( !ThreadPointerData )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v23) = v7;
      LOBYTE(v9) = 2;
      WPP_RECORDER_SF_d(
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        v9,
        7,
        321,
        (__int64)&WPP_50814762fbc63e38c7e5eacf83347307_Traceguids,
        v23,
        v24[0]);
    }
LABEL_25:
    v14 = 87LL;
LABEL_14:
    UserSetLastError(v14, v9);
    return 0LL;
  }
  v13 = v25;
  if ( !ValidateHbwnd((unsigned __int64)v25, v9, v10, v11) && !ValidateHwndEx((__int64)v13, 1, 0) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v9) = 2;
      WPP_RECORDER_SF_(
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        v9,
        7,
        322,
        (__int64)&WPP_50814762fbc63e38c7e5eacf83347307_Traceguids);
    }
    goto LABEL_25;
  }
  if ( !(unsigned int)ApiSetHasInputTransform(v13) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v9) = 2;
      WPP_RECORDER_SF_(
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        v9,
        4,
        323,
        (__int64)&WPP_50814762fbc63e38c7e5eacf83347307_Traceguids);
    }
    v14 = 232LL;
    goto LABEL_14;
  }
  if ( (_DWORD)v8 == 1 )
  {
    v16 = v24;
  }
  else
  {
    v16 = (unsigned __int64 *)Win32AllocPoolZInit(8 * v8, 0x78697355u);
    if ( !v16 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v9) = 2;
        WPP_RECORDER_SF_L(v21, v9, 7, 324, (__int64)&WPP_50814762fbc63e38c7e5eacf83347307_Traceguids, v8);
      }
      goto LABEL_25;
    }
  }
  v26 = 1;
  PointerDataQPCTimeList = CTouchProcessor::GetPointerDataQPCTimeList(
                             (struct _KTHREAD **)v6,
                             ThreadPointerData,
                             v8,
                             v16,
                             &v26);
  if ( !PointerDataQPCTimeList )
  {
    if ( !v26 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v17) = 2;
        WPP_RECORDER_SF_(
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          v17,
          7,
          325,
          (__int64)&WPP_50814762fbc63e38c7e5eacf83347307_Traceguids);
      }
      v20 = 232LL;
      goto LABEL_33;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v22 = 326;
LABEL_31:
      LOBYTE(v17) = 2;
      WPP_RECORDER_SF_(
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        v17,
        7,
        v22,
        (__int64)&WPP_50814762fbc63e38c7e5eacf83347307_Traceguids);
      goto LABEL_32;
    }
    goto LABEL_32;
  }
  PointerDataQPCTimeList = ApiSetGetInputTransformList((_DWORD)v13, v8, (_DWORD)v16, v19, (__int64)a5);
  if ( !PointerDataQPCTimeList )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v22 = 327;
      goto LABEL_31;
    }
LABEL_32:
    v20 = 87LL;
LABEL_33:
    UserSetLastError(v20, v17);
  }
  if ( v16 != v24 )
    Win32FreePool((__int64)v16);
  return PointerDataQPCTimeList;
}
