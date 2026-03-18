/*
 * XREFs of ?CancelActivePointer@CTouchProcessor@@AEAAXPEAUCInputPointerNode@@@Z @ 0x1C018F22C
 * Callers:
 *     ?CancelActivePointers@CTouchProcessor@@QEAAXXZ @ 0x1C0050BB0 (-CancelActivePointers@CTouchProcessor@@QEAAXXZ.c)
 * Callees:
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0071780 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ?FreeNode@CTouchProcessor@@AEAAXPEAUCInputPointerNode@@@Z @ 0x1C019434C (-FreeNode@CTouchProcessor@@AEAAXPEAUCInputPointerNode@@@Z.c)
 *     ?ProcessRoutedAwayList@CTouchProcessor@@AEAAXGHPEBUCPointerInputFrame@@KK@Z @ 0x1C019E388 (-ProcessRoutedAwayList@CTouchProcessor@@AEAAXGHPEBUCPointerInputFrame@@KK@Z.c)
 *     ?SetNewValidState@CTouchProcessor@@QEAAHIPEAUCInputPointerNode@@@Z @ 0x1C019FD74 (-SetNewValidState@CTouchProcessor@@QEAAHIPEAUCInputPointerNode@@@Z.c)
 *     ?UnreferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1C01A2CC8 (-UnreferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 *     WPP_RECORDER_SF_LHH @ 0x1C01A44B4 (WPP_RECORDER_SF_LHH.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CTouchProcessor::CancelActivePointer(
        CTouchProcessor *this,
        struct CInputPointerNode *a2,
        int a3,
        int a4)
{
  int v6; // ecx
  unsigned int v7; // edi
  CInputDest *v8; // rcx
  _QWORD *v9; // rbx
  _QWORD *v10; // rdx

  v6 = *((_DWORD *)a2 + 13);
  v7 = 0;
  if ( v6 == 1 )
  {
    v7 = 0x20000;
  }
  else if ( v6 == 2 )
  {
    v7 = 0x40000;
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_LHH(v6, v6 - 1, a3, a4);
  }
  CTouchProcessor::SetNewValidState(this, v7, a2);
  v8 = (struct CInputPointerNode *)((char *)a2 + 64);
  if ( *((_DWORD *)a2 + 16) )
  {
    CInputDest::SetEmpty(v8);
    *((_DWORD *)a2 + 70) &= ~0x10u;
  }
  if ( *((_DWORD *)a2 + 13) == 3
    && *((struct CInputPointerNode **)a2 + 30) == (struct CInputPointerNode *)((char *)a2 + 240) )
  {
    CTouchProcessor::ProcessRoutedAwayList(this, *((_WORD *)a2 + 16), 0, 0LL, 0, 0);
    CTouchProcessor::FreeNode(this, a2);
  }
  else
  {
    v9 = (_QWORD *)((char *)a2 + 240);
    v10 = (_QWORD *)*v9;
    if ( (_QWORD *)*v9 == v9 )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v8);
      v10 = (_QWORD *)*v9;
    }
    CTouchProcessor::UnreferenceMsgData(this, v10, 1LL);
  }
}
