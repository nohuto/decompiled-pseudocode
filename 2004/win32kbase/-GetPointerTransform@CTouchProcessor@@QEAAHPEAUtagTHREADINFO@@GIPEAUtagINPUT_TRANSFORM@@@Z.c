/*
 * XREFs of ?GetPointerTransform@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GIPEAUtagINPUT_TRANSFORM@@@Z @ 0x1C0193BCC
 * Callers:
 *     NtUserGetPointerInputTransform @ 0x1C0134260 (NtUserGetPointerInputTransform.c)
 * Callees:
 *     Win32AllocPoolZInit @ 0x1C000EDD0 (Win32AllocPoolZInit.c)
 *     WPP_RECORDER_SF_ @ 0x1C0072EBC (WPP_RECORDER_SF_.c)
 *     ValidateHwndEx @ 0x1C0091FF0 (ValidateHwndEx.c)
 *     UserSetLastError @ 0x1C009228C (UserSetLastError.c)
 *     Win32FreePool @ 0x1C0096F60 (Win32FreePool.c)
 *     WPP_RECORDER_SF_d @ 0x1C00AA920 (WPP_RECORDER_SF_d.c)
 *     ValidateHbwnd @ 0x1C011C2C0 (ValidateHbwnd.c)
 *     ?GetPointerDataQPCTimeList@CTouchProcessor@@QEAAH_KIPEA_KPEAH@Z @ 0x1C01911E0 (-GetPointerDataQPCTimeList@CTouchProcessor@@QEAAH_KIPEA_KPEAH@Z.c)
 *     ?GetThreadPointerData@CTouchProcessor@@QEAA_KPEAUtagTHREADINPUTPOINTERLIST@@GPEAKPEAHPEAPEAUHWND__@@@Z @ 0x1C0194420 (-GetThreadPointerData@CTouchProcessor@@QEAA_KPEAUtagTHREADINPUTPOINTERLIST@@GPEAKPEAHPEAPEAUHWND.c)
 *     WPP_RECORDER_SF_L @ 0x1C019E65C (WPP_RECORDER_SF_L.c)
 *     ApiSetGetInputTransformList @ 0x1C01CB408 (ApiSetGetInputTransformList.c)
 *     ApiSetHasInputTransform @ 0x1C01CBCC0 (ApiSetHasInputTransform.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
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
  int *ThreadPointerData; // r14
  HWND v11; // rsi
  __int64 v12; // rcx
  unsigned __int64 *v14; // rbx
  __int64 v15; // rdx
  unsigned int PointerDataQPCTimeList; // ebp
  int v17; // r9d
  __int64 v18; // rcx
  int v19; // ecx
  int v20; // r9d
  HWND *v21; // [rsp+28h] [rbp-40h]
  unsigned __int64 v22[7]; // [rsp+30h] [rbp-38h] BYREF
  HWND v23; // [rsp+70h] [rbp+8h] BYREF
  int v24; // [rsp+80h] [rbp+18h] BYREF

  v22[0] = 0LL;
  v23 = 0LL;
  v6 = gpTouchProcessor;
  v7 = (unsigned __int16)a3;
  v8 = (unsigned int)a4;
  if ( (_WORD)a3 == 1 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3, a4);
  ThreadPointerData = (int *)CTouchProcessor::GetThreadPointerData(
                               v6,
                               (struct tagTHREADINFO *)((char *)a2 + 1080),
                               v7,
                               0LL,
                               0LL,
                               &v23);
  if ( !ThreadPointerData )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v21) = v7;
      LOBYTE(v9) = 2;
      WPP_RECORDER_SF_d(
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        v9,
        7,
        322,
        (__int64)&WPP_8113a81d21a7371434699e4b0bdc9bc8_Traceguids,
        v21,
        v22[0]);
    }
LABEL_25:
    v12 = 87LL;
LABEL_14:
    UserSetLastError(v12, v9);
    return 0LL;
  }
  v11 = v23;
  if ( !ValidateHbwnd((unsigned __int64)v23, v9) && !ValidateHwndEx((__int64)v11, 1, 0) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v9) = 2;
      WPP_RECORDER_SF_(
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        v9,
        7,
        323,
        (__int64)&WPP_8113a81d21a7371434699e4b0bdc9bc8_Traceguids);
    }
    goto LABEL_25;
  }
  if ( !(unsigned int)ApiSetHasInputTransform(v11) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v9) = 2;
      WPP_RECORDER_SF_(
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        v9,
        4,
        324,
        (__int64)&WPP_8113a81d21a7371434699e4b0bdc9bc8_Traceguids);
    }
    v12 = 232LL;
    goto LABEL_14;
  }
  if ( (_DWORD)v8 == 1 )
  {
    v14 = v22;
  }
  else
  {
    v14 = (unsigned __int64 *)Win32AllocPoolZInit(8 * v8, 2020176725LL);
    if ( !v14 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v9) = 2;
        WPP_RECORDER_SF_L(v19, v9, 7, 325, (__int64)&WPP_8113a81d21a7371434699e4b0bdc9bc8_Traceguids, v8);
      }
      goto LABEL_25;
    }
  }
  v24 = 1;
  PointerDataQPCTimeList = CTouchProcessor::GetPointerDataQPCTimeList(
                             (struct _KTHREAD **)v6,
                             ThreadPointerData,
                             v8,
                             v14,
                             &v24);
  if ( !PointerDataQPCTimeList )
  {
    if ( !v24 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v15) = 2;
        WPP_RECORDER_SF_(
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          v15,
          7,
          326,
          (__int64)&WPP_8113a81d21a7371434699e4b0bdc9bc8_Traceguids);
      }
      v18 = 232LL;
      goto LABEL_33;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v20 = 327;
LABEL_31:
      LOBYTE(v15) = 2;
      WPP_RECORDER_SF_(
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        v15,
        7,
        v20,
        (__int64)&WPP_8113a81d21a7371434699e4b0bdc9bc8_Traceguids);
      goto LABEL_32;
    }
    goto LABEL_32;
  }
  PointerDataQPCTimeList = ApiSetGetInputTransformList((_DWORD)v11, v8, (_DWORD)v14, v17, (__int64)a5);
  if ( !PointerDataQPCTimeList )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v20 = 328;
      goto LABEL_31;
    }
LABEL_32:
    v18 = 87LL;
LABEL_33:
    UserSetLastError(v18, v15);
  }
  if ( v14 != v22 )
    Win32FreePool((__int64)v14);
  return PointerDataQPCTimeList;
}
