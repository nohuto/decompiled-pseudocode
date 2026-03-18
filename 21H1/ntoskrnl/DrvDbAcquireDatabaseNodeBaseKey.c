/*
 * XREFs of DrvDbAcquireDatabaseNodeBaseKey @ 0x1406ADCE4
 * Callers:
 *     DrvDbOpenObjectRegKey @ 0x1406ADA5C (DrvDbOpenObjectRegKey.c)
 *     DrvDbDeleteObjectRegKey @ 0x1409783B4 (DrvDbDeleteObjectRegKey.c)
 *     DrvDbGetObjectList @ 0x14097968C (DrvDbGetObjectList.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseResourceLite @ 0x140261460 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x140261C10 (ExAcquireResourceExclusiveLite.c)
 *     _SysCtxRegOpenKey @ 0x140617E18 (_SysCtxRegOpenKey.c)
 *     DrvDbLoadDatabaseNode @ 0x1406ADF9C (DrvDbLoadDatabaseNode.c)
 *     _PnpCtxRegCreateTree @ 0x1406AE344 (_PnpCtxRegCreateTree.c)
 *     _PnpCtxRegCreateKey @ 0x1406B06C4 (_PnpCtxRegCreateKey.c)
 */

__int64 __fastcall DrvDbAcquireDatabaseNodeBaseKey(__int64 *a1, __int64 a2, int a3, _QWORD *a4)
{
  __int64 v4; // rdi
  __int64 v5; // rbp
  struct _KTHREAD *CurrentThread; // rax
  int DatabaseNode; // ebx
  int v11; // eax
  _QWORD *v12; // r14
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v17; // rdx
  __int64 v18; // rax
  int Tree; // eax
  __int64 v20; // rdx
  __int64 v21; // rax
  int Key; // eax
  __int64 v23; // rcx

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
      v20 = *(_QWORD *)(a2 + 88);
      v21 = *a1;
      if ( (_DWORD)v5 )
      {
        Key = PnpCtxRegCreateKey(v21, v20, qword_140006510[v5], 0, 0x2000000, 0LL, a2 + 96 + 8 * v5, 0LL);
      }
      else
      {
        v23 = 0LL;
        if ( v21 )
          v23 = *(_QWORD *)(v21 + 224);
        Key = SysCtxRegOpenKey(v23, v20, 0LL, 0, 0x2000000u, a2 + 96 + 8 * v5);
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
      v17 = *(_QWORD *)(a2 + 88);
      v18 = *a1;
      if ( (_DWORD)v5 )
      {
        Tree = PnpCtxRegCreateTree(v18, v17, qword_140006510[v5], 0, 0x2000000, 0LL, (__int64)a4, 0LL);
      }
      else
      {
        if ( v18 )
          v4 = *(_QWORD *)(v18 + 224);
        Tree = SysCtxRegOpenKey(v4, v17, 0LL, 0, 0x2000000u, (__int64)a4);
      }
      DatabaseNode = Tree;
    }
  }
  ExReleaseResourceLite(*(PERESOURCE *)(a2 + 144));
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v13, v14, v15);
  if ( DatabaseNode == -1073741275 || DatabaseNode == -1073741772 )
    return (unsigned int)-1073740947;
  return (unsigned int)DatabaseNode;
}
