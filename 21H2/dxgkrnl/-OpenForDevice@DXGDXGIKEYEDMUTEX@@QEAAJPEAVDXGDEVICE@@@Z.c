/*
 * XREFs of ?OpenForDevice@DXGDXGIKEYEDMUTEX@@QEAAJPEAVDXGDEVICE@@@Z @ 0x1C03220AC
 * Callers:
 *     ?ProcessPresent@OUTPUTDUPL_CONTEXT@@QEAAJPEAVDXGCONTEXT@@U_D3DKMT_OUTPUTDUPLPRESENTFLAGS@@IKPEAU_D3DKMT_PRESENT_RGNS@@PEBUDXGK_PRESENT_PARAMS@@PEAVAUTOEXPANDALLOCATION@@PEAPEAV2@@Z @ 0x1C0327BBC (-ProcessPresent@OUTPUTDUPL_CONTEXT@@QEAAJPEAVDXGCONTEXT@@U_D3DKMT_OUTPUTDUPLPRESENTFLAGS@@IKPEAU.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0009A8C (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0009B5C (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z @ 0x1C0009BB0 (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z.c)
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000C10C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000EE00 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?ConfigureSharedResourceHelper@DXGDEVICE@@QEAAJEPEAXPEAVDXGSHAREDRESOURCE@@EH@Z @ 0x1C016A03C (-ConfigureSharedResourceHelper@DXGDEVICE@@QEAAJEPEAXPEAVDXGSHAREDRESOURCE@@EH@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0186AA0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?Open@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEAPEAXPEA_KIPEAPEAVDXGADAPTERSYNCOBJECT@@_NU_D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS@@@Z @ 0x1C01988F8 (-Open@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEA.c)
 *     ?OpenLocalMutex@DXGDXGIKEYEDMUTEX@@QEAAJW4_OUTPUTDUPL_MUTEX_TYPE@@@Z @ 0x1C0224964 (-OpenLocalMutex@DXGDXGIKEYEDMUTEX@@QEAAJW4_OUTPUTDUPL_MUTEX_TYPE@@@Z.c)
 *     ?CloseFromDevice@DXGDXGIKEYEDMUTEX@@QEAAXXZ @ 0x1C031F890 (-CloseFromDevice@DXGDXGIKEYEDMUTEX@@QEAAXXZ.c)
 *     ?OpenSharedSurfForDevice@DXGDXGIKEYEDMUTEX@@AEAAJPEAVDXGDEVICE@@@Z @ 0x1C032252C (-OpenSharedSurfForDevice@DXGDXGIKEYEDMUTEX@@AEAAJPEAVDXGDEVICE@@@Z.c)
 */

