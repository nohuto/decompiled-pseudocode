/*
 * XREFs of ?IsCxUsingSelfManagedIo@FxDevice@@QEAAEXZ @ 0x1C0080644
 * Callers:
 *     ?RegisterCallbacks@FxPkgPnp@@QEAAJPEAU_WDF_PNPPOWER_EVENT_CALLBACKS@@@Z @ 0x1C0081A50 (-RegisterCallbacks@FxPkgPnp@@QEAAJPEAU_WDF_PNPPOWER_EVENT_CALLBACKS@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C001A350 (__security_check_cookie.c)
 */

char __fastcall FxDevice::IsCxUsingSelfManagedIo(FxDevice *this)
{
  _LIST_ENTRY *p_m_CxDeviceInfoListHead; // r10
  _LIST_ENTRY *Flink; // rax
  _LIST_ENTRY *v3; // rcx
  char v4; // dl
  unsigned int v5; // r8d
  FxCxCallbackType *v6; // r9
  FxCxCallbackType smIoCallbackList[5]; // [rsp+0h] [rbp-18h] BYREF

  p_m_CxDeviceInfoListHead = &this->m_CxDeviceInfoListHead;
  *(_DWORD *)smIoCallbackList = 218825474;
  Flink = this->m_CxDeviceInfoListHead.Flink;
  v3 = 0LL;
  v4 = 0;
  smIoCallbackList[4] = FxCxCallbackSmIoCleanup;
  if ( Flink != p_m_CxDeviceInfoListHead )
    v3 = Flink;
  do
  {
    if ( !v3 || v4 )
      break;
    v5 = 0;
    v6 = smIoCallbackList;
    while ( !*((_QWORD *)&v3[6].Flink + *(unsigned __int8 *)v6) )
    {
      ++v5;
      ++v6;
      if ( v5 >= 5 )
        goto LABEL_10;
    }
    v4 = 1;
LABEL_10:
    v3 = v3->Flink;
  }
  while ( v3 != p_m_CxDeviceInfoListHead );
  return v4;
}
