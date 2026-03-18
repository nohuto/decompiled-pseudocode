/*
 * XREFs of ??_GCConnection@DirectComposition@@AEAAPEAXI@Z @ 0x1C0081314
 * Callers:
 *     ?Release@CConnection@DirectComposition@@QEAAKXZ @ 0x1C00619C0 (-Release@CConnection@DirectComposition@@QEAAKXZ.c)
 *     NtDCompositionGetFrameSurfaceUpdates @ 0x1C0061AC0 (NtDCompositionGetFrameSurfaceUpdates.c)
 *     NtDCompositionGetFrameLegacyTokens @ 0x1C0061CF0 (NtDCompositionGetFrameLegacyTokens.c)
 *     NtDCompositionBeginFrame @ 0x1C0067D60 (NtDCompositionBeginFrame.c)
 *     DCompositionSessionUninitialize @ 0x1C008133C (DCompositionSessionUninitialize.c)
 *     NtDCompositionGetConnectionBatch @ 0x1C0083810 (NtDCompositionGetConnectionBatch.c)
 *     NtDCompositionDiscardFrame @ 0x1C0087D50 (NtDCompositionDiscardFrame.c)
 *     NtDCompositionRetireFrame @ 0x1C0087EA0 (NtDCompositionRetireFrame.c)
 * Callees:
 *     Win32FreePool @ 0x1C0057A50 (Win32FreePool.c)
 *     ??1CConnection@DirectComposition@@AEAA@XZ @ 0x1C0081238 (--1CConnection@DirectComposition@@AEAA@XZ.c)
 */

DirectComposition::CConnection *__fastcall DirectComposition::CConnection::`scalar deleting destructor'(
        DirectComposition::CConnection *this)
{
  DirectComposition::CConnection::~CConnection(this);
  Win32FreePool((__int64)this);
  return this;
}
