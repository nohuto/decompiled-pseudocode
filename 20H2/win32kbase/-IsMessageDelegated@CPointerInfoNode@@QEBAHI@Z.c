/*
 * XREFs of ?IsMessageDelegated@CPointerInfoNode@@QEBAHI@Z @ 0x1C0192B28
 * Callers:
 *     ?GetQueueForCurrentNode@CTouchProcessor@@AEAAPEAUtagQ@@PEAUtagTHREADINFO@@HIHPEBUCPointerInfoNode@@@Z @ 0x1C0191E2C (-GetQueueForCurrentNode@CTouchProcessor@@AEAAPEAUtagQ@@PEAUtagTHREADINFO@@HIHPEBUCPointerInfoNod.c)
 *     ?HandlePointerNodeWithTarget@CTouchProcessor@@AEAA?AW4PointerNodeWithTargetHandling@1@PEBUCPointerInfoNode@@IPEAU3@@Z @ 0x1C0192370 (-HandlePointerNodeWithTarget@CTouchProcessor@@AEAA-AW4PointerNodeWithTargetHandling@1@PEBUCPoint.c)
 *     ?SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z @ 0x1C0198060 (-SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z.c)
 * Callees:
 *     ?IsMessageDelegated@CPointerInfoNode@@QEBAHHHHH@Z @ 0x1C0192B04 (-IsMessageDelegated@CPointerInfoNode@@QEBAHHHHH@Z.c)
 *     IsPointerInputMessage @ 0x1C019C028 (IsPointerInputMessage.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

_BOOL8 __fastcall CPointerInfoNode::IsMessageDelegated(CPointerInfoNode *this, __int64 a2, __int64 a3, __int64 a4)
{
  int v5; // ebx
  __int64 v6; // rdx
  CPointerInfoNode *v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  int v10; // eax
  int v11; // r9d
  int v12; // r8d
  bool v13; // cf
  int v14; // edx
  int v15; // edx

  v5 = a2;
  if ( !(unsigned int)IsPointerInputMessage((unsigned int)a2, a2, a3, a4) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v7, v6, v8, v9);
  switch ( v5 )
  {
    case 585:
      v10 = -__CFSHR__(*(_DWORD *)this, 27);
      v11 = -__CFSHR__(*(_DWORD *)this, 26);
      v12 = -__CFSHR__(*(_DWORD *)this, 25);
      v13 = __CFSHR__(*(_DWORD *)this, 24);
      break;
    case 586:
      v10 = (2 * *(_DWORD *)this) >> 31;
      v11 = -__CFSHR__(*(_DWORD *)this, 30);
      v12 = -__CFSHR__(*(_DWORD *)this, 29);
      v13 = __CFSHR__(*(_DWORD *)this, 28);
      break;
    case 593:
      v10 = -__CFSHR__(*((_DWORD *)this + 1), 3);
      v11 = -__CFSHR__(*((_DWORD *)this + 1), 2);
      v12 = -(*((_DWORD *)this + 1) & 1);
      v14 = *(int *)this >> 31;
      return CPointerInfoNode::IsMessageDelegated(v7, v14, v12, v11, v10);
    case 594:
      v15 = *((_DWORD *)this + 1);
      v10 = -__CFSHR__(v15, 7);
      v11 = -__CFSHR__(v15, 6);
      v12 = -__CFSHR__(v15, 5);
      v13 = __CFSHR__(v15, 4);
      break;
    default:
      v14 = 1;
      v10 = -__CFSHR__(*(_DWORD *)this, 23);
      v11 = -__CFSHR__(*(_DWORD *)this, 22);
      v12 = -__CFSHR__(*(_DWORD *)this, 21);
      return CPointerInfoNode::IsMessageDelegated(v7, v14, v12, v11, v10);
  }
  v14 = -v13;
  return CPointerInfoNode::IsMessageDelegated(v7, v14, v12, v11, v10);
}
