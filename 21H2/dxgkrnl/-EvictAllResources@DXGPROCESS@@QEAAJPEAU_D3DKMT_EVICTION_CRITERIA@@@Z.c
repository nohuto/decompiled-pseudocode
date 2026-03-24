/*
 * XREFs of ?EvictAllResources@DXGPROCESS@@QEAAJPEAU_D3DKMT_EVICTION_CRITERIA@@@Z @ 0x1C0284D2C
 * Callers:
 *     ?DxgEscapeEvictByCriteria@@YAJPEAU_D3DKMT_VIDMM_ESCAPE@@@Z @ 0x1C02669D8 (-DxgEscapeEvictByCriteria@@YAJPEAU_D3DKMT_VIDMM_ESCAPE@@@Z.c)
 * Callees:
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00022BC (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002848 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0002AC0 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C0002BD4 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C00040C0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0004300 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C0004488 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0006910 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z @ 0x1C0006CE0 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z.c)
 *     ?GetCurrent@ITERATOR@?$DXGNODELIST@VDXGPROCESS@@VDXGDEVICE@@@@QEBAPEAVDXGDEVICE@@XZ @ 0x1C00072DC (-GetCurrent@ITERATOR@-$DXGNODELIST@VDXGPROCESS@@VDXGDEVICE@@@@QEBAPEAVDXGDEVICE@@XZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C00073EC (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0007464 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     __security_check_cookie @ 0x1C0024910 (__security_check_cookie.c)
 *     Feature_253710648__private_IsEnabledDeviceUsage @ 0x1C00260E4 (Feature_253710648__private_IsEnabledDeviceUsage.c)
 *     ??1DXGPROCESSDEVICECREATIONLOCK@@QEAA@XZ @ 0x1C003BBF4 (--1DXGPROCESSDEVICECREATIONLOCK@@QEAA@XZ.c)
 *     ?VidMmEvictAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@PEAU_VIDMM_MULTI_GLOBAL_ALLOC@@PEAU_D3DKMT_EVICTION_CRITERIA@@@Z @ 0x1C00436E4 (-VidMmEvictAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@PEAU_VIDMM_MU.c)
 */

