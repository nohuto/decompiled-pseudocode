/*
 * XREFs of ?RegisterSharedPowerComponent@DXGGLOBAL@@QEAAJPEAXQEAXP6AX0W4_DEVICE_POWER_STATE@@E0@ZP6AX00@ZP6AX0KIE0@ZP6AX00KEIU_GUID@@I@Z@Z @ 0x1C00468EC
 * Callers:
 *     DxgRegisterSharedPowerComponent @ 0x1C0251620 (DxgRegisterSharedPowerComponent.c)
 * Callees:
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0002A00 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0002B1C (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0002C60 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0002D2C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028C00 (_guard_dispatch_icall_nop.c)
 *     ??_G?$DXGNODELIST@VDXGGLOBAL@@VDXGSHAREDPOWERINUSELISTOBJECT@@@@AEAAPEAXI@Z @ 0x1C00463E4 (--_G-$DXGNODELIST@VDXGGLOBAL@@VDXGSHAREDPOWERINUSELISTOBJECT@@@@AEAAPEAXI@Z.c)
 *     ??0DXGSHAREDPOWERREGISTRATIONOBJECT@@IEAA@PEAVDXGGLOBAL@@QEAX1P6AXPEAXW4_DEVICE_POWER_STATE@@E2@ZP6AX22@ZP6AX2KIE2@ZPEAV?$DXGNODELIST@VDXGGLOBAL@@VDXGSHAREDPOWERINUSELISTOBJECT@@@@@Z @ 0x1C0268198 (--0DXGSHAREDPOWERREGISTRATIONOBJECT@@IEAA@PEAVDXGGLOBAL@@QEAX1P6AXPEAXW4_DEVICE_POWER_STATE@@E2@.c)
 *     ??1DXGSHAREDPOWERINUSELISTOBJECT@@IEAA@XZ @ 0x1C0268858 (--1DXGSHAREDPOWERINUSELISTOBJECT@@IEAA@XZ.c)
 *     ?ValidateAdapterValidAndInRunningState@DXGGLOBAL@@QEAAEPEAVDXGADAPTER@@@Z @ 0x1C026C048 (-ValidateAdapterValidAndInRunningState@DXGGLOBAL@@QEAAEPEAVDXGADAPTER@@@Z.c)
 */

