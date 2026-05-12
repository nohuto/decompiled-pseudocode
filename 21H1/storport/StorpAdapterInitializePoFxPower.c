/*
 * XREFs of StorpAdapterInitializePoFxPower @ 0x1C003918C
 * Callers:
 *     StorPortExtendedFunction @ 0x1C000D810 (StorPortExtendedFunction.c)
 * Callees:
 *     RaidAllocatePool @ 0x1C0007C88 (RaidAllocatePool.c)
 *     RaidGetStorPoFxComponent @ 0x1C000FED8 (RaidGetStorPoFxComponent.c)
 *     RaidSetD3Cold @ 0x1C001784C (RaidSetD3Cold.c)
 *     memmove @ 0x1C001B200 (memmove.c)
 *     memset @ 0x1C001B4C0 (memset.c)
 *     McTemplateK0pqtqq_EtwWriteTransfer @ 0x1C0029180 (McTemplateK0pqtqq_EtwWriteTransfer.c)
 *     RaidGetTotalStorPoFxDeviceSize @ 0x1C0036818 (RaidGetTotalStorPoFxDeviceSize.c)
 *     RaidStorPoFxComponentVersionAndSizeIsValid @ 0x1C00368E0 (RaidStorPoFxComponentVersionAndSizeIsValid.c)
 *     RaidStorPoFxDeviceVersionAndSizeIsValid @ 0x1C0036910 (RaidStorPoFxDeviceVersionAndSizeIsValid.c)
 *     RaidRegisterForRuntimePowerManagement @ 0x1C003D968 (RaidRegisterForRuntimePowerManagement.c)
 */

__int64 __fastcall StorpAdapterInitializePoFxPower(__int64 a1, __int64 a2, bool *a3)
{
  __int64 v5; // rbx
  char v6; // al
  __int64 v8; // rdx
  int *StorPoFxComponent; // rax
  int *v10; // rbp
  __int64 v11; // rdx
  __int64 v12; // rax
  unsigned int TotalStorPoFxDeviceSize; // eax
  size_t v14; // r15
  SIZE_T v15; // r12
  _QWORD *Pool; // rax
  _QWORD *v17; // rsi
  __int64 v18; // rax
  unsigned __int8 v19; // dl
  int v20; // eax
  char v21; // dl
  int v22; // eax
  __int64 v23; // r8
  bool v24; // zf
  _QWORD *v25; // rcx
  __int64 v26; // rdx
  unsigned int v27; // [rsp+28h] [rbp-40h]
  __int64 v28; // [rsp+78h] [rbp+10h] BYREF

  *a3 = 0;
  if ( !a2 )
    return 3238002694LL;
  v5 = **(_QWORD **)(a1 - 16);
  if ( !v5 )
    return 3238002694LL;
  v6 = *(_BYTE *)(v5 + 108);
  if ( (v6 & 0x10) != 0 )
    return 3221225473LL;
  if ( *(_QWORD *)(v5 + 5088) )
  {
    *a3 = (v6 & 8) != 0;
    return 0LL;
  }
  if ( !RaidStorPoFxDeviceVersionAndSizeIsValid((int *)a2) )
    return 3238002694LL;
  if ( *(_DWORD *)(v8 + 8) != 1 )
    return 3238002694LL;
  StorPoFxComponent = (int *)RaidGetStorPoFxComponent((int *)a2, 0);
  v10 = StorPoFxComponent;
  if ( !StorPoFxComponent
    || !RaidStorPoFxComponentVersionAndSizeIsValid(StorPoFxComponent)
    || (unsigned int)(v10[2] - 1) > 7 )
  {
    return 3238002694LL;
  }
  v12 = *((_QWORD *)v10 + 2) - 0x481F895FDCAF9C10LL;
  if ( *((_QWORD *)v10 + 2) == 0x481F895FDCAF9C10LL )
    v12 = *((_QWORD *)v10 + 3) - 0x3356F5D2CED492A4LL;
  if ( v12 )
    return 3238002694LL;
  v28 &= v11;
  if ( (int)RaidRegisterForRuntimePowerManagement(*(_QWORD *)(v5 + 8), a2, v5, &v28) < 0 )
    return 3238002689LL;
  TotalStorPoFxDeviceSize = RaidGetTotalStorPoFxDeviceSize((int *)a2);
  v14 = TotalStorPoFxDeviceSize;
  v15 = TotalStorPoFxDeviceSize + 80;
  Pool = RaidAllocatePool(NonPagedPoolNx, v15, 0x4F506152u, *(_QWORD *)(v5 + 8));
  v17 = Pool;
  if ( Pool )
  {
    memset(Pool, 0, v15);
    v18 = v28;
    *((_DWORD *)v17 + 4) = 0;
    *((_DWORD *)v17 + 5) |= 3u;
    *v17 = v18;
    v17[1] = v17 + 10;
    memmove(v17 + 10, (const void *)a2, v14);
    v19 = *(_BYTE *)(v5 + 108);
    if ( ((v19 >> 2) & ((*(_BYTE *)(a2 + 12) & 4) != 0)) != 0
      && (v20 = RaidSetD3Cold(*(struct _DEVICE_OBJECT **)(v5 + 8), 1), v19 = *(_BYTE *)(v5 + 108), v20 >= 0) )
    {
      *(_BYTE *)(v5 + 108) = v19 | 8;
      *a3 = 1;
      v21 = *(_BYTE *)(v5 + 108);
    }
    else
    {
      v21 = v19 & 0xF7;
      *(_BYTE *)(v5 + 108) = v21;
    }
    v22 = *(_DWORD *)(a2 + 12);
    if ( (v22 & 8) != 0 )
    {
      *(_BYTE *)(v5 + 108) = v21 | 0x20;
      v22 = *(_DWORD *)(a2 + 12);
    }
    if ( (v22 & 0x200) != 0 )
    {
      *(_BYTE *)(v5 + 109) |= 0x40u;
      v22 = *(_DWORD *)(a2 + 12);
    }
    if ( (v22 & 0x40) != 0 )
    {
      *(_BYTE *)(v5 + 109) |= 4u;
      v22 = *(_DWORD *)(a2 + 12);
    }
    if ( (v22 & 0x400) != 0 )
      *(_BYTE *)(v5 + 109) |= 0x80u;
    PoFxSetComponentLatency(*v17, 0LL, -1LL);
    PoFxSetComponentResidency(*v17, 0LL, -1LL);
    if ( (*(_BYTE *)(v5 + 108) & 0x40) == 0 && *(_DWORD *)a2 >= 2u && (*(_DWORD *)(a2 + 12) & 0x10) != 0 )
      *(_DWORD *)(v5 + 5104) = *(_DWORD *)(a2 + 16);
    PoFxSetDeviceIdleTimeout(*v17, 10000LL * *(unsigned int *)(v5 + 5104));
    v24 = StorEtwLoggingEnabled == 0;
    v25 = v17;
    *(_QWORD *)(v5 + 5088) = v17;
    if ( !v24 )
    {
      v26 = *(unsigned int *)(v5 + 56);
      if ( (_DWORD)v26 != -1 && (byte_1C0068841 & 1) != 0 )
      {
        v27 = (*(unsigned __int8 *)(v5 + 108) >> 3) & 1;
        McTemplateK0pqtqq_EtwWriteTransfer(v27, v26, v23, *v17, v26, v27, *(_DWORD *)(v5 + 5104), v10[2]);
        v25 = *(_QWORD **)(v5 + 5088);
      }
    }
    PoFxStartDevicePowerManagement(*v25);
    return 0LL;
  }
  PoFxUnregisterDevice(v28);
  return 3238002691LL;
}
