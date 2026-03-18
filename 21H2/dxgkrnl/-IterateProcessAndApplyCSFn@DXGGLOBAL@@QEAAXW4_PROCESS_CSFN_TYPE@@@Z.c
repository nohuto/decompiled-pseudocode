/*
 * XREFs of ?IterateProcessAndApplyCSFn@DXGGLOBAL@@QEAAXW4_PROCESS_CSFN_TYPE@@@Z @ 0x1C02E3378
 * Callers:
 *     ?PDCIdleResiliencyEngagedCallBackFn@@YAJPEBU_GUID@@PEAXK1@Z @ 0x1C0222F60 (-PDCIdleResiliencyEngagedCallBackFn@@YAJPEBU_GUID@@PEAXK1@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??0DXGPROCESSCALLOUTMUTEX@@QEAA@XZ @ 0x1C0009278 (--0DXGPROCESSCALLOUTMUTEX@@QEAA@XZ.c)
 *     ?AcquireReference@DXGPROCESS@@QEAAXXZ @ 0x1C00092A8 (-AcquireReference@DXGPROCESS@@QEAAXXZ.c)
 *     ?ReleaseReference@DXGPROCESS@@QEAAXXZ @ 0x1C000C1D8 (-ReleaseReference@DXGPROCESS@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000C3F8 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C000D96C (--3@YAXPEAX@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000F574 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000F5FC (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?GetCurrent@ITERATOR@?$DXGNODELIST@VDXGGLOBAL@@VDXGPROCESS@@@@QEBAPEAVDXGPROCESS@@XZ @ 0x1C002A274 (-GetCurrent@ITERATOR@-$DXGNODELIST@VDXGGLOBAL@@VDXGPROCESS@@@@QEBAPEAVDXGPROCESS@@XZ.c)
 *     ?ApplyCsFunction@DXGPROCESS@@QEAAXW4_PROCESS_CSFN_TYPE@@@Z @ 0x1C02252BC (-ApplyCsFunction@DXGPROCESS@@QEAAXW4_PROCESS_CSFN_TYPE@@@Z.c)
 */

void __fastcall DXGGLOBAL::IterateProcessAndApplyCSFn(__int64 a1, int a2)
{
  __int64 v4; // rsi
  _QWORD *v5; // rdi
  DXGPROCESS *Current; // rax
  DXGPROCESS *v7; // rbx
  __int64 v8; // r9
  _QWORD *v9; // rax
  __int64 v10; // rcx
  _QWORD *v11; // rax
  _QWORD *i; // rbx
  __int64 v13; // rbx
  __int64 v14; // rax
  _QWORD v15[2]; // [rsp+50h] [rbp-30h] BYREF
  _BYTE v16[16]; // [rsp+60h] [rbp-20h] BYREF
  __int64 v17; // [rsp+70h] [rbp-10h] BYREF
  _QWORD *v18; // [rsp+78h] [rbp-8h]

  DXGPROCESSCALLOUTMUTEX::DXGPROCESSCALLOUTMUTEX((DXGPROCESSCALLOUTMUTEX *)v16);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v16);
  v15[1] = v15;
  v15[0] = v15;
  KeEnterCriticalRegion();
  v4 = a1 + 432;
  ExAcquirePushLockSharedEx(a1 + 432, 0LL);
  v5 = *(_QWORD **)(a1 + 416);
  v17 = a1 + 416;
  while ( 1 )
  {
    v18 = v5;
    Current = (DXGPROCESS *)DXGNODELIST<DXGGLOBAL,DXGPROCESS>::ITERATOR::GetCurrent(&v17);
    v7 = Current;
    if ( !Current )
      break;
    DXGPROCESS::AcquireReference(Current);
    v9 = (_QWORD *)operator new[](0x18uLL, 0x4B677844u, 256LL, v8);
    if ( !v9 )
    {
      WdLogSingleEntry1(6LL, 655LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262145,
        -1,
        (__int64)L"IterateProcessAndApplyCSFn: Failed to allocate ProcessListEntry",
        655LL,
        0LL,
        0LL,
        0LL,
        0LL);
      break;
    }
    *v9 = v7;
    v10 = v15[0];
    v11 = v9 + 1;
    if ( *(_QWORD **)(v15[0] + 8LL) != v15 )
LABEL_17:
      __fastfail(3u);
    *v11 = v15[0];
    v11[1] = v15;
    *(_QWORD *)(v10 + 8) = v11;
    v15[0] = v11;
    v5 = (_QWORD *)*v5;
  }
  ExReleasePushLockSharedEx(v4, 0LL);
  KeLeaveCriticalRegion();
  DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v16);
  for ( i = (_QWORD *)v15[0]; i != v15; i = (_QWORD *)*i )
  {
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)&v17, (struct DXGFASTMUTEX *const)(*(i - 1) + 104LL), 0);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v17);
    DXGPROCESS::ApplyCsFunction(*(i - 1), a2);
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&v17);
    if ( (_BYTE)v18 )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&v17);
  }
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v16);
  while ( 1 )
  {
    v13 = v15[0];
    if ( (_QWORD *)v15[0] == v15 )
      break;
    if ( *(_QWORD **)(v15[0] + 8LL) != v15 )
      goto LABEL_17;
    v14 = *(_QWORD *)v15[0];
    if ( *(_QWORD *)(*(_QWORD *)v15[0] + 8LL) != v15[0] )
      goto LABEL_17;
    v15[0] = *(_QWORD *)v15[0];
    *(_QWORD *)(v14 + 8) = v15;
    DXGPROCESS::ReleaseReference(*(DXGPROCESS **)(v13 - 8));
    operator delete((void *)(v13 - 8));
  }
  DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v16);
  if ( v16[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v16);
}
