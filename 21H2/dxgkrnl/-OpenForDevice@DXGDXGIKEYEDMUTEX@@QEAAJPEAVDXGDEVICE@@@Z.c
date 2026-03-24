/*
 * XREFs of ?OpenForDevice@DXGDXGIKEYEDMUTEX@@QEAAJPEAVDXGDEVICE@@@Z @ 0x1C029AFA8
 * Callers:
 *     ?ProcessPresent@OUTPUTDUPL_CONTEXT@@QEAAJPEAVDXGCONTEXT@@U_D3DKMT_OUTPUTDUPLPRESENTFLAGS@@IKPEAU_D3DKMT_PRESENT_RGNS@@PEBUDXGK_PRESENT_PARAMS@@PEAVAUTOEXPANDALLOCATION@@PEAPEAV2@@Z @ 0x1C02A1E3C (-ProcessPresent@OUTPUTDUPL_CONTEXT@@QEAAJPEAVDXGCONTEXT@@U_D3DKMT_OUTPUTDUPLPRESENTFLAGS@@IKPEAU.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0002B1C (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00041C0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0004370 (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0004448 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C00070D0 (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z @ 0x1C0007124 (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z.c)
 *     ?Open@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEAPEAXPEA_KIPEAPEAVDXGADAPTERSYNCOBJECT@@_NU_D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS@@@Z @ 0x1C010F530 (-Open@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEA.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0115560 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?ConfigureSharedResourceHelper@DXGDEVICE@@QEAAJEPEAXPEAVDXGSHAREDRESOURCE@@EH@Z @ 0x1C011E2EC (-ConfigureSharedResourceHelper@DXGDEVICE@@QEAAJEPEAXPEAVDXGSHAREDRESOURCE@@EH@Z.c)
 *     ?CloseFromDevice@DXGDXGIKEYEDMUTEX@@QEAAXXZ @ 0x1C0298B7C (-CloseFromDevice@DXGDXGIKEYEDMUTEX@@QEAAXXZ.c)
 *     ?OpenLocalMutex@DXGDXGIKEYEDMUTEX@@QEAAJW4_OUTPUTDUPL_MUTEX_TYPE@@@Z @ 0x1C029B2A4 (-OpenLocalMutex@DXGDXGIKEYEDMUTEX@@QEAAJW4_OUTPUTDUPL_MUTEX_TYPE@@@Z.c)
 *     ?OpenSharedSurfForDevice@DXGDXGIKEYEDMUTEX@@AEAAJPEAVDXGDEVICE@@@Z @ 0x1C029B390 (-OpenSharedSurfForDevice@DXGDXGIKEYEDMUTEX@@AEAAJPEAVDXGDEVICE@@@Z.c)
 */

