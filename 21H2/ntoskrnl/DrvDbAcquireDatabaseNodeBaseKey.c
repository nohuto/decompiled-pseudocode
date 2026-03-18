/*
 * XREFs of DrvDbAcquireDatabaseNodeBaseKey @ 0x1407829F8
 * Callers:
 *     DrvDbOpenObjectRegKey @ 0x1407827F0 (DrvDbOpenObjectRegKey.c)
 *     DrvDbDeleteObjectRegKey @ 0x140A2DA0C (DrvDbDeleteObjectRegKey.c)
 *     DrvDbGetObjectList @ 0x140A2EF0C (DrvDbGetObjectList.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x1402AE340 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1402F9540 (KiLeaveCriticalRegionUnsafe.c)
 *     DrvDbLoadDatabaseNode @ 0x1406C1D24 (DrvDbLoadDatabaseNode.c)
 *     _PnpCtxRegCreateKey @ 0x140772A24 (_PnpCtxRegCreateKey.c)
 *     _PnpCtxRegCreateTree @ 0x140772AA0 (_PnpCtxRegCreateTree.c)
 *     _SysCtxRegOpenKey @ 0x14077FFEC (_SysCtxRegOpenKey.c)
 *     DrvDbGetRegistrarSecurityDescriptor @ 0x14086240C (DrvDbGetRegistrarSecurityDescriptor.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall DrvDbAcquireDatabaseNodeBaseKey(__int64 *a1, __int64 a2, int a3, _QWORD *a4)
{
  int DatabaseNode; // ebx
  __int64 v5; // rbp
  void *RegistrarSecurityDescriptor; // rdi
  struct _KTHREAD *CurrentThread; // rax
  int v11; // eax
  _QWORD *v12; // r15
  int Tree; // eax
  int Key; // eax
  __int64 v16; // rcx
  __int64 v17; // rcx

  DatabaseNode = 0;
  v5 = a3;
  *a4 = 0LL;
  RegistrarSecurityDescriptor = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(*(PERESOURCE *)(a2 + 152), 1u);
  v11 = *(_DWORD *)(a2 + 64);
  if ( (v11 & 4) != 0 )
  {
    DatabaseNode = -1073740697;
    goto LABEL_5;
  }
  if ( (v11 & 2) == 0 )
  {
    DatabaseNode = DrvDbLoadDatabaseNode(a1, a2);
    if ( DatabaseNode < 0 )
      goto LABEL_5;
    if ( (_DWORD)v5 )
    {
      if ( (_DWORD)v5 == 1 )
      {
        RegistrarSecurityDescriptor = (void *)DrvDbGetRegistrarSecurityDescriptor();
        if ( !RegistrarSecurityDescriptor )
          goto LABEL_24;
      }
      Tree = PnpCtxRegCreateTree(*a1);
    }
    else
    {
      if ( *a1 )
        v17 = *(_QWORD *)(*a1 + 224);
      else
        v17 = 0LL;
      Tree = SysCtxRegOpenKey(v17, *(_QWORD *)(a2 + 96), 0LL, 0, 0x2000000u, (__int64)a4);
    }
    DatabaseNode = Tree;
    goto LABEL_5;
  }
  v12 = (_QWORD *)(a2 + 104 + 8 * v5);
  if ( *v12 )
  {
LABEL_4:
    *a4 = *v12;
    goto LABEL_5;
  }
  DatabaseNode = DrvDbLoadDatabaseNode(a1, a2);
  if ( DatabaseNode >= 0 )
  {
    if ( (_DWORD)v5 )
    {
      if ( (_DWORD)v5 == 1 )
      {
        RegistrarSecurityDescriptor = (void *)DrvDbGetRegistrarSecurityDescriptor();
        if ( !RegistrarSecurityDescriptor )
        {
LABEL_24:
          DatabaseNode = -1073741595;
          goto LABEL_5;
        }
      }
      Key = PnpCtxRegCreateKey(
              *a1,
              *(_QWORD *)(a2 + 96),
              qword_140007080[v5],
              0,
              0x2000000u,
              (__int64)RegistrarSecurityDescriptor,
              a2 + 104 + 8 * v5,
              0LL);
    }
    else
    {
      if ( *a1 )
        v16 = *(_QWORD *)(*a1 + 224);
      else
        v16 = 0LL;
      Key = SysCtxRegOpenKey(v16, *(_QWORD *)(a2 + 96), 0LL, 0, 0x2000000u, a2 + 104 + 8 * v5);
    }
    DatabaseNode = Key;
    if ( Key >= 0 )
      goto LABEL_4;
  }
LABEL_5:
  ExReleaseResourceLite(*(PERESOURCE *)(a2 + 152));
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  if ( RegistrarSecurityDescriptor )
    ExFreePoolWithTag(RegistrarSecurityDescriptor, 0);
  if ( DatabaseNode == -1073741275 || DatabaseNode == -1073741772 )
    return (unsigned int)-1073740947;
  return (unsigned int)DatabaseNode;
}
