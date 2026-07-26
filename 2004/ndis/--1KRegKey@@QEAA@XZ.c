/*
 * XREFs of ??1KRegKey@@QEAA@XZ @ 0x1C00F8790
 * Callers:
 *     ?ndisIfReadInterfaceAddDeviceParameters@@YAJAEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAU_DEVICE_OBJECT@@@Z @ 0x1C0100188 (-ndisIfReadInterfaceAddDeviceParameters@@YAJAEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAU_DEVICE_OBJEC.c)
 * Callees:
 *     ??$invoke@P6AXPEAUNDISWATCHDOG__@@@ZAEAPEAU1@@wistd@@YAX$$QEAP6AXPEAUNDISWATCHDOG__@@@ZAEAPEAU1@@Z @ 0x1C003D7F8 (--$invoke@P6AXPEAUNDISWATCHDOG__@@@ZAEAPEAU1@@wistd@@YAX$$QEAP6AXPEAUNDISWATCHDOG__@@@ZAEAPEAU1@.c)
 */

void __fastcall KRegKey::~KRegKey(KRegKey *this)
{
  void *m_ptr; // [rsp+30h] [rbp+8h] BYREF
  NTSTATUS (__stdcall *v2)(HANDLE); // [rsp+38h] [rbp+10h] BYREF

  if ( this->m_ptr )
  {
    m_ptr = this->m_ptr;
    v2 = ZwClose;
    wistd::invoke<void (*)(NDISWATCHDOG__ *),NDISWATCHDOG__ * &>((__int64 (__fastcall **)(_QWORD))&v2, &m_ptr);
  }
}
