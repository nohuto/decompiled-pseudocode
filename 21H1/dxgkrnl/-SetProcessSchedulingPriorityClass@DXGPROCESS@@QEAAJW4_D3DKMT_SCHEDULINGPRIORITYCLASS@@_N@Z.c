/*
 * XREFs of ?SetProcessSchedulingPriorityClass@DXGPROCESS@@QEAAJW4_D3DKMT_SCHEDULINGPRIORITYCLASS@@_N@Z @ 0x1C00D91F4
 * Callers:
 *     DxgkSetProcessSchedulingPriorityClass @ 0x1C00D93F0 (DxgkSetProcessSchedulingPriorityClass.c)
 * Callees:
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0009B60 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C000B200 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C000E1E8 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C000E2C8 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     ?GetCurrent@ITERATOR@?$DXGNODELIST@VDXGPROCESS@@VDXGDEVICE@@@@QEBAPEAVDXGDEVICE@@XZ @ 0x1C000EE40 (-GetCurrent@ITERATOR@-$DXGNODELIST@VDXGPROCESS@@VDXGDEVICE@@@@QEBAPEAVDXGDEVICE@@XZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C000F00C (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     __security_check_cookie @ 0x1C0024300 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026570 (_guard_dispatch_icall_nop.c)
 *     VidSchSetPriorityClassProcessX @ 0x1C00D9320 (VidSchSetPriorityClassProcessX.c)
 */

__int64 __fastcall DXGPROCESS::SetProcessSchedulingPriorityClass(DXGPROCESS *this, __int64 a2, unsigned __int8 a3)
{
  unsigned int v3; // ebx
  unsigned int v5; // r12d
  __int64 result; // rax
  _QWORD *v7; // rdi
  struct DXGDEVICE *Current; // rax
  struct DXGDEVICE *v9; // r14
  __int64 v10; // rax
  struct DXGADAPTER *v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // r8
  _QWORD v14[2]; // [rsp+20h] [rbp-99h] BYREF
  char *v15; // [rsp+30h] [rbp-89h] BYREF
  _QWORD *v16; // [rsp+38h] [rbp-81h]
  _BYTE v17[144]; // [rsp+40h] [rbp-79h] BYREF

  v3 = a2;
  v5 = a3;
  if ( *(struct _KTHREAD **)(*((_QWORD *)this + 13) + 16LL) != KeGetCurrentThread() )
  {
    v10 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v10 + 24) = 3375LL;
    WdLogEvent5_WdAssertion(v10);
  }
  result = VidSchSetPriorityClassProcessX(this, v3, v5);
  if ( (int)result >= 0 )
  {
    *((_DWORD *)this + 68) = v3;
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx((char *)this + 176, 0LL);
    *((_QWORD *)this + 23) = KeGetCurrentThread();
    v7 = (_QWORD *)*((_QWORD *)this + 35);
    v15 = (char *)this + 280;
    while ( 1 )
    {
      v16 = v7;
      Current = (struct DXGDEVICE *)DXGNODELIST<DXGPROCESS,DXGDEVICE>::ITERATOR::GetCurrent(&v15);
      v9 = Current;
      if ( !Current )
        break;
      v11 = *(struct DXGADAPTER **)(*((_QWORD *)Current + 2) + 16LL);
      DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v14, Current);
      COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v17, v11, 0LL);
      if ( (int)COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v17, 0LL) >= 0 && (*((_BYTE *)v9 + 1869) & 1) == 0 )
      {
        LOBYTE(v13) = v5;
        (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v9 + 2) + 616LL) + 8LL)
                                                        + 160LL))(
          *((_QWORD *)v9 + 96),
          *((unsigned int *)this + 88),
          v13);
        v7 = v16;
      }
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v17, v12);
      if ( v14[0] )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v14);
      v7 = (_QWORD *)*v7;
    }
    *((_QWORD *)this + 23) = 0LL;
    ExReleasePushLockExclusiveEx((char *)this + 176, 0LL);
    KeLeaveCriticalRegion();
    return 0LL;
  }
  return result;
}
