/*
 * XREFs of ?CreateVmBusGuestSubscribers@DXGVAILGUESTOBJECT@@IEAAJXZ @ 0x1C02B4788
 * Callers:
 *     ?Initialize@DXGVAILGUESTOBJECT@@QEAAJXZ @ 0x1C02B5140 (-Initialize@DXGVAILGUESTOBJECT@@QEAAJXZ.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002808 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002BB0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??2@YAPEAX_KIHW4_POOL_TYPE@@@Z @ 0x1C0004548 (--2@YAPEAX_KIHW4_POOL_TYPE@@@Z.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0006598 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00271E0 (_guard_dispatch_icall_nop.c)
 *     ?RegisterSubscriber@DXGVMBUSCHANNEL@@QEAAJIPEAUIDXGCHANNELSUBSCRIBER@@PEAPEAUIDXGCHANNEL@@@Z @ 0x1C02B359C (-RegisterSubscriber@DXGVMBUSCHANNEL@@QEAAJIPEAUIDXGCHANNELSUBSCRIBER@@PEAPEAUIDXGCHANNEL@@@Z.c)
 */

__int64 __fastcall DXGVAILGUESTOBJECT::CreateVmBusGuestSubscribers(DXGVAILGUESTOBJECT *this)
{
  __int64 v2; // rdx
  PVOID v3; // rax
  __int64 v4; // rdx
  void **v5; // rcx
  __int64 v6; // r8
  __int64 v7; // rdi
  __int64 v8; // rax
  int v9; // eax
  __int64 v10; // rcx
  __int64 v11; // r8
  _QWORD *v12; // rax
  void **v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rax
  int v16; // eax
  __int64 v17; // rcx
  __int64 v18; // rcx
  _BYTE v20[24]; // [rsp+20h] [rbp-18h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v20, (DXGVAILGUESTOBJECT *)((char *)this + 16), 1);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v20);
  if ( *(_OWORD *)((char *)this + 72) != 0LL )
  {
    LODWORD(v7) = -1073740528;
    goto LABEL_20;
  }
  v3 = operator new(0x18uLL, 0x4B677844u, 1, PagedPool);
  if ( v3 )
  {
    *((_QWORD *)v3 + 1) = 0LL;
    v5 = &DXG_GUEST_REMOTEOBJECTCHANNEL::`vftable';
    *((_WORD *)v3 + 8) = 0;
    *(_QWORD *)v3 = &DXG_GUEST_REMOTEOBJECTCHANNEL::`vftable';
  }
  *((_QWORD *)this + 9) = v3;
  if ( v3 )
  {
    v9 = DXGVMBUSCHANNEL::RegisterSubscriber(
           *((DXGVMBUSCHANNEL **)this + 8),
           0x6F746D72u,
           (struct IDXGCHANNELSUBSCRIBER *)v3,
           (struct IDXGCHANNEL **)v3 + 1);
    v7 = v9;
    if ( v9 >= 0 )
    {
      v12 = operator new(0x18uLL, 0x4B677844u, 1, PagedPool);
      if ( v12 )
      {
        v12[1] = 0LL;
        v13 = &DXG_GUEST_COMPOSITIONOBJECTCHANNEL::`vftable';
        *((_WORD *)v12 + 8) = 0;
        *v12 = &DXG_GUEST_COMPOSITIONOBJECTCHANNEL::`vftable';
      }
      *((_QWORD *)this + 10) = v12;
      if ( !v12 )
      {
        LODWORD(v7) = -1073741801;
        v15 = WdLogNewEntry5_WdWarning(v13, v2, v14);
        *(_QWORD *)(v15 + 24) = -1073741801LL;
        WdLogEvent5_WdWarning(v15);
      }
      if ( (int)v7 < 0 )
        goto LABEL_15;
      v16 = DXGVMBUSCHANNEL::RegisterSubscriber(
              *((DXGVMBUSCHANNEL **)this + 8),
              0x706D6F63u,
              *((struct IDXGCHANNELSUBSCRIBER **)this + 10),
              (struct IDXGCHANNEL **)(*((_QWORD *)this + 10) + 8LL));
      v7 = v16;
      if ( v16 >= 0 )
        goto LABEL_20;
    }
    v8 = WdLogNewEntry5_WdWarning(v10, v2, v11);
    *(_QWORD *)(v8 + 24) = v7;
  }
  else
  {
    LODWORD(v7) = -1073741801;
    v8 = WdLogNewEntry5_WdWarning(v5, v4, v6);
    *(_QWORD *)(v8 + 24) = -1073741801LL;
  }
  WdLogEvent5_WdWarning(v8);
LABEL_15:
  v17 = *((_QWORD *)this + 9);
  if ( v17 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 56LL))(v17);
    *((_QWORD *)this + 9) = 0LL;
  }
  v18 = *((_QWORD *)this + 10);
  if ( v18 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 56LL))(v18);
    *((_QWORD *)this + 10) = 0LL;
  }
LABEL_20:
  if ( v20[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v20, v2);
  return (unsigned int)v7;
}
