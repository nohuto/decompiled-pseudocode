/*
 * XREFs of ?SetSharedPowerComponentState@DXGGLOBAL@@QEAAJQEAX0KE@Z @ 0x1C0267314
 * Callers:
 *     DxgSetSharedPowerComponentStateCB @ 0x1C024D510 (DxgSetSharedPowerComponentStateCB.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000A840 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C000BEAC (--3@YAXPEAX@Z.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000CE00 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000CEC0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000EB8C (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?SetPowerComponentActiveCB@DXGADAPTER@@QEAAXI@Z @ 0x1C003727C (-SetPowerComponentActiveCB@DXGADAPTER@@QEAAXI@Z.c)
 *     ?SetPowerComponentIdleCB@DXGADAPTER@@QEAAXI@Z @ 0x1C00378FC (-SetPowerComponentIdleCB@DXGADAPTER@@QEAAXI@Z.c)
 *     ??1DXGSHAREDPOWERINUSELISTOBJECT@@IEAA@XZ @ 0x1C0264290 (--1DXGSHAREDPOWERINUSELISTOBJECT@@IEAA@XZ.c)
 *     ?ValidateAdapterValidAndInRunningState@DXGGLOBAL@@QEAAEPEAVDXGADAPTER@@@Z @ 0x1C0267A68 (-ValidateAdapterValidAndInRunningState@DXGGLOBAL@@QEAAEPEAVDXGADAPTER@@@Z.c)
 */

__int64 __fastcall DXGGLOBAL::SetSharedPowerComponentState(
        DXGGLOBAL *this,
        DXGADAPTER *a2,
        __int64 *a3,
        unsigned int a4,
        unsigned __int8 a5)
{
  unsigned int v9; // ebx
  __int64 **v10; // rsi
  unsigned int v11; // ecx
  __int64 *v12; // rdx
  char v13; // al
  __int64 *i; // rcx
  _QWORD *v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rax
  __int64 *v21; // rcx
  __int64 v22; // rdx
  __int64 *v23; // rax
  __int64 **v24; // rdx
  void *v25; // rcx
  __int64 v26; // rdx
  struct _KTHREAD **v28; // [rsp+68h] [rbp+10h]
  unsigned __int16 v29; // [rsp+7Ah] [rbp+22h]

  v29 = HIWORD(a4);
  v28 = (struct _KTHREAD **)((char *)this + 472);
  v9 = 0;
  DXGFASTMUTEX::Acquire((DXGGLOBAL *)((char *)this + 472));
  DXGPUSHLOCK::AcquireShared((DXGGLOBAL *)((char *)this + 1536));
  v10 = (__int64 **)*((_QWORD *)this + 196);
  if ( DXGGLOBAL::ValidateAdapterValidAndInRunningState(this, a2) )
  {
    v11 = (unsigned __int16)a4 + *((unsigned __int16 *)a2 + v29 + 1396);
    if ( v11 >= *((_DWORD *)a2 + 730) || *(_DWORD *)(520LL * v11 + *((_QWORD *)a2 + 347) + 208) != 7 )
    {
LABEL_31:
      v9 = -1073741811;
      goto LABEL_32;
    }
    while ( 1 )
    {
      if ( v10 == (__int64 **)((char *)this + 1568) || !v10 )
        goto LABEL_31;
      if ( v10[4] == (__int64 *)a2 && v10[3] == a3 )
        break;
      v10 = (__int64 **)*v10;
    }
    v12 = v10[8];
    v13 = 0;
    for ( i = (__int64 *)*v12; i != v12; i = (__int64 *)*i )
    {
      if ( !i )
        goto LABEL_17;
      if ( *((_DWORD *)i + 6) == a4 )
      {
        v13 = 1;
        goto LABEL_17;
      }
    }
    i = 0LL;
LABEL_17:
    if ( a5 )
    {
      if ( v13 )
        goto LABEL_32;
      v15 = operator new[](0x20uLL, 0x4B677844u, PagedPool);
      if ( v15 )
      {
        v15[2] = this;
        *(_OWORD *)v15 = 0LL;
        *((_DWORD *)v15 + 6) = a4;
      }
      else
      {
        v15 = 0LL;
      }
      if ( !v15 )
      {
        v20 = WdLogNewEntry5_WdLowResource(v17, v16, v18, v19);
        *(_QWORD *)(v20 + 24) = 5708LL;
        WdLogEvent5_WdLowResource(v20);
        v9 = -1073741801;
        goto LABEL_32;
      }
      v21 = v10[8];
      v22 = *v21;
      if ( *(__int64 **)(*v21 + 8) == v21 )
      {
        *v15 = v22;
        v15[1] = v21;
        *(_QWORD *)(v22 + 8) = v15;
        *v21 = (__int64)v15;
        DXGADAPTER::SetPowerComponentActiveCB(a2, a4);
        goto LABEL_32;
      }
    }
    else
    {
      if ( !v13 )
        goto LABEL_32;
      v23 = (__int64 *)*i;
      if ( *(__int64 **)(*i + 8) == i )
      {
        v24 = (__int64 **)i[1];
        if ( *v24 == i )
        {
          *v24 = v23;
          v23[1] = (__int64)v24;
          DXGSHAREDPOWERINUSELISTOBJECT::~DXGSHAREDPOWERINUSELISTOBJECT((DXGSHAREDPOWERINUSELISTOBJECT *)i);
          operator delete(v25);
          DXGADAPTER::SetPowerComponentIdleCB(a2, a4);
          goto LABEL_32;
        }
      }
    }
    __fastfail(3u);
  }
  v9 = -1073741130;
LABEL_32:
  ExReleasePushLockSharedEx((char *)this + 1536, 0LL);
  KeLeaveCriticalRegion();
  DXGFASTMUTEX::Release(v28, v26);
  return v9;
}
