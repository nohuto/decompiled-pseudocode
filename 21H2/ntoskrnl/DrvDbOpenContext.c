/*
 * XREFs of DrvDbOpenContext @ 0x140827238
 * Callers:
 *     PiDrvDbInit @ 0x140826000 (PiDrvDbInit.c)
 * Callees:
 *     ExDeleteResourceLite @ 0x14028A7C0 (ExDeleteResourceLite.c)
 *     ExInitializeResourceLite @ 0x14030F740 (ExInitializeResourceLite.c)
 *     DrvDbLoadDatabaseNode @ 0x1406C1D24 (DrvDbLoadDatabaseNode.c)
 *     DrvDbRegisterObjects @ 0x140827378 (DrvDbRegisterObjects.c)
 *     DrvDbCreateDatabaseNode @ 0x1408274C4 (DrvDbCreateDatabaseNode.c)
 *     DrvDbDestroyDatabaseNode @ 0x140A30510 (DrvDbDestroyDatabaseNode.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 DrvDbOpenContext()
{
  __int64 v0; // r14
  __int64 v1; // rsi
  int v2; // edi
  __int64 Pool2; // rax
  __int64 v4; // rbx
  _QWORD *v5; // rax
  struct _ERESOURCE *v6; // rax
  __int64 v7; // r8
  int DatabaseNode; // edi
  int v9; // eax
  void *v11; // rsi
  __int64 v12; // [rsp+68h] [rbp+10h] BYREF

  v0 = *(_QWORD *)&PiPnpRtlCtx;
  v1 = 0LL;
  PiDrvDbCtx = 0LL;
  v12 = 0LL;
  v2 = **(_DWORD **)&PiPnpRtlCtx;
  Pool2 = ExAllocatePool2(256LL, 64LL, 1111770192LL);
  v4 = Pool2;
  if ( !Pool2 )
    return (unsigned int)-1073741801;
  *(_QWORD *)Pool2 = v0;
  *(_DWORD *)(Pool2 + 8) = v2;
  *(_DWORD *)(Pool2 + 12) = -805306368;
  v5 = (_QWORD *)(Pool2 + 16);
  v5[1] = v5;
  *v5 = v5;
  v6 = (struct _ERESOURCE *)ExAllocatePool2(64LL, 104LL, 1111770192LL);
  *(_QWORD *)(v4 + 56) = v6;
  if ( v6 )
  {
    DatabaseNode = ExInitializeResourceLite(v6);
    if ( DatabaseNode >= 0 )
    {
      v9 = DrvDbCreateDatabaseNode(v4, L"SYSTEM", 0LL, 1LL, L"DriverDatabase", 3, 0LL, 0LL, &v12);
      v1 = v12;
      DatabaseNode = v9;
      if ( v9 >= 0 )
      {
        DatabaseNode = DrvDbLoadDatabaseNode((_QWORD *)v4, v12);
        if ( DatabaseNode >= 0 )
        {
          DatabaseNode = DrvDbRegisterObjects(v0, v4);
          if ( DatabaseNode >= 0 )
          {
            PiDrvDbCtx = v4;
            return (unsigned int)DatabaseNode;
          }
        }
      }
    }
    else
    {
      ExFreePoolWithTag(*(PVOID *)(v4 + 56), 0);
      *(_QWORD *)(v4 + 56) = 0LL;
    }
  }
  else
  {
    DatabaseNode = -1073741670;
  }
  if ( v1 )
    DrvDbDestroyDatabaseNode(v4, v1, v7);
  v11 = *(void **)(v4 + 56);
  if ( v11 )
  {
    ExDeleteResourceLite(*(PERESOURCE *)(v4 + 56));
    ExFreePoolWithTag(v11, 0);
  }
  ExFreePoolWithTag((PVOID)v4, 0);
  return (unsigned int)DatabaseNode;
}
