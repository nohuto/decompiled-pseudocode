/*
 * XREFs of DrvDbOpenDriverDatabaseRegKey @ 0x14073C170
 * Callers:
 *     DrvDbDispatchDriverDatabase @ 0x1406AD710 (DrvDbDispatchDriverDatabase.c)
 *     DrvDbSetDriverDatabaseMappedProperty @ 0x14071A188 (DrvDbSetDriverDatabaseMappedProperty.c)
 *     DrvDbGetDriverDatabaseMappedProperty @ 0x14073BF9C (DrvDbGetDriverDatabaseMappedProperty.c)
 *     DrvDbGetDriverDatabaseMappedPropertyKeys @ 0x140978B14 (DrvDbGetDriverDatabaseMappedPropertyKeys.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseResourceLite @ 0x140261460 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x140261C10 (ExAcquireResourceExclusiveLite.c)
 *     _wcsicmp @ 0x1403CDC90 (_wcsicmp.c)
 *     _SysCtxRegOpenKey @ 0x140617E18 (_SysCtxRegOpenKey.c)
 *     DrvDbLoadDatabaseNode @ 0x1406ADF9C (DrvDbLoadDatabaseNode.c)
 *     DrvDbUnloadDatabaseNode @ 0x1406AE260 (DrvDbUnloadDatabaseNode.c)
 *     DrvDbFindDatabaseNode @ 0x1406B03AC (DrvDbFindDatabaseNode.c)
 *     DrvDbCreateDatabaseNode @ 0x14078B738 (DrvDbCreateDatabaseNode.c)
 *     DrvDbDestroyDatabaseNode @ 0x140979FDC (DrvDbDestroyDatabaseNode.c)
 */

__int64 __fastcall DrvDbOpenDriverDatabaseRegKey(
        const UNICODE_STRING **a1,
        const WCHAR *a2,
        unsigned int a3,
        char a4,
        __int64 a5,
        _DWORD *a6)
{
  char v10; // bp
  int DatabaseNode; // eax
  int v12; // ebx
  struct _KTHREAD *CurrentThread; // rax
  const UNICODE_STRING *v14; // rsi
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // r8
  const UNICODE_STRING *v21[2]; // [rsp+40h] [rbp-28h] BYREF

  v21[0] = 0LL;
  v10 = 0;
  if ( wcsicmp(a2, L"*") )
  {
    DatabaseNode = DrvDbFindDatabaseNode((__int64)a1, a2, v21);
    v12 = DatabaseNode;
    if ( DatabaseNode == -1073741772 )
    {
      if ( !a4 )
        return (unsigned int)v12;
      v12 = DrvDbCreateDatabaseNode(a1, a2, 0LL, 0LL, 16, 0LL, 0LL, v21);
      if ( v12 < 0 )
        return (unsigned int)v12;
      v10 = 1;
    }
    else if ( DatabaseNode < 0 )
    {
      return (unsigned int)v12;
    }
  }
  else
  {
    v21[0] = a1[4];
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v14 = v21[0];
  ExAcquireResourceExclusiveLite(*(PERESOURCE *)&v21[0][9].Length, 1u);
  if ( ((__int64)v14[3].Buffer & 1) != 0 || (v12 = DrvDbLoadDatabaseNode((__int64)a1, (__int64)v14), v12 >= 0) )
  {
    if ( *a1 )
      v15 = *(_QWORD *)&(*a1)[14].Length;
    else
      v15 = 0LL;
    v12 = SysCtxRegOpenKey(v15, (__int64)v14[5].Buffer, 0LL, 0, a3, a5);
    if ( ((__int64)v14[3].Buffer & 1) == 0 )
      DrvDbUnloadDatabaseNode((__int64)a1, (__int64)v14);
    if ( v12 >= 0 && a6 )
      *a6 = 2;
  }
  ExReleaseResourceLite(*(PERESOURCE *)&v14[9].Length);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v16, v17, v18);
  if ( v12 < 0 && v10 )
    DrvDbDestroyDatabaseNode(a1, v21[0], v19);
  return (unsigned int)v12;
}
