/*
 * XREFs of ?FormatReadParams@FxRequestContext@@QEAAXPEAVIFxMemory@@PEAU_WDFMEMORY_OFFSET@@@Z @ 0x1C0039B9C
 * Callers:
 *     FxIoTargetFormatIo @ 0x1C00724F4 (FxIoTargetFormatIo.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0036BA0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall FxRequestContext::FormatReadParams(
        FxRequestContext *this,
        IFxMemory *ReadMemory,
        _WDFMEMORY_OFFSET *ReadOffsets)
{
  unsigned __int64 BufferOffset; // rbx

  BufferOffset = 0LL;
  this->m_CompletionParams.Type = WdfRequestTypeRead;
  if ( ReadMemory )
    this->m_CompletionParams.Parameters.Others.Argument1.Value = (unsigned __int64)ReadMemory->GetHandle(ReadMemory);
  if ( ReadOffsets )
    BufferOffset = ReadOffsets->BufferOffset;
  this->m_CompletionParams.Parameters.Write.Offset = BufferOffset;
}
