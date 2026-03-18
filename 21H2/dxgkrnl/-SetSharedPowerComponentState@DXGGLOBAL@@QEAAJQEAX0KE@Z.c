/*
 * XREFs of ?SetSharedPowerComponentState@DXGGLOBAL@@QEAAJQEAX0KE@Z @ 0x1C030C958
 * Callers:
 *     DxgSetSharedPowerComponentStateCB @ 0x1C02E2D00 (DxgSetSharedPowerComponentStateCB.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000E350 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000E420 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000FA80 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?SetPowerComponentActiveCB@DXGADAPTER@@QEAAXI@Z @ 0x1C0025B90 (-SetPowerComponentActiveCB@DXGADAPTER@@QEAAXI@Z.c)
 *     ?SetPowerComponentIdleCB@DXGADAPTER@@QEAAXI@Z @ 0x1C0025C78 (-SetPowerComponentIdleCB@DXGADAPTER@@QEAAXI@Z.c)
 *     ??_GDXGSHAREDPOWERREGISTRATIONOBJECT@@IEAAPEAXI@Z @ 0x1C00537E4 (--_GDXGSHAREDPOWERREGISTRATIONOBJECT@@IEAAPEAXI@Z.c)
 *     ?ValidateAdapterValidAndInRunningState@DXGGLOBAL@@QEAAEPEAVDXGADAPTER@@@Z @ 0x1C030D218 (-ValidateAdapterValidAndInRunningState@DXGGLOBAL@@QEAAEPEAVDXGADAPTER@@@Z.c)
 */

__int64 __fastcall DXGGLOBAL::SetSharedPowerComponentState(
        DXGGLOBAL *this,
        DXGADAPTER *a2,
        __int64 *a3,
        unsigned int a4,
        unsigned __int8 a5)
{
  struct _KTHREAD **v5; // r12
  unsigned int v10; // ebx
  __int64 **v11; // rdi
  __int64 v12; // r9
  unsigned int v13; // ecx
  __int64 *v14; // rdx
  char v15; // al
  __int64 *i; // rcx
  __int64 v17; // rax
  __int64 v18; // r8
  __int64 *v19; // rcx
  __int64 v20; // rdx
  __int64 *v21; // rax
  __int64 **v22; // rdx
  unsigned __int16 v24; // [rsp+AAh] [rbp+22h]

  v24 = HIWORD(a4);
  v5 = (struct _KTHREAD **)((char *)this + 704);
  v10 = 0;
  DXGFASTMUTEX::Acquire((DXGGLOBAL *)((char *)this + 704));
  DXGPUSHLOCK::AcquireShared((DXGGLOBAL *)((char *)this + 1824));
  v11 = (__int64 **)*((_QWORD *)this + 232);
  if ( DXGGLOBAL::ValidateAdapterValidAndInRunningState(this, a2) )
  {
    v13 = (unsigned __int16)a4 + *((unsigned __int16 *)a2 + v24 + 1456);
    if ( v13 >= *((_DWORD *)a2 + 760) || *(_DWORD *)(520LL * v13 + *((_QWORD *)a2 + 362) + 208) != 7 )
    {
LABEL_28:
      v10 = -1073741811;
      goto LABEL_29;
    }
    while ( 1 )
    {
      if ( v11 == (__int64 **)((char *)this + 1856) || !v11 )
        goto LABEL_28;
      if ( v11[4] == (__int64 *)a2 && v11[3] == a3 )
        break;
      v11 = (__int64 **)*v11;
    }
    v14 = v11[8];
    v15 = 0;
    for ( i = (__int64 *)*v14; i != v14; i = (__int64 *)*i )
    {
      if ( !i )
        goto LABEL_17;
      if ( *((_DWORD *)i + 6) == a4 )
      {
        v15 = 1;
        goto LABEL_17;
      }
    }
    i = 0LL;
LABEL_17:
    if ( a5 )
    {
      if ( v15 )
        goto LABEL_29;
      v17 = operator new[](0x20uLL, 0x4B677844u, 256LL, v12);
      if ( !v17 )
      {
        WdLogSingleEntry1(6LL, 6600LL);
        DxgkLogInternalTriageEvent(
          0LL,
          262145,
          -1,
          (__int64)L"Out of memory allocating pNewListObj of type DXGSHAREDPOWERINUSELISTOBJECT",
          6600LL,
          0LL,
          0LL,
          0LL,
          0LL);
        v10 = -1073741801;
        goto LABEL_29;
      }
      *(_QWORD *)(v17 + 16) = this;
      *(_OWORD *)v17 = 0LL;
      *(_DWORD *)(v17 + 24) = a4;
      v19 = v11[8];
      v20 = *v19;
      if ( *(__int64 **)(*v19 + 8) == v19 )
      {
        *(_QWORD *)v17 = v20;
        *(_QWORD *)(v17 + 8) = v19;
        *(_QWORD *)(v20 + 8) = v17;
        *v19 = v17;
        DXGADAPTER::SetPowerComponentActiveCB(a2, a4, v18);
        goto LABEL_29;
      }
    }
    else
    {
      if ( !v15 )
        goto LABEL_29;
      v21 = (__int64 *)*i;
      if ( *(__int64 **)(*i + 8) == i )
      {
        v22 = (__int64 **)i[1];
        if ( *v22 == i )
        {
          *v22 = v21;
          v21[1] = (__int64)v22;
          DXGSHAREDPOWERREGISTRATIONOBJECT::`scalar deleting destructor'((DXGSHAREDPOWERINUSELISTOBJECT *)i);
          DXGADAPTER::SetPowerComponentIdleCB(a2, a4);
          goto LABEL_29;
        }
      }
    }
    __fastfail(3u);
  }
  v10 = -1073741130;
LABEL_29:
  ExReleasePushLockSharedEx((char *)this + 1824, 0LL);
  KeLeaveCriticalRegion();
  DXGFASTMUTEX::Release(v5);
  return v10;
}
