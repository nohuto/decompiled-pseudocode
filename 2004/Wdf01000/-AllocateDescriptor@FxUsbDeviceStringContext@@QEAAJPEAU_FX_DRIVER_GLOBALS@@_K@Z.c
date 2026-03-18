/*
 * XREFs of ?AllocateDescriptor@FxUsbDeviceStringContext@@QEAAJPEAU_FX_DRIVER_GLOBALS@@_K@Z @ 0x1C006F724
 * Callers:
 *     ?FormatStringRequest@FxUsbDevice@@QEAAJPEAVFxRequestBase@@PEAUFxRequestBuffer@@EG@Z @ 0x1C0072C50 (-FormatStringRequest@FxUsbDevice@@QEAAJPEAVFxRequestBase@@PEAUFxRequestBuffer@@EG@Z.c)
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0005638 (-FxPoolFree@@YAXPEAX@Z.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C0009330 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     memset @ 0x1C001D340 (memset.c)
 */

__int64 __fastcall FxUsbDeviceStringContext::AllocateDescriptor(
        FxUsbDeviceStringContext *this,
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        unsigned __int64 BufferSize)
{
  size_t v5; // rdi
  _USB_STRING_DESCRIPTOR *v6; // rsi
  _USB_STRING_DESCRIPTOR *m_StringDescriptor; // rcx
  unsigned int v8; // ecx
  void *Caller; // [rsp+38h] [rbp+0h]

  if ( BufferSize <= this->m_StringDescriptorLength )
    return 0LL;
  v5 = BufferSize + 2;
  v6 = (_USB_STRING_DESCRIPTOR *)FxPoolAllocator(
                                   FxDriverGlobals,
                                   &FxDriverGlobals->FxPoolFrameworks,
                                   ExDefaultNonPagedPoolType,
                                   BufferSize + 2,
                                   FxDriverGlobals->Tag,
                                   Caller);
  if ( !v6 )
    return 3221225626LL;
  m_StringDescriptor = this->m_StringDescriptor;
  if ( m_StringDescriptor )
    FxPoolFree((FX_POOL_TRACKER *)m_StringDescriptor);
  memset(v6, 0, v5);
  this->m_StringDescriptor = v6;
  v8 = -1;
  if ( v5 <= 0xFFFFFFFF )
    v8 = v5;
  this->m_StringDescriptorLength = v8;
  return v5 > 0xFFFFFFFF ? 0xC0000095 : 0;
}
