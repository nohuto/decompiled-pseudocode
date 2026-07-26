/*
 * XREFs of NdisMRegisterWdiMiniportDriver @ 0x1C0125E50
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C003F52C (--3@YAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C003FB60 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C003FB80 (memmove.c)
 *     ?TryAcquire@KRundownBase@@QEAA_NXZ @ 0x1C00AC450 (-TryAcquire@KRundownBase@@QEAA_NXZ.c)
 *     ?DereferenceWdi@@YAXXZ @ 0x1C0125A1C (-DereferenceWdi@@YAXXZ.c)
 *     ?ReferenceWdi@@YA_NXZ @ 0x1C0125B9C (-ReferenceWdi@@YA_NXZ.c)
 *     ?ndisMpHookGetHook@@YA?AV?$KRundownPtr@$$CBUNDIS_MINIPORT_HOOK_PROVIDER_INFO@@@@W4_NDIS_MINIPORT_HOOK_DRIVER_TYPE@@@Z @ 0x1C0126248 (-ndisMpHookGetHook@@YA-AV-$KRundownPtr@$$CBUNDIS_MINIPORT_HOOK_PROVIDER_INFO@@@@W4_NDIS_MINIPORT.c)
 */

NDIS_STATUS __stdcall NdisMRegisterWdiMiniportDriver(
        DRIVER_OBJECT *DriverObject,
        PCUNICODE_STRING RegistryPath,
        NDIS_MINIPORT_DRIVER_CONTEXT NdisDriverContext,
        NDIS_MINIPORT_DRIVER_CHARACTERISTICS *MiniportDriverCharacteristics,
        NDIS_MINIPORT_DRIVER_WDI_CHARACTERISTICS *MiniportWdiCharacteristics,
        NDIS_MINIPORT_DRIVER_HANDLE *NdisMiniportDriverHandle)
{
  size_t Size; // rdi
  PVOID PoolWithTag; // rbx
  NDIS_STATUS v12; // edi
  _DWORD *v13; // rcx
  ULONG v14; // edx
  PVOID v16; // rax
  void *v17; // rdx
  __int64 v18; // [rsp+40h] [rbp-38h] BYREF
  PEX_RUNDOWN_REF RunRef; // [rsp+48h] [rbp-30h]
  ULONG Count; // [rsp+50h] [rbp-28h]

  Size = 160LL;
  *NdisMiniportDriverHandle = 0LL;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0xA0uLL, 0x6843704Du);
  if ( !PoolWithTag )
  {
    v12 = -1073741670;
    goto LABEL_17;
  }
  if ( MiniportDriverCharacteristics->Header.Size < 0xA0u )
    Size = MiniportDriverCharacteristics->Header.Size;
  memmove(PoolWithTag, MiniportDriverCharacteristics, Size);
  if ( !ReferenceWdi() )
  {
    v12 = -1073741637;
    goto LABEL_17;
  }
  ndisMpHookGetHook(&v18);
  if ( v18 )
  {
    v12 = (*(__int64 (__fastcall **)(_QWORD, DRIVER_OBJECT *, PCUNICODE_STRING, NDIS_MINIPORT_DRIVER_CONTEXT, NDIS_MINIPORT_DRIVER_CHARACTERISTICS *, NDIS_MINIPORT_DRIVER_WDI_CHARACTERISTICS *, NDIS_MINIPORT_DRIVER_HANDLE *))(v18 + 8))(
            *(_QWORD *)v18,
            DriverObject,
            RegistryPath,
            NdisDriverContext,
            MiniportDriverCharacteristics,
            MiniportWdiCharacteristics,
            NdisMiniportDriverHandle);
    if ( !v12 )
    {
      v13 = *NdisMiniportDriverHandle;
      if ( *NdisMiniportDriverHandle )
      {
        v13[226] = 1;
        v16 = PoolWithTag;
        *((_BYTE *)v13 + 908) = 1;
        PoolWithTag = 0LL;
        v17 = (void *)*((_QWORD *)v13 + 44);
        *((_QWORD *)v13 + 44) = v16;
        if ( v17 )
          operator delete(v17);
        KRundownBase::TryAcquire((KRundownBase *)(v18 - 16));
        v12 = 0;
        goto LABEL_15;
      }
      v12 = -1073741823;
    }
    if ( v18 )
    {
      v18 = 0LL;
      --Count;
      ExReleaseRundownProtection(RunRef);
    }
  }
  else
  {
    v12 = -1073741637;
  }
  DereferenceWdi();
LABEL_15:
  v14 = Count;
  if ( Count )
  {
    Count = 0;
    ExReleaseRundownProtectionEx(RunRef, v14);
  }
LABEL_17:
  if ( PoolWithTag )
    operator delete(PoolWithTag);
  return v12;
}
