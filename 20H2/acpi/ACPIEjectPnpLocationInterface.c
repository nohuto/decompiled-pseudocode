/*
 * XREFs of ACPIEjectPnpLocationInterface @ 0x1C00990D0
 * Callers:
 *     ACPIBusIrpQueryInterface @ 0x1C00109F0 (ACPIBusIrpQueryInterface.c)
 *     ACPIFilterIrpQueryPnpLocationInterface @ 0x1C0098B3C (ACPIFilterIrpQueryPnpLocationInterface.c)
 *     ACPIRootIrpQueryInterface @ 0x1C0098C40 (ACPIRootIrpQueryInterface.c)
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0002980 (ACPIInternalGetDeviceExtension.c)
 *     _guard_dispatch_icall_nop @ 0x1C0031E80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ACPIEjectPnpLocationInterface(ULONG_PTR a1, __int64 a2)
{
  __int64 v2; // rdi
  __int64 DeviceExtension; // rbp
  __int64 v5; // rdi
  char *PoolWithTag; // rax
  unsigned int v7; // ebx
  char *v8; // rcx
  void (*v9)(void); // rax

  v2 = *(_QWORD *)(a2 + 184);
  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  if ( *(_WORD *)(v2 + 16) >= 0x28u && *(_WORD *)(v2 + 18) )
  {
    v5 = *(_QWORD *)(v2 + 24);
    PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, 0x38uLL, 0x46706341u);
    v7 = 0;
    v8 = PoolWithTag;
    if ( PoolWithTag )
    {
      *(_QWORD *)PoolWithTag = DeviceExtension;
      *((_DWORD *)PoolWithTag + 12) = 0;
      if ( *(_DWORD *)(a2 + 48) )
      {
        *(_OWORD *)(PoolWithTag + 8) = 0LL;
        *(_OWORD *)(PoolWithTag + 24) = 0LL;
        *((_QWORD *)PoolWithTag + 5) = 0LL;
      }
      else
      {
        *(_OWORD *)(PoolWithTag + 8) = *(_OWORD *)v5;
        *(_OWORD *)(PoolWithTag + 24) = *(_OWORD *)(v5 + 16);
        *((_QWORD *)PoolWithTag + 5) = *(_QWORD *)(v5 + 32);
      }
      *(_OWORD *)v5 = PnpLocationInterface;
      *(_OWORD *)(v5 + 16) = *(_OWORD *)&off_1C006E028;
      *(_QWORD *)(v5 + 32) = ACPIGetPnpLocationString;
      v9 = *(void (**)(void))(v5 + 16);
      *(_QWORD *)(v5 + 8) = v8;
      v9();
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v7;
}
