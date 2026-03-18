/*
 * XREFs of ACPIBusIommuBusInterface @ 0x1C00992B4
 * Callers:
 *     ACPIBusIrpQueryInterface @ 0x1C00109F0 (ACPIBusIrpQueryInterface.c)
 *     ACPIFilterIrpQueryIommuInterface @ 0x1C00991BC (ACPIFilterIrpQueryIommuInterface.c)
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0002980 (ACPIInternalGetDeviceExtension.c)
 *     ACPIAmliBuildObjectPathname @ 0x1C0011484 (ACPIAmliBuildObjectPathname.c)
 *     _guard_dispatch_icall_nop @ 0x1C0031E80 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0031EC0 (memmove.c)
 *     memset @ 0x1C0032180 (memset.c)
 */

__int64 __fastcall ACPIBusIommuBusInterface(ULONG_PTR a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 DeviceExtension; // rcx
  __int64 v4; // r9
  __int64 v5; // rax
  __int64 v6; // r15
  int v7; // ebx
  _BYTE *v8; // rbp
  __int64 v9; // rdi
  __int64 v10; // rax
  SIZE_T v11; // r14
  _DWORD *PoolWithTag; // rax
  _DWORD *v13; // rsi
  void (__fastcall *v14)(_DWORD *); // rax
  void *Src; // [rsp+58h] [rbp+10h] BYREF

  Src = 0LL;
  v2 = *(_QWORD *)(a2 + 184);
  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  v4 = *(_QWORD *)(DeviceExtension + 720);
  if ( v4 )
  {
    if ( *(_WORD *)(v2 + 16) >= 0x48u
      && *(_WORD *)(v2 + 18)
      && (v5 = *(_QWORD *)(v2 + 32)) != 0
      && v5 == *(_QWORD *)(DeviceExtension + 744) )
    {
      v6 = *(_QWORD *)(v2 + 24);
      v7 = ACPIAmliBuildObjectPathname(v4, (char **)&Src, 3);
      if ( v7 >= 0 )
      {
        v8 = Src;
        v9 = -1LL;
        v10 = -1LL;
        do
          ++v10;
        while ( *((_BYTE *)Src + v10) );
        v11 = (unsigned int)(v10 + 105);
        PoolWithTag = ExAllocatePoolWithTag(PagedPool, v11, 0x46706341u);
        v13 = PoolWithTag;
        if ( PoolWithTag )
        {
          memset(PoolWithTag, 0, (unsigned int)v11);
          v13[20] = 2;
          *((_QWORD *)v13 + 11) = v13 + 26;
          do
            ++v9;
          while ( v8[v9] );
          memmove(v13 + 26, v8, v9 + 1);
          ExFreePoolWithTag(v8, 0x53706341u);
          *(_OWORD *)v6 = AcpiIommuBusInterface;
          *(_OWORD *)(v6 + 16) = *(_OWORD *)&off_1C006E290;
          *(_OWORD *)(v6 + 32) = xmmword_1C006E2A0;
          *(_OWORD *)(v6 + 48) = unk_1C006E2B0;
          *(_QWORD *)(v6 + 64) = ACPIIommuGetDeviceId;
          v14 = *(void (__fastcall **)(_DWORD *))(v6 + 16);
          *(_QWORD *)(v6 + 8) = v13;
          v14(v13);
        }
        else
        {
          return (unsigned int)-1073741670;
        }
      }
    }
    else
    {
      return (unsigned int)-1073741811;
    }
  }
  else
  {
    return (unsigned int)-1073741823;
  }
  return (unsigned int)v7;
}
