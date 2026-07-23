/*
 * XREFs of DrvDbOpenContext @ 0x1407A420C
 * Callers:
 *     PiDrvDbInit @ 0x1407A370C (PiDrvDbInit.c)
 * Callees:
 *     ExInitializeResourceLite @ 0x1402C1550 (ExInitializeResourceLite.c)
 *     ExDeleteResourceLite @ 0x1402FFDF0 (ExDeleteResourceLite.c)
 *     DrvDbLoadDatabaseNode @ 0x140633564 (DrvDbLoadDatabaseNode.c)
 *     DrvDbRegisterObjects @ 0x1407A4350 (DrvDbRegisterObjects.c)
 *     DrvDbCreateDatabaseNode @ 0x1407A4468 (DrvDbCreateDatabaseNode.c)
 *     DrvDbDestroyDatabaseNode @ 0x14097EA4C (DrvDbDestroyDatabaseNode.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 DrvDbOpenContext()
{
  __int64 v0; // r14
  __int64 v1; // rsi
  int v2; // edi
  _QWORD *PoolWithTag; // rax
  __int64 v4; // rbx
  _QWORD *v5; // rax
  struct _ERESOURCE *v6; // rax
  __int64 v7; // r8
  int DatabaseNode; // edi
  int v9; // eax
  void *v11; // rsi
  __int64 v12; // [rsp+58h] [rbp+10h] BYREF

  v0 = *(_QWORD *)&PiPnpRtlCtx;
  v1 = 0LL;
  PiDrvDbCtx = 0LL;
  v12 = 0LL;
  v2 = **(_DWORD **)&PiPnpRtlCtx;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x38uLL, 0x42444450u);
  v4 = (__int64)PoolWithTag;
  if ( PoolWithTag )
  {
    PoolWithTag[3] = 0LL;
    PoolWithTag[4] = 0LL;
    PoolWithTag[5] = 0LL;
    PoolWithTag[6] = 0LL;
    *PoolWithTag = v0;
    *((_DWORD *)PoolWithTag + 2) = v2;
    *((_DWORD *)PoolWithTag + 3) = -805306368;
    v5 = PoolWithTag + 2;
    v5[1] = v5;
    *v5 = v5;
    v6 = (struct _ERESOURCE *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x68uLL, 0x42444450u);
    *(_QWORD *)(v4 + 48) = v6;
    if ( v6 )
    {
      DatabaseNode = ExInitializeResourceLite(v6);
      if ( DatabaseNode < 0 )
      {
        ExFreePoolWithTag(*(PVOID *)(v4 + 48), 0);
        *(_QWORD *)(v4 + 48) = 0LL;
      }
    }
    else
    {
      DatabaseNode = -1073741670;
    }
    if ( DatabaseNode >= 0 )
    {
      v9 = DrvDbCreateDatabaseNode(v4, L"SYSTEM", 1LL, L"DriverDatabase", 3, 0LL, 0LL, &v12);
      v1 = v12;
      DatabaseNode = v9;
      if ( v9 >= 0 )
      {
        DatabaseNode = DrvDbLoadDatabaseNode((__int64 *)v4, v12);
        if ( DatabaseNode >= 0 )
        {
          DatabaseNode = DrvDbRegisterObjects(v0, v4);
          if ( DatabaseNode >= 0 )
          {
            PiDrvDbCtx = v4;
            v4 = 0LL;
          }
        }
      }
    }
    if ( v4 )
    {
      if ( v1 )
        DrvDbDestroyDatabaseNode(v4, v1, v7);
      v11 = *(void **)(v4 + 48);
      if ( v11 )
      {
        ExDeleteResourceLite(*(PERESOURCE *)(v4 + 48));
        ExFreePoolWithTag(v11, 0);
      }
      ExFreePoolWithTag((PVOID)v4, 0);
    }
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)DatabaseNode;
}
