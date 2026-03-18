/*
 * XREFs of DrvDbAcquireDatabaseNodeBaseKey @ 0x1406C4060
 * Callers:
 *     DrvDbOpenObjectRegKey @ 0x1406C3DD8 (DrvDbOpenObjectRegKey.c)
 *     DrvDbDeleteObjectRegKey @ 0x140979754 (DrvDbDeleteObjectRegKey.c)
 *     DrvDbGetObjectList @ 0x14097AA2C (DrvDbGetObjectList.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x140208540 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x140208CF0 (ExAcquireResourceExclusiveLite.c)
 *     KeLeaveCriticalRegionThread @ 0x14020B010 (KeLeaveCriticalRegionThread.c)
 *     _SysCtxRegOpenKey @ 0x1405E1CE0 (_SysCtxRegOpenKey.c)
 *     _PnpCtxRegCreateKey @ 0x1406C3680 (_PnpCtxRegCreateKey.c)
 *     DrvDbLoadDatabaseNode @ 0x1406C4318 (DrvDbLoadDatabaseNode.c)
 *     _PnpCtxRegCreateTree @ 0x1406C46C0 (_PnpCtxRegCreateTree.c)
 */

__int64 __fastcall DrvDbAcquireDatabaseNodeBaseKey(__int64 *a1, __int64 a2, int a3, _QWORD *a4)
{
  __int64 v4; // rdi
  __int64 v5; // rbp
  struct _KTHREAD *CurrentThread; // rax
  int DatabaseNode; // ebx
  int v11; // eax
  _QWORD *v12; // r14
  __int64 v14; // rdx
  __int64 v15; // rax
  int Tree; // eax
  __int64 v17; // rdx
  __int64 v18; // rax
  int Key; // eax
  __int64 v20; // rcx

  v4 = 0LL;
  v5 = a3;
  *a4 = 0LL;
  CurrentThread = KeGetCurrentThread();
  DatabaseNode = 0;
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(*(PERESOURCE *)(a2 + 144), 1u);
  v11 = *(_DWORD *)(a2 + 56);
  if ( (v11 & 4) != 0 )
  {
    DatabaseNode = -1073740697;
  }
  else if ( (v11 & 2) != 0 )
  {
    v12 = (_QWORD *)(a2 + 96 + 8 * v5);
    if ( *v12 )
      goto LABEL_4;
    DatabaseNode = DrvDbLoadDatabaseNode(a1, a2);
    if ( DatabaseNode >= 0 )
    {
      v17 = *(_QWORD *)(a2 + 88);
      v18 = *a1;
      if ( (_DWORD)v5 )
      {
        Key = PnpCtxRegCreateKey(v18, v17, qword_140006508[v5], 0, 0x2000000u, 0LL, a2 + 96 + 8 * v5, 0LL);
      }
      else
      {
        v20 = 0LL;
        if ( v18 )
          v20 = *(_QWORD *)(v18 + 224);
        Key = SysCtxRegOpenKey(v20, v17, 0LL, 0, 0x2000000u, a2 + 96 + 8 * v5);
      }
      DatabaseNode = Key;
      if ( Key >= 0 )
LABEL_4:
        *a4 = *v12;
    }
  }
  else
  {
    DatabaseNode = DrvDbLoadDatabaseNode(a1, a2);
    if ( DatabaseNode >= 0 )
    {
      v14 = *(_QWORD *)(a2 + 88);
      v15 = *a1;
      if ( (_DWORD)v5 )
      {
        Tree = PnpCtxRegCreateTree(v15, v14, qword_140006508[v5], 0, 0x2000000, 0LL, (__int64)a4, 0LL);
      }
      else
      {
        if ( v15 )
          v4 = *(_QWORD *)(v15 + 224);
        Tree = SysCtxRegOpenKey(v4, v14, 0LL, 0, 0x2000000u, (__int64)a4);
      }
      DatabaseNode = Tree;
    }
  }
  ExReleaseResourceLite(*(PERESOURCE *)(a2 + 144));
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  if ( DatabaseNode == -1073741275 || DatabaseNode == -1073741772 )
    return (unsigned int)-1073740947;
  return (unsigned int)DatabaseNode;
}
