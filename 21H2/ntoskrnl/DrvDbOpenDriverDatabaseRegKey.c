/*
 * XREFs of DrvDbOpenDriverDatabaseRegKey @ 0x140859460
 * Callers:
 *     DrvDbGetDriverDatabaseMappedProperty @ 0x1406C1FDC (DrvDbGetDriverDatabaseMappedProperty.c)
 *     DrvDbDispatchDriverDatabase @ 0x140788A80 (DrvDbDispatchDriverDatabase.c)
 *     DrvDbSetDriverDatabaseMappedProperty @ 0x14081D0F0 (DrvDbSetDriverDatabaseMappedProperty.c)
 *     DrvDbGetDriverDatabaseMappedPropertyKeys @ 0x140A2E2C4 (DrvDbGetDriverDatabaseMappedPropertyKeys.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x1402AE340 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1402F9540 (KiLeaveCriticalRegionUnsafe.c)
 *     _wcsicmp @ 0x1403E1490 (_wcsicmp.c)
 *     DrvDbLoadDatabaseNode @ 0x1406C1D24 (DrvDbLoadDatabaseNode.c)
 *     DrvDbFindDatabaseNode @ 0x1406C2248 (DrvDbFindDatabaseNode.c)
 *     DrvDbUnloadDatabaseNode @ 0x1406C59F0 (DrvDbUnloadDatabaseNode.c)
 *     _SysCtxRegOpenKey @ 0x14077FFEC (_SysCtxRegOpenKey.c)
 *     DrvDbCreateDatabaseNode @ 0x1408274C4 (DrvDbCreateDatabaseNode.c)
 *     DrvDbDestroyDatabaseNode @ 0x140A30510 (DrvDbDestroyDatabaseNode.c)
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
  __int64 v16; // r8
  const UNICODE_STRING *v18[2]; // [rsp+50h] [rbp-28h] BYREF

  v18[0] = 0LL;
  v10 = 0;
  if ( wcsicmp(a2, L"*") )
  {
    DatabaseNode = DrvDbFindDatabaseNode((__int64)a1, a2, v18);
    v12 = DatabaseNode;
    if ( DatabaseNode == -1073741772 )
    {
      if ( !a4 )
        return (unsigned int)v12;
      v12 = DrvDbCreateDatabaseNode((__int64)a1, a2, 0LL, 0, 0LL, 16, 0LL, 0LL, (__int64 *)v18);
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
    v18[0] = a1[4];
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v14 = v18[0];
  ExAcquireResourceExclusiveLite((PERESOURCE)v18[0][9].Buffer, 1u);
  if ( (*(_DWORD *)&v14[4].Length & 1) != 0 || (v12 = DrvDbLoadDatabaseNode(a1, (__int64)v14), v12 >= 0) )
  {
    if ( *a1 )
      v15 = *(_QWORD *)&(*a1)[14].Length;
    else
      v15 = 0LL;
    v12 = SysCtxRegOpenKey(v15, *(_QWORD *)&v14[6].Length, 0LL, 0, a3, a5);
    if ( (*(_DWORD *)&v14[4].Length & 1) == 0 )
      DrvDbUnloadDatabaseNode((__int64)a1, (__int64)v14);
    if ( v12 >= 0 && a6 )
      *a6 = 2;
  }
  ExReleaseResourceLite((PERESOURCE)v14[9].Buffer);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  if ( v12 < 0 && v10 )
    DrvDbDestroyDatabaseNode(a1, v18[0], v16);
  return (unsigned int)v12;
}
