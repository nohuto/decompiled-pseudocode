/*
 * XREFs of ndisIfUpdateInterfaceFromPersistentStore @ 0x1C002ECC0
 * Callers:
 *     ndisIfCreateInterfaceFromPersistentStore @ 0x1C002EB24 (ndisIfCreateInterfaceFromPersistentStore.c)
 *     ndisIfUpdateIfBlockFromPersistedState @ 0x1C0126ADC (ndisIfUpdateIfBlockFromPersistedState.c)
 * Callees:
 *     WPP_RECORDER_SF_IL @ 0x1C002EDA0 (WPP_RECORDER_SF_IL.c)
 *     WPP_RECORDER_SF_I @ 0x1C002EE30 (WPP_RECORDER_SF_I.c)
 *     ?ndisIfFindInterfaceByNetLuid@@YAPEAU_NDIS_IF_BLOCK@@T_NET_LUID_LH@@@Z @ 0x1C002EEA4 (-ndisIfFindInterfaceByNetLuid@@YAPEAU_NDIS_IF_BLOCK@@T_NET_LUID_LH@@@Z.c)
 */

__int64 __fastcall ndisIfUpdateInterfaceFromPersistentStore(__int64 a1, int a2, int a3)
{
  unsigned int v4; // edi
  struct _NDIS_IF_BLOCK *InterfaceByNetLuid; // rcx
  KIRQL v6; // r8
  unsigned __int8 v7; // al
  int v8; // edx
  int v9; // r8d

  v4 = 0;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_I(*((_QWORD *)WPP_GLOBAL_Control + 8), a2, a3, 10);
  KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  InterfaceByNetLuid = ndisIfFindInterfaceByNetLuid(*(union _NET_LUID_LH *)(a1 + 24));
  if ( InterfaceByNetLuid )
  {
    v7 = *(_BYTE *)(a1 + 134);
    if ( v7 )
    {
      InterfaceByNetLuid->ifConnectorPresent = *(_BYTE *)(a1 + 135);
      InterfaceByNetLuid->AccessType = *(_DWORD *)(a1 + 136);
      InterfaceByNetLuid->ConnectionType = *(_DWORD *)(a1 + 140);
      InterfaceByNetLuid->DirectionType = *(_DWORD *)(a1 + 144);
      v7 = *(_BYTE *)(a1 + 134);
    }
    InterfaceByNetLuid->IsWDFMiniportInterface = v7;
  }
  else
  {
    v4 = -1073741072;
  }
  KeReleaseSpinLock(&ndisIfListLock, v6);
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_IL(*((_QWORD *)WPP_GLOBAL_Control + 8), v8, v9, 11);
  return v4;
}
