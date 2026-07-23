/*
 * XREFs of PiProcessQueryAndCancelRemoval @ 0x1407326AC
 * Callers:
 *     PnpProcessQueryRemoveAndEject @ 0x140736AD4 (PnpProcessQueryRemoveAndEject.c)
 * Callees:
 *     memmove @ 0x140414040 (memmove.c)
 *     PipProcessQueryRemovalInKernelMode @ 0x14073278C (PipProcessQueryRemovalInKernelMode.c)
 *     PnpNotifyUserModeDeviceRemoval @ 0x140737130 (PnpNotifyUserModeDeviceRemoval.c)
 *     PnpAllocateCriticalMemory @ 0x14073963C (PnpAllocateCriticalMemory.c)
 *     PiEventAreDeviceRelationsExcluded @ 0x14073968C (PiEventAreDeviceRelationsExcluded.c)
 *     PnpCancelRemoveOnHungDevices @ 0x1408A23E0 (PnpCancelRemoveOnHungDevices.c)
 *     PnpFinalizeVetoedRemove @ 0x1408ABE70 (PnpFinalizeVetoedRemove.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiProcessQueryAndCancelRemoval(
        unsigned int a1,
        __int64 a2,
        int a3,
        int a4,
        __int64 a5,
        unsigned int *a6,
        const void **a7)
{
  char v10; // al
  unsigned int v11; // edx
  unsigned __int64 v12; // rsi
  unsigned int *v13; // r15
  int RemovalInKernelMode; // ebp
  int v15; // r8d
  __int64 v17; // rcx
  char *v18; // rbx
  __int64 v19; // rax
  __int64 v20; // rbx
  void *CriticalMemory; // rax
  char v22; // [rsp+30h] [rbp-38h]
  unsigned int v23[3]; // [rsp+34h] [rbp-34h] BYREF

  v23[0] = 0;
  v10 = PiEventAreDeviceRelationsExcluded();
  v12 = v11;
  v22 = v10;
  v13 = a6 + 2;
  RemovalInKernelMode = PnpNotifyUserModeDeviceRemoval(a2, *a7, &GUID_TARGET_DEVICE_QUERY_REMOVE, a6, a6 + 2, v23);
  if ( RemovalInKernelMode < 0 )
  {
    PnpFinalizeVetoedRemove(a2, *a6, v13);
    if ( !v23[0] )
      return (unsigned int)RemovalInKernelMode;
    v17 = v23[0];
    v18 = (char *)*a7;
    do
    {
      v19 = -1LL;
      do
        ++v19;
      while ( *(_WORD *)&v18[2 * v19] );
      v18 += 2 * v19 + 2;
      --v17;
    }
    while ( v17 );
    v20 = (v18 - (_BYTE *)*a7) >> 1;
    CriticalMemory = (void *)PnpAllocateCriticalMemory(a1, 1LL, 2LL * (unsigned int)(v20 + 1), 1265659472LL);
    v12 = (unsigned __int64)CriticalMemory;
    if ( !CriticalMemory )
      return (unsigned int)-1073741670;
    memmove(CriticalMemory, *a7, 2LL * (unsigned int)v20);
    *(_WORD *)(2LL * (unsigned int)(v20 + 1) + v12 - 2) = 0;
    PnpNotifyUserModeDeviceRemoval(a2, v12, &GUID_TARGET_DEVICE_REMOVE_CANCELLED, 0LL, 0LL, 0LL);
    goto LABEL_15;
  }
  RemovalInKernelMode = PipProcessQueryRemovalInKernelMode(a1, a2, a3, a4, a5, (__int64)a6);
  if ( RemovalInKernelMode < 0 )
  {
    PnpFinalizeVetoedRemove(a2, *a6, v13);
    PnpNotifyUserModeDeviceRemoval(a2, *a7, &GUID_TARGET_DEVICE_REMOVE_CANCELLED, 0LL, 0LL, 0LL);
    return (unsigned int)RemovalInKernelMode;
  }
  if ( *(_DWORD *)(a2 + 16) == 54 )
  {
    LOBYTE(v15) = v22;
    RemovalInKernelMode = PnpCancelRemoveOnHungDevices(a2, a1, v15, a3, (__int64)a7);
LABEL_15:
    if ( v12 )
      ExFreePoolWithTag((PVOID)v12, 0x4B706E50u);
  }
  return (unsigned int)RemovalInKernelMode;
}
