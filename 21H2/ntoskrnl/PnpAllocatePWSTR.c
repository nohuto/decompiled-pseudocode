/*
 * XREFs of PnpAllocatePWSTR @ 0x14062CF38
 * Callers:
 *     PiDqActionDataCreate @ 0x140624A2C (PiDqActionDataCreate.c)
 *     PiDqPnPGetObjectProperty @ 0x14062CDA4 (PiDqPnPGetObjectProperty.c)
 *     PiDmObjectCreate @ 0x140749ED0 (PiDmObjectCreate.c)
 *     PiPnpRtlObjectEventWorker @ 0x14074A1D0 (PiPnpRtlObjectEventWorker.c)
 *     PiSwDeviceInterfaceSetState @ 0x14074D5F0 (PiSwDeviceInterfaceSetState.c)
 *     PiSwInterfaceCreate @ 0x14074D6C4 (PiSwInterfaceCreate.c)
 *     PiSwDeviceInterfacesUpdateState @ 0x14074D77C (PiSwDeviceInterfacesUpdateState.c)
 *     PiSwCompleteCreate @ 0x14074D850 (PiSwCompleteCreate.c)
 *     PiSwBusRelationAdd @ 0x14074E00C (PiSwBusRelationAdd.c)
 *     PnpCopyDevProperty @ 0x14074E234 (PnpCopyDevProperty.c)
 *     PiSwPnPInfoInit @ 0x14074E2CC (PiSwPnPInfoInit.c)
 *     PiSwInstanceInfoInit @ 0x14074E500 (PiSwInstanceInfoInit.c)
 *     PiSwPdoPnPDispatch @ 0x14074F280 (PiSwPdoPnPDispatch.c)
 *     PiSwIrpPropertySet @ 0x14078A764 (PiSwIrpPropertySet.c)
 *     PiSwQueuedCreateInfoCreate @ 0x1408AEC94 (PiSwQueuedCreateInfoCreate.c)
 * Callees:
 *     RtlStringCchLengthW @ 0x140252F04 (RtlStringCchLengthW.c)
 *     RtlStringCbCopyW @ 0x140252F68 (RtlStringCbCopyW.c)
 *     RtlULongLongMult @ 0x1402F35E8 (RtlULongLongMult.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PnpAllocatePWSTR(NTSTRSAFE_PCWSTR pszSrc, size_t a2, ULONG a3, PVOID *a4)
{
  NTSTATUS v4; // ebx
  wchar_t *PoolWithTag; // rax
  ULONGLONG pullResult; // [rsp+40h] [rbp+8h] BYREF
  size_t pcchLength; // [rsp+58h] [rbp+20h] BYREF

  v4 = 0;
  pcchLength = 0LL;
  pullResult = 0LL;
  *a4 = 0LL;
  if ( !pszSrc )
    return (unsigned int)v4;
  v4 = RtlStringCchLengthW(pszSrc, a2, &pcchLength);
  if ( v4 >= 0 )
  {
    if ( !pcchLength )
      goto LABEL_8;
    v4 = RtlULongLongMult(pcchLength + 1, 2uLL, &pullResult);
    if ( v4 >= 0 )
    {
      PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, pullResult, a3);
      *a4 = PoolWithTag;
      if ( PoolWithTag )
      {
        v4 = RtlStringCbCopyW(PoolWithTag, pullResult, pszSrc);
LABEL_8:
        if ( v4 >= 0 )
          return (unsigned int)v4;
        goto LABEL_11;
      }
      v4 = -1073741670;
    }
  }
LABEL_11:
  if ( *a4 )
  {
    ExFreePoolWithTag(*a4, a3);
    *a4 = 0LL;
  }
  return (unsigned int)v4;
}
