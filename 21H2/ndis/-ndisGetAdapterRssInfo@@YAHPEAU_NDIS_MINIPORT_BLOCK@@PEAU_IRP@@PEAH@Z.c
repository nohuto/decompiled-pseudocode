/*
 * XREFs of ?ndisGetAdapterRssInfo@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAH@Z @ 0x1C006B430
 * Callers:
 *     ?ndisDeviceControlHandler@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z @ 0x1C0010F30 (-ndisDeviceControlHandler@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z.c)
 * Callees:
 *     NdisGetRssProcessorInformation @ 0x1C0026EC0 (NdisGetRssProcessorInformation.c)
 *     ?ndisIsRssEnabledForMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0037BD8 (-ndisIsRssEnabledForMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     memmove @ 0x1C0040100 (memmove.c)
 *     memset @ 0x1C00403C0 (memset.c)
 */

__int64 __fastcall ndisGetAdapterRssInfo(struct _NDIS_MINIPORT_BLOCK *a1, struct _IRP *a2, int *a3)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  NDIS_STATUS RssProcessorInformation; // ebp
  unsigned int Length; // r12d
  unsigned int v8; // esi
  _IRP::<unnamed_type_AssociatedIrp> v9; // rbx
  unsigned int v10; // r15d
  _NDIS_RECEIVE_SCALE_PARAMETERS *CombinedNdisRSSParameters; // rax
  __int64 v12; // rcx
  int v13; // esi
  struct _NDIS_RSS_PROCESSOR_INFO *PoolWithTagPriority; // rax
  struct _NDIS_RSS_PROCESSOR_INFO *v15; // rdi
  unsigned int v16; // r15d
  ULONG_PTR Size; // [rsp+58h] [rbp+10h] BYREF

  *a3 = -1073741823;
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  if ( *((_BYTE *)CurrentStackLocation->FileObject->FsContext + 24) )
  {
    Length = CurrentStackLocation->Parameters.Read.Length;
    v8 = 144;
    if ( Length >= 0x90 )
    {
      v9.MasterIrp = (_IRP *)a2->AssociatedIrp;
      *a3 = 0;
      memset(&v9.MasterIrp->AllocationProcessorNumber, 0, 0x8CuLL);
      *(_DWORD *)&v9.MasterIrp->Type = 9437568;
      v10 = 144;
      BYTE4(v9.MasterIrp->MdlAddress) = a1->MajorNdisVersion;
      BYTE5(v9.MasterIrp->MdlAddress) = a1->MinorNdisVersion;
      LODWORD(v9.MasterIrp->MdlAddress) = 144;
      v9.MasterIrp->Flags = 40;
      *(&v9.MasterIrp->Flags + 1) = 20;
      *(_OWORD *)&v9.MasterIrp->ThreadListEntry.Blink = *(_OWORD *)&a1->RecvScaleCapabilities.Header.Type;
      LODWORD(v9.MasterIrp->IoStatus.Information) = *(_DWORD *)&a1->RecvScaleCapabilities.NumberOfIndirectionTableEntries;
      if ( ndisIsRssEnabledForMiniport(a1) )
      {
        v9.MasterIrp->AssociatedIrp.IrpCount = 60;
        HIDWORD(v9.MasterIrp->AssociatedIrp.SystemBuffer) = 44;
        CombinedNdisRSSParameters = a1->CombinedNdisRSSParameters;
        *(_OWORD *)((char *)&v9.MasterIrp->IoStatus.Information + 4) = *(_OWORD *)&CombinedNdisRSSParameters->Header.Type;
        *(_OWORD *)((char *)&v9.MasterIrp->UserIosb + 4) = *(_OWORD *)&CombinedNdisRSSParameters->IndirectionTableOffset;
        *(LONGLONG *)((char *)&v9.MasterIrp->Overlay.AllocationSize.QuadPart + 4) = *(_QWORD *)&CombinedNdisRSSParameters->NumberOfProcessorMasks;
        *((_DWORD *)&v9.MasterIrp->Overlay.AllocationSize + 3) = CombinedNdisRSSParameters->DefaultProcessorNumber;
        v10 = a1->CombinedNdisRSSParameters->HashSecretKeySize
            + a1->CombinedNdisRSSParameters->IndirectionTableSize
            + 144;
        LODWORD(v9.MasterIrp->MdlAddress) = v10;
        if ( Length < v10 )
        {
          HIDWORD(v9.MasterIrp->UserIosb) = 0;
          HIDWORD(v9.MasterIrp->UserEvent) = 0;
        }
        else
        {
          HIDWORD(v9.MasterIrp->UserEvent) = 84;
          memmove(
            &v9.MasterIrp->Tail.CompletionKey + 3,
            &a1->CombinedNdisRSSParameters->Header.Type + a1->CombinedNdisRSSParameters->HashSecretKeyOffset,
            a1->CombinedNdisRSSParameters->HashSecretKeySize);
          v12 = (unsigned int)a1->CombinedNdisRSSParameters->HashSecretKeySize + 144;
          v13 = a1->CombinedNdisRSSParameters->HashSecretKeySize + 144;
          HIDWORD(v9.MasterIrp->UserIosb) = a1->CombinedNdisRSSParameters->HashSecretKeySize + 84;
          memmove(
            (char *)v9.MasterIrp + v12,
            &a1->CombinedNdisRSSParameters->Header.Type + a1->CombinedNdisRSSParameters->IndirectionTableOffset,
            a1->CombinedNdisRSSParameters->IndirectionTableSize);
          v8 = a1->CombinedNdisRSSParameters->IndirectionTableSize + v13;
        }
      }
      else
      {
        *(_DWORD *)&v9.MasterIrp->AllocationProcessorNumber |= 0x40u;
      }
      Size = 0LL;
      RssProcessorInformation = NdisGetRssProcessorInformation(a1, 0LL, &Size);
      PoolWithTagPriority = (struct _NDIS_RSS_PROCESSOR_INFO *)ExAllocatePoolWithTagPriority(
                                                                 NonPagedPoolNx,
                                                                 Size,
                                                                 0x2020444Eu,
                                                                 LowPoolPriority);
      v15 = PoolWithTagPriority;
      if ( PoolWithTagPriority )
      {
        RssProcessorInformation = NdisGetRssProcessorInformation(a1, PoolWithTagPriority, &Size);
        if ( RssProcessorInformation >= 0 )
        {
          LODWORD(v9.MasterIrp->ThreadListEntry.Flink) = 104;
          HIDWORD(v9.MasterIrp->ThreadListEntry.Flink) = 40;
          *(_OWORD *)&v9.MasterIrp->CancelRoutine = *(_OWORD *)&v15->Header.Type;
          v9.MasterIrp->Tail.Overlay.DeviceQueueEntry.DeviceListEntry = *(_LIST_ENTRY *)&v15->PreferredNumaNode;
          v9.MasterIrp->Tail.Overlay.DriverContext[2] = *(void **)&v15[1].Header.Type;
          v16 = v15->RssProcessorEntrySize * v15->RssProcessorCount + v10;
          LODWORD(v9.MasterIrp->MdlAddress) = v16;
          if ( Length < v16 )
          {
            v9.MasterIrp->Tail.Apc.SpareLong0 = 0;
          }
          else
          {
            v9.MasterIrp->Tail.Apc.SpareLong0 = v8 - 104;
            memmove(
              (char *)v9.MasterIrp + v8,
              &v15->Header.Type + v15->RssProcessorArrayOffset,
              v15->RssProcessorEntrySize * v15->RssProcessorCount);
            v8 += v15->RssProcessorEntrySize * v15->RssProcessorCount;
          }
        }
        ExFreePoolWithTag(v15, 0x2020444Eu);
      }
      a2->IoStatus.Information = v8;
    }
    else
    {
      return (unsigned int)-1073741811;
    }
  }
  else
  {
    return (unsigned int)-1073741790;
  }
  return (unsigned int)RssProcessorInformation;
}
