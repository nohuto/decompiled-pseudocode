/*
 * XREFs of ?Open@DXGKEYEDMUTEX@@QEAAJPEAIPEAXI_N@Z @ 0x1C028FD28
 * Callers:
 *     DxgkOpenResourceFromNtHandle @ 0x1C0117DC0 (DxgkOpenResourceFromNtHandle.c)
 *     ?VmBusOpenKeyedMutex@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0242F00 (-VmBusOpenKeyedMutex@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?CreateAndOpenKeyedMutex@DXGGLOBAL@@QEAAJ_KPEAPEAVDXGKEYEDMUTEX@@PEAIPEAXIU_D3DKMT_CREATEKEYEDMUTEX2_FLAGS@@@Z @ 0x1C028E9E0 (-CreateAndOpenKeyedMutex@DXGGLOBAL@@QEAAJ_KPEAPEAVDXGKEYEDMUTEX@@PEAIPEAXIU_D3DKMT_CREATEKEYEDMU.c)
 *     ?OpenKeyedMutex@DXGGLOBAL@@QEAAJIPEAPEAVDXGKEYEDMUTEX@@PEAIPEAXI@Z @ 0x1C02900BC (-OpenKeyedMutex@DXGGLOBAL@@QEAAJIPEAPEAVDXGKEYEDMUTEX@@PEAIPEAXI@Z.c)
 *     ?OpenKeyedMutexFromNtHandle@DXGGLOBAL@@QEAAJPEAXPEAPEAVDXGKEYEDMUTEX@@PEAI0I@Z @ 0x1C029023C (-OpenKeyedMutexFromNtHandle@DXGGLOBAL@@QEAAJPEAXPEAPEAVDXGKEYEDMUTEX@@PEAI0I@Z.c)
 *     ?OpenLocalMutex@DXGDXGIKEYEDMUTEX@@QEAAJW4_OUTPUTDUPL_MUTEX_TYPE@@@Z @ 0x1C0299DE4 (-OpenLocalMutex@DXGDXGIKEYEDMUTEX@@QEAAJW4_OUTPUTDUPL_MUTEX_TYPE@@@Z.c)
 * Callees:
 *     ?FreeHandleSafe@DXGPROCESS@@QEAAXI@Z @ 0x1C000230C (-FreeHandleSafe@DXGPROCESS@@QEAAXI@Z.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C00025F8 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002808 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C0002B94 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0002CEC (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C00042D8 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGKEYEDMUTEXLOCK@@QEAA@PEAVDXGKEYEDMUTEX@@@Z @ 0x1C0026B3C (--0DXGKEYEDMUTEXLOCK@@QEAA@PEAVDXGKEYEDMUTEX@@@Z.c)
 *     memmove @ 0x1C0027140 (memmove.c)
 *     ?AcquireReference@DXGKEYEDMUTEX@@QEAAXXZ @ 0x1C003FC54 (-AcquireReference@DXGKEYEDMUTEX@@QEAAXXZ.c)
 *     ?ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ @ 0x1C003FF70 (-ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ.c)
 *     ?AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z @ 0x1C010A620 (-AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0111EB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?VmBusSendOpenKeyedMutex@DXG_GUEST_GLOBAL_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGKEYEDMUTEX@@I@Z @ 0x1C024910C (-VmBusSendOpenKeyedMutex@DXG_GUEST_GLOBAL_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGKEYEDMUTEX@@I@Z.c)
 */

