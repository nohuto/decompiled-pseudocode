/*
 * XREFs of ?DeferredInitialize@DXGGLOBAL@@QEAAJI@Z @ 0x1C02181B8
 * Callers:
 *     ?Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z @ 0x1C01FECEC (-Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??0DXGPROCESSCALLOUTMUTEX@@QEAA@XZ @ 0x1C0009278 (--0DXGPROCESSCALLOUTMUTEX@@QEAA@XZ.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000F574 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000F5FC (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?GetCurrent@ITERATOR@?$DXGNODELIST@VDXGGLOBAL@@VDXGPROCESS@@@@QEBAPEAVDXGPROCESS@@XZ @ 0x1C002A274 (-GetCurrent@ITERATOR@-$DXGNODELIST@VDXGGLOBAL@@VDXGPROCESS@@@@QEBAPEAVDXGPROCESS@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     ?DeferredInitialize@DXGPROCESS@@QEAAJI@Z @ 0x1C018A070 (-DeferredInitialize@DXGPROCESS@@QEAAJI@Z.c)
 *     ?Initialize@DXGMMS_EXPORT@@QEAAJI@Z @ 0x1C0218360 (-Initialize@DXGMMS_EXPORT@@QEAAJI@Z.c)
 */

__int64 __fastcall DXGGLOBAL::DeferredInitialize(DXGGLOBAL *this, unsigned int a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rsi
  __int64 v6; // rax
  __int64 v7; // rbx
  int v8; // eax
  __int64 v9; // r14
  int v10; // eax
  _QWORD *v11; // rdi
  DXGPROCESS *Current; // rax
  int v13; // ebx
  const wchar_t *v15; // r9
  int v16; // edx
  _BYTE v17[16]; // [rsp+50h] [rbp-38h] BYREF
  _QWORD v18[2]; // [rsp+60h] [rbp-28h] BYREF

  v4 = a2;
  if ( DXGGLOBAL::m_pDxgmmsExport[a2] )
    return 0LL;
  v6 = operator new[](0x50uLL, 0x4B677844u, 64LL, a4);
  v7 = v6;
  if ( !v6 )
  {
    v13 = -1073741801;
    WdLogSingleEntry2(6LL, v4, -1073741801LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      -1,
      (__int64)L"Failed the allocate m_pDxgmmsExport (%d), returning 0x%I64x",
      v4,
      -1073741801LL,
      0LL,
      0LL,
      0LL);
    return (unsigned int)v13;
  }
  *(_BYTE *)v6 = 0;
  *(_QWORD *)(v6 + 64) = 0LL;
  *(_QWORD *)(v6 + 72) = 0LL;
  *(_OWORD *)(v6 + 8) = 0LL;
  *(_OWORD *)(v6 + 24) = 0LL;
  *(_OWORD *)(v6 + 40) = 0LL;
  *(_QWORD *)(v6 + 56) = 0LL;
  v8 = DXGMMS_EXPORT::Initialize((DXGMMS_EXPORT *)v6, v4);
  v9 = v8;
  if ( v8 < 0 )
  {
    WdLogSingleEntry2(6LL, v4, v8);
    v15 = L"Failed the initialize m_pDxgmmsExport (%d), returning 0x%I64x";
    v16 = 262145;
  }
  else
  {
    v10 = (*(__int64 (**)(void))(*(_QWORD *)(*(_QWORD *)(v7 + 72) + 8LL) + 8LL))();
    v9 = v10;
    if ( v10 >= 0 )
    {
      DXGPROCESSCALLOUTMUTEX::DXGPROCESSCALLOUTMUTEX((DXGPROCESSCALLOUTMUTEX *)v17);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v17);
      DXGGLOBAL::m_pDxgmmsExport[v4] = v7;
      *((_QWORD *)this + v4 + 32) = *(_QWORD *)(v7 + 72);
      *((_QWORD *)this + v4 + 34) = *(_QWORD *)(v7 + 64);
      KeEnterCriticalRegion();
      ExAcquirePushLockSharedEx((char *)this + 432, 0LL);
      v11 = (_QWORD *)*((_QWORD *)this + 52);
      v18[0] = (char *)this + 416;
      while ( 1 )
      {
        v18[1] = v11;
        Current = (DXGPROCESS *)DXGNODELIST<DXGGLOBAL,DXGPROCESS>::ITERATOR::GetCurrent(v18);
        if ( !Current )
          break;
        v13 = DXGPROCESS::DeferredInitialize(Current, v4);
        if ( v13 < 0 )
        {
          ExReleasePushLockSharedEx((char *)this + 432, 0LL);
          KeLeaveCriticalRegion();
          goto LABEL_12;
        }
        v11 = (_QWORD *)*v11;
      }
      ExReleasePushLockSharedEx((char *)this + 432, 0LL);
      KeLeaveCriticalRegion();
      v13 = DXGPROCESS::DeferredInitialize(*((DXGPROCESS **)this + 175), v4);
      if ( v13 >= 0 )
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v17);
LABEL_12:
      if ( v17[8] )
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v17);
      return (unsigned int)v13;
    }
    WdLogSingleEntry2(2LL, v4, v10);
    v15 = L"Failed the VidMmInitGlobals initialize m_pDxgmmsExport (%d), returning 0x%I64x";
    v16 = 0x40000;
  }
  DxgkLogInternalTriageEvent(0LL, v16, -1, (__int64)v15, v4, v9, 0LL, 0LL, 0LL);
  return (unsigned int)v9;
}
