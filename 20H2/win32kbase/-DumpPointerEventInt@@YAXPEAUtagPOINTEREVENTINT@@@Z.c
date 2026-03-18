/*
 * XREFs of ?DumpPointerEventInt@@YAXPEAUtagPOINTEREVENTINT@@@Z @ 0x1C0170338
 * Callers:
 *     rimGetCompleteFrameAndReleaseHoldingFrame @ 0x1C017188C (rimGetCompleteFrameAndReleaseHoldingFrame.c)
 * Callees:
 *     WPP_RECORDER_SF_s @ 0x1C01534DC (WPP_RECORDER_SF_s.c)
 */

void __fastcall DumpPointerEventInt(struct tagPOINTEREVENTINT *a1, int a2)
{
  int v2; // eax

  v2 = *((_DWORD *)a1 + 5);
  if ( (v2 & 1) != 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_s(
      (_DWORD)gRimLog,
      a2,
      1,
      11,
      (__int64)&WPP_9651681dcc2638ebeb0ec510677294f4_Traceguids,
      (__int64)"POINTER_FLAG_NEW");
    v2 = *((_DWORD *)a1 + 5);
  }
  if ( (v2 & 2) != 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_s(
      (_DWORD)gRimLog,
      a2,
      1,
      12,
      (__int64)&WPP_9651681dcc2638ebeb0ec510677294f4_Traceguids,
      (__int64)"POINTER_FLAG_INRANGE");
    v2 = *((_DWORD *)a1 + 5);
  }
  if ( (v2 & 4) != 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_s(
      (_DWORD)gRimLog,
      a2,
      1,
      13,
      (__int64)&WPP_9651681dcc2638ebeb0ec510677294f4_Traceguids,
      (__int64)"POINTER_FLAG_INCONTACT");
    v2 = *((_DWORD *)a1 + 5);
  }
  if ( (v2 & 0x10) != 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_s(
      (_DWORD)gRimLog,
      a2,
      1,
      14,
      (__int64)&WPP_9651681dcc2638ebeb0ec510677294f4_Traceguids,
      (__int64)"POINTER_FLAG_FIRSTBUTTON");
    v2 = *((_DWORD *)a1 + 5);
  }
  if ( (v2 & 0x20) != 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_s(
      (_DWORD)gRimLog,
      a2,
      1,
      15,
      (__int64)&WPP_9651681dcc2638ebeb0ec510677294f4_Traceguids,
      (__int64)"POINTER_FLAG_SECONDBUTTON");
    v2 = *((_DWORD *)a1 + 5);
  }
  if ( (v2 & 0x40) != 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_s(
      (_DWORD)gRimLog,
      a2,
      1,
      16,
      (__int64)&WPP_9651681dcc2638ebeb0ec510677294f4_Traceguids,
      (__int64)"POINTER_FLAG_THIRDBUTTON");
    v2 = *((_DWORD *)a1 + 5);
  }
  if ( (v2 & 0x2000) != 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_s(
      (_DWORD)gRimLog,
      a2,
      1,
      17,
      (__int64)&WPP_9651681dcc2638ebeb0ec510677294f4_Traceguids,
      (__int64)"POINTER_FLAG_PRIMARY");
    v2 = *((_DWORD *)a1 + 5);
  }
  if ( (v2 & 0x4000) != 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_s(
      (_DWORD)gRimLog,
      a2,
      1,
      18,
      (__int64)&WPP_9651681dcc2638ebeb0ec510677294f4_Traceguids,
      (__int64)"POINTER_FLAG_CONFIDENCE");
    v2 = *((_DWORD *)a1 + 5);
  }
  if ( (v2 & 0x8000) != 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_s(
      (_DWORD)gRimLog,
      a2,
      1,
      19,
      (__int64)&WPP_9651681dcc2638ebeb0ec510677294f4_Traceguids,
      (__int64)"POINTER_FLAG_CANCELED");
    v2 = *((_DWORD *)a1 + 5);
  }
  if ( (v2 & 0x10000) != 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_s(
      (_DWORD)gRimLog,
      a2,
      1,
      20,
      (__int64)&WPP_9651681dcc2638ebeb0ec510677294f4_Traceguids,
      (__int64)"POINTER_FLAG_DOWN");
    v2 = *((_DWORD *)a1 + 5);
  }
  if ( (v2 & 0x20000) != 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_s(
      (_DWORD)gRimLog,
      a2,
      1,
      21,
      (__int64)&WPP_9651681dcc2638ebeb0ec510677294f4_Traceguids,
      (__int64)"POINTER_FLAG_UPDATE");
    v2 = *((_DWORD *)a1 + 5);
  }
  if ( (v2 & 0x40000) != 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_s(
      (_DWORD)gRimLog,
      a2,
      1,
      22,
      (__int64)&WPP_9651681dcc2638ebeb0ec510677294f4_Traceguids,
      (__int64)"POINTER_FLAG_UP");
    v2 = *((_DWORD *)a1 + 5);
  }
  if ( (v2 & 0x80000) != 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_s(
      (_DWORD)gRimLog,
      a2,
      1,
      23,
      (__int64)&WPP_9651681dcc2638ebeb0ec510677294f4_Traceguids,
      (__int64)"POINTER_FLAG_WHEEL");
    v2 = *((_DWORD *)a1 + 5);
  }
  if ( (v2 & 0x100000) != 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_s(
      (_DWORD)gRimLog,
      a2,
      1,
      24,
      (__int64)&WPP_9651681dcc2638ebeb0ec510677294f4_Traceguids,
      (__int64)"POINTER_FLAG_HWHEEL");
    v2 = *((_DWORD *)a1 + 5);
  }
  if ( (v2 & 0x200000) != 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_s(
      (_DWORD)gRimLog,
      a2,
      1,
      25,
      (__int64)&WPP_9651681dcc2638ebeb0ec510677294f4_Traceguids,
      (__int64)"POINTER_FLAG_CAPTURECHANGED");
}
