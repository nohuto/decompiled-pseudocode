/*
 * XREFs of ?CloseAdapter@DXGPROCESS@@QEAAXPEAVADAPTER_RENDER@@@Z @ 0x1C00DC09C
 * Callers:
 *     ?DestroyHandle@DXGADAPTER@@SAJPEAVDXGPROCESS@@I@Z @ 0x1C00DAB60 (-DestroyHandle@DXGADAPTER@@SAJPEAVDXGPROCESS@@I@Z.c)
 *     ?DestroyDevice@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C00DBE6C (-DestroyDevice@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?DxgkOpenAdapter@@YAJPEAU_D3DKMT_OPENADAPTER@@@Z @ 0x1C010F760 (-DxgkOpenAdapter@@YAJPEAU_D3DKMT_OPENADAPTER@@@Z.c)
 *     ?OpenAdapter@DXGPROCESS@@QEAAJPEAVADAPTER_RENDER@@_N@Z @ 0x1C01252F4 (-OpenAdapter@DXGPROCESS@@QEAAJPEAVADAPTER_RENDER@@_N@Z.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000A6B4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXPEAD@Z @ 0x1C000AA48 (-AcquireShared@COREACCESS@@QEAAXPEAD@Z.c)
 *     ??0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z @ 0x1C000EE64 (--0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C000EE8C (--1COREACCESS@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0024300 (__security_check_cookie.c)
 *     ?DestroyAdapterInfo@DXGPROCESS@@QEAAXPEAUDXGPROCESS_ADAPTER_INFO@@@Z @ 0x1C011684C (-DestroyAdapterInfo@DXGPROCESS@@QEAAXPEAUDXGPROCESS_ADAPTER_INFO@@@Z.c)
 */

void __fastcall DXGPROCESS::CloseAdapter(DXGPROCESS *this, struct DXGADAPTER *const *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rbx
  int v7; // eax
  int v8; // eax
  __int64 v9; // rax
  __int64 v10; // rax
  _BYTE v11[64]; // [rsp+20h] [rbp-68h] BYREF

  COREACCESS::COREACCESS((COREACCESS *)v11, a2[2]);
  while ( 1 )
  {
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(a2 + 9, 0LL);
    *((_QWORD *)a2 + 10) = KeGetCurrentThread();
    v5 = *(unsigned int *)(*((_QWORD *)a2 + 2) + 232LL);
    v6 = *(_QWORD *)(*((_QWORD *)this + 6) + 8 * v5);
    if ( !v6 )
      break;
    v7 = *(_DWORD *)(v6 + 24);
    if ( !v7 )
    {
      v9 = WdLogNewEntry5_WdAssertion(v5, v4);
      *(_QWORD *)(v9 + 24) = 2553LL;
      WdLogEvent5_WdAssertion(v9);
      v7 = *(_DWORD *)(v6 + 24);
    }
    v8 = v7 - 1;
    *(_DWORD *)(v6 + 24) = v8;
    if ( v8 )
      break;
    if ( a2 != *(struct DXGADAPTER *const **)(v6 + 48) )
    {
      v10 = WdLogNewEntry5_WdAssertion(v5, v4);
      *(_QWORD *)(v10 + 24) = 2556LL;
      WdLogEvent5_WdAssertion(v10);
    }
    if ( !*(_BYTE *)(v6 + 77) || DXGADAPTER::IsCoreResourceSharedOwner(a2[2]) )
    {
      DXGPROCESS::DestroyAdapterInfo(this, (struct DXGPROCESS_ADAPTER_INFO *)v6);
      break;
    }
    ++*(_DWORD *)(v6 + 24);
    *((_QWORD *)a2 + 10) = 0LL;
    ExReleasePushLockExclusiveEx(a2 + 9, 0LL);
    KeLeaveCriticalRegion();
    COREACCESS::AcquireShared((COREACCESS *)v11, 0LL);
  }
  *((_QWORD *)a2 + 10) = 0LL;
  ExReleasePushLockExclusiveEx(a2 + 9, 0LL);
  KeLeaveCriticalRegion();
  COREACCESS::~COREACCESS((COREACCESS *)v11);
}