__int64 __fastcall DXGDXGIKEYEDMUTEX::OpenForDevice(DXGDXGIKEYEDMUTEX *this, struct DXGDEVICE *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  int v11; // esi
  __int64 v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rcx
  PERESOURCE *Global; // rax
  __int64 v18; // rdx
  __int64 v19; // rdx
  __int64 v20; // rcx
  _QWORD *v21; // rax
  __int64 v22; // rcx
  _QWORD *v23; // rbx
  __int64 v24; // rdx
  __int64 v25; // rbx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // r8
  __int64 v30; // r9
  unsigned __int64 v31; // rbx
  struct DXGPROCESS *Current; // rsi
  unsigned int v33; // ecx
  __int64 v34; // rdx
  __int64 v35; // rax
  __int64 v36; // rcx
  __int64 v37; // rbx
  __int64 v38; // rax
  bool v39; // zf
  _BYTE v40[8]; // [rsp+60h] [rbp-18h] BYREF
  char v41; // [rsp+68h] [rbp-10h]

  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*((_QWORD *)a2 + 2) + 16LL)) )
  {
    v6 = WdLogNewEntry5_WdAssertion(v5, v4);
    *(_QWORD *)(v6 + 24) = 477LL;
    WdLogEvent5_WdAssertion(v6);
  }
  if ( *((_QWORD *)this + 1) )
  {
    v7 = WdLogNewEntry5_WdError(v5, v4);
    *(_QWORD *)(v7 + 24) = this;
    *(_QWORD *)(v7 + 32) = *((_QWORD *)this + 1);
    WdLogEvent5_WdError(v7);
    return 3221227288LL;
  }
  *((_QWORD *)this + 1) = a2;
  v11 = DXGDXGIKEYEDMUTEX::OpenLocalMutex(this, 0LL);
  if ( v11 < 0
    || (v11 = DXGDEVICE::ConfigureSharedResourceHelper(
                (PERESOURCE *)a2,
                0LL,
                (void *)0xFFFFFFFFFFFFFFFFLL,
                *(struct DXGSHAREDRESOURCE **)(*(_QWORD *)this + 16LL),
                1u,
                0),
        v11 < 0)
    || (v11 = DXGDXGIKEYEDMUTEX::OpenSharedSurfForDevice(this, a2), v11 < 0) )
  {
    v12 = WdLogNewEntry5_WdError(v10, v9);
    *(_QWORD *)(v12 + 24) = this;
    *(_QWORD *)(v12 + 32) = PsGetCurrentProcess(v14, v13);
    WdLogEvent5_WdError(v12);
LABEL_12:
    v25 = WdLogNewEntry5_WdError(v16, v15);
    *(_QWORD *)(v25 + 24) = a2;
    *(_QWORD *)(v25 + 32) = PsGetCurrentProcess(v27, v26);
    WdLogEvent5_WdError(v25);
    DXGDXGIKEYEDMUTEX::CloseFromDevice(this, v28, v29, v30);
    return (unsigned int)v11;
  }
  Global = (PERESOURCE *)DXGGLOBAL::GetGlobal(v10, v9);
  DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v40, Global, 0);
  DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)v40, v18);
  v11 = DXGSYNCOBJECT::Open(
          *(DXGSYNCOBJECT **)(*(_QWORD *)this + 32LL),
          0LL,
          0LL,
          0LL,
          (unsigned int *)this + 24,
          0LL,
          0LL,
          0,
          0LL,
          0,
          DXGSYNCOBJECT::FlagsDefault);
  if ( v11 < 0 )
  {
    v21 = (_QWORD *)WdLogNewEntry5_WdError(v20, v19);
    v22 = *(_QWORD *)this;
    v23 = v21;
    v24 = *(_QWORD *)(*(_QWORD *)this + 32LL);
    v21[3] = v24;
    v21[4] = a2;
    v21[5] = PsGetCurrentProcess(v22, v24);
    WdLogEvent5_WdError(v23);
    if ( v41 )
      DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v40);
    goto LABEL_12;
  }
  v31 = *((unsigned int *)this + 24);
  Current = DXGPROCESS::GetCurrent(v20, v19);
  DXGPUSHLOCK::AcquireExclusive((struct DXGPROCESS *)((char *)Current + 208));
  v33 = ((unsigned int)v31 >> 6) & 0xFFFFFF;
  if ( v33 < *((_DWORD *)Current + 64) )
  {
    v34 = *((_QWORD *)Current + 30);
    v35 = v33;
    v36 = ((unsigned int)v31 >> 25) & 0x60;
    if ( (((unsigned int)v31 >> 25) & 0x60) == (*(_BYTE *)(v34 + 16 * v35 + 8) & 0x60)
      && (*(_DWORD *)(v34 + 16 * v35 + 8) & 0x1F) != 0 )
    {
      v37 = 2 * ((v31 >> 6) & 0xFFFFFF);
      if ( (*(_DWORD *)(v34 + 8 * v37 + 8) & 0x2000) == 0 )
      {
        v38 = WdLogNewEntry5_WdAssertion(v36, v34);
        *(_QWORD *)(v38 + 24) = 222LL;
        WdLogEvent5_WdAssertion(v38);
        v34 = *((_QWORD *)Current + 30);
      }
      *(_DWORD *)(v34 + 8 * v37 + 8) &= ~0x2000u;
    }
  }
  *((_QWORD *)Current + 27) = 0LL;
  ExReleasePushLockExclusiveEx((char *)Current + 208, 0LL);
  KeLeaveCriticalRegion();
  v39 = v41 == 0;
  *((_QWORD *)this + 13) = *(_QWORD *)(*(_QWORD *)this + 32LL);
  if ( !v39 )
    DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v40);
  return 0LL;
}
