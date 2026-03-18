/*
 * XREFs of ?ReleaseComponentReferencesHelper@DXGGLOBAL@@QEAAXXZ @ 0x1C0269DB0
 * Callers:
 *     ?CsExitInitiatedReleaseComponentReferencesPassiveLevel@@YAXPEAX@Z @ 0x1C0267770 (-CsExitInitiatedReleaseComponentReferencesPassiveLevel@@YAXPEAX@Z.c)
 *     ?CsExitInitiatedWnfCallbackInternal@DXGGLOBAL@@QEAAX_K_J@Z @ 0x1C02678B8 (-CsExitInitiatedWnfCallbackInternal@DXGGLOBAL@@QEAAX_K_J@Z.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002808 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002BB0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0003F80 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0006598 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C00072C8 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C00073A8 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0009A9C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     __security_check_cookie @ 0x1C00243B0 (__security_check_cookie.c)
 *     ?SetPowerComponentIdleCBInternal@DXGADAPTER@@QEAAXIK@Z @ 0x1C0038764 (-SetPowerComponentIdleCBInternal@DXGADAPTER@@QEAAXIK@Z.c)
 */

void __fastcall DXGGLOBAL::ReleaseComponentReferencesHelper(DXGGLOBAL *this)
{
  volatile signed __int32 **v1; // r14
  __int64 v2; // rdx
  signed __int64 v3; // rcx
  __int64 v4; // r8
  volatile signed __int32 *v5; // rdi
  volatile signed __int32 *v6; // rbx
  signed __int64 v7; // rax
  signed __int64 v8; // rtt
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rsi
  unsigned int i; // esi
  __int64 v15; // rax
  __int64 v16; // rax
  _BYTE v17[16]; // [rsp+20h] [rbp-B8h] BYREF
  _BYTE v18[144]; // [rsp+30h] [rbp-A8h] BYREF

  v1 = (volatile signed __int32 **)((char *)this + 664);
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v17, (DXGGLOBAL *)((char *)this + 584), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v17);
  v5 = *v1;
  while ( v5 != (volatile signed __int32 *)v1 && v5 )
  {
    v6 = v5;
    v5 = *(volatile signed __int32 **)v5;
    if ( *((_DWORD *)v6 + 870) )
    {
      _m_prefetchw((const void *)(v6 + 6));
      v7 = *((_QWORD *)v6 + 3);
      while ( v7 )
      {
        v3 = v7 + 1;
        v8 = v7;
        v7 = _InterlockedCompareExchange64((volatile signed __int64 *)v6 + 3, v7 + 1, v7);
        if ( v8 == v7 )
        {
          LOBYTE(v7) = 1;
          break;
        }
      }
      if ( (_BYTE)v7 )
      {
        COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v18, (struct DXGADAPTER *const)v6, 0LL);
        DXGADAPTER::ReleaseReference((DXGADAPTER *)v6);
        v9 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v18, 0LL);
        v13 = v9;
        if ( v9 < 0 )
        {
          v15 = WdLogNewEntry5_WdWarning(v11, v10, v12);
          *(_QWORD *)(v15 + 24) = v6;
          *(_QWORD *)(v15 + 32) = v13;
          WdLogEvent5_WdWarning(v15);
        }
        else
        {
          for ( i = 0; i < *((_DWORD *)v6 + 736); ++i )
          {
            if ( !*(_DWORD *)(520LL * i + *((_QWORD *)v6 + 350) + 208) )
              DXGADAPTER::SetPowerComponentIdleCBInternal((DXGADAPTER *)v6, i, 0);
          }
          _InterlockedDecrement(v6 + 870);
        }
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v18, v10);
      }
      else
      {
        v16 = WdLogNewEntry5_WdWarning(v3, v2, v4);
        *(_QWORD *)(v16 + 24) = v6;
        WdLogEvent5_WdWarning(v16);
      }
    }
  }
  if ( v17[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v17, v2);
}
