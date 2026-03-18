/*
 * XREFs of ?DestroyAllHwQueues@DXGCONTEXT@@QEAAXPEAVDXGDEVICEACCESSLOCKEXCLUSIVE@@@Z @ 0x1C026B72C
 * Callers:
 *     ?DxgkDestroyContextImpl@@YAJPEBU_D3DKMT_DESTROYCONTEXT@@E@Z @ 0x1C00E3338 (-DxgkDestroyContextImpl@@YAJPEBU_D3DKMT_DESTROYCONTEXT@@E@Z.c)
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
 *     __security_check_cookie @ 0x1C00243B0 (__security_check_cookie.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00E2FD4 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?DestroyContext@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00E4130 (-DestroyContext@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0111EB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroyHwQueue@DXGCONTEXT@@QEAAXPEAVDXGHWQUEUE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C026BCA4 (-DestroyHwQueue@DXGCONTEXT@@QEAAXPEAVDXGHWQUEUE@@PEAVCOREDEVICEACCESS@@@Z.c)
 */

void __fastcall DXGCONTEXT::DestroyAllHwQueues(DXGCONTEXT *this, struct DXGDEVICEACCESSLOCKEXCLUSIVE *a2)
{
  __int64 v3; // rcx
  __int64 v5; // rax
  struct DXGPROCESS *Current; // r13
  void **v7; // r15
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rax
  volatile signed __int64 *i; // rdi
  volatile signed __int64 *v13; // rax
  volatile signed __int64 *v14; // rax
  unsigned int v15; // ebx
  __int64 v16; // rax
  __int64 v17; // r9
  __int64 v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rbx
  __int64 v23; // rax
  __int64 v24; // rsi
  struct DXGDEVICE *v25; // rbx
  __int64 v26; // rax
  __int64 v27; // r9
  char *v28; // rdx
  __int64 v29; // rbx
  __int64 v30; // rax
  __int64 v31; // r9
  char *v32; // rdx
  _BYTE v33[8]; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v34; // [rsp+40h] [rbp-C0h]
  char v35; // [rsp+48h] [rbp-B8h]
  _BYTE v36[8]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v37; // [rsp+58h] [rbp-A8h]
  char v38; // [rsp+60h] [rbp-A0h]
  _QWORD v39[2]; // [rsp+68h] [rbp-98h] BYREF
  _QWORD v40[2]; // [rsp+78h] [rbp-88h] BYREF
  _BYTE v41[24]; // [rsp+88h] [rbp-78h] BYREF
  _BYTE v42[8]; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v43[64]; // [rsp+A8h] [rbp-58h] BYREF
  _BYTE v44[88]; // [rsp+E8h] [rbp-18h] BYREF
  _BYTE v45[8]; // [rsp+140h] [rbp+40h] BYREF
  _BYTE v46[64]; // [rsp+148h] [rbp+48h] BYREF
  _BYTE v47[88]; // [rsp+188h] [rbp+88h] BYREF

  v3 = *((_QWORD *)this + 2);
  if ( !*(_DWORD *)(v3 + 72) && !ExIsResourceAcquiredExclusiveLite(*(PERESOURCE *)(v3 + 136)) )
  {
    v5 = WdLogNewEntry5_WdAssertion(v3, a2);
    *(_QWORD *)(v5 + 24) = 550LL;
    WdLogEvent5_WdAssertion(v5);
  }
  Current = DXGPROCESS::GetCurrent(v3, (__int64)a2);
  v7 = (void **)((char *)this + 424);
LABEL_5:
  v8 = *((_QWORD *)this + 2);
  if ( !*(_DWORD *)(v8 + 72) && !ExIsResourceAcquiredExclusiveLite(*(PERESOURCE *)(v8 + 136)) )
  {
    v11 = WdLogNewEntry5_WdAssertion(v10, v9);
    *(_QWORD *)(v11 + 24) = 562LL;
    WdLogEvent5_WdAssertion(v11);
  }
  for ( i = (volatile signed __int64 *)*v7; ; i = (volatile signed __int64 *)*i )
  {
    v13 = i;
    if ( i == (volatile signed __int64 *)v7 )
      v13 = 0LL;
    if ( !v13 )
      break;
    v14 = i;
    if ( i == (volatile signed __int64 *)v7 )
      v14 = 0LL;
    v15 = *((_DWORD *)v14 + 6);
    DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE(
      (DXGHANDLETABLELOCKEXCLUSIVE *)v41,
      (struct _KTHREAD **)Current);
    v16 = (v15 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v16 < *((_DWORD *)Current + 64) )
    {
      v17 = *((_QWORD *)Current + 30);
      v18 = *(unsigned int *)(v17 + 16 * v16 + 8);
      if ( ((v15 >> 25) & 0x60) == (*(_BYTE *)(v17 + 16 * v16 + 8) & 0x60) && (v18 & 0x2000) == 0 && (v18 & 0x1F) != 0 )
      {
        if ( (v18 & 0x1F) == 0xF )
        {
          if ( *(_QWORD *)(v17 + 16LL * (unsigned int)v16) )
          {
            if ( i == (volatile signed __int64 *)v7 )
              i = 0LL;
            if ( ((v15 >> 25) & 0x60) == (v18 & 0x60) && (v18 & 0x2000) == 0 && (v18 & 0x1F) != 0 )
              *(_DWORD *)(v17 + 16 * (((unsigned __int64)v15 >> 6) & 0xFFFFFF) + 8) |= 0x2000u;
            DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v41);
            if ( i )
            {
              DXGDEVICEACCESSLOCKEXCLUSIVE::Release(a2);
              v22 = _InterlockedDecrement64(i + 11);
              if ( v22 < 0 )
              {
                v23 = WdLogNewEntry5_WdAssertion(v21, v20);
                *(_QWORD *)(v23 + 24) = 111LL;
                WdLogEvent5_WdAssertion(v23);
              }
              if ( !v22 )
              {
                v24 = *((_QWORD *)i + 2);
                v25 = *(struct DXGDEVICE **)(v24 + 16);
                DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v39, v25);
                v26 = *((_QWORD *)v25 + 2);
                v35 = 0;
                v34 = *(_QWORD *)(v26 + 16);
                DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v33);
                COREDEVICEACCESS::COREDEVICEACCESS((__int64)v42, (__int64)v25, 2, v27, 0);
                COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v42, v28);
                if ( *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v25 + 2) + 16LL) + 200LL) != 4 )
                  DXGCONTEXT::DestroyHwQueue((DXGCONTEXT *)v24, (PVOID)i, (struct COREDEVICEACCESS *)v42);
                COREACCESS::~COREACCESS((COREACCESS *)v44);
                COREACCESS::~COREACCESS((COREACCESS *)v43);
                if ( v35 )
                  DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v33);
                if ( v39[0] )
                  DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v39);
                if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v24 + 32), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                {
                  v29 = *(_QWORD *)(v24 + 16);
                  DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
                    (DXGDEVICEACCESSLOCKEXCLUSIVE *)v40,
                    (struct DXGDEVICE *)v29);
                  v30 = *(_QWORD *)(v24 + 16);
                  v38 = 0;
                  v37 = *(_QWORD *)(*(_QWORD *)(v30 + 16) + 16LL);
                  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v36);
                  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v45, v29, 2, v31, 0);
                  COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v45, v32);
                  if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v29 + 16) + 16LL) + 200LL) != 4 )
                    DXGDEVICE::DestroyContext(
                      (DXGDEVICE *)v29,
                      (struct DXGCONTEXT *)v24,
                      (struct COREDEVICEACCESS *)v45);
                  COREACCESS::~COREACCESS((COREACCESS *)v47);
                  COREACCESS::~COREACCESS((COREACCESS *)v46);
                  if ( v38 )
                    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v36);
                  if ( v40[0] )
                    DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v40);
                  if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v29 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                    ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v29 + 16), (struct DXGDEVICE *)v29);
                }
              }
              DXGDEVICEACCESSLOCKEXCLUSIVE::Acquire(a2);
              goto LABEL_5;
            }
            return;
          }
        }
        else
        {
          v19 = WdLogNewEntry5_WdError((v15 >> 25) & 0x60, v18);
          *(_QWORD *)(v19 + 24) = 267LL;
          WdLogEvent5_WdError(v19);
        }
      }
    }
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v41);
  }
}
