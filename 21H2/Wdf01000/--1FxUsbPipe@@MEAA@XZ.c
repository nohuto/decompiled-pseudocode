/*
 * XREFs of ??1FxUsbPipe@@MEAA@XZ @ 0x1C006C77C
 * Callers:
 *     ??_GFxUsbPipe@@MEAAPEAXI@Z @ 0x1C006C990 (--_GFxUsbPipe@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??1FxNonPagedObject@@UEAA@XZ @ 0x1C0014230 (--1FxNonPagedObject@@UEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D510 (_guard_dispatch_icall_nop.c)
 */

void __fastcall FxUsbPipe::~FxUsbPipe(FxUsbPipe *this, unsigned int a2, unsigned int a3)
{
  FxUsbInterface *m_UsbInterface; // rcx
  FxUsbPipe **m_ConfiguredPipes; // rdx
  __int64 v6; // rax

  this->__vftable = (FxUsbPipe_vtbl *)FxUsbPipe::`vftable';
  m_UsbInterface = this->m_UsbInterface;
  if ( m_UsbInterface )
  {
    m_ConfiguredPipes = m_UsbInterface->m_ConfiguredPipes;
    if ( m_ConfiguredPipes )
    {
      v6 = 0LL;
      if ( m_UsbInterface->m_NumberOfConfiguredPipes )
      {
        while ( m_ConfiguredPipes[v6] != this )
        {
          v6 = (unsigned int)(v6 + 1);
          if ( (unsigned int)v6 >= m_UsbInterface->m_NumberOfConfiguredPipes )
            goto LABEL_8;
        }
        m_ConfiguredPipes[v6] = 0LL;
      }
    }
LABEL_8:
    this->m_UsbInterface->Release(
      this->m_UsbInterface,
      this,
      1103,
      "minkernel\\wdf\\framework\\shared\\targets\\usb\\fxusbpipe.cpp");
  }
  this->__vftable = (FxUsbPipe_vtbl *)FxIoTarget::`vftable';
  FxNonPagedObject::~FxNonPagedObject(this, a2, a3);
}
