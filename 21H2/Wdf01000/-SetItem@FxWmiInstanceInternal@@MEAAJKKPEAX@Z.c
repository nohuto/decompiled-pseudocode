/*
 * XREFs of ?SetItem@FxWmiInstanceInternal@@MEAAJKKPEAX@Z @ 0x1C005EAA0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0036BA0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall FxWmiInstanceInternal::SetItem(
        FxWmiInstanceInternal *this,
        unsigned int DataItemId,
        unsigned int InBufferSize,
        void *InBuffer)
{
  return ((__int64 (__fastcall *)(FxDeviceBase *, FxWmiInstanceInternal *, _QWORD, _QWORD, void *))this->m_SetItem)(
           this->m_Provider->m_Parent->m_DeviceBase,
           this,
           DataItemId,
           InBufferSize,
           InBuffer);
}
