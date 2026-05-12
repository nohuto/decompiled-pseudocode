/*
 * XREFs of StorpUnitInitializePoFxPower @ 0x1C003C2D4
 * Callers:
 *     StorPortExtendedFunction @ 0x1C000DE00 (StorPortExtendedFunction.c)
 * Callees:
 *     RaidAdapterFindUnit @ 0x1C00075A4 (RaidAdapterFindUnit.c)
 *     RaidAllocatePool @ 0x1C0008278 (RaidAllocatePool.c)
 *     RaidGetStorPoFxComponent @ 0x1C0011D4C (RaidGetStorPoFxComponent.c)
 *     memmove @ 0x1C001D740 (memmove.c)
 *     memset @ 0x1C001DA00 (memset.c)
 *     RaidGetTotalStorPoFxDeviceSize @ 0x1C0036D98 (RaidGetTotalStorPoFxDeviceSize.c)
 *     RaidStorPoFxComponentVersionAndSizeIsValid @ 0x1C0036E60 (RaidStorPoFxComponentVersionAndSizeIsValid.c)
 *     RaidStorPoFxDeviceVersionAndSizeIsValid @ 0x1C0036E90 (RaidStorPoFxDeviceVersionAndSizeIsValid.c)
 *     RaidRegisterForRuntimePowerManagement @ 0x1C003DF38 (RaidRegisterForRuntimePowerManagement.c)
 */

__int64 __fastcall StorpUnitInitializePoFxPower(__int64 a1, __int64 a2, int *a3, _BYTE *a4)
{
  __int64 v6; // rcx
  __int64 Unit; // rax
  __int64 v8; // rbx
  int *StorPoFxComponent; // rax
  __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v13; // rcx
  unsigned int TotalStorPoFxDeviceSize; // eax
  size_t v15; // rbp
  SIZE_T v16; // r15
  char *Pool; // rax
  char *v18; // rsi
  __int64 v19; // rax
  int v20; // eax
  struct _EX_RUNDOWN_REF_CACHE_AWARE *v21; // rcx
  __int64 v22; // [rsp+60h] [rbp+18h] BYREF

  LODWORD(v22) = 0;
  if ( a4 )
    *a4 = 0;
  if ( !a3 )
    return 3238002694LL;
  v6 = **(_QWORD **)(a1 - 16);
  if ( !v6 )
    return 3238002694LL;
  if ( !a2 )
    return 3238002694LL;
  if ( *(_WORD *)a2 != 1 )
    return 3238002694LL;
  if ( *(_DWORD *)(a2 + 4) < 4u )
    return 3238002694LL;
  LOWORD(v22) = *(_WORD *)(a2 + 8);
  BYTE2(v22) = *(_BYTE *)(a2 + 10);
  Unit = RaidAdapterFindUnit(v6, v22);
  v8 = Unit;
  if ( !Unit )
    return 3238002694LL;
  if ( *(char *)(Unit + 449) < 0 )
    return 3238002689LL;
  if ( !RaidStorPoFxDeviceVersionAndSizeIsValid(a3) )
    return 3238002694LL;
  if ( a3[2] != 1 )
    return 3238002694LL;
  StorPoFxComponent = (int *)RaidGetStorPoFxComponent(a3, 0);
  if ( !StorPoFxComponent
    || !RaidStorPoFxComponentVersionAndSizeIsValid(StorPoFxComponent)
    || (unsigned int)(*(_DWORD *)(v11 + 8) - 1) > 1 )
  {
    return 3238002694LL;
  }
  v12 = *(_QWORD *)(v11 + 16) - 0x40880B3A585D326BLL;
  if ( *(_QWORD *)(v11 + 16) == 0x40880B3A585D326BLL )
    v12 = *(_QWORD *)(v11 + 24) + 0x41A796F04F77C677LL;
  if ( v12 )
    return 3238002694LL;
  v13 = *(_QWORD *)(v8 + 8);
  v22 = 0LL;
  if ( (int)RaidRegisterForRuntimePowerManagement(v13, a3, v8, &v22) < 0 )
    return 3238002689LL;
  TotalStorPoFxDeviceSize = RaidGetTotalStorPoFxDeviceSize(a3);
  v15 = TotalStorPoFxDeviceSize;
  v16 = TotalStorPoFxDeviceSize + 144;
  Pool = (char *)RaidAllocatePool(NonPagedPoolNx, v16, 0x4F506152u, *(_QWORD *)(v8 + 8));
  v18 = Pool;
  if ( Pool )
  {
    memset(Pool, 0, v16);
    v19 = v22;
    *((_DWORD *)v18 + 8) |= 0xEu;
    *((_DWORD *)v18 + 4) = 0;
    *(_QWORD *)v18 = v19;
    *((_QWORD *)v18 + 10) = v18 + 72;
    *((_QWORD *)v18 + 9) = v18 + 72;
    KeInitializeSpinLock((PKSPIN_LOCK)v18 + 11);
    v20 = a3[3];
    if ( (v20 & 8) != 0 )
    {
      *(_BYTE *)(v8 + 449) |= 0x40u;
      v20 = a3[3];
    }
    if ( (v20 & 0x200) != 0 )
      *(_BYTE *)(v8 + 450) |= 4u;
    *((_QWORD *)v18 + 1) = v18 + 144;
    memmove(v18 + 144, a3, v15);
    if ( a4 )
      *a4 = 1;
    if ( *a3 == 3 && (a3[3] & 0x20) != 0 )
      *((_DWORD *)v18 + 8) |= 0x100u;
    v21 = *(struct _EX_RUNDOWN_REF_CACHE_AWARE **)(v8 + 1736);
    *(_QWORD *)(v8 + 1744) = v18;
    ExReInitializeRundownProtectionCacheAware(v21);
    *(_BYTE *)(v8 + 449) |= 0x80u;
    return 0LL;
  }
  else
  {
    PoFxUnregisterDevice(v22);
    return 3238002691LL;
  }
}
