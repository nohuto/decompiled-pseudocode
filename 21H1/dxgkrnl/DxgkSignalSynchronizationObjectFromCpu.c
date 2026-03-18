/*
 * XREFs of DxgkSignalSynchronizationObjectFromCpu @ 0x1C028F6E0
 * Callers:
 *     <none>
 * Callees:
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0008348 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000A650 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z @ 0x1C000E890 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C000E994 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C000EB44 (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C000EC34 (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z @ 0x1C000EC88 (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z.c)
 *     ??0DXGDEVICEACCESSLOCKSHARED@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C000EE14 (--0DXGDEVICEACCESSLOCKSHARED@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?AllocateElements@?$NonPagedPoolZeroedArray@_K$03$0ELGHHIEE@@@QEAAPEA_KI@Z @ 0x1C0019D04 (-AllocateElements@-$NonPagedPoolZeroedArray@_K$03$0ELGHHIEE@@@QEAAPEA_KI@Z.c)
 *     __security_check_cookie @ 0x1C0024300 (__security_check_cookie.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C0024550 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     memmove @ 0x1C0026580 (memmove.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00DB790 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0119460 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@I$03@@QEAAPEAII@Z @ 0x1C01574DC (-AllocateElements@-$PagedPoolZeroedArray@I$03@@QEAAPEAII@Z.c)
 *     ?SignalSynchronizationObjectFromCpu@@YAJPEAU_D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMCPU@@PEAVDXGPROCESS@@PEAVDXGDEVICE@@@Z @ 0x1C028D8F8 (-SignalSynchronizationObjectFromCpu@@YAJPEAU_D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMCPU@@PEAVDXGP.c)
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
  __int64 v33; // rdx
  unsigned int v34; // ebx
  struct DXGDEVICE *v35[2]; // [rsp+30h] [rbp-178h] BYREF
  struct DXGDEVICE *v36; // [rsp+40h] [rbp-168h] BYREF
  __int64 v37; // [rsp+48h] [rbp-160h] BYREF
  char v38; // [rsp+50h] [rbp-158h]
  struct _D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMCPU Src; // [rsp+58h] [rbp-150h] BYREF
  _BYTE v40[16]; // [rsp+78h] [rbp-130h] BYREF
  PVOID v41; // [rsp+88h] [rbp-120h] BYREF
  _BYTE v42[16]; // [rsp+90h] [rbp-118h] BYREF
  unsigned int v43; // [rsp+A0h] [rbp-108h]
  PVOID P; // [rsp+A8h] [rbp-100h] BYREF
  _BYTE v45[32]; // [rsp+B0h] [rbp-F8h] BYREF
  unsigned int v46; // [rsp+D0h] [rbp-D8h]
  _BYTE v47[160]; // [rsp+E0h] [rbp-C8h] BYREF

  Current = DXGPROCESS::GetCurrent(a1, a2);
  v35[1] = Current;
  if ( !Current )
  {
    v6 = WdLogNewEntry5_WdError(v4, v3);
    *(_QWORD *)(v6 + 24) = PsGetCurrentProcess(v8, v7);
    *(_QWORD *)(v6 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v6);
    return 3221225485LL;
  }
  v41 = 0LL;
  v43 = 0;
  P = 0LL;
  v46 = 0;
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
    v46 = 0;
    v41 = 0LL;
    v43 = 0;
    return 3221225485LL;
  }
  ObjectCount = Src.ObjectCount;
  PagedPoolZeroedArray<unsigned int,4>::AllocateElements(&v41, Src.ObjectCount);
  v12 = v41;
  if ( !v41 )
  {
    if ( P != v45 && P )
    {
      ExFreePoolWithTag(P, 0);
      v12 = v41;
    }
    P = 0LL;
    v46 = 0;
    if ( v12 != v42 )
    {
      if ( v12 )
        ExFreePoolWithTag(v12, 0);
    }
    v41 = 0LL;
    v43 = 0;
    return 3221225495LL;
  }
  v13 = v43;
  ObjectHandleArray = Src.ObjectHandleArray;
  if ( &Src.ObjectHandleArray[v13] < Src.ObjectHandleArray
    || &Src.ObjectHandleArray[v13] > (const D3DKMT_HANDLE *)MmUserProbeAddress )
  {
    *(_BYTE *)MmUserProbeAddress = 0;
  }
  memmove(v12, ObjectHandleArray, v13 * 4);
  Src.ObjectHandleArray = (const D3DKMT_HANDLE *)v41;
  NonPagedPoolZeroedArray<unsigned __int64,4,1265072196>::AllocateElements(&P, ObjectCount);
  v15 = P;
  if ( !P )
  {
    P = 0LL;
    v46 = 0;
    if ( v41 != v42 && v41 )
      ExFreePoolWithTag(v41, 0);
    v41 = 0LL;
    v43 = 0;
    return 3221225495LL;
  }
  v16 = v46;
  FenceValueArray = Src.FenceValueArray;
  if ( &Src.FenceValueArray[v16] < Src.FenceValueArray || &Src.FenceValueArray[v16] > (const UINT64 *)MmUserProbeAddress )
    *(_BYTE *)MmUserProbeAddress = 0;
  memmove(v15, FenceValueArray, v16 * 8);
  Src.FenceValueArray = (const UINT64 *)P;
  v36 = 0LL;
  hDevice = Src.hDevice;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)v35, Src.hDevice, (struct _KTHREAD **)Current, &v36);
  if ( !v36 )
  {
    v21 = WdLogNewEntry5_WdError(v20, v19);
    *(_QWORD *)(v21 + 24) = hDevice;
    *(_QWORD *)(v21 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v21);
LABEL_56:
    if ( v35[0] && _InterlockedExchangeAdd64((volatile signed __int64 *)v35[0] + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v35[0] + 2), v35[0]);
    if ( P != v45 && P )
      ExFreePoolWithTag(P, 0);
    v46 = 0;
    P = 0LL;
    if ( v41 != v42 && v41 )
      ExFreePoolWithTag(v41, 0);
    return 3221225485LL;
  }
  DXGDEVICEACCESSLOCKSHARED::DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)&v37, v36);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v47, (__int64)v36, 0, v22, 0);
  v24 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v47, 0LL);
  if ( v24 < 0 )
  {
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v47);
    if ( v37 && v38 )
    {
      ExReleaseResourceLite(*(PERESOURCE *)(v37 + 136));
      KeLeaveCriticalRegion();
    }
    if ( v35[0] && _InterlockedExchangeAdd64((volatile signed __int64 *)v35[0] + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v35[0] + 2), v35[0]);
    if ( P != v45 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v46 = 0;
    if ( v41 != v42 && v41 )
      ExFreePoolWithTag(v41, 0);
    return (unsigned int)v24;
  }
  v26 = *((_QWORD *)v36 + 2);
  v27 = *(_QWORD *)(v26 + 16);
  if ( !v27 )
  {
    v28 = WdLogNewEntry5_WdError(v26, v23);
    *(_QWORD *)(v28 + 24) = hDevice;
    *(_QWORD *)(v28 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v28);
LABEL_53:
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v47);
    if ( v37 && v38 )
    {
      ExReleaseResourceLite(*(PERESOURCE *)(v37 + 136));
      KeLeaveCriticalRegion();
    }
    goto LABEL_56;
  }
  if ( *(_DWORD *)(v27 + 1848) >= 0x5020u )
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
      *(_QWORD *)(v30 + 24) = 5324LL;
      goto LABEL_52;
    }
  }
  Global = (PERESOURCE *)DXGGLOBAL::GetGlobal(v26, (__int64)v23);
  DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v40, Global, 0);
  DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)v40, v32);
  v34 = SignalSynchronizationObjectFromCpu(&Src, Current, v36);
  if ( v40[8] )
    DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v40, v33);
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v47);
  if ( v37 && v38 )
  {
    ExReleaseResourceLite(*(PERESOURCE *)(v37 + 136));
    KeLeaveCriticalRegion();
  }
  if ( v35[0] && _InterlockedExchangeAdd64((volatile signed __int64 *)v35[0] + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v35[0] + 2), v35[0]);
  if ( P != v45 && P )
    ExFreePoolWithTag(P, 0);
  P = 0LL;
  v46 = 0;
  if ( v41 != v42 && v41 )
    ExFreePoolWithTag(v41, 0);
  return v34;
}
