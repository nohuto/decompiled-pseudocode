/*
 * XREFs of DxgkSignalSynchronizationObjectFromCpu @ 0x1C02940A0
 * Callers:
 *     <none>
 * Callees:
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00022BC (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C0004090 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00041C0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0004370 (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z @ 0x1C0006CE0 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0006DE4 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C00070D0 (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z @ 0x1C0007124 (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z.c)
 *     ??0DXGDEVICEACCESSLOCKSHARED@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C00072B0 (--0DXGDEVICEACCESSLOCKSHARED@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?AllocateElements@?$NonPagedPoolZeroedArray@_K$03$0ELGHHIEE@@@QEAAPEA_KI@Z @ 0x1C001A8AC (-AllocateElements@-$NonPagedPoolZeroedArray@_K$03$0ELGHHIEE@@@QEAAPEA_KI@Z.c)
 *     __security_check_cookie @ 0x1C0024910 (__security_check_cookie.c)
 *     memmove @ 0x1C0028C40 (memmove.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00E49F4 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0115560 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@I$03@@QEAAPEAII@Z @ 0x1C016C28C (-AllocateElements@-$PagedPoolZeroedArray@I$03@@QEAAPEAII@Z.c)
 *     ?SignalSynchronizationObjectFromCpu@@YAJPEAU_D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMCPU@@PEAVDXGPROCESS@@PEAVDXGDEVICE@@@Z @ 0x1C0292300 (-SignalSynchronizationObjectFromCpu@@YAJPEAU_D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMCPU@@PEAVDXGP.c)
 */

