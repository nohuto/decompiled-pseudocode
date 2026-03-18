/*
 * XREFs of ?DxgkCddIssueSyncObjectOpForDevice@@YAJII_KH@Z @ 0x1C02DB740
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?TryAcquire@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAHXZ @ 0x1C00091E8 (-TryAcquire@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAHXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C000955C (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C00096EC (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0009904 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C000BC90 (--1COREACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z @ 0x1C000C040 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C01668C0 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0186AA0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?IssueSyncObjectOpForAllContexts@DXGDEVICE@@QEAAJPEAVDXGPROCESS@@I_KH@Z @ 0x1C02E5B80 (-IssueSyncObjectOpForAllContexts@DXGDEVICE@@QEAAJPEAVDXGPROCESS@@I_KH@Z.c)
 */

__int64 __fastcall DxgkCddIssueSyncObjectOpForDevice(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4)
{
  int v4; // r14d
  __int64 v5; // rsi
  unsigned int v7; // r15d
  struct _KTHREAD **Current; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  struct DXGPROCESS *v13; // rdi
  __int64 v14; // rax
  unsigned int v15; // edi
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  DXGDEVICE *v25; // rbx
  __int64 CurrentProcess; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rax
  __int64 v32; // r9
  int v33; // eax
  unsigned int v34; // esi
  struct DXGDEVICE *v36; // [rsp+50h] [rbp-B0h] BYREF
  struct DXGDEVICE *v37; // [rsp+58h] [rbp-A8h] BYREF
  struct DXGDEVICE *v38; // [rsp+60h] [rbp-A0h] BYREF
  int v39; // [rsp+68h] [rbp-98h]
  _BYTE v40[8]; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v41[64]; // [rsp+78h] [rbp-88h] BYREF
  _BYTE v42[88]; // [rsp+B8h] [rbp-48h] BYREF

  v4 = a4;
  v5 = (unsigned int)a1;
  v7 = a2;
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(a1, a2, a3, a4);
  v13 = (struct DXGPROCESS *)Current;
  if ( Current )
  {
    v36 = 0LL;
    DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v37, v5, Current, &v36);
    v25 = v36;
    if ( v36 )
    {
      v39 = 0;
      v38 = v36;
      if ( (unsigned int)DXGDEVICEACCESSLOCKEXCLUSIVE::TryAcquire((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v38) )
      {
        COREDEVICEACCESS::COREDEVICEACCESS((__int64)v40, (__int64)v25, 0, v32, 0);
        v33 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v40, 0LL);
        v34 = v33;
        if ( v33 >= 0 )
        {
          v15 = DXGDEVICE::IssueSyncObjectOpForAllContexts(v25, v13, v7, a3, v4);
        }
        else
        {
          WdLogSingleEntry2(4LL, v33, v13);
          v15 = v34;
        }
        COREACCESS::~COREACCESS((COREACCESS *)v42);
        COREACCESS::~COREACCESS((COREACCESS *)v41);
      }
      else
      {
        WdLogSingleEntry1(4LL, v25);
        v15 = -2147483631;
      }
      if ( v38 )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v38);
    }
    else
    {
      CurrentProcess = PsGetCurrentProcess(v22, v21, v23, v24);
      v15 = -1073741811;
      WdLogSingleEntry3(2LL, -1073741811LL, CurrentProcess, v5);
      v31 = PsGetCurrentProcess(v28, v27, v29, v30);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Invalid device handle 0x%I64x 0x%I64x 0x%I64x",
        -1073741811LL,
        v31,
        v5,
        0LL,
        0LL);
    }
    if ( v37 && _InterlockedExchangeAdd64((volatile signed __int64 *)v37 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v37 + 2), v37);
  }
  else
  {
    v14 = PsGetCurrentProcess(v10, v9, v11, v12);
    v15 = -1073741811;
    WdLogSingleEntry2(2LL, -1073741811LL, v14);
    v20 = PsGetCurrentProcess(v17, v16, v18, v19);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Unexpected process 0x%I64x 0x%I64x",
      -1073741811LL,
      v20,
      0LL,
      0LL,
      0LL);
  }
  return v15;
}
