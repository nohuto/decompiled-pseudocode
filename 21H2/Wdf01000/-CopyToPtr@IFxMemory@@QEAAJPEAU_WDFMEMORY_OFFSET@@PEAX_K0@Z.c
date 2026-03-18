/*
 * XREFs of ?CopyToPtr@IFxMemory@@QEAAJPEAU_WDFMEMORY_OFFSET@@PEAX_K0@Z @ 0x1C00698F8
 * Callers:
 *     imp_WdfMemoryCopyToBuffer @ 0x1C0063750 (imp_WdfMemoryCopyToBuffer.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0036BA0 (_guard_dispatch_icall_nop.c)
 *     ?_CopyPtrToPtr@IFxMemory@@KAJPEAX_KPEAU_WDFMEMORY_OFFSET@@012@Z @ 0x1C0038712 (-_CopyPtrToPtr@IFxMemory@@KAJPEAX_KPEAU_WDFMEMORY_OFFSET@@012@Z.c)
 */

__int64 __fastcall IFxMemory::CopyToPtr(
        IFxMemory *this,
        _WDFMEMORY_OFFSET *SourceOffsets,
        char *DestinationBuffer,
        size_t DestinationBufferLength,
        _WDFMEMORY_OFFSET *DestinationOffsets)
{
  unsigned __int64 v9; // rdi
  char *v10; // rax

  v9 = this->GetBufferSize(this);
  v10 = (char *)this->GetBuffer(this);
  return IFxMemory::_CopyPtrToPtr(
           v10,
           v9,
           SourceOffsets,
           DestinationBuffer,
           DestinationBufferLength,
           DestinationOffsets);
}
