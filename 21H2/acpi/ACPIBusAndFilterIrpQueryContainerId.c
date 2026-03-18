/*
 * XREFs of ACPIBusAndFilterIrpQueryContainerId @ 0x1C0006718
 * Callers:
 *     ACPIBusIrpQueryId @ 0x1C0093F10 (ACPIBusIrpQueryId.c)
 *     ACPIFilterIrpQueryIdCompletion @ 0x1C00AE970 (ACPIFilterIrpQueryIdCompletion.c)
 * Callees:
 *     __security_check_cookie @ 0x1C002F140 (__security_check_cookie.c)
 *     memmove @ 0x1C002FDC0 (memmove.c)
 *     memset @ 0x1C0030080 (memset.c)
 *     ACPIProcessPhysicalDeviceLocation @ 0x1C0094310 (ACPIProcessPhysicalDeviceLocation.c)
 *     ACPIFreePhysicalDeviceLocationDescriptors @ 0x1C00A1730 (ACPIFreePhysicalDeviceLocationDescriptors.c)
 */

__int64 __fastcall ACPIBusAndFilterIrpQueryContainerId(_QWORD *a1, __int64 *a2, __int64 a3)
{
  NTSTATUS v6; // ebx
  __int64 v8; // rax
  __int64 v9; // rdx
  _WORD *Pool2; // rax
  _WORD *v11; // rdi
  struct _UNICODE_STRING GuidString; // [rsp+20h] [rbp-39h] BYREF
  _QWORD v13[10]; // [rsp+30h] [rbp-29h] BYREF

  memset(v13, 0, 0x48uLL);
  GuidString = 0LL;
  v6 = ACPIProcessPhysicalDeviceLocation(a3, 0LL, v13);
  if ( v6 >= 0 )
  {
    v8 = v13[7] - *(_QWORD *)&GUID_NULL.Data1;
    if ( v13[7] == *(_QWORD *)&GUID_NULL.Data1 )
      v8 = v13[8] - *(_QWORD *)GUID_NULL.Data4;
    if ( v8 )
    {
      v6 = RtlStringFromGUID((const GUID *const)&v13[7], &GuidString);
      if ( v6 >= 0 )
      {
        v9 = GuidString.Length + 2LL;
        *a2 = v9;
        Pool2 = (_WORD *)ExAllocatePool2(256LL, v9, 1399874369LL);
        v11 = Pool2;
        if ( Pool2 )
        {
          memmove(Pool2, GuidString.Buffer, GuidString.Length);
          v11[(unsigned __int64)GuidString.Length >> 1] = 0;
          *a1 = v11;
        }
        else
        {
          v6 = -1073741670;
        }
        RtlFreeUnicodeString(&GuidString);
      }
    }
    else
    {
      v6 = -1073741637;
    }
    ACPIFreePhysicalDeviceLocationDescriptors(v13);
  }
  return (unsigned int)v6;
}
