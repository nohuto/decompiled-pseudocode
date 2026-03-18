/*
 * XREFs of PnpAllocatePWSTR @ 0x14077DE70
 * Callers:
 *     PiSwIrpPropertySet @ 0x140762C04 (PiSwIrpPropertySet.c)
 *     PiSwDeviceInterfaceSetState @ 0x14076341C (PiSwDeviceInterfaceSetState.c)
 *     PiSwInterfaceCreate @ 0x140763500 (PiSwInterfaceCreate.c)
 *     PiSwDeviceInterfacesUpdateState @ 0x1407635A4 (PiSwDeviceInterfacesUpdateState.c)
 *     PiSwPdoPnPDispatch @ 0x140763800 (PiSwPdoPnPDispatch.c)
 *     PiSwCompleteCreate @ 0x14076426C (PiSwCompleteCreate.c)
 *     PnpCopyDevProperty @ 0x1407646C0 (PnpCopyDevProperty.c)
 *     PiSwPnPInfoInit @ 0x140764758 (PiSwPnPInfoInit.c)
 *     PiSwBusRelationAdd @ 0x140764970 (PiSwBusRelationAdd.c)
 *     PiSwInstanceInfoInit @ 0x1407661D0 (PiSwInstanceInfoInit.c)
 *     PiDqActionDataCreate @ 0x140778100 (PiDqActionDataCreate.c)
 *     PiPnpRtlObjectEventWorker @ 0x140778830 (PiPnpRtlObjectEventWorker.c)
 *     PiDqPnPGetObjectProperty @ 0x14077D784 (PiDqPnPGetObjectProperty.c)
 *     PiDmObjectCreate @ 0x14078BF98 (PiDmObjectCreate.c)
 *     PiSwQueuedCreateInfoCreate @ 0x1409539A8 (PiSwQueuedCreateInfoCreate.c)
 * Callees:
 *     RtlStringCbCopyW @ 0x1402E0978 (RtlStringCbCopyW.c)
 *     RtlStringCchLengthW @ 0x1402E0AC4 (RtlStringCchLengthW.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall PnpAllocatePWSTR(NTSTRSAFE_PCWSTR pszSrc, size_t a2, ULONG a3, PVOID *a4)
{
  NTSTATUS v4; // ebx
  size_t v9; // rbx
  wchar_t *Pool2; // rax
  size_t pcchLength; // [rsp+30h] [rbp+8h] BYREF

  v4 = 0;
  pcchLength = 0LL;
  *a4 = 0LL;
  if ( pszSrc )
  {
    v4 = RtlStringCchLengthW(pszSrc, a2, &pcchLength);
    if ( v4 >= 0 )
    {
      if ( !pcchLength )
        return (unsigned int)v4;
      v9 = 2 * (pcchLength + 1);
      if ( is_mul_ok(pcchLength + 1, 2uLL) )
      {
        Pool2 = (wchar_t *)ExAllocatePool2(256LL, 2 * (pcchLength + 1), a3);
        *a4 = Pool2;
        if ( Pool2 )
        {
          v4 = RtlStringCbCopyW(Pool2, v9, pszSrc);
          if ( v4 >= 0 )
            return (unsigned int)v4;
        }
        else
        {
          v4 = -1073741670;
        }
      }
      else
      {
        v4 = -1073741675;
      }
    }
    if ( *a4 )
    {
      ExFreePoolWithTag(*a4, a3);
      *a4 = 0LL;
    }
  }
  return (unsigned int)v4;
}
