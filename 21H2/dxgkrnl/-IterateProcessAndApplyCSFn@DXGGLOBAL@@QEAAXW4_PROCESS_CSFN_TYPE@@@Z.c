/*
 * XREFs of ?IterateProcessAndApplyCSFn@DXGGLOBAL@@QEAAXW4_PROCESS_CSFN_TYPE@@@Z @ 0x1C02BF2EC
 * Callers:
 *     ?PDCIdleResiliencyEngagedCallBackFn@@YAJPEBU_GUID@@PEAXK1@Z @ 0x1C02BF4F0 (-PDCIdleResiliencyEngagedCallBackFn@@YAJPEBU_GUID@@PEAXK1@Z.c)
 * Callees:
 *     ??0DXGPROCESSCALLOUTMUTEX@@QEAA@XZ @ 0x1C0001FAC (--0DXGPROCESSCALLOUTMUTEX@@QEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x1C0002824 (--3@YAXPEAX@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002848 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002BF0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??2@YAPEAX_KIHW4_POOL_TYPE@@@Z @ 0x1C00046F8 (--2@YAPEAX_KIHW4_POOL_TYPE@@@Z.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0006910 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?ReleaseReference@DXGPROCESS@@QEAAXXZ @ 0x1C00069B4 (-ReleaseReference@DXGPROCESS@@QEAAXXZ.c)
 *     ?AcquireReference@DXGPROCESS@@QEAAXXZ @ 0x1C0006C64 (-AcquireReference@DXGPROCESS@@QEAAXXZ.c)
 *     ?GetCurrent@ITERATOR@?$DXGNODELIST@VDXGGLOBAL@@VDXGPROCESS@@@@QEBAPEAVDXGPROCESS@@XZ @ 0x1C0024048 (-GetCurrent@ITERATOR@-$DXGNODELIST@VDXGGLOBAL@@VDXGPROCESS@@@@QEBAPEAVDXGPROCESS@@XZ.c)
 *     ?ApplyCsFunction@DXGPROCESS@@QEAAXW4_PROCESS_CSFN_TYPE@@@Z @ 0x1C02840E8 (-ApplyCsFunction@DXGPROCESS@@QEAAXW4_PROCESS_CSFN_TYPE@@@Z.c)
 */

void __fastcall DXGGLOBAL::IterateProcessAndApplyCSFn(__int64 a1, unsigned int a2)
{
  __int64 v4; // rsi
  _QWORD *v5; // rdi
  DXGPROCESS *Current; // rax
  __int64 v7; // rdx
  DXGPROCESS *v8; // rbx
  _QWORD *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rcx
  _QWORD *v15; // rax
  __int64 v16; // rax
  __int64 v17; // rdx
  _QWORD *i; // rbx
  __int64 v19; // rdx
  __int64 v20; // rdx
  __int64 v21; // rdx
  __int64 v22; // rbx
  __int64 v23; // rax
  __int64 v24; // rdx
  _QWORD v25[2]; // [rsp+20h] [rbp-30h] BYREF
  _BYTE v26[16]; // [rsp+30h] [rbp-20h] BYREF
  __int64 v27; // [rsp+40h] [rbp-10h] BYREF
  _QWORD *v28; // [rsp+48h] [rbp-8h]

  DXGPROCESSCALLOUTMUTEX::DXGPROCESSCALLOUTMUTEX((DXGPROCESSCALLOUTMUTEX *)v26);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v26);
  v25[1] = v25;
  v25[0] = v25;
  KeEnterCriticalRegion();
  v4 = a1 + 376;
  ExAcquirePushLockSharedEx(a1 + 376, 0LL);
  v5 = *(_QWORD **)(a1 + 360);
  v27 = a1 + 360;
  while ( 1 )
  {
    v28 = v5;
    Current = (DXGPROCESS *)DXGNODELIST<DXGGLOBAL,DXGPROCESS>::ITERATOR::GetCurrent(&v27);
    v8 = Current;
    if ( !Current )
      break;
    DXGPROCESS::AcquireReference(Current, v7);
    v9 = operator new(0x18uLL, 0x4B677844u, 1, PagedPool);
    if ( !v9 )
    {
      v16 = WdLogNewEntry5_WdLowResource(v11, v10, v12, v13);
      *(_QWORD *)(v16 + 24) = 655LL;
      WdLogEvent5_WdLowResource(v16);
      break;
    }
    *v9 = v8;
    v14 = v25[0];
    v15 = v9 + 1;
    if ( *(_QWORD **)(v25[0] + 8LL) != v25 )
LABEL_17:
      __fastfail(3u);
    *v15 = v25[0];
    v15[1] = v25;
    *(_QWORD *)(v14 + 8) = v15;
    v25[0] = v15;
    v5 = (_QWORD *)*v5;
  }
  ExReleasePushLockSharedEx(v4, 0LL);
  KeLeaveCriticalRegion();
  DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v26, v17);
  for ( i = (_QWORD *)v25[0]; i != v25; i = (_QWORD *)*i )
  {
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)&v27, *(struct DXGFASTMUTEX *const *)(*(i - 1) + 104LL), 0);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v27);
    DXGPROCESS::ApplyCsFunction(*(i - 1), a2);
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&v27, v19);
    if ( (_BYTE)v28 )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&v27, v20);
  }
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v26);
  while ( 1 )
  {
    v22 = v25[0];
    if ( (_QWORD *)v25[0] == v25 )
      break;
    if ( *(_QWORD **)(v25[0] + 8LL) != v25 )
      goto LABEL_17;
    v23 = *(_QWORD *)v25[0];
    if ( *(_QWORD *)(*(_QWORD *)v25[0] + 8LL) != v25[0] )
      goto LABEL_17;
    v25[0] = *(_QWORD *)v25[0];
    *(_QWORD *)(v23 + 8) = v25;
    DXGPROCESS::ReleaseReference(*(DXGPROCESS **)(v22 - 8), v21);
    operator delete((void *)(v22 - 8));
  }
  DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v26, v21);
  if ( v26[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v26, v24);
}
