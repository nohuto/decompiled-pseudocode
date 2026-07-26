/*
 * XREFs of ?ndisIfUpdateInterfaceOnAddDevice@@YAHPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0021304
 * Callers:
 *     ?ndisAddDevice@@_Y2PAGENPNP@@AJPEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAPEAX@Z @ 0x1C012C504 (-ndisAddDevice@@_Y2PAGENPNP@@AJPEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAPEAX@Z.c)
 * Callees:
 *     NdisReferenceWithTag @ 0x1C000DE10 (NdisReferenceWithTag.c)
 *     WPP_RECORDER_SF_qqL @ 0x1C000DF10 (WPP_RECORDER_SF_qqL.c)
 *     WPP_RECORDER_SF_qq @ 0x1C000E000 (WPP_RECORDER_SF_qq.c)
 *     NdisDereferenceWithTag @ 0x1C000EFB0 (NdisDereferenceWithTag.c)
 *     NdisAllocateRefCount @ 0x1C002BE60 (NdisAllocateRefCount.c)
 *     memmove @ 0x1C003FB80 (memmove.c)
 *     memset @ 0x1C003FE40 (memset.c)
 *     NdisFreeRefCount @ 0x1C00BE7B0 (NdisFreeRefCount.c)
 *     ?ndisNsiSyncMiniportOperStatusNotification@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00FD7BC (-ndisNsiSyncMiniportOperStatusNotification@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisNsiNotifyClientInterfaceChange@@YAXPEAU_NDIS_IF_BLOCK@@W4_NSI_NOTIFICATION@@PEAU_NSI_SINGLE_PARAM_DESC@@W4_NDIS_NSI_OBJECT_INDEX@@@Z @ 0x1C00FD80C (-ndisNsiNotifyClientInterfaceChange@@YAXPEAU_NDIS_IF_BLOCK@@W4_NSI_NOTIFICATION@@PEAU_NSI_SINGLE.c)
 *     ?ndisIfUpdatePersistedInterfaceInfo@@YAHPEAEKK0@Z @ 0x1C0126D9C (-ndisIfUpdatePersistedInterfaceInfo@@YAHPEAEKK0@Z.c)
 */

__int64 __fastcall ndisIfUpdateInterfaceOnAddDevice(struct _NDIS_IF_BLOCK *a1, struct _NDIS_MINIPORT_BLOCK *a2)
{
  unsigned int v2; // ebx
  struct _NDIS_MINIPORT_BLOCK *v3; // rsi
  char v4; // r15
  struct _NDIS_IF_BLOCK *v5; // rdi
  ULONG_PTR RefCount; // r12
  KIRQL v7; // al
  struct _NDIS_REFCOUNT_BLOCK *RefCountTracker; // rcx
  unsigned __int16 Length; // ax
  char v11[4]; // [rsp+38h] [rbp-38h]
  _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-30h] BYREF
  __int64 v13; // [rsp+50h] [rbp-20h] BYREF
  void *p_ifDescr; // [rsp+58h] [rbp-18h]
  int v15; // [rsp+60h] [rbp-10h]
  int v16; // [rsp+64h] [rbp-Ch]
  KIRQL NewIrql; // [rsp+A0h] [rbp+30h]

  v2 = 0;
  v3 = a2;
  v4 = 0;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  v5 = a1;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x16u,
      0xEu,
      (struct _GUID *)&WPP_0ecf9acc3b5b3994cffcc6b83765ca21_Traceguids,
      (char)a1,
      a2);
  if ( !v5->ifDescr.Length
    || (RtlInitUnicodeString(&DestinationString, (PCWSTR)v5->ifDescr.String),
        RtlCompareUnicodeString(&DestinationString, v3->pAdapterInstanceName, 1u)) )
  {
    v4 = 1;
  }
  LOBYTE(a2) = 2;
  LOBYTE(a1) = 29;
  RefCount = NdisAllocateRefCount(a1, a2);
  v7 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  NewIrql = v7;
  if ( v5->MiniportAvailable )
  {
    v2 = -1073741823;
    KeReleaseSpinLock(&ndisIfListLock, v7);
    NdisDereferenceWithTag(RefCount, 0xFFu);
    NdisFreeRefCount(RefCount);
  }
  else
  {
    if ( v4 )
    {
      memset(&v5->ifDescr, 0, sizeof(v5->ifDescr));
      Length = 512;
      if ( v3->pAdapterInstanceName->Length <= 0x200u )
        Length = v3->pAdapterInstanceName->Length;
      v5->ifDescr.Length = Length;
      if ( Length )
        memmove(v5->ifDescr.String, v3->pAdapterInstanceName->Buffer, Length);
    }
    RefCountTracker = (struct _NDIS_REFCOUNT_BLOCK *)v5->RefCountTracker;
    v5->ifAdminStatus = v3->AdminStatus;
    *(_QWORD *)&v5->ifOperStatus = 2LL;
    NdisReferenceWithTag(RefCountTracker, 0xCu);
    ++v5->Ref;
    v5->LastMiniportFatalErrorReason = NdisMEvent_Unknown;
    KeAcquireSpinLockAtDpcLevel(&SpinLock);
    v5->MiniportAvailable = 1;
    v5->MiniportLinkReference = 1;
    v5->Miniport = v3;
    v5->MpRefCountTracker = (NDIS_REFCOUNT_HANDLE__ *)RefCount;
    v3->IfBlock = v5;
    v3->IfBlockAvailable = 1;
    KeReleaseSpinLockFromDpcLevel(&SpinLock);
    v3->IfIndex = v5->ifIndex;
    v3->NetLuid.Value = v5->NetLuid.Value;
    v3->OperStatus = v5->ifOperStatus;
    v3->OperStatusFlags = 0;
    KeReleaseSpinLock(&ndisIfListLock, NewIrql);
    if ( v4 )
    {
      ndisIfUpdatePersistedInterfaceInfo(
        (unsigned __int8 *)&v5->NetLuid,
        0x204u,
        0x208u,
        (unsigned __int8 *)&v5->ifDescr);
      v13 = 2LL;
      p_ifDescr = &v5->ifDescr;
      v15 = 516;
      v16 = 4;
      ndisNsiNotifyClientInterfaceChange(v5, 0LL, &v13);
    }
    v13 = 0LL;
    p_ifDescr = &v5->ifAdminStatus;
    v15 = 4;
    v16 = 16;
    ndisNsiNotifyClientInterfaceChange(v5, 0LL, &v13);
    ndisNsiSyncMiniportOperStatusNotification(v3);
  }
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v11 = v2;
    WPP_RECORDER_SF_qqL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x16u,
      0xFu,
      (struct _GUID *)&WPP_0ecf9acc3b5b3994cffcc6b83765ca21_Traceguids,
      (char)v5,
      (char)v3,
      *(_DWORD *)v11,
      *(_QWORD *)&DestinationString.Length,
      DestinationString.Buffer);
  }
  return v2;
}
