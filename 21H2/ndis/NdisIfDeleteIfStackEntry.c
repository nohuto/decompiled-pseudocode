/*
 * XREFs of NdisIfDeleteIfStackEntry @ 0x1C00B1670
 * Callers:
 *     ?ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C012D1DC (-ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BI.c)
 * Callees:
 *     ndisIfFindStackEntry @ 0x1C0026120 (ndisIfFindStackEntry.c)
 *     WPP_RECORDER_SF_dd @ 0x1C00261C0 (WPP_RECORDER_SF_dd_ea_1C00261C0.c)
 */

void __stdcall NdisIfDeleteIfStackEntry(NET_IFINDEX HigherLayerIfIndex, NET_IFINDEX LowerLayerIfIndex)
{
  KIRQL v4; // si
  PVOID *StackEntry; // rax
  PVOID *v6; // rdx
  PVOID **v7; // rcx
  int v8; // edx
  __int64 v9; // [rsp+30h] [rbp-18h]

  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_dd(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      LowerLayerIfIndex,
      0x16u,
      0xCu,
      (struct _GUID *)&WPP_97b9fb6a84ce353ae77a2fb1f333ded7_Traceguids,
      HigherLayerIfIndex,
      LowerLayerIfIndex);
  v4 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  KeAcquireSpinLockAtDpcLevel(&qword_1C00E4B38);
  StackEntry = ndisIfFindStackEntry(HigherLayerIfIndex, LowerLayerIfIndex);
  if ( StackEntry )
  {
    --*((_DWORD *)StackEntry[3] + 324);
    --*((_DWORD *)StackEntry[4] + 325);
    v6 = (PVOID *)*StackEntry;
    if ( *((PVOID **)*StackEntry + 1) != StackEntry || (v7 = (PVOID **)StackEntry[1], *v7 != StackEntry) )
      __fastfail(3u);
    *v7 = v6;
    v6[1] = v7;
    ExFreePoolWithTag(StackEntry, 0);
  }
  KeReleaseSpinLockFromDpcLevel(&qword_1C00E4B38);
  KeReleaseSpinLock(&ndisIfListLock, v4);
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v9) = LowerLayerIfIndex;
    WPP_RECORDER_SF_dd(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v8,
      0x16u,
      0xDu,
      (struct _GUID *)&WPP_97b9fb6a84ce353ae77a2fb1f333ded7_Traceguids,
      HigherLayerIfIndex,
      v9);
  }
}
