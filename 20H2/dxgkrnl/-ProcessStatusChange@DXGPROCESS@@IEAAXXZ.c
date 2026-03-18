/*
 * XREFs of ?ProcessStatusChange@DXGPROCESS@@IEAAXXZ @ 0x1C0118B18
 * Callers:
 *     ?DxgkpProcessStatusChangeWork@@YAXPEAX@Z @ 0x1C011BC50 (-DxgkpProcessStatusChangeWork@@YAXPEAX@Z.c)
 * Callees:
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0003F10 (--1COREACCESS@@QEAA@XZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C00041C0 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z @ 0x1C0006A30 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z.c)
 *     ?GetCurrent@ITERATOR@?$DXGNODELIST@VDXGPROCESS@@VDXGDEVICE@@@@QEBAPEAVDXGDEVICE@@XZ @ 0x1C000702C (-GetCurrent@ITERATOR@-$DXGNODELIST@VDXGPROCESS@@VDXGDEVICE@@@@QEBAPEAVDXGDEVICE@@XZ.c)
 *     ??0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z @ 0x1C0007050 (--0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C00071B4 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C0007264 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     __security_check_cookie @ 0x1C00243B0 (__security_check_cookie.c)
 *     ?NotifyProcessStatusChange@DXGDEVICE@@QEAAXXZ @ 0x1C011BCB8 (-NotifyProcessStatusChange@DXGDEVICE@@QEAAXXZ.c)
 */

void __fastcall DXGPROCESS::ProcessStatusChange(DXGPROCESS *this)
{
  struct _KPROCESS *v2; // rcx
  char *v3; // rsi
  _QWORD *v4; // rdi
  __int64 Current; // rax
  struct DXGDEVICE *v6; // rbx
  struct DXGADAPTER *v7; // rdx
  __int64 v8; // rcx
  _QWORD v9[2]; // [rsp+28h] [rbp-E0h] BYREF
  _QWORD v10[2]; // [rsp+38h] [rbp-D0h] BYREF
  struct _KAPC_STATE ApcState_8; // [rsp+48h] [rbp-C0h] BYREF
  _BYTE v12[8]; // [rsp+78h] [rbp-90h] BYREF
  _BYTE v13[64]; // [rsp+80h] [rbp-88h] BYREF
  _BYTE v14[64]; // [rsp+C0h] [rbp-48h] BYREF
  struct DXGDEVICE *v15; // [rsp+100h] [rbp-8h]
  char v16; // [rsp+108h] [rbp+0h]

  v2 = (struct _KPROCESS *)*((_QWORD *)this + 7);
  memset(&ApcState_8, 0, sizeof(ApcState_8));
  KeStackAttachProcess(v2, &ApcState_8);
  v3 = (char *)this + 176;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx((char *)this + 176, 0LL);
  *((_QWORD *)this + 23) = KeGetCurrentThread();
  _InterlockedExchange((volatile __int32 *)this + 89, 0);
  v4 = (_QWORD *)*((_QWORD *)this + 35);
  v10[0] = (char *)this + 280;
  while ( 1 )
  {
    v10[1] = v4;
    Current = DXGNODELIST<DXGPROCESS,DXGDEVICE>::ITERATOR::GetCurrent(v10);
    v6 = (struct DXGDEVICE *)Current;
    if ( !Current )
      break;
    if ( DXGADAPTER::IsDxgmms2(*(DXGADAPTER **)(*(_QWORD *)(Current + 16) + 16LL)) )
    {
      DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v9, v6);
      COREACCESS::COREACCESS((COREACCESS *)v13, *(struct DXGADAPTER *const *)(*((_QWORD *)v6 + 2) + 16LL));
      v7 = (struct DXGADAPTER *)*((_QWORD *)v6 + 231);
      if ( !v7 )
        v7 = *(struct DXGADAPTER **)(*((_QWORD *)v6 + 2) + 16LL);
      COREACCESS::COREACCESS((COREACCESS *)v14, v7);
      v15 = v6;
      v8 = *((_QWORD *)v6 + 231);
      if ( v8 == *(_QWORD *)(*((_QWORD *)v6 + 2) + 16LL) || (v16 = 1, !v8) )
        v16 = 0;
      if ( (int)COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v12, 0LL) >= 0 )
        DXGDEVICE::NotifyProcessStatusChange(v6);
      COREACCESS::~COREACCESS((COREACCESS *)v14);
      COREACCESS::~COREACCESS((COREACCESS *)v13);
      if ( v9[0] )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v9);
    }
    v4 = (_QWORD *)*v4;
  }
  KeUnstackDetachProcess(&ApcState_8);
  *((_QWORD *)v3 + 1) = 0LL;
  ExReleasePushLockExclusiveEx(v3, 0LL);
  KeLeaveCriticalRegion();
}
