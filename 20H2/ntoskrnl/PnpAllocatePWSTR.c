/*
 * XREFs of PnpAllocatePWSTR @ 0x140640358
 * Callers:
 *     PiDqPnPGetObjectProperty @ 0x1406401C4 (PiDqPnPGetObjectProperty.c)
 *     PiDqActionDataCreate @ 0x140645FEC (PiDqActionDataCreate.c)
 *     PiDmObjectCreate @ 0x140745174 (PiDmObjectCreate.c)
 *     PiPnpRtlObjectEventWorker @ 0x140745470 (PiPnpRtlObjectEventWorker.c)
 *     PiSwDeviceInterfaceSetState @ 0x140746504 (PiSwDeviceInterfaceSetState.c)
 *     PiSwInterfaceCreate @ 0x1407465D8 (PiSwInterfaceCreate.c)
 *     PiSwDeviceInterfacesUpdateState @ 0x140746690 (PiSwDeviceInterfacesUpdateState.c)
 *     PiSwCompleteCreate @ 0x140746764 (PiSwCompleteCreate.c)
 *     PiSwBusRelationAdd @ 0x140747290 (PiSwBusRelationAdd.c)
 *     PnpCopyDevProperty @ 0x1407474B8 (PnpCopyDevProperty.c)
 *     PiSwPnPInfoInit @ 0x140747550 (PiSwPnPInfoInit.c)
 *     PiSwInstanceInfoInit @ 0x140747784 (PiSwInstanceInfoInit.c)
 *     PiSwPdoPnPDispatch @ 0x140748500 (PiSwPdoPnPDispatch.c)
 *     PiSwIrpPropertySet @ 0x1407867C4 (PiSwIrpPropertySet.c)
 *     PiSwQueuedCreateInfoCreate @ 0x1408B1564 (PiSwQueuedCreateInfoCreate.c)
 * Callees:
 *     RtlULongLongMult @ 0x14022B2AC (RtlULongLongMult.c)
 *     RtlStringCbCopyW @ 0x14023FDE8 (RtlStringCbCopyW.c)
 *     RtlStringCchLengthW @ 0x140240108 (RtlStringCchLengthW.c)
 *     ExAllocatePoolWithTag @ 0x1409B7010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
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