__int64 __fastcall DXGDXGIKEYEDMUTEX::OpenForDevice(DXGDXGIKEYEDMUTEX *this, struct DXGDEVICE *a2)
{
  __int64 v4; // r8
  __int64 v6; // rdx
  __int64 v7; // rcx
  int v8; // edi
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 CurrentProcess; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rax
  const wchar_t *v17; // r9
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  struct DXGGLOBAL *Global; // rax
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // r9
  __int64 v45; // rax
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // r9
  __int64 v50; // rax
  __int64 v51; // rax
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // r8
  __int64 v55; // r9
  __int64 v56; // rax
  __int64 v57; // rdx
  struct DXGPROCESS *Current; // rax
  unsigned __int64 v59; // rdi
  struct DXGPROCESS *v60; // rbp
  char *v61; // rsi
  unsigned int v62; // ecx
  __int64 v63; // r8
  int v64; // edx
  __int64 v65; // rdi
  _BYTE v66[8]; // [rsp+60h] [rbp-28h] BYREF
  char v67; // [rsp+68h] [rbp-20h]

  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*((_QWORD *)a2 + 2) + 16LL)) )
  {
    WdLogSingleEntry1(1LL, 467LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"pDevice->GetRenderCore()->IsCoreResourceSharedOwner()",
      467LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v4 = *((_QWORD *)this + 1);
  if ( v4 )
  {
    WdLogSingleEntry2(2LL, this, v4);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"KeyedMutex 0x%I64x already opened locally by device 0x%I64x",
      (__int64)this,
      *((_QWORD *)this + 1),
      0LL,
      0LL,
      0LL);
    return 3221227288LL;
  }
  *((_QWORD *)this + 1) = a2;
  v8 = DXGDXGIKEYEDMUTEX::OpenLocalMutex((__int64)this, 0, 0LL);
  if ( v8 < 0 )
  {
    CurrentProcess = PsGetCurrentProcess(v7, v6, v9, v10);
    WdLogSingleEntry2(2LL, this, CurrentProcess);
    v16 = PsGetCurrentProcess(v13, v12, v14, v15);
    v17 = L"Failed to open local producer mutex for KeyedMutex 0x%I64x in process 0x%I64x";
LABEL_7:
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v17, (__int64)this, v16, 0LL, 0LL, 0LL);
LABEL_15:
    v51 = PsGetCurrentProcess(v19, v18, v20, v21);
    WdLogSingleEntry2(2LL, a2, v51);
    v56 = PsGetCurrentProcess(v53, v52, v54, v55);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to open DxgiKeyedMutex for device 0x%I64x in process 0x%I64x",
      (__int64)a2,
      v56,
      0LL,
      0LL,
      0LL);
    DXGDXGIKEYEDMUTEX::CloseFromDevice(this, v57);
    return (unsigned int)v8;
  }
  v8 = DXGDEVICE::ConfigureSharedResourceHelper(
         a2,
         0,
         (void *)0xFFFFFFFFFFFFFFFFLL,
         *(struct DXGSHAREDRESOURCE **)(*(_QWORD *)this + 16LL),
         1u,
         0);
  if ( v8 < 0 )
  {
    v26 = PsGetCurrentProcess(v23, v22, v24, v25);
    WdLogSingleEntry2(2LL, this, v26);
    v16 = PsGetCurrentProcess(v28, v27, v29, v30);
    v17 = L"Failed to add producer device to PAL for KeyedMutex 0x%I64x in process 0x%I64x";
    goto LABEL_7;
  }
  v8 = DXGDXGIKEYEDMUTEX::OpenSharedSurfForDevice(this, a2);
  if ( v8 < 0 )
  {
    v35 = PsGetCurrentProcess(v32, v31, v33, v34);
    WdLogSingleEntry2(2LL, this, v35);
    v16 = PsGetCurrentProcess(v37, v36, v38, v39);
    v17 = L"Failed to open shared surface for KeyedMutex 0x%I64x in process 0x%I64x, insure the DDA producer and consumer "
           "devices are on the same adapter";
    goto LABEL_7;
  }
  Global = DXGGLOBAL_GetGlobal();
  DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v66, Global, 0);
  DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)v66);
  v8 = DXGSYNCOBJECT::Open(
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
  if ( v8 < 0 )
  {
    v45 = PsGetCurrentProcess(v42, v41, v43, v44);
    WdLogSingleEntry3(2LL, *(_QWORD *)(*(_QWORD *)this + 32LL), a2, v45);
    v50 = PsGetCurrentProcess(v47, v46, v48, v49);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to open GPU fence 0x%I64x for device 0x%I64x in process 0x%I64x",
      *(_QWORD *)(*(_QWORD *)this + 32LL),
      (__int64)a2,
      v50,
      0LL,
      0LL);
    if ( v67 )
      DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v66);
    goto LABEL_15;
  }
  Current = DXGPROCESS::GetCurrent(v42, v41, v43, v44);
  v59 = *((unsigned int *)this + 24);
  v60 = Current;
  v61 = (char *)Current + 248;
  DXGPUSHLOCK::AcquireExclusive((struct DXGPROCESS *)((char *)Current + 248));
  v62 = ((unsigned int)v59 >> 6) & 0xFFFFFF;
  if ( v62 < *((_DWORD *)v60 + 74) )
  {
    v63 = *((_QWORD *)v60 + 35);
    v64 = *(_DWORD *)(v63 + 16LL * v62 + 8);
    if ( (((unsigned int)v59 >> 25) & 0x60) == (v64 & 0x60) && (v64 & 0x1F) != 0 )
    {
      v65 = 2 * ((v59 >> 6) & 0xFFFFFF);
      if ( (*(_DWORD *)(v63 + 8 * v65 + 8) & 0x2000) == 0 )
      {
        WdLogSingleEntry1(1LL, 217LL);
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"m_pEntryTable[GetIndex(hObject)].Destroyed",
          217LL,
          0LL,
          0LL,
          0LL,
          0LL);
        v63 = *((_QWORD *)v60 + 35);
      }
      *(_DWORD *)(v63 + 8 * v65 + 8) &= ~0x2000u;
    }
  }
  *((_QWORD *)v61 + 1) = 0LL;
  ExReleasePushLockExclusiveEx(v61, 0LL);
  KeLeaveCriticalRegion();
  *((_QWORD *)this + 13) = *(_QWORD *)(*(_QWORD *)this + 32LL);
  if ( v67 )
    DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v66);
  return 0LL;
}
