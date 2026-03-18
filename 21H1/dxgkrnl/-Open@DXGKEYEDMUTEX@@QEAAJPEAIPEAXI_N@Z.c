/*
 * XREFs of ?Open@DXGKEYEDMUTEX@@QEAAJPEAIPEAXI_N@Z @ 0x1C028C864
 * Callers:
 *     DxgkOpenResourceFromNtHandle @ 0x1C0122010 (DxgkOpenResourceFromNtHandle.c)
 *     ?VmBusOpenKeyedMutex@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C023FD30 (-VmBusOpenKeyedMutex@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?CreateAndOpenKeyedMutex@DXGGLOBAL@@QEAAJ_KPEAPEAVDXGKEYEDMUTEX@@PEAIPEAXIU_D3DKMT_CREATEKEYEDMUTEX2_FLAGS@@@Z @ 0x1C028B520 (-CreateAndOpenKeyedMutex@DXGGLOBAL@@QEAAJ_KPEAPEAVDXGKEYEDMUTEX@@PEAIPEAXIU_D3DKMT_CREATEKEYEDMU.c)
 *     ?OpenKeyedMutex@DXGGLOBAL@@QEAAJIPEAPEAVDXGKEYEDMUTEX@@PEAIPEAXI@Z @ 0x1C028CBF8 (-OpenKeyedMutex@DXGGLOBAL@@QEAAJIPEAPEAVDXGKEYEDMUTEX@@PEAIPEAXI@Z.c)
 *     ?OpenKeyedMutexFromNtHandle@DXGGLOBAL@@QEAAJPEAXPEAPEAVDXGKEYEDMUTEX@@PEAI0I@Z @ 0x1C028CD78 (-OpenKeyedMutexFromNtHandle@DXGGLOBAL@@QEAAJPEAXPEAPEAVDXGKEYEDMUTEX@@PEAI0I@Z.c)
 *     ?OpenLocalMutex@DXGDXGIKEYEDMUTEX@@QEAAJW4_OUTPUTDUPL_MUTEX_TYPE@@@Z @ 0x1C02968D4 (-OpenLocalMutex@DXGDXGIKEYEDMUTEX@@QEAAJW4_OUTPUTDUPL_MUTEX_TYPE@@@Z.c)
 * Callees:
 *     ?FreeHandleSafe@DXGPROCESS@@QEAAXI@Z @ 0x1C00081FC (-FreeHandleSafe@DXGPROCESS@@QEAAXI@Z.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000A30C (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000A650 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000A840 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C000A884 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C000D034 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000D070 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGKEYEDMUTEXLOCK@@QEAA@PEAVDXGKEYEDMUTEX@@@Z @ 0x1C0025E48 (--0DXGKEYEDMUTEXLOCK@@QEAA@PEAVDXGKEYEDMUTEX@@@Z.c)
 *     memmove @ 0x1C0026580 (memmove.c)
 *     ?AcquireReference@DXGKEYEDMUTEX@@QEAAXXZ @ 0x1C003EE34 (-AcquireReference@DXGKEYEDMUTEX@@QEAAXXZ.c)
 *     ?ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ @ 0x1C003F104 (-ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ.c)
 *     ?AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z @ 0x1C0104280 (-AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0119460 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?VmBusSendOpenKeyedMutex@DXG_GUEST_GLOBAL_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGKEYEDMUTEX@@I@Z @ 0x1C0245EDC (-VmBusSendOpenKeyedMutex@DXG_GUEST_GLOBAL_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGKEYEDMUTEX@@I@Z.c)
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
  __int64 v28; // rdx
  _QWORD *v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rdx
  _QWORD *v32; // rsi
  __int64 v33; // rdx
  __int64 v34; // rcx
  unsigned int v35; // edi
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 v38; // rax
  __int64 v39; // rdx
  __int64 v40; // rax
  struct DXGGLOBAL *Global; // rax
  int v42; // ebx
  __int64 v43; // rax
  int v44; // edx
  _BYTE v45[16]; // [rsp+30h] [rbp-48h] BYREF
  _BYTE v46[32]; // [rsp+40h] [rbp-38h] BYREF

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
  DXGKEYEDMUTEXLOCK::DXGKEYEDMUTEXLOCK((DXGKEYEDMUTEXLOCK *)v45, this);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v45);
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
    v29 = (_QWORD *)WdLogNewEntry5_WdWarning(v18, v17, v19);
    v29[3] = this;
    v29[4] = v5;
    v29[5] = *((unsigned int *)this + 40);
    v29[6] = -1073741811LL;
LABEL_18:
    WdLogEvent5_WdWarning(v29);
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v45, v30);
    return 3221225485LL;
  }
  if ( !a3 )
  {
LABEL_17:
    v29 = (_QWORD *)WdLogNewEntry5_WdWarning(v18, v17, v19);
    v29[3] = this;
    v29[4] = -1073741811LL;
    goto LABEL_18;
  }
  if ( *((_QWORD *)this + 19) )
  {
    v21 = WdLogNewEntry5_WdAssertion(v18, v17);
    *(_QWORD *)(v21 + 24) = 3643LL;
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
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v45, v28);
    return v27;
  }
  *((_DWORD *)this + 40) = v5;
  if ( &a3[v5] < a3 || (unsigned __int64)&a3[v5] > MmUserProbeAddress )
    *(_BYTE *)MmUserProbeAddress = 0;
  memmove(v25, a3, v5);
LABEL_22:
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v45, v17);
  DXGKEYEDMUTEX::AcquireReference(this, v31);
  DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE(
    (DXGHANDLETABLELOCKEXCLUSIVE *)v46,
    (struct _KTHREAD **)Current);
  v32 = (_QWORD *)((char *)Current + 240);
  v35 = HMGRTABLE::AllocHandle((unsigned int *)Current + 60, (__int64)this, 9, 0, 0);
  if ( !v35 )
  {
    v38 = WdLogNewEntry5_WdLowResource(v34, v33, v36, v37);
    *(_QWORD *)(v38 + 24) = this;
    v27 = -1073741801;
    *(_QWORD *)(v38 + 32) = -1073741801LL;
    WdLogEvent5_WdLowResource(v38);
    DXGKEYEDMUTEX::ReleaseReference(this, v39);
LABEL_29:
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v46);
    return v27;
  }
  if ( *((_BYTE *)this + 168) )
  {
    if ( !a5 )
    {
      v40 = WdLogNewEntry5_WdAssertion(v34, v33);
      *(_QWORD *)(v40 + 24) = 3720LL;
      WdLogEvent5_WdAssertion(v40);
    }
    Global = DXGGLOBAL::GetGlobal(v34, v33);
    v42 = DXG_GUEST_GLOBAL_VMBUS::VmBusSendOpenKeyedMutex(
            *((DXG_GUEST_GLOBAL_VMBUS **)Global + 183),
            Current,
            this,
            v35);
    if ( v42 < 0 )
    {
      DXGPROCESS::FreeHandleSafe(Current, v35);
      v27 = v42;
      goto LABEL_29;
    }
  }
  if ( a5 )
  {
    v43 = (v35 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v43 < *((_DWORD *)Current + 64) )
    {
      v44 = *(_DWORD *)(*v32 + 16 * v43 + 8);
      if ( ((v35 >> 25) & 0x60) == (*(_BYTE *)(*v32 + 16 * v43 + 8) & 0x60) && (v44 & 0x2000) == 0 && (v44 & 0x1F) != 0 )
        *(_DWORD *)(*v32 + 16 * (((unsigned __int64)v35 >> 6) & 0xFFFFFF) + 8) |= 0x2000u;
    }
  }
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v46);
  *a2 = v35;
  return 0LL;
}
