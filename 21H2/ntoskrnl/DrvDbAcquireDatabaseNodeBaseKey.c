/*
 * XREFs of DrvDbAcquireDatabaseNodeBaseKey @ 0x1406354A8
 * Callers:
 *     DrvDbOpenObjectRegKey @ 0x140635220 (DrvDbOpenObjectRegKey.c)
 *     DrvDbDeleteObjectRegKey @ 0x14097CE24 (DrvDbDeleteObjectRegKey.c)
 *     DrvDbGetObjectList @ 0x14097E0FC (DrvDbGetObjectList.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseResourceLite @ 0x140356140 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x1403568F0 (ExAcquireResourceExclusiveLite.c)
 *     _PnpCtxRegCreateKey @ 0x140630370 (_PnpCtxRegCreateKey.c)
 *     _PnpCtxRegCreateTree @ 0x140633088 (_PnpCtxRegCreateTree.c)
 *     DrvDbLoadDatabaseNode @ 0x140633564 (DrvDbLoadDatabaseNode.c)
 *     _SysCtxRegOpenKey @ 0x1406374BC (_SysCtxRegOpenKey.c)
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
  __int64 v17; // rax
  int Tree; // eax
  __int64 v19; // rdx
  __int64 v20; // rax
  int Key; // eax
  __int64 v22; // rcx

  LODWORD(v4) = 0;
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
      v19 = *(_QWORD *)(a2 + 88);
      v20 = *a1;
      if ( (_DWORD)v5 )
      {
        Key = PnpCtxRegCreateKey(v20, v19, qword_140006320[v5], 0, 0x2000000u, 0LL, a2 + 96 + 8 * v5, 0LL);
      }
      else
      {
        LODWORD(v22) = 0;
        if ( v20 )
          v22 = *(_QWORD *)(v20 + 224);
        Key = SysCtxRegOpenKey(v22, v19, 0, 0, 0x2000000, a2 + 96 + 8 * v5);
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
      v17 = *a1;
      if ( (_DWORD)v5 )
      {
        Tree = PnpCtxRegCreateTree(v17);
      }
      else
      {
        if ( v17 )
          v4 = *(_QWORD *)(v17 + 224);
        Tree = SysCtxRegOpenKey(v4, *(_QWORD *)(a2 + 88), 0, 0, 0x2000000, (__int64)a4);
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