__int64 __fastcall DXGPROCESS::EvictAllResources(DXGPROCESS *this, struct _D3DKMT_EVICTION_CRITERIA *a2)
{
  char *v4; // rbx
  int IsEnabledDeviceUsage; // eax
  unsigned int v6; // ebx
  _QWORD *v7; // r15
  bool v8; // si
  _QWORD *Current; // rax
  __int64 v10; // r14
  __int64 v11; // r9
  __int64 i; // rsi
  struct _VIDMM_MULTI_ALLOC *v13; // r8
  _QWORD *v14; // rdi
  __int64 j; // rsi
  struct _VIDMM_MULTI_ALLOC *v16; // r8
  __int64 k; // rsi
  struct _VIDMM_MULTI_ALLOC *v18; // r8
  __int64 m; // rdi
  __int64 n; // rsi
  struct _VIDMM_MULTI_ALLOC *v21; // r8
  _QWORD *v22; // rdi
  bool v24; // [rsp+30h] [rbp-D0h]
  char *v25; // [rsp+38h] [rbp-C8h] BYREF
  _QWORD *v26; // [rsp+40h] [rbp-C0h]
  _QWORD v27[2]; // [rsp+48h] [rbp-B8h] BYREF
  DXGPROCESS *v28; // [rsp+58h] [rbp-A8h] BYREF
  _BYTE v29[16]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v30[24]; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v31[24]; // [rsp+88h] [rbp-78h] BYREF
  _BYTE v32[32]; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v33[8]; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE v34[64]; // [rsp+C8h] [rbp-38h] BYREF
  _BYTE v35[88]; // [rsp+108h] [rbp+8h] BYREF

  v28 = this;
  v4 = (char *)this + 176;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v4, 0LL);
  *((_QWORD *)v4 + 1) = KeGetCurrentThread();
  IsEnabledDeviceUsage = Feature_253710648__private_IsEnabledDeviceUsage();
  v6 = 0;
  v7 = (_QWORD *)*((_QWORD *)this + 35);
  v8 = IsEnabledDeviceUsage != 0;
  v26 = v7;
  v24 = IsEnabledDeviceUsage != 0;
  v25 = (char *)this + 280;
  Current = (_QWORD *)DXGNODELIST<DXGPROCESS,DXGDEVICE>::ITERATOR::GetCurrent(&v25);
  while ( 1 )
  {
    v22 = Current;
    if ( !Current )
      break;
    v10 = Current[2];
    DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
      (DXGDEVICEACCESSLOCKEXCLUSIVE *)v27,
      (struct DXGDEVICE *)Current);
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v33, (__int64)v22, 2, v11, 0);
    if ( (int)COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v33, 0LL) < 0 )
    {
      COREACCESS::~COREACCESS((COREACCESS *)v35);
      COREACCESS::~COREACCESS((COREACCESS *)v34);
      if ( v27[0] )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v27);
      v6 = -1073741130;
      break;
    }
    if ( v8 )
    {
      DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v30, (struct _KTHREAD **)this);
      for ( i = v22[6]; i; i = *(_QWORD *)(i + 64) )
      {
        v13 = *(struct _VIDMM_MULTI_ALLOC **)(i + 24);
        if ( v13 )
          VIDMM_EXPORT::VidMmEvictAllocation(
            *(VIDMM_EXPORT **)(v10 + 640),
            *(struct VIDMM_GLOBAL **)(v10 + 648),
            v13,
            0LL,
            a2);
      }
      DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v30);
      DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE(
        (DXGAUTOPUSHLOCKEXCLUSIVE *)v31,
        (struct DXGPUSHLOCK *const)(v22 + 30));
      v14 = (_QWORD *)v22[7];
      while ( v14 )
      {
        DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v29, (struct DXGFASTMUTEX *const)(v14 + 10), 0);
        DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v29);
        for ( j = v14[3]; j; j = *(_QWORD *)(j + 64) )
        {
          v16 = *(struct _VIDMM_MULTI_ALLOC **)(j + 24);
          if ( v16 )
            VIDMM_EXPORT::VidMmEvictAllocation(
              *(VIDMM_EXPORT **)(v10 + 640),
              *(struct VIDMM_GLOBAL **)(v10 + 648),
              v16,
              0LL,
              a2);
        }
        v14 = (_QWORD *)v14[5];
        DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v29);
      }
      DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v31);
    }
    else
    {
      DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v32, (struct _KTHREAD **)this);
      for ( k = v22[6]; k; k = *(_QWORD *)(k + 64) )
      {
        v18 = *(struct _VIDMM_MULTI_ALLOC **)(k + 24);
        if ( v18 )
          VIDMM_EXPORT::VidMmEvictAllocation(
            *(VIDMM_EXPORT **)(v10 + 640),
            *(struct VIDMM_GLOBAL **)(v10 + 648),
            v18,
            0LL,
            a2);
      }
      for ( m = v22[7]; m; m = *(_QWORD *)(m + 40) )
      {
        for ( n = *(_QWORD *)(m + 24); n; n = *(_QWORD *)(n + 64) )
        {
          v21 = *(struct _VIDMM_MULTI_ALLOC **)(n + 24);
          if ( v21 )
            VIDMM_EXPORT::VidMmEvictAllocation(
              *(VIDMM_EXPORT **)(v10 + 640),
              *(struct VIDMM_GLOBAL **)(v10 + 648),
              v21,
              0LL,
              a2);
        }
      }
      DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v32);
    }
    COREACCESS::~COREACCESS((COREACCESS *)v35);
    COREACCESS::~COREACCESS((COREACCESS *)v34);
    if ( v27[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v27);
    v7 = (_QWORD *)*v7;
    v26 = v7;
    Current = (_QWORD *)DXGNODELIST<DXGPROCESS,DXGDEVICE>::ITERATOR::GetCurrent(&v25);
    v8 = v24;
  }
  DXGPROCESSDEVICECREATIONLOCK::~DXGPROCESSDEVICECREATIONLOCK((DXGPROCESSDEVICECREATIONLOCK *)&v28);
  return v6;
}
