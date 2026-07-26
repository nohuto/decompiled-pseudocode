/*
 * XREFs of ?ndisSetupWmiNode@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEBU_UNICODE_STRING@@KPEAXPEAPEAUtagWNODE_SINGLE_INSTANCE@@@Z @ 0x1C0018E88
 * Callers:
 *     ndisNotifyDevicePowerStateChange @ 0x1C0014AFC (ndisNotifyDevicePowerStateChange.c)
 *     ?ndisWriteWmiStatusIndication@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEBU_UNICODE_STRING@@PEBU_NDIS_STATUS_INDICATION@@HPEBXK@Z @ 0x1C001BBFC (-ndisWriteWmiStatusIndication@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEBU_UNICODE_STRING@@PEBU_NDIS_STATU.c)
 *     ?ndisNotifyWmiBindUnbind@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@E@Z @ 0x1C002A6DC (-ndisNotifyWmiBindUnbind@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@E@Z.c)
 *     ?ndisNotifyWmiAdapterArrival@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C003EAA0 (-ndisNotifyWmiAdapterArrival@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     NdisCoDeleteVc @ 0x1C00B8B20 (NdisCoDeleteVc.c)
 *     ?ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C012CDE8 (-ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BI.c)
 *     ?ndisPnPRemoveDevice@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C0135820 (-ndisPnPRemoveDevice@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     ?ndisDetachFilterInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C013747C (-ndisDetachFilterInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@@Z.c)
 * Callees:
 *     memmove @ 0x1C003F400 (memmove.c)
 *     memset @ 0x1C003F6C0 (memset.c)
 */

void __fastcall ndisSetupWmiNode(
        struct _NDIS_MINIPORT_BLOCK *a1,
        const struct _UNICODE_STRING *a2,
        unsigned int a3,
        __int128 *a4,
        struct tagWNODE_SINGLE_INSTANCE **a5)
{
  unsigned int v6; // eax
  unsigned int v8; // r10d
  unsigned int v11; // r14d
  unsigned int v12; // ebp
  char *PoolWithTag; // rax
  char *v14; // rbx
  ULONG v15; // eax
  __int128 v16; // xmm0

  v6 = (a2->Length + 9) & 0xFFFFFFF8;
  v8 = v6 + a3 + 64;
  if ( v8 < 0x40 || v8 < v6 || v8 < a3 )
  {
    v14 = 0LL;
  }
  else
  {
    v11 = v6 + 64;
    v12 = v6 + 64 + a3;
    PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, v12, 0x3377444Eu);
    v14 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, v12);
      *(_DWORD *)v14 = v12;
      v15 = IoWMIDeviceObjectToProviderId(a1->DeviceObject);
      *((_DWORD *)v14 + 2) = 1;
      *((_DWORD *)v14 + 1) = v15;
      *((_QWORD *)v14 + 2) = MEMORY[0xFFFFF78000000014];
      v16 = *a4;
      *((_DWORD *)v14 + 11) = 10;
      *((_DWORD *)v14 + 12) = 64;
      *(_OWORD *)(v14 + 24) = v16;
      *((_DWORD *)v14 + 14) = v11;
      *((_DWORD *)v14 + 15) = a3;
      *((_WORD *)v14 + 32) = a2->Length;
      memmove(v14 + 66, a2->Buffer, a2->Length);
    }
  }
  *a5 = (struct tagWNODE_SINGLE_INSTANCE *)v14;
}
