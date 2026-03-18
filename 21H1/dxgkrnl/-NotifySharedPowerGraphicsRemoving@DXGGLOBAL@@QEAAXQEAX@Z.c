/*
 * XREFs of ?NotifySharedPowerGraphicsRemoving@DXGGLOBAL@@QEAAXQEAX@Z @ 0x1C0265BD0
 * Callers:
 *     ?Stop@DXGADAPTER@@QEAAXEE@Z @ 0x1C020B838 (-Stop@DXGADAPTER@@QEAAXEE@Z.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000A788 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??3@YAXPEAX@Z @ 0x1C000BEAC (--3@YAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026570 (_guard_dispatch_icall_nop.c)
 *     ??_G?$DXGNODELIST@VDXGGLOBAL@@VDXGSHAREDPOWERINUSELISTOBJECT@@@@AEAAPEAXI@Z @ 0x1C0044574 (--_G-$DXGNODELIST@VDXGGLOBAL@@VDXGSHAREDPOWERINUSELISTOBJECT@@@@AEAAPEAXI@Z.c)
 *     ?RemoveListObjectFromSharedPowerList@DXGGLOBAL@@QEAAXPEAVDXGSHAREDPOWERREGISTRATIONOBJECT@@@Z @ 0x1C0044DE4 (-RemoveListObjectFromSharedPowerList@DXGGLOBAL@@QEAAXPEAVDXGSHAREDPOWERREGISTRATIONOBJECT@@@Z.c)
 *     ??1DXGSHAREDPOWERINUSELISTOBJECT@@IEAA@XZ @ 0x1C0264290 (--1DXGSHAREDPOWERINUSELISTOBJECT@@IEAA@XZ.c)
 */

void __fastcall DXGGLOBAL::NotifySharedPowerGraphicsRemoving(
        DXGGLOBAL *this,
        struct DXGSHAREDPOWERREGISTRATIONOBJECT *a2)
{
  char *v2; // rbp
  struct DXGSHAREDPOWERREGISTRATIONOBJECT *v4; // r15
  struct DXGSHAREDPOWERREGISTRATIONOBJECT **v5; // rbx
  struct DXGSHAREDPOWERREGISTRATIONOBJECT ***v6; // r14
  unsigned __int8 CurrentIrql; // di
  __int64 v8; // rdx
  __int64 v9; // rcx
  _QWORD *v10; // rax
  unsigned __int8 v11; // cl
  PVOID **v12; // r13
  DXGSHAREDPOWERINUSELISTOBJECT **v13; // r15
  DXGSHAREDPOWERINUSELISTOBJECT *v14; // rdi
  DXGSHAREDPOWERINUSELISTOBJECT *v15; // rcx
  DXGSHAREDPOWERINUSELISTOBJECT *v16; // rdx
  DXGSHAREDPOWERINUSELISTOBJECT **v17; // rax
  void *v18; // rcx
  __int64 v19; // rdx
  void *v20; // rcx

  v2 = (char *)this + 1536;
  v4 = a2;
  DXGPUSHLOCK::AcquireExclusive((DXGGLOBAL *)((char *)this + 1536));
  v5 = (struct DXGSHAREDPOWERREGISTRATIONOBJECT **)*((_QWORD *)this + 196);
  while ( v5 != (struct DXGSHAREDPOWERREGISTRATIONOBJECT **)((char *)this + 1568) )
  {
    v6 = (struct DXGSHAREDPOWERREGISTRATIONOBJECT ***)v5;
    if ( !v5 )
      break;
    if ( v5[4] == v4 )
    {
      CurrentIrql = KeGetCurrentIrql();
      ((void (__fastcall *)(struct DXGSHAREDPOWERREGISTRATIONOBJECT *, struct DXGSHAREDPOWERREGISTRATIONOBJECT *))v5[6])(
        v4,
        v5[3]);
      if ( CurrentIrql != KeGetCurrentIrql() )
      {
        v10 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v9, v8);
        v10[3] = 275LL;
        v10[4] = 16LL;
        v10[5] = this;
        v10[6] = CurrentIrql;
        v11 = KeGetCurrentIrql();
        v10[7] = v11;
        WdLogEvent5_WdCriticalError(v10);
      }
      v12 = (PVOID **)(v5 + 8);
      v13 = (DXGSHAREDPOWERINUSELISTOBJECT **)v5[8];
      v14 = *v13;
      while ( 1 )
      {
        v15 = v14;
        if ( v14 == (DXGSHAREDPOWERINUSELISTOBJECT *)v13 || !v14 )
          break;
        v16 = *(DXGSHAREDPOWERINUSELISTOBJECT **)v14;
        v14 = *(DXGSHAREDPOWERINUSELISTOBJECT **)v14;
        if ( *(DXGSHAREDPOWERINUSELISTOBJECT **)(*(_QWORD *)v15 + 8LL) != v15
          || (v17 = (DXGSHAREDPOWERINUSELISTOBJECT **)*((_QWORD *)v15 + 1), *v17 != v15) )
        {
          __fastfail(3u);
        }
        *v17 = v16;
        *((_QWORD *)v16 + 1) = v17;
        DXGSHAREDPOWERINUSELISTOBJECT::~DXGSHAREDPOWERINUSELISTOBJECT(v15);
        operator delete(v18);
      }
      v5 = (struct DXGSHAREDPOWERREGISTRATIONOBJECT **)*v5;
      DXGGLOBAL::RemoveListObjectFromSharedPowerList((KSPIN_LOCK *)this, v6);
      if ( *v12 )
        DXGNODELIST<DXGGLOBAL,DXGSHAREDPOWERINUSELISTOBJECT>::`scalar deleting destructor'(*v12, v19);
      DXGSHAREDPOWERINUSELISTOBJECT::~DXGSHAREDPOWERINUSELISTOBJECT((DXGSHAREDPOWERINUSELISTOBJECT *)v6);
      operator delete(v20);
      v4 = a2;
    }
    else
    {
      v5 = (struct DXGSHAREDPOWERREGISTRATIONOBJECT **)*v5;
    }
  }
  *((_QWORD *)v2 + 1) = 0LL;
  ExReleasePushLockExclusiveEx(v2, 0LL);
  KeLeaveCriticalRegion();
}
