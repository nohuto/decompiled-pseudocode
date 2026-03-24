/*
 * XREFs of ?DxgkCddIssueSyncObjectOpForDevice@@YAJII_KH@Z @ 0x1C022C470
 * Callers:
 *     <none>
 * Callees:
 *     ?TryAcquire@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAHXZ @ 0x1C0001F1C (-TryAcquire@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAHXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00022BC (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C00040C0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0004300 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z @ 0x1C0006CE0 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0006DE4 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     __security_check_cookie @ 0x1C0024910 (__security_check_cookie.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00E49F4 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0115560 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?IssueSyncObjectOpForAllContexts@DXGDEVICE@@QEAAJPEAVDXGPROCESS@@I_KH@Z @ 0x1C0255330 (-IssueSyncObjectOpForAllContexts@DXGDEVICE@@QEAAJPEAVDXGPROCESS@@I_KH@Z.c)
 */

__int64 __fastcall DxgkCddIssueSyncObjectOpForDevice(__int64 a1, __int64 a2, unsigned __int64 a3, int a4)
{
  __int64 v5; // r14
  unsigned int v7; // r12d
  struct _KTHREAD **Current; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  struct DXGPROCESS *v11; // rsi
  __int64 v12; // rdi
  __int64 v13; // rbx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  DXGDEVICE *v18; // rbx
  _QWORD *v19; // rbx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 CurrentProcess; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r9
  __int64 v26; // rax
  int v27; // eax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rax
  struct DXGDEVICE *v32; // [rsp+30h] [rbp-A9h] BYREF
  struct DXGDEVICE *v33; // [rsp+38h] [rbp-A1h] BYREF
  struct DXGDEVICE *v34; // [rsp+40h] [rbp-99h] BYREF
  int v35; // [rsp+48h] [rbp-91h]
  _BYTE v36[8]; // [rsp+50h] [rbp-89h] BYREF
  _BYTE v37[64]; // [rsp+58h] [rbp-81h] BYREF
  _BYTE v38[88]; // [rsp+98h] [rbp-41h] BYREF

  v5 = (unsigned int)a1;
  v7 = a2;
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(a1, a2);
  v11 = (struct DXGPROCESS *)Current;
  if ( Current )
  {
    v32 = 0LL;
    DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v33, (unsigned int)v5, Current, &v32);
    v18 = v32;
    if ( v32 )
    {
      v34 = v32;
      v35 = 0;
      if ( (unsigned int)DXGDEVICEACCESSLOCKEXCLUSIVE::TryAcquire((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v34) )
      {
        COREDEVICEACCESS::COREDEVICEACCESS((__int64)v36, (__int64)v18, 0, v25, 0);
        v27 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v36, 0LL);
        v12 = v27;
        if ( v27 >= 0 )
        {
          LODWORD(v12) = DXGDEVICE::IssueSyncObjectOpForAllContexts(v18, v11, v7, a3, a4);
        }
        else
        {
          v30 = WdLogNewEntry5_WdEvent(v29, v28);
          *(_QWORD *)(v30 + 24) = v12;
          *(_QWORD *)(v30 + 32) = v11;
          WdLogEvent5_WdEvent(v30);
        }
        COREACCESS::~COREACCESS((COREACCESS *)v38);
        COREACCESS::~COREACCESS((COREACCESS *)v37);
      }
      else
      {
        v26 = WdLogNewEntry5_WdEvent(v24, v23);
        *(_QWORD *)(v26 + 24) = v18;
        WdLogEvent5_WdEvent(v26);
        LODWORD(v12) = -2147483631;
      }
      if ( v34 )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v34);
    }
    else
    {
      LODWORD(v12) = -1073741811;
      v19 = (_QWORD *)WdLogNewEntry5_WdError(v17, v16);
      v19[3] = -1073741811LL;
      CurrentProcess = PsGetCurrentProcess(v21, v20);
      v19[5] = v5;
      v19[4] = CurrentProcess;
      WdLogEvent5_WdError(v19);
    }
    if ( v33 && _InterlockedExchangeAdd64((volatile signed __int64 *)v33 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v33 + 2), v33);
  }
  else
  {
    LODWORD(v12) = -1073741811;
    v13 = WdLogNewEntry5_WdError(v10, v9);
    *(_QWORD *)(v13 + 24) = -1073741811LL;
    *(_QWORD *)(v13 + 32) = PsGetCurrentProcess(v15, v14);
    WdLogEvent5_WdError(v13);
  }
  return (unsigned int)v12;
}
