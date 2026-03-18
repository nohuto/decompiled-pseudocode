/*
 * XREFs of RegisterOperationRegionHandler @ 0x1C00A1990
 * Callers:
 *     ACPIEcInitOpRegionHandler @ 0x1C00267F8 (ACPIEcInitOpRegionHandler.c)
 *     ACPIIoctlRegisterOpRegionHandler @ 0x1C002BE68 (ACPIIoctlRegisterOpRegionHandler.c)
 *     ACPIEcInstallOpRegionHandler @ 0x1C00AE834 (ACPIEcInstallOpRegionHandler.c)
 *     RegisterOpRegionHandler @ 0x1C00B18F0 (RegisterOpRegionHandler.c)
 *     OSInitializeCallbacks @ 0x1C00BEFB8 (OSInitializeCallbacks.c)
 * Callees:
 *     AMLIGetNameSpaceObject @ 0x1C000AC5C (AMLIGetNameSpaceObject.c)
 *     AMLIDereferenceHandleEx @ 0x1C000B8AC (AMLIDereferenceHandleEx.c)
 *     AMLIAsyncEvalObject @ 0x1C001441C (AMLIAsyncEvalObject.c)
 *     EnableDisableDeviceTreeRegionSpace @ 0x1C0017FB0 (EnableDisableDeviceTreeRegionSpace.c)
 *     AMLIRegEventHandler @ 0x1C002BF3C (AMLIRegEventHandler.c)
 *     memset @ 0x1C0032180 (memset.c)
 */

__int64 __fastcall RegisterOperationRegionHandler(
        __int64 *a1,
        int a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        unsigned int **a6)
{
  __int64 v8; // rsi
  int v9; // edx
  int v10; // ebp
  unsigned int *PoolWithTag; // rax
  unsigned int *v12; // rbx
  __int64 v13; // r15
  int v14; // edi
  __int64 v15; // rdi
  __int64 i; // rax
  unsigned int **v17; // rcx
  unsigned int *v18; // rax
  int v19; // edx
  unsigned int v20; // edx
  int v22; // eax
  __int64 *v23; // [rsp+30h] [rbp-78h] BYREF
  _QWORD v24[10]; // [rsp+40h] [rbp-68h] BYREF

  v23 = 0LL;
  v8 = a3;
  *a6 = 0LL;
  v9 = a2 - 1;
  if ( v9 )
  {
    if ( v9 != 1 )
      return 3221225712LL;
    v10 = 6;
  }
  else
  {
    v10 = 7;
  }
  if ( a3 > 9 && a3 - 128 > 0x7F )
    return 3221225713LL;
  PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x30uLL, 0x4F706341u);
  v12 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  *((_QWORD *)PoolWithTag + 1) = PoolWithTag;
  *(_QWORD *)PoolWithTag = PoolWithTag;
  *((_QWORD *)PoolWithTag + 2) = a4;
  *((_QWORD *)PoolWithTag + 3) = a5;
  PoolWithTag[8] = v10;
  PoolWithTag[9] = v8;
  *((_BYTE *)PoolWithTag + 40) = 0;
  if ( v10 == 6 )
  {
    v13 = v8;
    v22 = AMLIRegEventHandler(6u, v8, InternalOpRegionHandler, PoolWithTag);
    if ( v22 )
      v22 = -1073741823;
    v14 = v22;
  }
  else
  {
    v13 = v8;
    v14 = AMLIRegEventHandler(7u, v8, InternalRawAccessOpRegionHandler, PoolWithTag);
    if ( v14 )
      v14 = -1073741823;
  }
  if ( v14 < 0 )
  {
    ExFreePoolWithTag(v12, 0);
    return (unsigned int)v14;
  }
  else
  {
    *a6 = v12;
    v15 = 0LL;
    ExAcquireFastMutex(&AcpiOpRegionLock);
    for ( i = AcpiOpRegionHandlerList; (__int64 *)i != &AcpiOpRegionHandlerList; i = *(_QWORD *)i )
    {
      v15 = i;
      if ( *(_DWORD *)(i + 36) >= (unsigned int)v8 && (*(_DWORD *)(i + 36) != (_DWORD)v8 || *(_DWORD *)(i + 32) == v10) )
        break;
    }
    v17 = *(unsigned int ***)(i + 8);
    v18 = *v17;
    if ( *((unsigned int ***)*v17 + 1) != v17 )
      __fastfail(3u);
    *(_QWORD *)v12 = v18;
    *((_QWORD *)v12 + 1) = v17;
    *((_QWORD *)v18 + 1) = v12;
    *v17 = v12;
    if ( v15 && *(_DWORD *)(v15 + 36) == (_DWORD)v8 )
    {
      ExReleaseFastMutex(&AcpiOpRegionLock);
    }
    else
    {
      if ( (unsigned int)v8 >= 0x1F )
        v19 = 0x80000000;
      else
        v19 = 1 << v8;
      AcpiRegisteredOpRegionMask |= v19;
      ExReleaseFastMutex(&AcpiOpRegionLock);
      v20 = v12[9];
      if ( v20 - 8 <= 1 )
      {
        EnableDisableDeviceTreeRegionSpace(RootDeviceExtension, v20, 1);
      }
      else if ( a1 )
      {
        if ( (int)AMLIGetNameSpaceObject("_REG", a1, (unsigned __int64 *)&v23, 1) >= 0 )
        {
          memset(v24, 0, sizeof(v24));
          WORD1(v24[0]) = 1;
          v24[2] = v13;
          WORD1(v24[5]) = 1;
          v24[7] = 1LL;
          AMLIAsyncEvalObject(v23, 0LL, 2u, v24, 0LL, 0LL);
          AMLIDereferenceHandleEx((__int64)v23);
        }
      }
    }
    return 0LL;
  }
}
