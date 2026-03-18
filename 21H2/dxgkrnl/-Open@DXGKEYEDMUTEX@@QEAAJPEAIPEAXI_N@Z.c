/*
 * XREFs of ?Open@DXGKEYEDMUTEX@@QEAAJPEAIPEAXI_N@Z @ 0x1C03402D4
 * Callers:
 *     DxgkOpenResourceFromNtHandleInternal @ 0x1C01EA090 (DxgkOpenResourceFromNtHandleInternal.c)
 *     ?OpenLocalMutex@DXGDXGIKEYEDMUTEX@@QEAAJW4_OUTPUTDUPL_MUTEX_TYPE@@@Z @ 0x1C0224964 (-OpenLocalMutex@DXGDXGIKEYEDMUTEX@@QEAAJW4_OUTPUTDUPL_MUTEX_TYPE@@@Z.c)
 *     ?CreateAndOpenKeyedMutex@DXGGLOBAL@@QEAAJ_KPEAPEAVDXGKEYEDMUTEX@@PEAIPEAXIU_D3DKMT_CREATEKEYEDMUTEX2_FLAGS@@@Z @ 0x1C033ECC4 (-CreateAndOpenKeyedMutex@DXGGLOBAL@@QEAAJ_KPEAPEAVDXGKEYEDMUTEX@@PEAIPEAXIU_D3DKMT_CREATEKEYEDMU.c)
 *     ?OpenKeyedMutex@DXGGLOBAL@@QEAAJIPEAPEAVDXGKEYEDMUTEX@@PEAIPEAXI@Z @ 0x1C03406F4 (-OpenKeyedMutex@DXGGLOBAL@@QEAAJIPEAPEAVDXGKEYEDMUTEX@@PEAIPEAXI@Z.c)
 *     ?OpenKeyedMutexFromNtHandle@DXGGLOBAL@@QEAAJPEAXPEAPEAVDXGKEYEDMUTEX@@PEAI0I@Z @ 0x1C03408B4 (-OpenKeyedMutexFromNtHandle@DXGGLOBAL@@QEAAJPEAXPEAPEAVDXGKEYEDMUTEX@@PEAI0I@Z.c)
 *     ?VmBusOpenKeyedMutex@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0370F90 (-VmBusOpenKeyedMutex@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?FreeHandleSafe@DXGPROCESS@@QEAAXI@Z @ 0x1C000ED3C (-FreeHandleSafe@DXGPROCESS@@QEAAXI@Z.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000EDA8 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000F5FC (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C002B250 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C002B26C (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGKEYEDMUTEXLOCK@@QEAA@PEAVDXGKEYEDMUTEX@@@Z @ 0x1C002C8B8 (--0DXGKEYEDMUTEXLOCK@@QEAA@PEAVDXGKEYEDMUTEX@@@Z.c)
 *     memmove @ 0x1C002CD00 (memmove.c)
 *     ?AcquireReference@DXGKEYEDMUTEX@@QEAAXXZ @ 0x1C005583C (-AcquireReference@DXGKEYEDMUTEX@@QEAAXXZ.c)
 *     ?ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ @ 0x1C005591C (-ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0186AA0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z @ 0x1C0195A00 (-AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z.c)
 *     ?VmBusSendOpenKeyedMutex@DXG_GUEST_GLOBAL_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGKEYEDMUTEX@@I@Z @ 0x1C037A664 (-VmBusSendOpenKeyedMutex@DXG_GUEST_GLOBAL_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGKEYEDMUTEX@@I@Z.c)
 */

