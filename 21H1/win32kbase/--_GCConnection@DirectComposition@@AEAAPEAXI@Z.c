/*
 * XREFs of ??_GCConnection@DirectComposition@@AEAAPEAXI@Z @ 0x1C0006BCC
 * Callers:
 *     DCompositionSessionUninitialize @ 0x1C0006AEC (DCompositionSessionUninitialize.c)
 *     NtDCompositionGetConnectionBatch @ 0x1C000A040 (NtDCompositionGetConnectionBatch.c)
 *     NtDCompositionDiscardFrame @ 0x1C0016310 (NtDCompositionDiscardFrame.c)
 *     NtDCompositionRetireFrame @ 0x1C0016460 (NtDCompositionRetireFrame.c)
 *     NtDCompositionBeginFrame @ 0x1C00B2FE0 (NtDCompositionBeginFrame.c)
 *     ?Release@CConnection@DirectComposition@@QEAAKXZ @ 0x1C00BA790 (-Release@CConnection@DirectComposition@@QEAAKXZ.c)
 *     NtDCompositionGetFrameSurfaceUpdates @ 0x1C00BA890 (NtDCompositionGetFrameSurfaceUpdates.c)
 *     NtDCompositionGetFrameLegacyTokens @ 0x1C00BAAC0 (NtDCompositionGetFrameLegacyTokens.c)
 * Callees:
 *     ??1CConnection@DirectComposition@@AEAA@XZ @ 0x1C0006BF4 (--1CConnection@DirectComposition@@AEAA@XZ.c)
 *     Win32FreePool @ 0x1C008C9A0 (Win32FreePool.c)
 */

DirectComposition::CConnection *__fastcall DirectComposition::CConnection::`scalar deleting destructor'(
        DirectComposition::CConnection *this)
{
  DirectComposition::CConnection::~CConnection(this);
  Win32FreePool(this);
  return this;
}
