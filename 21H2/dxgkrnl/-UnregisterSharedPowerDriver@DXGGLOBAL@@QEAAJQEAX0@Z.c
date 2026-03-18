/*
 * XREFs of ?UnregisterSharedPowerDriver@DXGGLOBAL@@QEAAJQEAX0@Z @ 0x1C030D0BC
 * Callers:
 *     DxgUnregisterSharedPowerDriverCB @ 0x1C02E2D60 (DxgUnregisterSharedPowerDriverCB.c)
 * Callees:
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000E350 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000E420 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000EE00 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?SetPowerComponentIdleCB@DXGADAPTER@@QEAAXI@Z @ 0x1C0025C78 (-SetPowerComponentIdleCB@DXGADAPTER@@QEAAXI@Z.c)
 *     ??_G?$DXGNODELIST@VDXGGLOBAL@@VDXGSHAREDPOWERINUSELISTOBJECT@@@@AEAAPEAXI@Z @ 0x1C00536FC (--_G-$DXGNODELIST@VDXGGLOBAL@@VDXGSHAREDPOWERINUSELISTOBJECT@@@@AEAAPEAXI@Z.c)
 *     ??_GDXGSHAREDPOWERREGISTRATIONOBJECT@@IEAAPEAXI@Z @ 0x1C00537E4 (--_GDXGSHAREDPOWERREGISTRATIONOBJECT@@IEAAPEAXI@Z.c)
 *     ?RemoveListObjectFromSharedPowerList@DXGGLOBAL@@QEAAXPEAVDXGSHAREDPOWERREGISTRATIONOBJECT@@@Z @ 0x1C0053FF0 (-RemoveListObjectFromSharedPowerList@DXGGLOBAL@@QEAAXPEAVDXGSHAREDPOWERREGISTRATIONOBJECT@@@Z.c)
 *     ?ValidateAdapterValidAndInRunningState@DXGGLOBAL@@QEAAEPEAVDXGADAPTER@@@Z @ 0x1C030D218 (-ValidateAdapterValidAndInRunningState@DXGGLOBAL@@QEAAEPEAVDXGADAPTER@@@Z.c)
 */

__int64 __fastcall DXGGLOBAL::UnregisterSharedPowerDriver(
        DXGGLOBAL *this,
        DXGADAPTER *a2,
        struct DXGSHAREDPOWERREGISTRATIONOBJECT **a3)
{
  struct _KTHREAD **v3; // r13
  unsigned int v7; // esi
  struct DXGSHAREDPOWERREGISTRATIONOBJECT ***v8; // rbx
  unsigned int **v9; // r14
  unsigned int *v10; // rdi
  DXGSHAREDPOWERINUSELISTOBJECT *v11; // rcx
  __int64 v12; // rax
  unsigned int v13; // r13d
  DXGSHAREDPOWERINUSELISTOBJECT **v14; // r8
  struct DXGSHAREDPOWERREGISTRATIONOBJECT **v15; // rcx
  struct _KTHREAD **v17; // [rsp+50h] [rbp+8h]

  v3 = (struct _KTHREAD **)((char *)this + 704);
  v17 = (struct _KTHREAD **)((char *)this + 704);
  v7 = 0;
  DXGFASTMUTEX::Acquire((DXGGLOBAL *)((char *)this + 704));
  DXGPUSHLOCK::AcquireExclusive((DXGGLOBAL *)((char *)this + 1824));
  v8 = (struct DXGSHAREDPOWERREGISTRATIONOBJECT ***)*((_QWORD *)this + 232);
  if ( DXGGLOBAL::ValidateAdapterValidAndInRunningState(this, a2) )
  {
    while ( 1 )
    {
      if ( v8 == (struct DXGSHAREDPOWERREGISTRATIONOBJECT ***)((char *)this + 1856) || !v8 )
      {
        v7 = -1073741811;
        goto LABEL_19;
      }
      if ( v8[4] == (struct DXGSHAREDPOWERREGISTRATIONOBJECT **)a2 && v8[3] == a3 )
        break;
      v8 = (struct DXGSHAREDPOWERREGISTRATIONOBJECT ***)*v8;
    }
    v9 = (unsigned int **)v8[8];
    v10 = *v9;
    while ( v10 != (unsigned int *)v9 )
    {
      v11 = (DXGSHAREDPOWERINUSELISTOBJECT *)v10;
      if ( !v10 )
        break;
      v12 = *(_QWORD *)v10;
      v13 = v10[6];
      v10 = (unsigned int *)v12;
      if ( *(DXGSHAREDPOWERINUSELISTOBJECT **)(v12 + 8) != v11
        || (v14 = (DXGSHAREDPOWERINUSELISTOBJECT **)*((_QWORD *)v11 + 1), *v14 != v11) )
      {
        __fastfail(3u);
      }
      *v14 = (DXGSHAREDPOWERINUSELISTOBJECT *)v12;
      *(_QWORD *)(v12 + 8) = v14;
      DXGSHAREDPOWERREGISTRATIONOBJECT::`scalar deleting destructor'(v11);
      DXGADAPTER::SetPowerComponentIdleCB(a2, v13);
    }
    DXGGLOBAL::RemoveListObjectFromSharedPowerList((KSPIN_LOCK *)this, v8);
    v15 = v8[8];
    if ( v15 )
      DXGNODELIST<DXGGLOBAL,DXGSHAREDPOWERINUSELISTOBJECT>::`scalar deleting destructor'(v15);
    DXGSHAREDPOWERREGISTRATIONOBJECT::`scalar deleting destructor'((DXGSHAREDPOWERINUSELISTOBJECT *)v8);
    v3 = v17;
  }
  else
  {
    v7 = -1073741130;
  }
LABEL_19:
  *((_QWORD *)this + 229) = 0LL;
  ExReleasePushLockExclusiveEx((char *)this + 1824, 0LL);
  KeLeaveCriticalRegion();
  DXGFASTMUTEX::Release(v3);
  return v7;
}
