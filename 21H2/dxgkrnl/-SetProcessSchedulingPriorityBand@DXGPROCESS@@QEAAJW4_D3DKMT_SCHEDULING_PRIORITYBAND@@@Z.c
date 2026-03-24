/*
 * XREFs of ?SetProcessSchedulingPriorityBand@DXGPROCESS@@QEAAJW4_D3DKMT_SCHEDULING_PRIORITYBAND@@@Z @ 0x1C0285F9C
 * Callers:
 *     DxgkSetProcessSchedulingPriorityBand @ 0x1C0287220 (DxgkSetProcessSchedulingPriorityBand.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00041C0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0004300 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ?GetCurrent@ITERATOR@?$DXGNODELIST@VDXGPROCESS@@VDXGDEVICE@@@@QEBAPEAVDXGDEVICE@@XZ @ 0x1C00072DC (-GetCurrent@ITERATOR@-$DXGNODELIST@VDXGPROCESS@@VDXGDEVICE@@@@QEBAPEAVDXGDEVICE@@XZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0007464 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0007578 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C0007658 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0009DE0 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     __security_check_cookie @ 0x1C0024910 (__security_check_cookie.c)
 *     ?NotifyProcessStatusChange@DXGDEVICE@@QEAAXXZ @ 0x1C011F448 (-NotifyProcessStatusChange@DXGDEVICE@@QEAAXXZ.c)
 */

__int64 __fastcall DXGPROCESS::SetProcessSchedulingPriorityBand(__int64 a1, __int64 a2)
{
  __int64 v3; // rsi
  __int64 v4; // rax
  __int64 v5; // r14
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rdx
  __int64 v10; // rcx
  _QWORD *v11; // rdi
  DXGDEVICE *Current; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  DXGDEVICE *v15; // r15
  struct DXGADAPTER *v16; // r12
  int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r13
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rdx
  __int64 v25; // rcx
  unsigned int v26; // ebx
  __int64 v27; // rax
  _QWORD v29[2]; // [rsp+28h] [rbp-89h] BYREF
  _QWORD v30[2]; // [rsp+38h] [rbp-79h] BYREF
  _BYTE v31[144]; // [rsp+48h] [rbp-69h] BYREF

  v3 = (int)a2;
  if ( *(struct _KTHREAD **)(*(_QWORD *)(a1 + 104) + 16LL) != KeGetCurrentThread() )
  {
    v4 = WdLogNewEntry5_WdAssertion(a1, a2);
    *(_QWORD *)(v4 + 24) = 4408LL;
    WdLogEvent5_WdAssertion(v4);
  }
  v5 = a1 + 176;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(a1 + 176, 0LL);
  *(_QWORD *)(a1 + 184) = KeGetCurrentThread();
  if ( (_DWORD)v3 == 1 )
  {
    *((_QWORD *)DXGGLOBAL::GetGlobal(v7, v6) + 196) = a1;
    _InterlockedCompareExchange((volatile signed __int32 *)DXGGLOBAL::GetGlobal(v10, v9) + 389, 1, 0);
    *(_DWORD *)(a1 + 352) = 1;
  }
  else
  {
    if ( (_DWORD)v3 )
    {
      v27 = WdLogNewEntry5_WdWarning(v7, v6, v8);
      v26 = -1073741811;
      *(_QWORD *)(v27 + 24) = v3;
      *(_QWORD *)(v27 + 32) = -1073741811LL;
      WdLogEvent5_WdWarning(v27);
      goto LABEL_20;
    }
    *(_DWORD *)(a1 + 352) = 2;
  }
  v11 = *(_QWORD **)(a1 + 280);
  v30[0] = a1 + 280;
  while ( 1 )
  {
    v30[1] = v11;
    Current = (DXGDEVICE *)DXGNODELIST<DXGPROCESS,DXGDEVICE>::ITERATOR::GetCurrent(v30);
    v15 = Current;
    if ( !Current )
      break;
    v16 = *(struct DXGADAPTER **)(*((_QWORD *)Current + 2) + 16LL);
    DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v29, Current);
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v31, v16, 0LL);
    v17 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v31, 0LL);
    v21 = v17;
    if ( v17 >= 0 )
    {
      DXGDEVICE::NotifyProcessStatusChange(v15);
    }
    else
    {
      v22 = WdLogNewEntry5_WdWarning(v19, v18, v20);
      *(_QWORD *)(v22 + 24) = v16;
      *(_QWORD *)(v22 + 32) = v21;
      WdLogEvent5_WdWarning(v22);
    }
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v31, v23);
    if ( v29[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v29);
    v11 = (_QWORD *)*v11;
  }
  if ( !(_DWORD)v3 && a1 == *((_QWORD *)DXGGLOBAL::GetGlobal(v14, v13) + 196) )
    _InterlockedCompareExchange((volatile signed __int32 *)DXGGLOBAL::GetGlobal(v25, v24) + 389, 0, 1);
  v26 = 0;
LABEL_20:
  *(_QWORD *)(v5 + 8) = 0LL;
  ExReleasePushLockExclusiveEx(v5, 0LL);
  KeLeaveCriticalRegion();
  return v26;
}
