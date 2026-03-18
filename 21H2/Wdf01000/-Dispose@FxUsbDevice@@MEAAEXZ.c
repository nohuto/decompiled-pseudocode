/*
 * XREFs of ?Dispose@FxUsbDevice@@MEAAEXZ @ 0x1C007CD50
 * Callers:
 *     <none>
 * Callees:
 *     ?Dispose@FxIoTarget@@MEAAEXZ @ 0x1C0034F20 (-Dispose@FxIoTarget@@MEAAEXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036BA0 (_guard_dispatch_icall_nop.c)
 */

unsigned __int8 __fastcall FxUsbDevice::Dispose(FxUsbDevice *this)
{
  USBD_HANDLE__ *m_USBDHandle; // rbx
  void (__fastcall *v3)(_QWORD); // rax

  KeFlushQueuedDpcs();
  m_USBDHandle = this->m_USBDHandle;
  if ( m_USBDHandle )
  {
    *((_BYTE *)m_USBDHandle + 225) = 1;
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)m_USBDHandle + 55, 0xFFFFFFFF) <= 1 )
    {
      if ( *((_BYTE *)m_USBDHandle + 225) )
      {
        v3 = (void (__fastcall *)(_QWORD))*((_QWORD *)m_USBDHandle + 14);
        if ( v3 )
          v3(*((_QWORD *)m_USBDHandle + 6));
        ExFreePoolWithTag(m_USBDHandle, *((_DWORD *)m_USBDHandle + 16));
      }
      else if ( LOBYTE(WPP_GLOBAL_WDF_Control.Dpc.DeferredContext) )
      {
        DbgPrintEx(0x4Du, 0, "UsbdHandleInfo->PendingDelete should be set here UsbdHandleInfo 0x%p\n", m_USBDHandle);
      }
    }
    this->m_USBDHandle = 0LL;
  }
  return FxIoTarget::Dispose(this);
}
