/*
 * XREFs of ?DestroyAllPagingQueues@DXGDEVICE@@QEAAXPEAVDXGDEVICEACCESSLOCKEXCLUSIVE@@@Z @ 0x1C00E3A30
 * Callers:
 *     ?DxgkDestroyDeviceImpl@@YAJPEBU_D3DKMT_DESTROYDEVICE@@E@Z @ 0x1C00E3CEC (-DxgkDestroyDeviceImpl@@YAJPEBU_D3DKMT_DESTROYDEVICE@@E@Z.c)
 * Callees:
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C000217C (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C00025F8 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0003F10 (--1COREACCESS@@QEAA@XZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C00041C0 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C00042F0 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEAD@Z @ 0x1C00056C8 (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEAD@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C00063E8 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0006444 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Acquire@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0006954 (-Acquire@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C00071B4 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     __security_check_cookie @ 0x1C0024350 (__security_check_cookie.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00E4064 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?DestroyPagingQueue@DXGDEVICE@@QEAAXPEAVDXGPAGINGQUEUE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00E5548 (-DestroyPagingQueue@DXGDEVICE@@QEAAXPEAVDXGPAGINGQUEUE@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0113030 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

void __fastcall DXGDEVICE::DestroyAllPagingQueues(DXGDEVICE *this, struct DXGDEVICEACCESSLOCKEXCLUSIVE *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  struct DXGPROCESS *Current; // r13
  volatile signed __int64 **v7; // r14
  __int64 v8; // rdx
  __int64 v9; // rcx
  volatile signed __int64 *i; // rbx
  __int64 *v11; // rax
  __int64 *v12; // rax
  unsigned int v13; // edi
  __int64 v14; // rax
  __int64 v15; // r9
  __int64 v16; // rdx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rdi
  __int64 v20; // rdi
  __int64 v21; // rax
  __int64 v22; // r9
  char *v23; // rdx
  struct COREDEVICEACCESS *v24; // r8
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  _BYTE v29[8]; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v30; // [rsp+38h] [rbp-C8h]
  char v31; // [rsp+40h] [rbp-C0h]
  _QWORD v32[3]; // [rsp+48h] [rbp-B8h] BYREF
  _BYTE v33[32]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v34[8]; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v35[64]; // [rsp+88h] [rbp-78h] BYREF
  _BYTE v36[88]; // [rsp+C8h] [rbp-38h] BYREF

  if ( !*((_DWORD *)this + 18) && !ExIsResourceAcquiredExclusiveLite(*((PERESOURCE *)this + 17)) )
  {
    v26 = WdLogNewEntry5_WdAssertion(v5, v4);
    *(_QWORD *)(v26 + 24) = 2419LL;
    WdLogEvent5_WdAssertion(v26);
  }
  Current = DXGPROCESS::GetCurrent();
  v7 = (volatile signed __int64 **)((char *)this + 496);
LABEL_5:
  if ( !*((_DWORD *)this + 18) && !ExIsResourceAcquiredExclusiveLite(*((PERESOURCE *)this + 17)) )
  {
    v27 = WdLogNewEntry5_WdAssertion(v9, v8);
    *(_QWORD *)(v27 + 24) = 2431LL;
    WdLogEvent5_WdAssertion(v27);
  }
  for ( i = *v7; ; i = (volatile signed __int64 *)*i )
  {
    v11 = (__int64 *)i;
    if ( i == (volatile signed __int64 *)v7 )
      v11 = 0LL;
    if ( !v11 )
      break;
    v12 = (__int64 *)i;
    if ( i == (volatile signed __int64 *)v7 )
      v12 = 0LL;
    v13 = *((_DWORD *)v12 + 6);
    DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE(
      (DXGHANDLETABLELOCKEXCLUSIVE *)v33,
      (struct _KTHREAD **)Current);
    v14 = (v13 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v14 < *((_DWORD *)Current + 64) )
    {
      v15 = *((_QWORD *)Current + 30);
      v16 = *(unsigned int *)(v15 + 16 * v14 + 8);
      if ( ((v13 >> 25) & 0x60) == (*(_BYTE *)(v15 + 16 * v14 + 8) & 0x60) && (v16 & 0x2000) == 0 && (v16 & 0x1F) != 0 )
      {
        if ( (v16 & 0x1F) == 0xA )
        {
          if ( *(_QWORD *)(v15 + 16LL * (unsigned int)v14) )
          {
            if ( i == (volatile signed __int64 *)v7 )
              i = 0LL;
            if ( ((v13 >> 25) & 0x60) == (v16 & 0x60) && (v16 & 0x2000) == 0 && (v16 & 0x1F) != 0 )
              *(_DWORD *)(v15 + 16 * (((unsigned __int64)v13 >> 6) & 0xFFFFFF) + 8) |= 0x2000u;
            DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v33);
            if ( i )
            {
              DXGDEVICEACCESSLOCKEXCLUSIVE::Release(a2);
              v19 = _InterlockedDecrement64(i + 8);
              if ( v19 < 0 )
              {
                v28 = WdLogNewEntry5_WdAssertion(v18, v17);
                *(_QWORD *)(v28 + 24) = 67LL;
                WdLogEvent5_WdAssertion(v28);
              }
              if ( !v19 )
              {
                v20 = *((_QWORD *)i + 2);
                DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
                  (DXGDEVICEACCESSLOCKEXCLUSIVE *)v32,
                  (struct DXGDEVICE *)v20);
                v21 = *(_QWORD *)(v20 + 16);
                v31 = 0;
                v30 = *(_QWORD *)(v21 + 16);
                DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v29);
                COREDEVICEACCESS::COREDEVICEACCESS((__int64)v34, v20, 2, v22, 0);
                COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v34, v23);
                if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v20 + 16) + 16LL) + 200LL) != 4 )
                  DXGDEVICE::DestroyPagingQueue((DXGDEVICE *)v20, (struct DXGPAGINGQUEUE *)i, v24);
                COREACCESS::~COREACCESS((COREACCESS *)v36);
                COREACCESS::~COREACCESS((COREACCESS *)v35);
                if ( v31 )
                  DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v29);
                if ( v32[0] )
                  DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v32);
                if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v20 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                  ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v20 + 16), (struct DXGDEVICE *)v20);
              }
              DXGDEVICEACCESSLOCKEXCLUSIVE::Acquire(a2);
              goto LABEL_5;
            }
            return;
          }
        }
        else
        {
          v25 = WdLogNewEntry5_WdError((v13 >> 25) & 0x60, v16);
          *(_QWORD *)(v25 + 24) = 267LL;
          WdLogEvent5_WdError(v25);
        }
      }
    }
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v33);
  }
}
