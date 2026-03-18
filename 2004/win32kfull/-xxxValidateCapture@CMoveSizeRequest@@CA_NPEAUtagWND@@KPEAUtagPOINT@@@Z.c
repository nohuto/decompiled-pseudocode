/*
 * XREFs of ?xxxValidateCapture@CMoveSizeRequest@@CA_NPEAUtagWND@@KPEAUtagPOINT@@@Z @ 0x1C0242B40
 * Callers:
 *     ?xxxRequestMoveSizeOperation@CMoveSizeRequest@@SA_NPEAUtagWND@@W4MOVESIZE_OPERATION@@K@Z @ 0x1C0242834 (-xxxRequestMoveSizeOperation@CMoveSizeRequest@@SA_NPEAUtagWND@@W4MOVESIZE_OPERATION@@K@Z.c)
 * Callees:
 *     ?CompositeAppHasForeground@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x1C0007CEC (-CompositeAppHasForeground@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     _IsTopLevelWindow @ 0x1C006EA50 (_IsTopLevelWindow.c)
 *     IsHungWindow @ 0x1C00E7D90 (IsHungWindow.c)
 *     xxxPromotePointerToMouse @ 0x1C01F0D14 (xxxPromotePointerToMouse.c)
 *     ?PtInsideWindowFrameBounds@@YA_NAEBUtagPOINT@@PEBUtagWND@@@Z @ 0x1C02401A4 (-PtInsideWindowFrameBounds@@YA_NAEBUtagPOINT@@PEBUtagWND@@@Z.c)
 */

bool __fastcall CMoveSizeRequest::xxxValidateCapture(struct tagWND *a1, int a2, struct tagPOINT *a3)
{
  __int64 v4; // r9
  unsigned __int16 v7; // di
  bool result; // al
  struct tagTHREADINFO *v9; // [rsp+40h] [rbp+8h] BYREF
  struct tagPOINT v10; // [rsp+58h] [rbp+20h] BYREF

  v4 = *((_QWORD *)a1 + 2);
  v9 = (struct tagTHREADINFO *)gptiCurrent;
  if ( *(_QWORD *)(v4 + 424) == *(_QWORD *)(gptiCurrent + 424LL)
    || (unsigned int)IsHungWindow((__int64)a1)
    || **(_WORD **)(*((_QWORD *)a1 + 17) + 8LL) == *(_WORD *)(gpsi + 900LL)
    || !(unsigned int)IsTopLevelWindow((__int64)a1)
    || *(_QWORD *)(*((_QWORD *)a1 + 2) + 424LL) != gpqForeground
    && !(unsigned int)CoreWindowProp::CompositeAppHasForeground(a1) )
  {
    return 0;
  }
  if ( a2 == 1 )
  {
    if ( !(unsigned __int8)IsCapturedByThread(&v9) )
      return 0;
    v7 = 1;
  }
  else
  {
    v7 = a2;
    if ( !CTouchProcessor::ThreadHasPrimaryCapture(gpTouchProcessor, v9, a2) || !xxxPromotePointerToMouse(a2, 0x10001u) )
      return 0;
  }
  v10 = (struct tagPOINT)*((_QWORD *)v9 + 96);
  if ( (a2 == 1 || CTouchProcessor::GetPointerMessagePoint(gpTouchProcessor, v7, &v10))
    && PtInsideWindowFrameBounds(&v10, a1) )
  {
    result = 1;
    *a3 = v10;
    return result;
  }
  return 0;
}
