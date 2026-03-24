/*
 * XREFs of PnpAllocatePWSTR @ 0x140638128
 * Callers:
 *     PiDqActionDataCreate @ 0x14062F9AC (PiDqActionDataCreate.c)
 *     PiDqPnPGetObjectProperty @ 0x140637F94 (PiDqPnPGetObjectProperty.c)
 *     PiDmObjectCreate @ 0x140749D10 (PiDmObjectCreate.c)
 *     PiPnpRtlObjectEventWorker @ 0x14074A010 (PiPnpRtlObjectEventWorker.c)
 *     PiSwDeviceInterfaceSetState @ 0x14074D430 (PiSwDeviceInterfaceSetState.c)
 *     PiSwInterfaceCreate @ 0x14074D504 (PiSwInterfaceCreate.c)
 *     PiSwDeviceInterfacesUpdateState @ 0x14074D5BC (PiSwDeviceInterfacesUpdateState.c)
 *     PiSwCompleteCreate @ 0x14074D690 (PiSwCompleteCreate.c)
 *     PiSwBusRelationAdd @ 0x14074DE4C (PiSwBusRelationAdd.c)
 *     PnpCopyDevProperty @ 0x14074E074 (PnpCopyDevProperty.c)
 *     PiSwPnPInfoInit @ 0x14074E10C (PiSwPnPInfoInit.c)
 *     PiSwInstanceInfoInit @ 0x14074E340 (PiSwInstanceInfoInit.c)
 *     PiSwPdoPnPDispatch @ 0x14074F0C0 (PiSwPdoPnPDispatch.c)
 *     PiSwIrpPropertySet @ 0x14078A5A4 (PiSwIrpPropertySet.c)
 *     PiSwQueuedCreateInfoCreate @ 0x1408AEB34 (PiSwQueuedCreateInfoCreate.c)
 * Callees:
 *     RtlULongLongMult @ 0x14024ED98 (RtlULongLongMult.c)
 *     RtlStringCchLengthW @ 0x140264E74 (RtlStringCchLengthW.c)
 *     RtlStringCbCopyW @ 0x140264ED8 (RtlStringCbCopyW.c)
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B4160 (ExAllocatePoolWithTag.c)
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
