/*
 * XREFs of ?DestroyAllHwQueues@DXGCONTEXT@@QEAAXPEAVDXGDEVICEACCESSLOCKEXCLUSIVE@@@Z @ 0x1C030DD48
 * Callers:
 *     ?DxgkDestroyContextImpl@@YAJPEBU_D3DKMT_DESTROYCONTEXT@@E@Z @ 0x1C0166C98 (-DxgkDestroyContextImpl@@YAJPEBU_D3DKMT_DESTROYCONTEXT@@E@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?Acquire@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0009300 (-Acquire@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C000955C (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C00096EC (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0009730 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C000BC90 (--1COREACCESS@@QEAA@XZ.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000EDA8 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEAD@Z @ 0x1C000EE78 (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEAD@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000F3A0 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000F3FC (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000FABC (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C01668C0 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?DestroyContext@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C016CBAC (-DestroyContext@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0186AA0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroyHwQueue@DXGCONTEXT@@QEAAXPEAVDXGHWQUEUE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C030E37C (-DestroyHwQueue@DXGCONTEXT@@QEAAXPEAVDXGHWQUEUE@@PEAVCOREDEVICEACCESS@@@Z.c)
 */

void __fastcall DXGCONTEXT::DestroyAllHwQueues(
        DXGCONTEXT *this,
        struct DXGDEVICEACCESSLOCKEXCLUSIVE *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v5; // rcx
  struct DXGPROCESS *Current; // r13
  void **v8; // r15
  __int64 v9; // rcx
  volatile signed __int64 *i; // rdi
  volatile signed __int64 *v11; // rax
  volatile signed __int64 *v12; // rax
  unsigned int v13; // ebx
  __int64 v14; // rax
  __int64 v15; // r9
  int v16; // edx
  __int64 v17; // rax
  __int64 v18; // rsi
  struct DXGDEVICE *v19; // rbx
  __int64 v20; // rax
  __int64 v21; // r9
  char *v22; // rdx
  __int64 v23; // rbx
  __int64 v24; // rax
  __int64 v25; // r9
  char *v26; // rdx
  _BYTE v27[8]; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v28; // [rsp+60h] [rbp-A0h]
  char v29; // [rsp+68h] [rbp-98h]
  _BYTE v30[8]; // [rsp+70h] [rbp-90h] BYREF
  __int64 v31; // [rsp+78h] [rbp-88h]
  char v32; // [rsp+80h] [rbp-80h]
  _QWORD v33[2]; // [rsp+88h] [rbp-78h] BYREF
  _QWORD v34[2]; // [rsp+98h] [rbp-68h] BYREF
  _BYTE v35[24]; // [rsp+A8h] [rbp-58h] BYREF
  _BYTE v36[8]; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE v37[64]; // [rsp+C8h] [rbp-38h] BYREF
  _BYTE v38[88]; // [rsp+108h] [rbp+8h] BYREF
  _BYTE v39[8]; // [rsp+160h] [rbp+60h] BYREF
  _BYTE v40[64]; // [rsp+168h] [rbp+68h] BYREF
  _BYTE v41[88]; // [rsp+1A8h] [rbp+A8h] BYREF

  v5 = *((_QWORD *)this + 2);
  if ( !*(_BYTE *)(v5 + 72) && !ExIsResourceAcquiredExclusiveLite(*(PERESOURCE *)(v5 + 136)) )
  {
    WdLogSingleEntry1(1LL, 635LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"GetDevice()->IsDeviceLockExclusiveOwner()",
      635LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  Current = DXGPROCESS::GetCurrent(v5, (__int64)a2, a3, a4);
  v8 = (void **)((char *)this + 408);
LABEL_5:
  v9 = *((_QWORD *)this + 2);
  if ( !*(_BYTE *)(v9 + 72) && !ExIsResourceAcquiredExclusiveLite(*(PERESOURCE *)(v9 + 136)) )
  {
    WdLogSingleEntry1(1LL, 647LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"GetDevice()->IsDeviceLockExclusiveOwner()",
      647LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  for ( i = (volatile signed __int64 *)*v8; ; i = (volatile signed __int64 *)*i )
  {
    v11 = i;
    if ( i == (volatile signed __int64 *)v8 )
      v11 = 0LL;
    if ( !v11 )
      break;
    v12 = i;
    if ( i == (volatile signed __int64 *)v8 )
      v12 = 0LL;
    v13 = *((_DWORD *)v12 + 6);
    DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v35, Current);
    v14 = (v13 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v14 < *((_DWORD *)Current + 74) )
    {
      v15 = *((_QWORD *)Current + 35);
      v16 = *(_DWORD *)(v15 + 16 * v14 + 8);
      if ( ((v13 >> 25) & 0x60) == (*(_BYTE *)(v15 + 16 * v14 + 8) & 0x60) && (v16 & 0x2000) == 0 && (v16 & 0x1F) != 0 )
      {
        if ( (v16 & 0x1F) == 0xF )
        {
          if ( *(_QWORD *)(v15 + 16LL * (unsigned int)v14) )
          {
            if ( i == (volatile signed __int64 *)v8 )
              i = 0LL;
            *(_DWORD *)(v15 + 16 * (((unsigned __int64)v13 >> 6) & 0xFFFFFF) + 8) |= 0x2000u;
            DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v35);
            if ( i )
            {
              DXGDEVICEACCESSLOCKEXCLUSIVE::Release(a2);
              v17 = _InterlockedDecrement64(i + 13);
              if ( v17 >= 0 )
              {
                if ( !v17 )
                {
                  v18 = *((_QWORD *)i + 2);
                  v19 = *(struct DXGDEVICE **)(v18 + 16);
                  DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v33, v19);
                  v20 = *((_QWORD *)v19 + 2);
                  v29 = 0;
                  v28 = *(_QWORD *)(v20 + 16);
                  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v27);
                  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v36, (__int64)v19, 2, v21, 0);
                  COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v36, v22);
                  if ( *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v19 + 2) + 16LL) + 200LL) != 4 )
                    DXGCONTEXT::DestroyHwQueue((DXGCONTEXT *)v18, (PVOID)i, (struct COREDEVICEACCESS *)v36);
                  COREACCESS::~COREACCESS((COREACCESS *)v38);
                  COREACCESS::~COREACCESS((COREACCESS *)v37);
                  if ( v29 )
                    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v27);
                  if ( v33[0] )
                    DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v33);
                  if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v18 + 32), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                  {
                    v23 = *(_QWORD *)(v18 + 16);
                    DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
                      (DXGDEVICEACCESSLOCKEXCLUSIVE *)v34,
                      (struct DXGDEVICE *)v23);
                    v24 = *(_QWORD *)(v18 + 16);
                    v32 = 0;
                    v31 = *(_QWORD *)(*(_QWORD *)(v24 + 16) + 16LL);
                    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v30);
                    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v39, v23, 2, v25, 0);
                    COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v39, v26);
                    if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v23 + 16) + 16LL) + 200LL) != 4 )
                      DXGDEVICE::DestroyContext(
                        (DXGDEVICE *)v23,
                        (struct DXGCONTEXT *)v18,
                        (struct COREDEVICEACCESS *)v39);
                    COREACCESS::~COREACCESS((COREACCESS *)v41);
                    COREACCESS::~COREACCESS((COREACCESS *)v40);
                    if ( v32 )
                      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v30);
                    if ( v34[0] )
                      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v34);
                    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v23 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                      ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v23 + 16), (struct DXGDEVICE *)v23);
                  }
                }
              }
              else
              {
                WdLogSingleEntry1(1LL, 128LL);
                DxgkLogInternalTriageEvent(
                  0LL,
                  262146,
                  -1,
                  (__int64)L"NewReferenceCount >= 0",
                  128LL,
                  0LL,
                  0LL,
                  0LL,
                  0LL);
              }
              DXGDEVICEACCESSLOCKEXCLUSIVE::Acquire(a2);
              goto LABEL_5;
            }
            return;
          }
        }
        else
        {
          WdLogSingleEntry1(2LL, 267LL);
          DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
        }
      }
    }
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v35);
  }
}
