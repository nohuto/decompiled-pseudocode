/*
 * XREFs of DxgkGetPresentStats @ 0x1C015D6E0
 * Callers:
 *     ?CompleteIndendentFlipToken@CTokenManager@@IEAAJ_KAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@I@Z @ 0x1C001BA00 (-CompleteIndendentFlipToken@CTokenManager@@IEAAJ_KAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@I@Z.c)
 * Callees:
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0009B60 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000CF20 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000D070 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000DBC4 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C000E1E8 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C000E2A4 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C000E2C8 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z @ 0x1C000ECD8 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z.c)
 *     __security_check_cookie @ 0x1C0024300 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026570 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0119460 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkGetPresentStats(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  __int64 v5; // rsi
  unsigned int v7; // r14d
  struct DXGPROCESS *Current; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rdx
  __int64 v16; // rcx
  struct DXGADAPTER *v17; // rdi
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rdx
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  struct DXGADAPTER *v29; // [rsp+30h] [rbp-A9h] BYREF
  _BYTE v30[16]; // [rsp+38h] [rbp-A1h] BYREF
  DXGADAPTER *v31; // [rsp+48h] [rbp-91h] BYREF
  _BYTE v32[144]; // [rsp+60h] [rbp-79h] BYREF

  v5 = (unsigned int)a1;
  v7 = a2;
  Current = DXGPROCESS::GetCurrent(a1, a2);
  v11 = (__int64)Current;
  if ( !Current )
  {
    v25 = WdLogNewEntry5_WdError(v10, v9);
    LODWORD(v11) = -1073741811;
    *(_QWORD *)(v25 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v25);
    return (unsigned int)v11;
  }
  if ( !(*(unsigned int (**)(void))(*((_QWORD *)Current + 11) + 216LL))() )
  {
    v26 = WdLogNewEntry5_WdWarning(v13, v12, v14);
    *(_QWORD *)(v26 + 24) = v11;
    LODWORD(v11) = -1073741790;
    *(_QWORD *)(v26 + 32) = -1073741790LL;
    WdLogEvent5_WdWarning(v26);
    return (unsigned int)v11;
  }
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v30, *(struct DXGFASTMUTEX *const *)(v11 + 104), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v30);
  v29 = 0LL;
  DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)&v31, (unsigned int)v5, (struct _KTHREAD **)v11, &v29, 1);
  v17 = v29;
  if ( !v29 )
  {
    v27 = WdLogNewEntry5_WdError(v16, v15);
    LODWORD(v11) = -1073741811;
    *(_QWORD *)(v27 + 24) = v5;
    *(_QWORD *)(v27 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v27);
    goto LABEL_9;
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v32, v29, 0LL);
  v18 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v32, 0LL);
  v11 = v18;
  if ( v18 < 0 )
  {
    v28 = WdLogNewEntry5_WdError(v20, v19);
LABEL_19:
    *(_QWORD *)(v28 + 24) = v17;
    *(_QWORD *)(v28 + 32) = v11;
    WdLogEvent5_WdError(v28);
    goto LABEL_8;
  }
  if ( *((_BYTE *)v17 + 2585) || (v21 = *((_QWORD *)v17 + 335)) == 0 )
  {
    v28 = WdLogNewEntry5_WdError(v20, v19);
    v11 = -1073741811LL;
    goto LABEL_19;
  }
  LODWORD(v11) = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64))(*(_QWORD *)(*(_QWORD *)(v21 + 616) + 8LL)
                                                                            + 496LL))(
                   *(_QWORD *)(v21 + 624),
                   v7,
                   a3,
                   a4);
LABEL_8:
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v32, v22);
LABEL_9:
  if ( v31 )
    DXGADAPTER::ReleaseReferenceNoTracking(v31);
  if ( v30[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v30, v23);
  return (unsigned int)v11;
}
