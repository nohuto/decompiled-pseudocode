/*
 * XREFs of ?IsMessageDelegated@CPointerInfoNode@@QEBAHI@Z @ 0x1C019AD58
 * Callers:
 *     ?GetQueueForCurrentNode@CTouchProcessor@@AEAAPEAUtagQ@@PEAUtagTHREADINFO@@HIHPEBUCPointerInfoNode@@@Z @ 0x1C019A05C (-GetQueueForCurrentNode@CTouchProcessor@@AEAAPEAUtagQ@@PEAUtagTHREADINFO@@HIHPEBUCPointerInfoNod.c)
 *     ?HandlePointerNodeWithTarget@CTouchProcessor@@AEAA?AW4PointerNodeWithTargetHandling@1@PEBUCPointerInfoNode@@IPEAU3@@Z @ 0x1C019A5A0 (-HandlePointerNodeWithTarget@CTouchProcessor@@AEAA-AW4PointerNodeWithTargetHandling@1@PEBUCPoint.c)
 *     ?SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z @ 0x1C01A0280 (-SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z.c)
 * Callees:
 *     ?IsMessageDelegated@CPointerInfoNode@@QEBAHHHHH@Z @ 0x1C019AD34 (-IsMessageDelegated@CPointerInfoNode@@QEBAHHHHH@Z.c)
 *     IsPointerInputMessage @ 0x1C01A4288 (IsPointerInputMessage.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

_BOOL8 __fastcall CPointerInfoNode::IsMessageDelegated(CPointerInfoNode *this, __int64 a2, __int64 a3, __int64 a4)
{
  int v5; // ebx
  CPointerInfoNode *v6; // rcx
  int v7; // eax
  int v8; // r9d
  int v9; // r8d
  bool v10; // cf
  int v11; // edx
  int v12; // edx

  v5 = a2;
  if ( !(unsigned int)IsPointerInputMessage((unsigned int)a2, a2, a3, a4) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v6);
  switch ( v5 )
  {
    case 585:
      v7 = -__CFSHR__(*(_DWORD *)this, 27);
      v8 = -__CFSHR__(*(_DWORD *)this, 26);
      v9 = -__CFSHR__(*(_DWORD *)this, 25);
      v10 = __CFSHR__(*(_DWORD *)this, 24);
      break;
    case 586:
      v7 = (2 * *(_DWORD *)this) >> 31;
      v8 = -__CFSHR__(*(_DWORD *)this, 30);
      v9 = -__CFSHR__(*(_DWORD *)this, 29);
      v10 = __CFSHR__(*(_DWORD *)this, 28);
      break;
    case 593:
      v7 = -__CFSHR__(*((_DWORD *)this + 1), 3);
      v8 = -__CFSHR__(*((_DWORD *)this + 1), 2);
      v9 = -(*((_DWORD *)this + 1) & 1);
      v11 = *(int *)this >> 31;
      return CPointerInfoNode::IsMessageDelegated(v6, v11, v9, v8, v7);
    case 594:
      v12 = *((_DWORD *)this + 1);
      v7 = -__CFSHR__(v12, 7);
      v8 = -__CFSHR__(v12, 6);
      v9 = -__CFSHR__(v12, 5);
      v10 = __CFSHR__(v12, 4);
      break;
    default:
      v11 = 1;
      v7 = -__CFSHR__(*(_DWORD *)this, 23);
      v8 = -__CFSHR__(*(_DWORD *)this, 22);
      v9 = -__CFSHR__(*(_DWORD *)this, 21);
      return CPointerInfoNode::IsMessageDelegated(v6, v11, v9, v8, v7);
  }
  v11 = -v10;
  return CPointerInfoNode::IsMessageDelegated(v6, v11, v9, v8, v7);
}