__int64 __fastcall DxgkSignalSynchronizationObjectFromCpu(ULONG64 a1, __int64 a2)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  struct DXGPROCESS *Current; // rdi
  __int64 v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // rcx
  ULONG64 v10; // rax
  UINT ObjectCount; // ebx
  _BYTE *v12; // r9
  __int64 v13; // r8
  const D3DKMT_HANDLE *ObjectHandleArray; // rdx
  PVOID v15; // rcx
  __int64 v16; // r8
  const UINT64 *FenceValueArray; // rdx
  __int64 hDevice; // rbx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // r9
  UINT *v23; // rdx
  int v24; // esi
  __int64 v25; // r8
  ULONG64 v26; // rcx
  __int64 v27; // rax
  __int64 v28; // rax
  struct _D3DDDICB_SIGNALFLAGS::$F4BAD952F0EA0A4BEFA84782466716D0::$DE86B16C121A84B75DA0E945D4B81535 Value; // ebx
  __int64 v30; // rax
  PERESOURCE *Global; // rax
  __int64 v32; // rdx
  unsigned int v33; // ebx
  struct DXGDEVICE *v34[2]; // [rsp+30h] [rbp-178h] BYREF
  struct DXGDEVICE *v35; // [rsp+40h] [rbp-168h] BYREF
  __int64 v36; // [rsp+48h] [rbp-160h] BYREF
  char v37; // [rsp+50h] [rbp-158h]
  struct _D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMCPU Src; // [rsp+58h] [rbp-150h] BYREF
  _BYTE v39[16]; // [rsp+78h] [rbp-130h] BYREF
  PVOID v40; // [rsp+88h] [rbp-120h] BYREF
  _BYTE v41[16]; // [rsp+90h] [rbp-118h] BYREF
  unsigned int v42; // [rsp+A0h] [rbp-108h]
  PVOID P; // [rsp+A8h] [rbp-100h] BYREF
  _BYTE v44[32]; // [rsp+B0h] [rbp-F8h] BYREF
  unsigned int v45; // [rsp+D0h] [rbp-D8h]
  _BYTE v46[160]; // [rsp+E0h] [rbp-C8h] BYREF

  Current = DXGPROCESS::GetCurrent(a1, a2);
  v34[1] = Current;
  if ( !Current )
  {
    v6 = WdLogNewEntry5_WdError(v4, v3);
    *(_QWORD *)(v6 + 24) = PsGetCurrentProcess(v8, v7);
    *(_QWORD *)(v6 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v6);
    return 3221225485LL;
  }
  v40 = 0LL;
  v42 = 0;
  P = 0LL;
  v45 = 0;
  *(_QWORD *)&Src.Flags.0 = 0LL;
  v10 = a1;
  if ( a1 >= MmUserProbeAddress )
    v10 = MmUserProbeAddress;
  *(_OWORD *)&Src.hDevice = *(_OWORD *)v10;
  Src.FenceValueArray = *(const UINT64 **)(v10 + 16);
  Src.Flags.Value = 0;
  if ( !Src.ObjectCount )
  {
    P = 0LL;
    v45 = 0;
    v40 = 0LL;
    v42 = 0;
    return 3221225485LL;
  }
  ObjectCount = Src.ObjectCount;
  PagedPoolZeroedArray<unsigned int,4>::AllocateElements(&v40, Src.ObjectCount);
  v12 = v40;
  if ( !v40 )
  {
    if ( P != v44 && P )
    {
      ExFreePoolWithTag(P, 0);
      v12 = v40;
    }
    P = 0LL;
    v45 = 0;
    if ( v12 != v41 )
    {
      if ( v12 )
        ExFreePoolWithTag(v12, 0);
    }
    v40 = 0LL;
    v42 = 0;
    return 3221225495LL;
  }
  v13 = v42;
  ObjectHandleArray = Src.ObjectHandleArray;
  if ( &Src.ObjectHandleArray[v13] < Src.ObjectHandleArray
    || &Src.ObjectHandleArray[v13] > (const D3DKMT_HANDLE *)MmUserProbeAddress )
  {
    *(_BYTE *)MmUserProbeAddress = 0;
  }
  memmove(v12, ObjectHandleArray, v13 * 4);
  Src.ObjectHandleArray = (const D3DKMT_HANDLE *)v40;
  NonPagedPoolZeroedArray<unsigned __int64,4,1265072196>::AllocateElements(&P, ObjectCount);
  v15 = P;
  if ( !P )
  {
    P = 0LL;
    v45 = 0;
    if ( v40 != v41 && v40 )
      ExFreePoolWithTag(v40, 0);
    v40 = 0LL;
    v42 = 0;
    return 3221225495LL;
  }
  v16 = v45;
  FenceValueArray = Src.FenceValueArray;
  if ( &Src.FenceValueArray[v16] < Src.FenceValueArray || &Src.FenceValueArray[v16] > (const UINT64 *)MmUserProbeAddress )
    *(_BYTE *)MmUserProbeAddress = 0;
  memmove(v15, FenceValueArray, v16 * 8);
  Src.FenceValueArray = (const UINT64 *)P;
  v35 = 0LL;
  hDevice = Src.hDevice;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)v34, Src.hDevice, (struct _KTHREAD **)Current, &v35);
  if ( !v35 )
  {
    v21 = WdLogNewEntry5_WdError(v20, v19);
    *(_QWORD *)(v21 + 24) = hDevice;
    *(_QWORD *)(v21 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v21);
LABEL_56:
    if ( v34[0] && _InterlockedExchangeAdd64((volatile signed __int64 *)v34[0] + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v34[0] + 2), v34[0]);
    if ( P != v44 && P )
      ExFreePoolWithTag(P, 0);
    v45 = 0;
    P = 0LL;
    if ( v40 != v41 && v40 )
      ExFreePoolWithTag(v40, 0);
    return 3221225485LL;
  }
  DXGDEVICEACCESSLOCKSHARED::DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)&v36, v35);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v46, (__int64)v35, 0, v22, 0);
  v24 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v46, 0LL);
  if ( v24 < 0 )
  {
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v46);
    if ( v36 && v37 )
    {
      ExReleaseResourceLite(*(PERESOURCE *)(v36 + 136));
      KeLeaveCriticalRegion();
    }
    if ( v34[0] && _InterlockedExchangeAdd64((volatile signed __int64 *)v34[0] + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v34[0] + 2), v34[0]);
    if ( P != v44 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v45 = 0;
    if ( v40 != v41 && v40 )
      ExFreePoolWithTag(v40, 0);
    return (unsigned int)v24;
  }
  v26 = *((_QWORD *)v35 + 2);
  v27 = *(_QWORD *)(v26 + 16);
  if ( !v27 )
  {
    v28 = WdLogNewEntry5_WdError(v26, v23);
    *(_QWORD *)(v28 + 24) = hDevice;
    *(_QWORD *)(v28 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v28);
LABEL_53:
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v46);
    if ( v36 && v37 )
    {
      ExReleaseResourceLite(*(PERESOURCE *)(v36 + 136));
      KeLeaveCriticalRegion();
    }
    goto LABEL_56;
  }
  if ( *(_DWORD *)(v27 + 1872) >= 0x5020u )
  {
    v23 = (UINT *)(a1 + 24);
    v26 = MmUserProbeAddress;
    if ( a1 + 24 >= MmUserProbeAddress )
      v23 = (UINT *)MmUserProbeAddress;
    Src.Flags.Value = *v23;
    Value = (struct _D3DDDICB_SIGNALFLAGS::$F4BAD952F0EA0A4BEFA84782466716D0::$DE86B16C121A84B75DA0E945D4B81535)Src.Flags.Value;
    if ( (Src.Flags.Value & 0x7FFFFFF8) != 0 )
    {
      v30 = WdLogNewEntry5_WdWarning(MmUserProbeAddress, v23, v25);
      *(_QWORD *)(v30 + 24) = (*(unsigned int *)&Value >> 3) & 0xFFFFFFF;
LABEL_52:
      WdLogEvent5_WdWarning(v30);
      goto LABEL_53;
    }
    if ( (Src.Flags.Value & 0x80000000) != 0 )
    {
      v30 = WdLogNewEntry5_WdWarning(MmUserProbeAddress, v23, v25);
      *(_QWORD *)(v30 + 24) = 5510LL;
      goto LABEL_52;
    }
  }
  Global = (PERESOURCE *)DXGGLOBAL::GetGlobal(v26, (__int64)v23);
  DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v39, Global, 0);
  DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)v39, v32);
  v33 = SignalSynchronizationObjectFromCpu(&Src, Current, v35);
  if ( v39[8] )
    DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v39);
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v46);
  if ( v36 && v37 )
  {
    ExReleaseResourceLite(*(PERESOURCE *)(v36 + 136));
    KeLeaveCriticalRegion();
  }
  if ( v34[0] && _InterlockedExchangeAdd64((volatile signed __int64 *)v34[0] + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v34[0] + 2), v34[0]);
  if ( P != v44 && P )
    ExFreePoolWithTag(P, 0);
  P = 0LL;
  v45 = 0;
  if ( v40 != v41 && v40 )
    ExFreePoolWithTag(v40, 0);
  return v33;
}