__int64 __fastcall DXGKEYEDMUTEX::Open(DXGKEYEDMUTEX *this, unsigned int *a2, char *a3, unsigned int a4, bool a5)
{
  SIZE_T v5; // rsi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  struct DXGPROCESS *Current; // r15
  __int64 v13; // rbx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  int v20; // eax
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  PVOID v25; // r9
  _QWORD *v26; // rax
  unsigned int v27; // edi
  _QWORD *v28; // rax
  __int64 v29; // rdx
  _QWORD *v30; // rsi
  __int64 v31; // rdx
  __int64 v32; // rcx
  unsigned int v33; // edi
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rax
  struct DXGGLOBAL *Global; // rax
  int v40; // ebx
  __int64 v41; // rax
  int v42; // edx
  _BYTE v43[16]; // [rsp+30h] [rbp-48h] BYREF
  _BYTE v44[32]; // [rsp+40h] [rbp-38h] BYREF

  v5 = a4;
  Current = DXGPROCESS::GetCurrent((__int64)this, (__int64)a2);
  if ( !Current )
  {
    v13 = WdLogNewEntry5_WdWarning(v10, v9, v11);
    *(_QWORD *)(v13 + 24) = a2;
    *(_QWORD *)(v13 + 32) = PsGetCurrentProcess(v15, v14);
    WdLogEvent5_WdWarning(v13);
    return 3221225485LL;
  }
  if ( !a2 )
    return 3221225485LL;
  DXGKEYEDMUTEXLOCK::DXGKEYEDMUTEXLOCK((DXGKEYEDMUTEXLOCK *)v43, this);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v43);
  if ( !(_DWORD)v5 )
  {
    if ( !a3 )
      goto LABEL_22;
    goto LABEL_17;
  }
  v20 = *((_DWORD *)this + 40);
  if ( v20 )
  {
    if ( v20 == (_DWORD)v5 )
      goto LABEL_22;
    v28 = (_QWORD *)WdLogNewEntry5_WdWarning(v18, v17, v19);
    v28[3] = this;
    v28[4] = v5;
    v28[5] = *((unsigned int *)this + 40);
    v28[6] = -1073741811LL;
LABEL_18:
    WdLogEvent5_WdWarning(v28);
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v43);
    return 3221225485LL;
  }
  if ( !a3 )
  {
LABEL_17:
    v28 = (_QWORD *)WdLogNewEntry5_WdWarning(v18, v17, v19);
    v28[3] = this;
    v28[4] = -1073741811LL;
    goto LABEL_18;
  }
  if ( *((_QWORD *)this + 19) )
  {
    v21 = WdLogNewEntry5_WdAssertion(v18, v17);
    *(_QWORD *)(v21 + 24) = 3782LL;
    WdLogEvent5_WdAssertion(v21);
  }
  v25 = operator new[](v5, 0x4B677844u, PagedPool);
  *((_QWORD *)this + 19) = v25;
  if ( !v25 )
  {
    v26 = (_QWORD *)WdLogNewEntry5_WdLowResource(v23, v22, v24, 0LL);
    v26[3] = this;
    v26[4] = v5;
    v27 = -1073741801;
    v26[5] = -1073741801LL;
    WdLogEvent5_WdLowResource(v26);
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v43);
    return v27;
  }
  *((_DWORD *)this + 40) = v5;
  if ( &a3[v5] < a3 || (unsigned __int64)&a3[v5] > MmUserProbeAddress )
    *(_BYTE *)MmUserProbeAddress = 0;
  memmove(v25, a3, v5);
LABEL_22:
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v43);
  DXGKEYEDMUTEX::AcquireReference(this, v29);
  DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE(
    (DXGHANDLETABLELOCKEXCLUSIVE *)v44,
    (struct _KTHREAD **)Current);
  v30 = (_QWORD *)((char *)Current + 240);
  v33 = HMGRTABLE::AllocHandle((unsigned int *)Current + 60, (__int64)this, 9, 0, 0);
  if ( !v33 )
  {
    v36 = WdLogNewEntry5_WdLowResource(v32, v31, v34, v35);
    *(_QWORD *)(v36 + 24) = this;
    v27 = -1073741801;
    *(_QWORD *)(v36 + 32) = -1073741801LL;
    WdLogEvent5_WdLowResource(v36);
    DXGKEYEDMUTEX::ReleaseReference(this, v37);
LABEL_29:
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v44);
    return v27;
  }
  if ( *((_BYTE *)this + 168) )
  {
    if ( !a5 )
    {
      v38 = WdLogNewEntry5_WdAssertion(v32, v31);
      *(_QWORD *)(v38 + 24) = 3859LL;
      WdLogEvent5_WdAssertion(v38);
    }
    Global = DXGGLOBAL::GetGlobal(v32, v31);
    v40 = DXG_GUEST_GLOBAL_VMBUS::VmBusSendOpenKeyedMutex(
            *((DXG_GUEST_GLOBAL_VMBUS **)Global + 197),
            Current,
            this,
            v33);
    if ( v40 < 0 )
    {
      DXGPROCESS::FreeHandleSafe(Current, v33);
      v27 = v40;
      goto LABEL_29;
    }
  }
  if ( a5 )
  {
    v41 = (v33 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v41 < *((_DWORD *)Current + 64) )
    {
      v42 = *(_DWORD *)(*v30 + 16 * v41 + 8);
      if ( ((v33 >> 25) & 0x60) == (*(_BYTE *)(*v30 + 16 * v41 + 8) & 0x60) && (v42 & 0x2000) == 0 && (v42 & 0x1F) != 0 )
        *(_DWORD *)(*v30 + 16 * (((unsigned __int64)v33 >> 6) & 0xFFFFFF) + 8) |= 0x2000u;
    }
  }
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v44);
  *a2 = v33;
  return 0LL;
}
