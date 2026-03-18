/*
 * XREFs of DxgkSignalSynchronizationObjectFromCpu @ 0x1C0343870
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C000955C (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1DXGDEVICEACCESSLOCKSHARED@@QEAA@XZ @ 0x1C0009824 (--1DXGDEVICEACCESSLOCKSHARED@@QEAA@XZ.c)
 *     ??0DXGDEVICEACCESSLOCKSHARED@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0009864 (--0DXGDEVICEACCESSLOCKSHARED@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0009904 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0009A8C (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0009B5C (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z @ 0x1C0009BB0 (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z.c)
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C000BC60 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z @ 0x1C000C040 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z.c)
 *     ?AllocateElements@?$NonPagedPoolZeroedArray@_K$03$0ELGHHIEE@@@QEAAPEA_KI@Z @ 0x1C0016438 (-AllocateElements@-$NonPagedPoolZeroedArray@_K$03$0ELGHHIEE@@@QEAAPEA_KI@Z.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     memmove @ 0x1C002CD00 (memmove.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C01668C0 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0186AA0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@I$03@@QEAAPEAII@Z @ 0x1C01CE214 (-AllocateElements@-$PagedPoolZeroedArray@I$03@@QEAAPEAII@Z.c)
 *     ?SignalSynchronizationObjectFromCpu@@YAJPEAU_D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMCPU@@PEAVDXGPROCESS@@PEAVDXGDEVICE@@@Z @ 0x1C034166C (-SignalSynchronizationObjectFromCpu@@YAJPEAU_D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMCPU@@PEAVDXGP.c)
 */

__int64 __fastcall DxgkSignalSynchronizationObjectFromCpu(ULONG64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  struct DXGPROCESS *Current; // rbx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 CurrentProcess; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rax
  ULONG64 v17; // rax
  UINT ObjectCount; // edi
  _BYTE *v19; // rcx
  __int64 v20; // r8
  const D3DKMT_HANDLE *ObjectHandleArray; // rdx
  __int64 v22; // r8
  __int64 v23; // r9
  PVOID v24; // rcx
  __int64 v25; // r8
  const UINT64 *FenceValueArray; // rdx
  __int64 hDevice; // rdi
  __int64 v28; // r9
  int v29; // esi
  __int64 v30; // rax
  UINT *v31; // rdx
  struct DXGGLOBAL *Global; // rax
  unsigned int v33; // ebx
  struct DXGDEVICE *v34; // [rsp+50h] [rbp-188h] BYREF
  struct DXGDEVICE *v35[2]; // [rsp+58h] [rbp-180h] BYREF
  _BYTE v36[16]; // [rsp+68h] [rbp-170h] BYREF
  struct _D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMCPU Src; // [rsp+78h] [rbp-160h] BYREF
  _BYTE v38[16]; // [rsp+98h] [rbp-140h] BYREF
  __int64 v39; // [rsp+A8h] [rbp-130h]
  PVOID v40; // [rsp+B0h] [rbp-128h]
  __int64 v41; // [rsp+B8h] [rbp-120h]
  PVOID v42; // [rsp+C0h] [rbp-118h] BYREF
  _BYTE v43[16]; // [rsp+C8h] [rbp-110h] BYREF
  unsigned int v44; // [rsp+D8h] [rbp-100h]
  PVOID P; // [rsp+E0h] [rbp-F8h] BYREF
  _BYTE v46[32]; // [rsp+E8h] [rbp-F0h] BYREF
  unsigned int v47; // [rsp+108h] [rbp-D0h]
  _BYTE v48[160]; // [rsp+110h] [rbp-C8h] BYREF

  Current = DXGPROCESS::GetCurrent(a1, a2, a3, a4);
  v35[0] = Current;
  if ( !Current )
  {
    CurrentProcess = PsGetCurrentProcess(v6, v5, v8, v9);
    WdLogSingleEntry2(2LL, CurrentProcess, -1073741811LL);
    v15 = PsGetCurrentProcess(v12, v11, v13, v14);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"unexpected process 0x%I64x returning 0x%I64x",
      v15,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
  v42 = 0LL;
  v44 = 0;
  P = 0LL;
  v47 = 0;
  *(_QWORD *)&Src.Flags.0 = 0LL;
  v17 = a1;
  if ( a1 >= MmUserProbeAddress )
    v17 = MmUserProbeAddress;
  *(_OWORD *)&Src.hDevice = *(_OWORD *)v17;
  Src.FenceValueArray = *(const UINT64 **)(v17 + 16);
  Src.Flags.Value = 0;
  if ( !Src.ObjectCount )
  {
    P = 0LL;
    v47 = 0;
    v42 = 0LL;
    v44 = 0;
    return 3221225485LL;
  }
  ObjectCount = Src.ObjectCount;
  PagedPoolZeroedArray<unsigned int,4>::AllocateElements((__int64 *)&v42, Src.ObjectCount, v8, v9);
  v19 = v42;
  if ( !v42 )
  {
    if ( P != v46 && P )
    {
      ExFreePoolWithTag(P, 0);
      v19 = v42;
    }
    P = 0LL;
    v47 = 0;
    if ( v19 != v43 )
    {
      if ( v19 )
        ExFreePoolWithTag(v19, 0);
    }
    v42 = 0LL;
    v44 = 0;
    return 3221225495LL;
  }
  v20 = v44;
  v39 = v20 * 4;
  v40 = v42;
  ObjectHandleArray = Src.ObjectHandleArray;
  if ( &Src.ObjectHandleArray[v20] < Src.ObjectHandleArray
    || &Src.ObjectHandleArray[v20] > (const D3DKMT_HANDLE *)MmUserProbeAddress )
  {
    *(_BYTE *)MmUserProbeAddress = 0;
  }
  memmove(v19, ObjectHandleArray, v20 * 4);
  Src.ObjectHandleArray = (const D3DKMT_HANDLE *)v42;
  NonPagedPoolZeroedArray<unsigned __int64,4,1265072196>::AllocateElements((__int64 *)&P, ObjectCount, v22, v23);
  v24 = P;
  if ( !P )
  {
    P = 0LL;
    v47 = 0;
    if ( v42 != v43 && v42 )
      ExFreePoolWithTag(v42, 0);
    v42 = 0LL;
    v44 = 0;
    return 3221225495LL;
  }
  v25 = v47;
  v41 = v25 * 8;
  v35[1] = (struct DXGDEVICE *)P;
  FenceValueArray = Src.FenceValueArray;
  if ( &Src.FenceValueArray[v25] < Src.FenceValueArray || &Src.FenceValueArray[v25] > (const UINT64 *)MmUserProbeAddress )
    *(_BYTE *)MmUserProbeAddress = 0;
  memmove(v24, FenceValueArray, v25 * 8);
  Src.FenceValueArray = (const UINT64 *)P;
  v35[0] = 0LL;
  hDevice = Src.hDevice;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v34, Src.hDevice, (struct _KTHREAD **)Current, v35);
  if ( !v35[0] )
  {
    WdLogSingleEntry2(2LL, (unsigned int)hDevice, -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid hDevice (0x%I64x) specified, returning 0x%I64x",
      hDevice,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_50;
  }
  DXGDEVICEACCESSLOCKSHARED::DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)v36, v35[0]);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v48, (__int64)v35[0], 0, v28, 0);
  v29 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v48, 0LL);
  if ( v29 < 0 )
  {
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v48);
    DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)v36);
    if ( v34 && _InterlockedExchangeAdd64((volatile signed __int64 *)v34 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v34 + 2), v34);
    if ( P != v46 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v47 = 0;
    if ( v42 != v43 && v42 )
      ExFreePoolWithTag(v42, 0);
    return (unsigned int)v29;
  }
  v30 = *(_QWORD *)(*((_QWORD *)v35[0] + 2) + 16LL);
  if ( !v30 )
  {
    WdLogSingleEntry2(2LL, hDevice, -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Input hDevice (0x%I64x) has no render adapter, returning 0x%I64x",
      hDevice,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
LABEL_49:
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v48);
    DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)v36);