__int64 __fastcall DXGKEYEDMUTEX::Open(DXGKEYEDMUTEX *this, unsigned int *a2, char *a3, __int64 a4, bool a5)
{
  unsigned __int64 v5; // rdi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned int *Current; // r15
  __int64 CurrentProcess; // rax
  __int64 v16; // r9
  int v17; // eax
  __int64 v18; // r14
  void *v19; // r9
  unsigned int v20; // edi
  _QWORD *v21; // rsi
  unsigned int v22; // edi
  struct DXGGLOBAL *Global; // rax
  int v24; // ebx
  __int64 v25; // rax
  int v26; // edx
  _BYTE v27[16]; // [rsp+50h] [rbp-58h] BYREF
  _BYTE v28[32]; // [rsp+60h] [rbp-48h] BYREF

  v5 = (unsigned int)a4;
  Current = (unsigned int *)DXGPROCESS::GetCurrent((__int64)this, (__int64)a2, (__int64)a3, a4);
  if ( !Current )
  {
    CurrentProcess = PsGetCurrentProcess(v10, v9, v11, v12);
    WdLogSingleEntry2(3LL, a2, CurrentProcess);
    return 3221225485LL;
  }
  if ( !a2 )
    return 3221225485LL;
  DXGKEYEDMUTEXLOCK::DXGKEYEDMUTEXLOCK((DXGKEYEDMUTEXLOCK *)v27, this);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v27);
  if ( !(_DWORD)v5 )
  {
    if ( !a3 )
      goto LABEL_22;
    goto LABEL_17;
  }
  v17 = *((_DWORD *)this + 42);
  if ( v17 )
  {
    if ( v17 == (_DWORD)v5 )
      goto LABEL_22;
    WdLogSingleEntry4(3LL, this, v5, *((unsigned int *)this + 42), -1073741811LL);
LABEL_18:
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v27);
    return 3221225485LL;
  }
  if ( !a3 )
  {
LABEL_17:
    WdLogSingleEntry2(3LL, this, -1073741811LL);
    goto LABEL_18;
  }
  if ( *((_QWORD *)this + 20) )
  {
    WdLogSingleEntry1(1LL, 3805LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_pPrivateRuntimeData == NULL", 3805LL, 0LL, 0LL, 0LL, 0LL);
  }
  v18 = v5;
  v19 = (void *)operator new[](v5, 0x4B677844u, 256LL, v16);
  *((_QWORD *)this + 20) = v19;
  if ( !v19 )
  {
    v20 = -1073741801;
    WdLogSingleEntry3(6LL, this, v18, -1073741801LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      -1,
      (__int64)L"KeyedMutex 0x%I64x: Out of memory allocating m_PrivateRuntimeData of size 0x%I64x, returning 0x%I64x",
      (__int64)this,
      v18,
      -1073741801LL,
      0LL,
      0LL);
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v27);
    return v20;
  }
  *((_DWORD *)this + 42) = v5;
  if ( &a3[v5] < a3 || (unsigned __int64)&a3[v5] > MmUserProbeAddress )
    *(_BYTE *)MmUserProbeAddress = 0;
  memmove(v19, a3, v5);
LABEL_22:
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v27);
  DXGKEYEDMUTEX::AcquireReference(this);
  DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE(
    (DXGHANDLETABLELOCKEXCLUSIVE *)v28,
    (struct DXGPROCESS *)Current);
  v21 = Current + 70;
  v22 = HMGRTABLE::AllocHandle(Current + 70, (__int64)this, 9, 0, 0);
  if ( !v22 )
  {
    v20 = -1073741801;
    WdLogSingleEntry2(6LL, this, -1073741801LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      -1,
      (__int64)L"pKeyedMutex 0x%I64x: Fail to allocate per process handle, returning 0x%I64x",
      (__int64)this,
      -1073741801LL,
      0LL,
      0LL,
      0LL);
    DXGKEYEDMUTEX::ReleaseReference(this);
LABEL_29:
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v28);
    return v20;
  }
  if ( *((_BYTE *)this + 176) )
  {
    if ( !a5 )
    {
      WdLogSingleEntry1(1LL, 3882LL);
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"OpenForUserMode == true", 3882LL, 0LL, 0LL, 0LL, 0LL);
    }
    Global = DXGGLOBAL_GetGlobal();
    v24 = DXG_GUEST_GLOBAL_VMBUS::VmBusSendOpenKeyedMutex(
            *((DXG_GUEST_GLOBAL_VMBUS **)Global + 218),
            (struct DXGPROCESS *)Current,
            this,
            v22);
    if ( v24 < 0 )
    {
      DXGPROCESS::FreeHandleSafe((DXGPROCESS *)Current, v22);
      v20 = v24;
      goto LABEL_29;
    }
  }
  if ( a5 )
  {
    v25 = (v22 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v25 < Current[74] )
    {
      v26 = *(_DWORD *)(*v21 + 16 * v25 + 8);
      if ( ((v22 >> 25) & 0x60) == (*(_BYTE *)(*v21 + 16 * v25 + 8) & 0x60) && (v26 & 0x2000) == 0 && (v26 & 0x1F) != 0 )
        *(_DWORD *)(*v21 + 16 * (((unsigned __int64)v22 >> 6) & 0xFFFFFF) + 8) |= 0x2000u;
    }
  }
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v28);
  *a2 = v22;
  return 0LL;
}
