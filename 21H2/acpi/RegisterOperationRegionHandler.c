/*
 * XREFs of RegisterOperationRegionHandler @ 0x1C009F5F8
 * Callers:
 *     ACPIEcInitOpRegionHandler @ 0x1C0020398 (ACPIEcInitOpRegionHandler.c)
 *     ACPIIoctlRegisterOpRegionHandler @ 0x1C0029204 (ACPIIoctlRegisterOpRegionHandler.c)
 *     ACPIEcInstallOpRegionHandler @ 0x1C00AD7DC (ACPIEcInstallOpRegionHandler.c)
 *     RegisterOpRegionHandler @ 0x1C00B0E70 (RegisterOpRegionHandler.c)
 *     OSInitializeCallbacks @ 0x1C00BEDD4 (OSInitializeCallbacks.c)
 * Callees:
 *     AMLIDereferenceHandleEx @ 0x1C000B860 (AMLIDereferenceHandleEx.c)
 *     AMLIGetNameSpaceObject @ 0x1C0018260 (AMLIGetNameSpaceObject.c)
 *     AMLIAsyncEvalObject @ 0x1C0019E08 (AMLIAsyncEvalObject.c)
 *     AMLIRegEventHandler @ 0x1C00292D8 (AMLIRegEventHandler.c)
 *     EnableDisableDeviceTreeRegionSpace @ 0x1C002963C (EnableDisableDeviceTreeRegionSpace.c)
 *     memset @ 0x1C0030080 (memset.c)
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
  __int64 Pool2; // rax
  unsigned int *v12; // rdi
  __int64 v13; // r15
  int v14; // ebx
  __int64 v15; // rbx
  __int64 i; // rax
  unsigned int **v17; // rcx
  unsigned int *v18; // rax
  int v19; // edx
  unsigned int v20; // edx
  __int64 *v22; // [rsp+30h] [rbp-78h] BYREF
  _QWORD v23[10]; // [rsp+40h] [rbp-68h] BYREF

  v22 = 0LL;
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
  if ( a3 > 9 && a3 != 11 && a3 - 128 > 0x7F )
    return 3221225713LL;
  Pool2 = ExAllocatePool2(64LL, 48LL, 1332765505LL);
  v12 = (unsigned int *)Pool2;
  if ( !Pool2 )
    return 3221225626LL;
  *(_QWORD *)(Pool2 + 8) = Pool2;
  *(_QWORD *)Pool2 = Pool2;
  *(_QWORD *)(Pool2 + 16) = a4;
  *(_QWORD *)(Pool2 + 24) = a5;
  *(_DWORD *)(Pool2 + 32) = v10;
  *(_DWORD *)(Pool2 + 36) = v8;
  *(_BYTE *)(Pool2 + 40) = 0;
  if ( v10 == 6 )
  {
    v13 = v8;
    v14 = AMLIRegEventHandler(6u, v8, InternalOpRegionHandler, Pool2);
    if ( v14 )
    {
      v14 = -1073741823;
      goto LABEL_33;
    }
  }
  else
  {
    v13 = v8;
    v14 = AMLIRegEventHandler(7u, v8, InternalRawAccessOpRegionHandler, Pool2);
    if ( v14 )
      v14 = -1073741823;
  }
  if ( v14 < 0 )
  {
LABEL_33:
    ExFreePoolWithTag(v12, 0);
    return (unsigned int)v14;
  }
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
      if ( (int)AMLIGetNameSpaceObject("_REG", a1, &v22, 1) >= 0 )
      {
        memset(v23, 0, sizeof(v23));
        WORD1(v23[0]) = 1;
        v23[2] = v13;
        WORD1(v23[5]) = 1;
        v23[7] = 1LL;
        AMLIAsyncEvalObject(v22, 0LL, 2u, v23, 0LL, 0LL);
        AMLIDereferenceHandleEx((volatile signed __int32 *)v22);
      }
    }
  }
  return 0LL;
}