LABEL_50:
    if ( v34 && _InterlockedExchangeAdd64((volatile signed __int64 *)v34 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v34 + 2), v34);
    if ( P != v46 && P )
      ExFreePoolWithTag(P, 0);
    v47 = 0;
    P = 0LL;
    if ( v42 != v43 && v42 )
      ExFreePoolWithTag(v42, 0);
    return 3221225485LL;
  }
  if ( *(_DWORD *)(v30 + 1968) >= 0x5020u )
  {
    v31 = (UINT *)(a1 + 24);
    if ( a1 + 24 >= MmUserProbeAddress )
      v31 = (UINT *)MmUserProbeAddress;
    Src.Flags.Value = *v31;
    if ( (Src.Flags.Value & 0x7FFFFFF8) != 0 )
    {
      WdLogSingleEntry1(3LL, (Src.Flags.Value >> 3) & 0xFFFFFFF);
      goto LABEL_49;
    }
    if ( (Src.Flags.Value & 0x80000000) != 0 )
    {
      WdLogSingleEntry1(3LL, 5530LL);
      goto LABEL_49;
    }
  }
  Global = DXGGLOBAL_GetGlobal();
  DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v38, Global, 0);
  DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)v38);
  v33 = SignalSynchronizationObjectFromCpu(&Src, Current, v35[0]);
  if ( v38[8] )
    DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v38);
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v48);
  DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)v36);
  if ( v34 && _InterlockedExchangeAdd64((volatile signed __int64 *)v34 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v34 + 2), v34);
  if ( P != v46 && P )
    ExFreePoolWithTag(P, 0);
  P = 0LL;
  v47 = 0;
  if ( v42 != v43 && v42 )
    ExFreePoolWithTag(v42, 0);
  return v33;
}
