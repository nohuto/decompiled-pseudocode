/*
 * XREFs of ?CancelActivePointer@CTouchProcessor@@AEAAXPEAUCInputPointerNode@@@Z @ 0x1C018952C
 * Callers:
 *     ?CancelActivePointers@CTouchProcessor@@QEAAXXZ @ 0x1C005E630 (-CancelActivePointers@CTouchProcessor@@QEAAXXZ.c)
 * Callees:
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C00746C4 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ?FreeNode@CTouchProcessor@@AEAAXPEAUCInputPointerNode@@@Z @ 0x1C018E64C (-FreeNode@CTouchProcessor@@AEAAXPEAUCInputPointerNode@@@Z.c)
 *     ?ProcessRoutedAwayList@CTouchProcessor@@AEAAXGHPEBUCPointerInputFrame@@KK@Z @ 0x1C0198698 (-ProcessRoutedAwayList@CTouchProcessor@@AEAAXGHPEBUCPointerInputFrame@@KK@Z.c)
 *     ?SetNewValidState@CTouchProcessor@@QEAAHIPEAUCInputPointerNode@@@Z @ 0x1C019A084 (-SetNewValidState@CTouchProcessor@@QEAAHIPEAUCInputPointerNode@@@Z.c)
 *     ?UnreferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1C019CF68 (-UnreferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 *     WPP_RECORDER_SF_LHH @ 0x1C019E754 (WPP_RECORDER_SF_LHH.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CTouchProcessor::CancelActivePointer(
        CTouchProcessor *this,
        struct CInputPointerNode *a2,
        int a3,
        int a4)
{
  int v6; // ecx
  unsigned int v7; // edi
  __int64 v8; // r8
  __int64 v9; // r9
  CInputDest *v10; // rcx
  _QWORD *v11; // rbx
  _QWORD *v12; // rdx

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
  v10 = (struct CInputPointerNode *)((char *)a2 + 64);
  if ( *((_DWORD *)a2 + 16) )
  {
    CInputDest::SetEmpty(v10);
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
    v11 = (_QWORD *)((char *)a2 + 240);
    v12 = (_QWORD *)*v11;
    if ( (_QWORD *)*v11 == v11 )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v10, v12, v8, v9);
      v12 = (_QWORD *)*v11;
    }
    CTouchProcessor::UnreferenceMsgData(this, v12, 1LL);
  }
}
