/*
 * XREFs of DrvDbAcquireDatabaseNodeBaseKey @ 0x140640698
 * Callers:
 *     DrvDbOpenObjectRegKey @ 0x140640410 (DrvDbOpenObjectRegKey.c)
 *     DrvDbDeleteObjectRegKey @ 0x14097CC44 (DrvDbDeleteObjectRegKey.c)
 *     DrvDbGetObjectList @ 0x14097DF1C (DrvDbGetObjectList.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140206FC0 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseResourceLite @ 0x14034B3F0 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x14034BBA0 (ExAcquireResourceExclusiveLite.c)
 *     _PnpCtxRegCreateKey @ 0x14063B560 (_PnpCtxRegCreateKey.c)
 *     _PnpCtxRegCreateTree @ 0x14063E278 (_PnpCtxRegCreateTree.c)
 *     DrvDbLoadDatabaseNode @ 0x14063E754 (DrvDbLoadDatabaseNode.c)
 *     _SysCtxRegOpenKey @ 0x1406426AC (_SysCtxRegOpenKey.c)
 */

__int64 __fastcall DrvDbAcquireDatabaseNodeBaseKey(__int64 *a1, __int64 a2, int a3, _QWORD *a4)
{
  __int64 v4; // rdi
  __int64 v5; // rbp
  struct _KTHREAD *CurrentThread; // rax
  int DatabaseNode; // ebx
  int v11; // eax
  _QWORD *v12; // r14
  __int64 v14; // rax
  int Tree; // eax
  __int64 v16; // rdx
  __int64 v17; // rax
  int Key; // eax
  __int64 v19; // rcx

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
      v16 = *(_QWORD *)(a2 + 88);
      v17 = *a1;
      if ( (_DWORD)v5 )
      {
        Key = PnpCtxRegCreateKey(v17, v16, qword_1400062C0[v5], 0, 0x2000000u, 0LL, a2 + 96 + 8 * v5, 0LL);
      }
      else
      {
        LODWORD(v19) = 0;
        if ( v17 )
          v19 = *(_QWORD *)(v17 + 224);
        Key = SysCtxRegOpenKey(v19, v16, 0, 0, 0x2000000, a2 + 96 + 8 * v5);
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
      v14 = *a1;
      if ( (_DWORD)v5 )
      {
        Tree = PnpCtxRegCreateTree(v14);
      }
      else
      {
        if ( v14 )
          v4 = *(_QWORD *)(v14 + 224);
        Tree = SysCtxRegOpenKey(v4, *(_QWORD *)(a2 + 88), 0, 0, 0x2000000, (__int64)a4);
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
