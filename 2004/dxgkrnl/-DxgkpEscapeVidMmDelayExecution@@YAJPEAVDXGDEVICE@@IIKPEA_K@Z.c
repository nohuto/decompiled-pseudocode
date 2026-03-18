/*
 * XREFs of ?DxgkpEscapeVidMmDelayExecution@@YAJPEAVDXGDEVICE@@IIKPEA_K@Z @ 0x1C0267990
 * Callers:
 *     DxgkEscape @ 0x1C00F8350 (DxgkEscape.c)
 * Callees:
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C000217C (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0003F10 (--1COREACCESS@@QEAA@XZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C00041C0 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEAD@Z @ 0x1C00056C8 (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEAD@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C00063E8 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0006444 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C00071B4 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?Open@DXGPAGINGQUEUEBYHANDLE@@QEAAXIPEAVDXGPROCESS@@PEAPEAVDXGPAGINGQUEUE@@_N@Z @ 0x1C001DB60 (-Open@DXGPAGINGQUEUEBYHANDLE@@QEAAXIPEAVDXGPROCESS@@PEAPEAVDXGPAGINGQUEUE@@_N@Z.c)
 *     __security_check_cookie @ 0x1C0024350 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00271E0 (_guard_dispatch_icall_nop.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00E4064 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?DestroyPagingQueue@DXGDEVICE@@QEAAXPEAVDXGPAGINGQUEUE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00E5548 (-DestroyPagingQueue@DXGDEVICE@@QEAAXPEAVDXGPAGINGQUEUE@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0113030 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkpEscapeVidMmDelayExecution(
        struct DXGDEVICE *a1,
        __int64 a2,
        __int64 a3,
        int a4,
        unsigned __int64 *a5)
{
  __int64 v6; // rsi
  unsigned int v7; // r14d
  __int64 v9; // rax
  _QWORD *v11; // rcx
  struct DXGPAGINGQUEUE *v12; // rbx
  __int64 v13; // r9
  struct _KTHREAD **Current; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  struct DXGPAGINGQUEUE *v18; // rbx
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  unsigned int v22; // edi
  __int64 v23; // rsi
  __int64 v24; // rax
  __int64 v25; // rbx
  __int64 v26; // rax
  __int64 v27; // r9
  char *v28; // rdx
  struct COREDEVICEACCESS *v29; // r8
  struct DXGPAGINGQUEUE *v30; // [rsp+40h] [rbp-C0h] BYREF
  struct DXGPAGINGQUEUE *v31; // [rsp+48h] [rbp-B8h] BYREF
  _BYTE v32[8]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v33; // [rsp+58h] [rbp-A8h]
  char v34; // [rsp+60h] [rbp-A0h]
  _QWORD v35[3]; // [rsp+68h] [rbp-98h] BYREF
  _BYTE v36[8]; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v37[64]; // [rsp+88h] [rbp-78h] BYREF
  _BYTE v38[88]; // [rsp+C8h] [rbp-38h] BYREF

  v6 = (unsigned int)a3;
  v7 = a2;
  if ( !a1 )
  {
    v9 = WdLogNewEntry5_WdWarning(0LL, a2, a3);
    *(_QWORD *)(v9 + 24) = 1152LL;
LABEL_3:
    WdLogEvent5_WdWarning(v9);
    return 3221225485LL;
  }
  v11 = (_QWORD *)*((_QWORD *)a1 + 2);
  if ( *(_DWORD *)(v11[2] + 280LL) < (unsigned int)a2 )
  {
    v9 = WdLogNewEntry5_WdWarning(v11, a2, a3);
    *(_QWORD *)(v9 + 24) = 1158LL;
    goto LABEL_3;
  }
  v12 = 0LL;
  v13 = 0LL;
  v30 = 0LL;
  if ( !(_DWORD)a3 )
    goto LABEL_13;
  v31 = 0LL;
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent((__int64)v11, a2);
  DXGPAGINGQUEUEBYHANDLE::Open((DXGPAGINGQUEUEBYHANDLE *)&v30, v6, Current, &v31, 1);
  v18 = v31;
  if ( v31 )
  {
    if ( a1 != *((struct DXGDEVICE **)v31 + 2) )
    {
      v19 = WdLogNewEntry5_WdWarning(v16, v15, v17);
      *(_QWORD *)(v19 + 24) = a1;
      *(_QWORD *)(v19 + 32) = v18;
      goto LABEL_11;
    }
    v13 = *((_QWORD *)v31 + 4);
    v12 = v30;
    v11 = (_QWORD *)*((_QWORD *)a1 + 2);
LABEL_13:
    (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64, int, unsigned __int64 *))(*(_QWORD *)(v11[80] + 8LL)
                                                                                     + 1232LL))(
      v11[81],
      *((_QWORD *)a1 + 95),
      v7,
      v13,
      a4,
      a5);
    v22 = 0;
    goto LABEL_14;
  }
  v19 = WdLogNewEntry5_WdWarning(v16, v15, v17);
  *(_QWORD *)(v19 + 24) = v6;
LABEL_11:
  WdLogEvent5_WdWarning(v19);
  v12 = v30;
  v22 = -1073741811;
LABEL_14:
  if ( v12 )
  {
    v23 = _InterlockedDecrement64((volatile signed __int64 *)v12 + 8);
    if ( v23 < 0 )
    {
      v24 = WdLogNewEntry5_WdAssertion(v21, v20);
      *(_QWORD *)(v24 + 24) = 67LL;
      WdLogEvent5_WdAssertion(v24);
    }
    if ( !v23 )
    {
      v25 = *((_QWORD *)v30 + 2);
      DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
        (DXGDEVICEACCESSLOCKEXCLUSIVE *)v35,
        (struct DXGDEVICE *)v25);
      v26 = *(_QWORD *)(v25 + 16);
      v34 = 0;
      v33 = *(_QWORD *)(v26 + 16);
      DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v32);
      COREDEVICEACCESS::COREDEVICEACCESS((__int64)v36, v25, 2, v27, 0);
      COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v36, v28);
      if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v25 + 16) + 16LL) + 200LL) != 4 )
        DXGDEVICE::DestroyPagingQueue((PERESOURCE *)v25, v30, v29);
      COREACCESS::~COREACCESS((COREACCESS *)v38);
      COREACCESS::~COREACCESS((COREACCESS *)v37);
      if ( v34 )
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v32);
      if ( v35[0] )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v35);
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v25 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v25 + 16), (struct DXGDEVICE *)v25);
    }
  }
  return v22;
}
