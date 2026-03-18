/*
 * XREFs of ACPIEjectPnpLocationInterface @ 0x1C00922E0
 * Callers:
 *     ACPIBusIrpQueryInterface @ 0x1C0005A80 (ACPIBusIrpQueryInterface.c)
 *     ACPIFilterIrpQueryPnpLocationInterface @ 0x1C0091C18 (ACPIFilterIrpQueryPnpLocationInterface.c)
 *     ACPIRootIrpQueryInterface @ 0x1C0091E90 (ACPIRootIrpQueryInterface.c)
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0001928 (ACPIInternalGetDeviceExtension.c)
 *     _guard_dispatch_icall_nop @ 0x1C002FD90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ACPIEjectPnpLocationInterface(ULONG_PTR a1, __int64 a2)
{
  __int64 v2; // rdi
  __int64 DeviceExtension; // rbp
  __int64 v5; // rdi
  __int64 Pool2; // rax
  unsigned int v7; // ebx
  __int64 v8; // rcx
  void (*v9)(void); // rax

  v2 = *(_QWORD *)(a2 + 184);
  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  if ( *(_WORD *)(v2 + 16) >= 0x28u && *(_WORD *)(v2 + 18) )
  {
    v5 = *(_QWORD *)(v2 + 24);
    Pool2 = ExAllocatePool2(256LL, 56LL, 1181770561LL);
    v7 = 0;
    v8 = Pool2;
    if ( Pool2 )
    {
      *(_QWORD *)Pool2 = DeviceExtension;
      *(_DWORD *)(Pool2 + 48) = 0;
      if ( *(_DWORD *)(a2 + 48) )
      {
        *(_OWORD *)(Pool2 + 8) = 0LL;
        *(_OWORD *)(Pool2 + 24) = 0LL;
        *(_QWORD *)(Pool2 + 40) = 0LL;
      }
      else
      {
        *(_OWORD *)(Pool2 + 8) = *(_OWORD *)v5;
        *(_OWORD *)(Pool2 + 24) = *(_OWORD *)(v5 + 16);
        *(_QWORD *)(Pool2 + 40) = *(_QWORD *)(v5 + 32);
      }
      *(_OWORD *)v5 = PnpLocationInterface;
      *(_OWORD *)(v5 + 16) = *(_OWORD *)&off_1C006D830;
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
