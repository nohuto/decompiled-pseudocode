/*
 * XREFs of ?GetPointerTransform@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GIPEAUtagINPUT_TRANSFORM@@@Z @ 0x1C01998CC
 * Callers:
 *     NtUserGetPointerInputTransform @ 0x1C0139F00 (NtUserGetPointerInputTransform.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C00678DC (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C006ACC8 (WPP_RECORDER_SF_d.c)
 *     ValidateHwndEx @ 0x1C008BD80 (ValidateHwndEx.c)
 *     UserSetLastError @ 0x1C008C01C (UserSetLastError.c)
 *     Win32FreePool @ 0x1C008C9A0 (Win32FreePool.c)
 *     Win32AllocPoolZInit @ 0x1C0090430 (Win32AllocPoolZInit.c)
 *     ValidateHbwnd @ 0x1C0122780 (ValidateHbwnd.c)
 *     ?GetPointerDataQPCTimeList@CTouchProcessor@@QEAAH_KIPEA_KPEAH@Z @ 0x1C0196EE0 (-GetPointerDataQPCTimeList@CTouchProcessor@@QEAAH_KIPEA_KPEAH@Z.c)
 *     ?GetThreadPointerData@CTouchProcessor@@QEAA_KPEAUtagTHREADINPUTPOINTERLIST@@GPEAKPEAHPEAPEAUHWND__@@@Z @ 0x1C019A120 (-GetThreadPointerData@CTouchProcessor@@QEAA_KPEAUtagTHREADINPUTPOINTERLIST@@GPEAKPEAHPEAPEAUHWND.c)
 *     WPP_RECORDER_SF_L @ 0x1C01A43BC (WPP_RECORDER_SF_L.c)
 *     ApiSetGetInputTransformList @ 0x1C01D1388 (ApiSetGetInputTransformList.c)
 *     ApiSetHasInputTransform @ 0x1C01D1C40 (ApiSetHasInputTransform.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CTouchProcessor::GetPointerTransform(
        CTouchProcessor *this,
        struct tagTHREADINFO *a2,
        unsigned __int16 a3,
        unsigned int a4,
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
  __int64 v21; // r8
  HWND *v22; // [rsp+28h] [rbp-40h]
  unsigned __int64 v23[7]; // [rsp+30h] [rbp-38h] BYREF
  HWND v24; // [rsp+70h] [rbp+8h] BYREF
  int v25; // [rsp+80h] [rbp+18h] BYREF

  v23[0] = 0LL;
  v24 = 0LL;
  v6 = gpTouchProcessor;
  v7 = a3;
  v8 = a4;
  if ( a3 == 1 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this);
  ThreadPointerData = (int *)CTouchProcessor::GetThreadPointerData(
                               v6,
                               (struct tagTHREADINFO *)((char *)a2 + 1072),
                               v7,
                               0LL,
                               0LL,
                               &v24);
  if ( !ThreadPointerData )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v22) = v7;
      LOBYTE(v9) = 2;
      WPP_RECORDER_SF_d(
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        v9,
        7,
        321,
        (__int64)&WPP_6cc13e1a12c13a444721acaa10d1d35b_Traceguids,
        v22,
        v23[0]);
    }
LABEL_25:
    v12 = 87LL;
LABEL_14:
    UserSetLastError(v12, v9);
    return 0LL;
  }
  v11 = v24;
  if ( !ValidateHbwnd((unsigned __int64)v24, v9) && !ValidateHwndEx((__int64)v11, 1, 0) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v9) = 2;
      WPP_RECORDER_SF_(
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        v9,
        7,
        322,
        (__int64)&WPP_6cc13e1a12c13a444721acaa10d1d35b_Traceguids);
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
        323,
        (__int64)&WPP_6cc13e1a12c13a444721acaa10d1d35b_Traceguids);
    }
    v12 = 232LL;
    goto LABEL_14;
  }
  if ( (_DWORD)v8 == 1 )
  {
    v14 = v23;
  }
  else
  {
    v14 = (unsigned __int64 *)Win32AllocPoolZInit(8 * v8, 0x78697355u);
    if ( !v14 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v9) = 2;
        WPP_RECORDER_SF_L(v19, v9, 7, 324, (__int64)&WPP_6cc13e1a12c13a444721acaa10d1d35b_Traceguids, v8);
      }
      goto LABEL_25;
    }
  }
  v25 = 1;
  PointerDataQPCTimeList = CTouchProcessor::GetPointerDataQPCTimeList(
                             (struct _KTHREAD **)v6,
                             ThreadPointerData,
                             v8,
                             v14,
                             &v25);
  if ( !PointerDataQPCTimeList )
  {
    if ( !v25 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v15) = 2;
        WPP_RECORDER_SF_(
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          v15,
          7,
          325,
          (__int64)&WPP_6cc13e1a12c13a444721acaa10d1d35b_Traceguids);
      }
      v18 = 232LL;
      goto LABEL_33;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v20 = 326;
LABEL_31:
      LOBYTE(v15) = 2;
      WPP_RECORDER_SF_(
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        v15,
        7,
        v20,
        (__int64)&WPP_6cc13e1a12c13a444721acaa10d1d35b_Traceguids);
      goto LABEL_32;
    }
    goto LABEL_32;
  }
  PointerDataQPCTimeList = ApiSetGetInputTransformList((_DWORD)v11, v8, (_DWORD)v14, v17, (__int64)a5);
  if ( !PointerDataQPCTimeList )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v20 = 327;
      goto LABEL_31;
    }
LABEL_32:
    v18 = 87LL;
LABEL_33:
    UserSetLastError(v18, v15);
  }
  if ( v14 != v23 )
    Win32FreePool((__int64)v14, v15, v21);
  return PointerDataQPCTimeList;
}
