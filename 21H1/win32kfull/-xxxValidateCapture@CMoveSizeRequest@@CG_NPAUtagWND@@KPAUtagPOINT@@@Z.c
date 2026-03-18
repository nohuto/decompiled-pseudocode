/*
 * XREFs of ?xxxValidateCapture@CMoveSizeRequest@@CG_NPAUtagWND@@KPAUtagPOINT@@@Z @ 0x19FE53
 * Callers:
 *     ?xxxRequestMoveSizeOperation@CMoveSizeRequest@@SG_NPAUtagWND@@W4MOVESIZE_OPERATION@@K@Z @ 0x19FC05 (-xxxRequestMoveSizeOperation@CMoveSizeRequest@@SG_NPAUtagWND@@W4MOVESIZE_OPERATION@@K@Z.c)
 * Callees:
 *     __IsTopLevelWindow@4 @ 0x38178 (__IsTopLevelWindow@4.c)
 *     _IsGhostWindowClass@4 @ 0x72C42 (_IsGhostWindowClass@4.c)
 *     _IsHungWindow@4 @ 0x738B4 (_IsHungWindow@4.c)
 *     ?CompositeAppHasForeground@CoreWindowProp@@SGHPBUtagWND@@@Z @ 0xC7072 (-CompositeAppHasForeground@CoreWindowProp@@SGHPBUtagWND@@@Z.c)
 *     _xxxPromotePointerToMouse@8 @ 0x15A76D (_xxxPromotePointerToMouse@8.c)
 *     ?PtInsideWindowFrameBounds@@YG_NABUtagPOINT@@PBUtagWND@@@Z @ 0x19E3F7 (-PtInsideWindowFrameBounds@@YG_NABUtagPOINT@@PBUtagWND@@@Z.c)
 */

bool __userpurge CMoveSizeRequest::xxxValidateCapture@<al>(
        int a1@<edx>,
        _DWORD *a2@<ecx>,
        struct tagWND *a3,
        unsigned int a4,
        struct tagPOINT *a5)
{
  unsigned __int16 v7; // si
  bool result; // al
  struct tagPOINT v9; // [esp+Ch] [ebp-Ch] BYREF
  struct tagTHREADINFO *v10; // [esp+14h] [ebp-4h] BYREF

  v10 = (struct tagTHREADINFO *)_gptiCurrent;
  if ( *(_DWORD *)(a2[2] + 236) == *(_DWORD *)(_gptiCurrent + 236)
    || IsHungWindow((int)a2)
    || IsGhostWindowClass(a2)
    || !_IsTopLevelWindow(a2)
    || *(_DWORD *)(a2[2] + 236) != _gpqForeground && !CoreWindowProp::CompositeAppHasForeground(a2) )
  {
    return 0;
  }
  if ( a1 == 1 )
  {
    if ( !(unsigned __int8)IsCapturedByThread(&v10) )
      return 0;
    v7 = 1;
  }
  else
  {
    v7 = a1;
    if ( !CTouchProcessor::ThreadHasPrimaryCapture(_gpTouchProcessor, v10, a1)
      || !xxxPromotePointerToMouse((unsigned int *)(unsigned __int16)a1) )
    {
      return 0;
    }
  }
  v9 = *(struct tagPOINT *)((char *)v10 + 428);
  if ( (a1 == 1 || CTouchProcessor::GetPointerMessagePoint(_gpTouchProcessor, v7, &v9))
    && PtInsideWindowFrameBounds(&v9.x, (int)a2) )
  {
    result = 1;
    *(struct tagPOINT *)a3 = v9;
    return result;
  }
  return 0;
}
