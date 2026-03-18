/*
 * XREFs of ?CloseAdapter@DXGPROCESS@@QEAAXPEAVADAPTER_RENDER@@@Z @ 0x1C016DA3C
 * Callers:
 *     ?OpenAdapter@DXGPROCESS@@QEAAJPEAVADAPTER_RENDER@@_N@Z @ 0x1C01688A8 (-OpenAdapter@DXGPROCESS@@QEAAJPEAVADAPTER_RENDER@@_N@Z.c)
 *     ?DestroyDevice@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C016D390 (-DestroyDevice@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?DestroyHandle@DXGADAPTER@@SAJPEAVDXGPROCESS@@I@Z @ 0x1C016D80C (-DestroyHandle@DXGADAPTER@@SAJPEAVDXGPROCESS@@I@Z.c)
 *     ?CreateHandle@DXGADAPTER@@QEAAJPEAVDXGPROCESS@@PEAI@Z @ 0x1C0183ED4 (-CreateHandle@DXGADAPTER@@QEAAJPEAVDXGPROCESS@@PEAI@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C000BB70 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000C10C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXPEAD@Z @ 0x1C000E694 (-AcquireShared@COREACCESS@@QEAAXPEAD@Z.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     ?DestroyAdapterInfo@DXGPROCESS@@QEAAXPEAUDXGPROCESS_RENDER_ADAPTER_INFO@@@Z @ 0x1C016DBD4 (-DestroyAdapterInfo@DXGPROCESS@@QEAAXPEAUDXGPROCESS_RENDER_ADAPTER_INFO@@@Z.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C03099FC (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 */

void __fastcall DXGPROCESS::CloseAdapter(DXGPROCESS *this, struct ADAPTER_RENDER *a2)
{
  volatile signed __int64 *v2; // rax
  char *v5; // rdi
  __int64 v6; // rbx
  int v7; // eax
  int v8; // eax
  struct DXGADAPTER *v9; // rcx
  _BYTE v10[8]; // [rsp+60h] [rbp-68h] BYREF
  __int64 v11; // [rsp+68h] [rbp-60h]
  struct DXGADAPTER *v12; // [rsp+70h] [rbp-58h]
  char v13; // [rsp+78h] [rbp-50h]
  __int64 v14; // [rsp+80h] [rbp-48h]

  v2 = (volatile signed __int64 *)*((_QWORD *)a2 + 2);
  v12 = (struct DXGADAPTER *)v2;
  v13 = 0;
  v14 = 0LL;
  if ( v2 )
  {
    _InterlockedIncrement64(v2 + 3);
    v11 = -1LL;
  }
  v5 = (char *)a2 + 72;
  while ( 1 )
  {
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v5, 0LL);
    *((_QWORD *)v5 + 1) = KeGetCurrentThread();
    v6 = *(_QWORD *)(*((_QWORD *)this + 6) + 8LL * *(unsigned int *)(*((_QWORD *)a2 + 2) + 240LL));
    if ( !v6 )
      break;
    v7 = *(_DWORD *)(v6 + 24);
    if ( !v7 )
    {
      WdLogSingleEntry1(1LL, 2674LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"pAdapterInfo->AdapterInfoReferenceCount > 0",
        2674LL,
        0LL,
        0LL,
        0LL,
        0LL);
      v7 = *(_DWORD *)(v6 + 24);
    }
    v8 = v7 - 1;
    *(_DWORD *)(v6 + 24) = v8;
    if ( v8 )
      break;
    if ( a2 != *(struct ADAPTER_RENDER **)(v6 + 48) )
    {
      WdLogSingleEntry1(1LL, 2677LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"pRenderCore == pAdapterInfo->pRenderCore",
        2677LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    if ( !*(_BYTE *)(v6 + 77) || DXGADAPTER::IsCoreResourceSharedOwner(*((DXGADAPTER **)a2 + 2)) )
    {
      DXGPROCESS::DestroyAdapterInfo(this, (struct DXGPROCESS_RENDER_ADAPTER_INFO *)v6);
      break;
    }
    ++*(_DWORD *)(v6 + 24);
    *((_QWORD *)v5 + 1) = 0LL;
    ExReleasePushLockExclusiveEx(v5, 0LL);
    KeLeaveCriticalRegion();
    COREACCESS::AcquireShared((COREACCESS *)v10, 0LL);
  }
  *((_QWORD *)v5 + 1) = 0LL;
  ExReleasePushLockExclusiveEx(v5, 0LL);
  KeLeaveCriticalRegion();
  v9 = v12;
  if ( v12 )
  {
    if ( v13 )
    {
      COREACCESS::Release((COREACCESS *)v10);
      v9 = v12;
    }
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v9 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v9 + 2), v9);
  }
}
