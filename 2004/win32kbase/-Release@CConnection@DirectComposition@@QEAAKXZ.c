/*
 * XREFs of ?Release@CConnection@DirectComposition@@QEAAKXZ @ 0x1C009DB60
 * Callers:
 *     ?Create@CConnection@DirectComposition@@SAJPEAXPEAPEAUHDCOMPOSITIONCONNECTION__@@@Z @ 0x1C001C22C (-Create@CConnection@DirectComposition@@SAJPEAXPEAPEAUHDCOMPOSITIONCONNECTION__@@@Z.c)
 *     ?OnDwmRenderThreadExit@CConnection@DirectComposition@@SAXXZ @ 0x1C001C4D8 (-OnDwmRenderThreadExit@CConnection@DirectComposition@@SAXXZ.c)
 *     ?DestroyHandle@CConnection@DirectComposition@@SAJPEAUHDCOMPOSITIONCONNECTION__@@@Z @ 0x1C001C560 (-DestroyHandle@CConnection@DirectComposition@@SAJPEAUHDCOMPOSITIONCONNECTION__@@@Z.c)
 *     ?UnregisterChannel@CConnection@DirectComposition@@QEAAXPEAVCBatch@2@_N@Z @ 0x1C001CA68 (-UnregisterChannel@CConnection@DirectComposition@@QEAAXPEAVCBatch@2@_N@Z.c)
 *     ?Delete@CSharedSystemResource@DirectComposition@@MEAAJPEAU_WIN32_DELETEMETHOD_PARAMETERS@@@Z @ 0x1C0043AE0 (-Delete@CSharedSystemResource@DirectComposition@@MEAAJPEAU_WIN32_DELETEMETHOD_PARAMETERS@@@Z.c)
 *     ?Create@CDwmChannel@DirectComposition@@SAJPEAI@Z @ 0x1C0057EEC (-Create@CDwmChannel@DirectComposition@@SAJPEAI@Z.c)
 *     NtDCompositionGetFrameStatistics @ 0x1C009DA10 (NtDCompositionGetFrameStatistics.c)
 *     ??_GCProcessData@DirectComposition@@AEAAPEAXI@Z @ 0x1C00A5DCC (--_GCProcessData@DirectComposition@@AEAAPEAXI@Z.c)
 *     ?Create@CApplicationChannel@DirectComposition@@SAJPEAI0PEAPEAX@Z @ 0x1C00A612C (-Create@CApplicationChannel@DirectComposition@@SAJPEAI0PEAPEAX@Z.c)
 *     DCompositionIsShellProcess @ 0x1C00A6530 (DCompositionIsShellProcess.c)
 *     ??1CChannel@DirectComposition@@MEAA@XZ @ 0x1C00A8930 (--1CChannel@DirectComposition@@MEAA@XZ.c)
 *     DCompositionForceRender @ 0x1C00CBF84 (DCompositionForceRender.c)
 *     DCompositionDDAChange @ 0x1C01CE524 (DCompositionDDAChange.c)
 *     NtDCompositionCommitSynchronizationObject @ 0x1C01CE6E0 (NtDCompositionCommitSynchronizationObject.c)
 *     NtDCompositionCreateSynchronizationObject @ 0x1C01CE820 (NtDCompositionCreateSynchronizationObject.c)
 *     NtDCompositionEnableMMCSS @ 0x1C01CEE70 (NtDCompositionEnableMMCSS.c)
 *     NtDesktopCaptureBits @ 0x1C01CF270 (NtDesktopCaptureBits.c)
 * Callees:
 *     ??_GCConnection@DirectComposition@@AEAAPEAXI@Z @ 0x1C001C6FC (--_GCConnection@DirectComposition@@AEAAPEAXI@Z.c)
 */

__int64 __fastcall DirectComposition::CConnection::Release(DirectComposition::CConnection *this)
{
  unsigned __int32 v1; // ebx

  v1 = _InterlockedDecrement((volatile signed __int32 *)this);
  if ( !v1 && this )
    DirectComposition::CConnection::`scalar deleting destructor'(this);
  return v1;
}
