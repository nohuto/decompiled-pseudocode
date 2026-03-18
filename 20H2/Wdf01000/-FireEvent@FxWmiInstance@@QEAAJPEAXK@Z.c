/*
 * XREFs of ?FireEvent@FxWmiInstance@@QEAAJPEAXK@Z @ 0x1C003E1F4
 * Callers:
 *     imp_WdfWmiInstanceFireEvent @ 0x1C003D280 (imp_WdfWmiInstanceFireEvent.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0003FA0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     WPP_IFR_SF_qL @ 0x1C000B0E4 (WPP_IFR_SF_qL.c)
 *     memmove @ 0x1C001CB80 (memmove.c)
 *     ?GetInstanceIndex@FxWmiProvider@@QEAAKPEAVFxWmiInstance@@@Z @ 0x1C003D974 (-GetInstanceIndex@FxWmiProvider@@QEAAKPEAVFxWmiInstance@@@Z.c)
 */

__int64 __fastcall FxWmiInstance::FireEvent(FxWmiInstance *this, void *EventBuffer, unsigned int EventBufferSize)
{
  unsigned int v5; // edi
  char *PoolWithTag; // rax
  _DWORD *v7; // rbx
  ULONG v8; // eax
  unsigned __int8 v9; // r8
  NTSTATUS v10; // edi
  const void *_a1; // rax

  v5 = EventBuffer != 0LL ? EventBufferSize : 0;
  PoolWithTag = (char *)ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, v5 + 64, this->m_Globals->Tag);
  v7 = PoolWithTag;
  if ( PoolWithTag )
  {
    *(_GUID *)(PoolWithTag + 24) = this->m_Provider->m_Guid;
    v8 = IoWMIDeviceObjectToProviderId(this->m_Provider->m_Parent->m_DeviceBase->m_DeviceObject.m_DeviceObject);
    *v7 = v5 + 64;
    v7[1] = v8;
    v7[11] = 138;
    *((_QWORD *)v7 + 2) = MEMORY[0xFFFFF78000000014];
    v7[13] = FxWmiProvider::GetInstanceIndex(this->m_Provider, (_LIST_ENTRY **)this, v9);
    v7[15] = v5;
    v7[14] = 64;
    if ( EventBuffer )
      memmove(v7 + 16, EventBuffer, v5);
    v10 = IoWMIWriteEvent(v7);
    if ( v10 < 0 )
      ExFreePoolWithTag(v7, 0);
  }
  else
  {
    v10 = -1073741670;
    _a1 = (const void *)FxObject::GetObjectHandleUnchecked(this);
    WPP_IFR_SF_qL(this->m_Globals, 2u, 0x12u, 0xAu, WPP_FxWmiInstance_cpp_Traceguids, _a1, 0xC000009A);
  }
  return (unsigned int)v10;
}
