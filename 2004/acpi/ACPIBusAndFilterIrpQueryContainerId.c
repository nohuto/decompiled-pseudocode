/*
 * XREFs of ACPIBusAndFilterIrpQueryContainerId @ 0x1C002DEF8
 * Callers:
 *     ACPIBusIrpQueryId @ 0x1C008FBF0 (ACPIBusIrpQueryId.c)
 *     ACPIFilterIrpQueryIdCompletion @ 0x1C00AF5B0 (ACPIFilterIrpQueryIdCompletion.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0031A20 (__security_check_cookie.c)
 *     memmove @ 0x1C0031EC0 (memmove.c)
 *     memset @ 0x1C0032180 (memset.c)
 *     ACPIFreePhysicalDeviceLocationDescriptors @ 0x1C0099EA8 (ACPIFreePhysicalDeviceLocationDescriptors.c)
 *     ACPIProcessPhysicalDeviceLocation @ 0x1C009E218 (ACPIProcessPhysicalDeviceLocation.c)
 */

__int64 __fastcall ACPIBusAndFilterIrpQueryContainerId(_QWORD *a1, SIZE_T *a2, __int64 a3)
{
  NTSTATUS v6; // ebx
  __int64 v8; // rax
  SIZE_T v9; // rdx
  _WORD *PoolWithTag; // rax
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
        PoolWithTag = ExAllocatePoolWithTag(PagedPool, v9, 0x53706341u);
        v11 = PoolWithTag;
        if ( PoolWithTag )
        {
          memmove(PoolWithTag, GuidString.Buffer, GuidString.Length);
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
