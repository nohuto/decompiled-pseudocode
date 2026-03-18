/*
 * XREFs of PnpAllocatePWSTR @ 0x1406AA0A8
 * Callers:
 *     PiDqActionDataCreate @ 0x1406A176C (PiDqActionDataCreate.c)
 *     PiDqPnPGetObjectProperty @ 0x1406A9F14 (PiDqPnPGetObjectProperty.c)
 *     PiDmObjectCreate @ 0x14072EBE8 (PiDmObjectCreate.c)
 *     PiPnpRtlObjectEventWorker @ 0x14072EEE0 (PiPnpRtlObjectEventWorker.c)
 *     PiSwPdoPnPDispatch @ 0x140737A70 (PiSwPdoPnPDispatch.c)
 *     PiSwDeviceInterfaceSetState @ 0x1407532AC (PiSwDeviceInterfaceSetState.c)
 *     PiSwInterfaceCreate @ 0x140753380 (PiSwInterfaceCreate.c)
 *     PiSwCompleteCreate @ 0x140753438 (PiSwCompleteCreate.c)
 *     PiSwBusRelationAdd @ 0x140753BEC (PiSwBusRelationAdd.c)
 *     PnpCopyDevProperty @ 0x140753E14 (PnpCopyDevProperty.c)
 *     PiSwPnPInfoInit @ 0x140753EAC (PiSwPnPInfoInit.c)
 *     PiSwInstanceInfoInit @ 0x1407540E0 (PiSwInstanceInfoInit.c)
 *     PiSwDeviceInterfacesUpdateState @ 0x14075E8E0 (PiSwDeviceInterfacesUpdateState.c)
 *     PiSwIrpPropertySet @ 0x140775DB4 (PiSwIrpPropertySet.c)
 *     PiSwQueuedCreateInfoCreate @ 0x1408AA714 (PiSwQueuedCreateInfoCreate.c)
 * Callees:
 *     RtlULongLongMult @ 0x1402C1CCC (RtlULongLongMult.c)
 *     RtlStringCbCopyW @ 0x1402DF118 (RtlStringCbCopyW.c)
 *     RtlStringCchLengthW @ 0x1402DF438 (RtlStringCchLengthW.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1030 (ExAllocatePoolWithTag.c)
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
