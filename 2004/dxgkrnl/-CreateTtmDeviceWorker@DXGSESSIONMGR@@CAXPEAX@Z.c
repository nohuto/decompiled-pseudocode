/*
 * XREFs of ?CreateTtmDeviceWorker@DXGSESSIONMGR@@CAXPEAX@Z @ 0x1C01981F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002808 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002BB0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0006598 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C000CF90 (-Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     __security_check_cookie @ 0x1C0024350 (__security_check_cookie.c)
 *     ?RegisterTtmDevice@CTTMDEVICE@@AEAAJPEAVDXGSESSIONDATA@@@Z @ 0x1C029EAF4 (-RegisterTtmDevice@CTTMDEVICE@@AEAAJPEAVDXGSESSIONDATA@@@Z.c)
 */

void __fastcall DXGSESSIONMGR::CreateTtmDeviceWorker(CTTMDEVICE *this, __int64 a2)
{
  __int64 v3; // rdi
  __int64 v4; // rdx
  __int64 v5; // rcx
  _QWORD *v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // rax
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rbp
  _QWORD *v14; // rax
  _BYTE v15[16]; // [rsp+20h] [rbp-58h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+30h] [rbp-48h] BYREF
  char v17; // [rsp+60h] [rbp-18h]

  v3 = *((_QWORD *)DXGGLOBAL::GetGlobal((__int64)this, a2) + 102);
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v15, (struct DXGFASTMUTEX *const)v3, 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v15);
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v3 + 336, 0LL);
  *(_QWORD *)(v3 + 344) = KeGetCurrentThread();
  if ( *((_BYTE *)this + 913) )
  {
    v9 = WdLogNewEntry5_WdError(v5, v4);
    *(_QWORD *)(v9 + 24) = this;
    WdLogEvent5_WdError(v9);
  }
  else
  {
    v6 = *(_QWORD **)(v3 + 368);
    if ( *v6 != v3 + 360 )
      __fastfail(3u);
    *(_QWORD *)this = v3 + 360;
    *((_QWORD *)this + 1) = v6;
    *v6 = this;
    *(_QWORD *)(v3 + 368) = this;
    v7 = *(_QWORD *)(v3 + 120);
    if ( v7 && *(_BYTE *)(v7 + 18489) )
    {
      v17 = 0;
      CPROCESSATTACHHELPER::Attach(&ApcState, *(PRKPROCESS *)(v7 + 18632));
      v10 = CTTMDEVICE::RegisterTtmDevice(this, *(struct DXGSESSIONDATA **)(v3 + 120));
      v13 = v10;
      if ( v10 < 0 )
      {
        v14 = (_QWORD *)WdLogNewEntry5_WdError(v12, v11);
        v14[3] = *((unsigned int *)this + 20);
        v14[4] = *((_QWORD *)this + 8);
        v14[5] = **(unsigned int **)(v3 + 120);
        v14[6] = v13;
        WdLogEvent5_WdError(v14);
      }
      if ( v17 )
        KeUnstackDetachProcess(&ApcState);
    }
  }
  *(_QWORD *)(v3 + 344) = 0LL;
  ExReleasePushLockExclusiveEx(v3 + 336, 0LL);
  KeLeaveCriticalRegion();
  if ( v15[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v15, v8);
}
