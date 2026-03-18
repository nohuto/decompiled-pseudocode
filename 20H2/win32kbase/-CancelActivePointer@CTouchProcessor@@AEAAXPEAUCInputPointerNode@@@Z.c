/*
 * XREFs of ?CancelActivePointer@CTouchProcessor@@AEAAXPEAUCInputPointerNode@@@Z @ 0x1C0186FEC
 * Callers:
 *     ?CancelActivePointers@CTouchProcessor@@QEAAXXZ @ 0x1C00BEA10 (-CancelActivePointers@CTouchProcessor@@QEAAXXZ.c)
 * Callees:
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0055364 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ?FreeNode@CTouchProcessor@@AEAAXPEAUCInputPointerNode@@@Z @ 0x1C018C12C (-FreeNode@CTouchProcessor@@AEAAXPEAUCInputPointerNode@@@Z.c)
 *     ?ProcessRoutedAwayList@CTouchProcessor@@AEAAXGHPEBUCPointerInputFrame@@KK@Z @ 0x1C0196168 (-ProcessRoutedAwayList@CTouchProcessor@@AEAAXGHPEBUCPointerInputFrame@@KK@Z.c)
 *     ?SetNewValidState@CTouchProcessor@@QEAAHIPEAUCInputPointerNode@@@Z @ 0x1C0197B54 (-SetNewValidState@CTouchProcessor@@QEAAHIPEAUCInputPointerNode@@@Z.c)
 *     ?UnreferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1C019AA68 (-UnreferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 *     WPP_RECORDER_SF_LHH @ 0x1C019C254 (WPP_RECORDER_SF_LHH.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CTouchProcessor::CancelActivePointer(
        CTouchProcessor *this,
        struct CInputPointerNode *a2,
        int a3,
        int a4)
{
  int v6; // ecx
  unsigned int v7; // edi
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  CInputDest *v11; // rcx
  _QWORD *v12; // rbx
  _QWORD *v13; // rdx

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
  v11 = (struct CInputPointerNode *)((char *)a2 + 64);
  if ( *((_DWORD *)a2 + 16) )
  {
    CInputDest::SetEmpty(v11, v8, v9, v10);
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
    v12 = (_QWORD *)((char *)a2 + 240);
    v13 = (_QWORD *)*v12;
    if ( (_QWORD *)*v12 == v12 )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v11, v13, v9, v10);
      v13 = (_QWORD *)*v12;
    }
    CTouchProcessor::UnreferenceMsgData(this, v13, 1LL);
  }
}