__int64 __fastcall DXGGLOBAL::RegisterSharedPowerComponent(
        DXGGLOBAL *this,
        struct DXGADAPTER *a2,
        void *const a3,
        void (*a4)(void *, enum _DEVICE_POWER_STATE, unsigned __int8, void *),
        void (*a5)(void *, void *),
        void (*a6)(void *, unsigned int, unsigned int, unsigned __int8, void *),
        void (*a7)(void *, void *, unsigned int, unsigned __int8, unsigned int, struct _GUID *__struct_ptr, unsigned int))
{
  int v8; // esi
  char *v10; // rbp
  char *v11; // r15
  char *v12; // r14
  PVOID *v13; // rdi
  DXGSHAREDPOWERINUSELISTOBJECT *v14; // rbx
  __int64 v15; // r8
  __int64 v16; // rax
  PVOID *v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rax
  PVOID v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // r9
  __int64 v29; // rax
  unsigned int v30; // ebp
  __int64 v31; // rcx
  unsigned __int8 CurrentIrql; // r15
  __int64 v33; // r8
  int v34; // eax
  __int64 v35; // rdx
  __int64 v36; // rcx
  _QWORD *v37; // rax
  unsigned __int8 v38; // cl
  __int64 v39; // rdx
  __int64 v40; // rdx
  PVOID v41; // rcx
  int v43; // [rsp+30h] [rbp-98h]
  struct _KTHREAD **v44; // [rsp+40h] [rbp-88h]
  __int128 v45; // [rsp+50h] [rbp-78h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+60h] [rbp-68h] BYREF

  v8 = 0;
  v44 = (struct _KTHREAD **)((char *)this + 584);
  DXGFASTMUTEX::Acquire((DXGGLOBAL *)((char *)this + 584));
  v10 = (char *)this + 1656;
  DXGPUSHLOCK::AcquireExclusive((DXGGLOBAL *)((char *)this + 1656));
  v11 = (char *)this + 1688;
  v12 = (char *)*((_QWORD *)this + 211);
  v13 = 0LL;
  v14 = 0LL;
  if ( !DXGGLOBAL::ValidateAdapterValidAndInRunningState(this, a2) )
  {
    v8 = -1073741130;
    goto LABEL_30;
  }
  while ( v12 != v11 && v12 )
  {
    if ( *((void *const *)v12 + 3) == a3 && *((struct DXGADAPTER **)v12 + 4) == a2 )
    {
      v8 = -1073740008;
      v16 = WdLogNewEntry5_WdWarning(v12, a3, v15);
      *(_QWORD *)(v16 + 24) = -1073740008LL;
      WdLogEvent5_WdWarning(v16);
      goto LABEL_30;
    }
    v12 = *(char **)v12;
  }
  v17 = (PVOID *)operator new[](0x10uLL, 0x4B677844u, PagedPool);
  v13 = v17;
  if ( v17 )
  {
    v17[1] = v17;
    *v17 = v17;
  }
  else
  {
    v13 = 0LL;
  }
  if ( !v13 )
  {
    v22 = WdLogNewEntry5_WdLowResource(v19, v18, v20, v21);
    *(_QWORD *)(v22 + 24) = 5591LL;
LABEL_14:
    WdLogEvent5_WdLowResource(v22);
    v8 = -1073741801;
    goto LABEL_30;
  }
  v23 = operator new[](0x48uLL, 0x4B677844u, (POOL_TYPE)512);
  if ( v23 )
    v14 = (DXGSHAREDPOWERINUSELISTOBJECT *)DXGSHAREDPOWERREGISTRATIONOBJECT::DXGSHAREDPOWERREGISTRATIONOBJECT(
                                             (_DWORD)v23,
                                             (_DWORD)this,
                                             (_DWORD)a3,
                                             (_DWORD)a2,
                                             (__int64)a4,
                                             (__int64)a5,
                                             (__int64)a6,
                                             (__int64)v13);
  if ( !v14 )
  {
    v22 = WdLogNewEntry5_WdLowResource(v25, v24, v26, v27);
    *(_QWORD *)(v22 + 24) = 5600LL;
    goto LABEL_14;
  }
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)this + 206, &LockHandle);
  v29 = *(_QWORD *)v11;
  if ( *(char **)(*(_QWORD *)v11 + 8LL) != v11 )
    __fastfail(3u);
  *(_QWORD *)v14 = v29;
  *((_QWORD *)v14 + 1) = v11;
  *(_QWORD *)(v29 + 8) = v14;
  *(_QWORD *)v11 = v14;
  if ( a7 )
  {
    v30 = 0;
    if ( *((_DWORD *)a2 + 736) )
    {
      do
      {
        v31 = *((_QWORD *)a2 + 350) + 520LL * v30;
        if ( *(_DWORD *)(v31 + 208) == 7 )
        {
          CurrentIrql = KeGetCurrentIrql();
          v33 = *(unsigned int *)(v31 + 4);
          v43 = *(_DWORD *)(v31 + 212);
          LOBYTE(v28) = *(_BYTE *)(v31 + 360) == 0;
          v34 = *(_DWORD *)(v31 + 344);
          v45 = *(_OWORD *)(v31 + 220);
          ((void (__fastcall *)(struct DXGADAPTER *, void *const, __int64, __int64, int, __int128 *, int))a7)(
            a2,
            a3,
            v33,
            v28,
            v34,
            &v45,
            v43);
          if ( CurrentIrql != KeGetCurrentIrql() )
          {
            v37 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v36, v35);
            v37[3] = 275LL;
            v37[4] = 16LL;
            v37[5] = this;
            v37[6] = CurrentIrql;
            v38 = KeGetCurrentIrql();
            v37[7] = v38;
            WdLogEvent5_WdCriticalError(v37);
          }
        }
        ++v30;
      }
      while ( v30 < *((_DWORD *)a2 + 736) );
      v8 = 0;
    }
    v10 = (char *)this + 1656;
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
LABEL_30:
  *((_QWORD *)v10 + 1) = 0LL;
  ExReleasePushLockExclusiveEx(v10, 0LL);
  KeLeaveCriticalRegion();
  DXGFASTMUTEX::Release(v44, v39);
  if ( v8 < 0 )
  {
    if ( v13 )
      DXGNODELIST<DXGGLOBAL,DXGSHAREDPOWERINUSELISTOBJECT>::`scalar deleting destructor'(v13, v40);
    if ( v14 )
    {
      DXGSHAREDPOWERINUSELISTOBJECT::~DXGSHAREDPOWERINUSELISTOBJECT(v14);
      ExFreePoolWithTag(v41, 0);
    }
  }
  return (unsigned int)v8;
}
