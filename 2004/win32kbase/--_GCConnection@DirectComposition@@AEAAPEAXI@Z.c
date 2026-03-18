/*
 * XREFs of ??_GCConnection@DirectComposition@@AEAAPEAXI@Z @ 0x1C001C6FC
 * Callers:
 *     DCompositionSessionUninitialize @ 0x1C001C61C (DCompositionSessionUninitialize.c)
 *     NtDCompositionGetConnectionBatch @ 0x1C001FB40 (NtDCompositionGetConnectionBatch.c)
 *     NtDCompositionDiscardFrame @ 0x1C0024760 (NtDCompositionDiscardFrame.c)
 *     NtDCompositionRetireFrame @ 0x1C00248B0 (NtDCompositionRetireFrame.c)
 *     ?Release@CConnection@DirectComposition@@QEAAKXZ @ 0x1C009DB60 (-Release@CConnection@DirectComposition@@QEAAKXZ.c)
 *     NtDCompositionGetFrameSurfaceUpdates @ 0x1C009DC60 (NtDCompositionGetFrameSurfaceUpdates.c)
 *     NtDCompositionGetFrameLegacyTokens @ 0x1C009DE90 (NtDCompositionGetFrameLegacyTokens.c)
 *     NtDCompositionBeginFrame @ 0x1C00A8F70 (NtDCompositionBeginFrame.c)
 * Callees:
 *     ??1CConnection@DirectComposition@@AEAA@XZ @ 0x1C001C724 (--1CConnection@DirectComposition@@AEAA@XZ.c)
 *     Win32FreePool @ 0x1C0096F60 (Win32FreePool.c)
 */

DirectComposition::CConnection *__fastcall DirectComposition::CConnection::`scalar deleting destructor'(
        DirectComposition::CConnection *this)
{
  DirectComposition::CConnection::~CConnection(this);
  Win32FreePool(this);
  return this;
}
