/*
 * XREFs of PnpAllocatePWSTR @ 0x1405DBA78
 * Callers:
 *     PiDqActionDataCreate @ 0x1405D3070 (PiDqActionDataCreate.c)
 *     PiDqPnPGetObjectProperty @ 0x1405DB8E4 (PiDqPnPGetObjectProperty.c)
 *     PiDmObjectCreate @ 0x140735CE8 (PiDmObjectCreate.c)
 *     PiPnpRtlObjectEventWorker @ 0x140735FE0 (PiPnpRtlObjectEventWorker.c)
 *     PiSwDeviceInterfaceSetState @ 0x140737074 (PiSwDeviceInterfaceSetState.c)
 *     PiSwInterfaceCreate @ 0x140737148 (PiSwInterfaceCreate.c)
 *     PiSwDeviceInterfacesUpdateState @ 0x140737200 (PiSwDeviceInterfacesUpdateState.c)
 *     PiSwCompleteCreate @ 0x1407372D4 (PiSwCompleteCreate.c)
 *     PiSwBusRelationAdd @ 0x140738380 (PiSwBusRelationAdd.c)
 *     PnpCopyDevProperty @ 0x1407385A8 (PnpCopyDevProperty.c)
 *     PiSwPnPInfoInit @ 0x140738640 (PiSwPnPInfoInit.c)
 *     PiSwInstanceInfoInit @ 0x140738874 (PiSwInstanceInfoInit.c)
 *     PiSwPdoPnPDispatch @ 0x1407395F0 (PiSwPdoPnPDispatch.c)
 *     PiSwIrpPropertySet @ 0x1407781C4 (PiSwIrpPropertySet.c)
 *     PiSwQueuedCreateInfoCreate @ 0x1408ABA34 (PiSwQueuedCreateInfoCreate.c)
 * Callees:
 *     RtlStringCbCopyW @ 0x1402727B8 (RtlStringCbCopyW.c)
 *     RtlStringCchLengthW @ 0x140272AD8 (RtlStringCchLengthW.c)
 *     RtlULongLongMult @ 0x1402FE7AC (RtlULongLongMult.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1160 (ExAllocatePoolWithTag.c)
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
