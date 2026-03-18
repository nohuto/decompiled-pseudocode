/*
 * XREFs of ?CreateVmBusGuestSubscribers@DXGVAILGUESTOBJECT@@IEAAJXZ @ 0x1C03509EC
 * Callers:
 *     ?Initialize@DXGVAILGUESTOBJECT@@QEAAJXZ @ 0x1C0351404 (-Initialize@DXGVAILGUESTOBJECT@@QEAAJXZ.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000C3F8 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000F574 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000F5FC (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     ?RegisterSubscriber@DXGVMBUSCHANNEL@@QEAAJIPEAUIDXGCHANNELSUBSCRIBER@@PEAPEAUIDXGCHANNEL@@@Z @ 0x1C0356550 (-RegisterSubscriber@DXGVMBUSCHANNEL@@QEAAJIPEAUIDXGCHANNELSUBSCRIBER@@PEAPEAUIDXGCHANNEL@@@Z.c)
 */

__int64 __fastcall DXGVAILGUESTOBJECT::CreateVmBusGuestSubscribers(DXGVAILGUESTOBJECT *this)
{
  __int64 v2; // r9
  __int64 v3; // rax
  DXGVMBUSCHANNEL *v4; // rcx
  int v5; // eax
  __int64 v6; // r9
  __int64 v7; // rdi
  __int64 v8; // rdx
  __int64 v9; // rax
  DXGVMBUSCHANNEL *v10; // rcx
  int v11; // eax
  __int64 v12; // rcx
  __int64 v13; // rcx
  _BYTE v15[24]; // [rsp+20h] [rbp-18h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v15, (DXGVAILGUESTOBJECT *)((char *)this + 16), 1);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v15);
  if ( *((_OWORD *)this + 5) != 0LL )
  {
    LODWORD(v7) = -1073740528;
    goto LABEL_16;
  }
  v3 = operator new[](0x18uLL, 0x4B677844u, 256LL, v2);
  if ( !v3 )
  {
    *((_QWORD *)this + 10) = 0LL;
    goto LABEL_10;
  }
  *(_QWORD *)(v3 + 8) = 0LL;
  *(_QWORD *)v3 = &DXG_GUEST_REMOTEOBJECTCHANNEL::`vftable';
  *(_WORD *)(v3 + 16) = 0;
  v4 = (DXGVMBUSCHANNEL *)*((_QWORD *)this + 9);
  *((_QWORD *)this + 10) = v3;
  v5 = DXGVMBUSCHANNEL::RegisterSubscriber(
         v4,
         0x6F746D72u,
         (struct IDXGCHANNELSUBSCRIBER *)v3,
         (struct IDXGCHANNEL **)(v3 + 8));
  v7 = v5;
  if ( v5 >= 0 )
  {
    v9 = operator new[](0x18uLL, 0x4B677844u, 256LL, v6);
    if ( v9 )
    {
      *(_QWORD *)(v9 + 8) = 0LL;
      *(_QWORD *)v9 = &DXG_GUEST_COMPOSITIONOBJECTCHANNEL::`vftable';
      *(_WORD *)(v9 + 16) = 0;
      v10 = (DXGVMBUSCHANNEL *)*((_QWORD *)this + 9);
      *((_QWORD *)this + 11) = v9;
      v11 = DXGVMBUSCHANNEL::RegisterSubscriber(
              v10,
              0x706D6F63u,
              (struct IDXGCHANNELSUBSCRIBER *)v9,
              (struct IDXGCHANNEL **)(v9 + 8));
      v7 = v11;
      if ( v11 >= 0 )
        goto LABEL_16;
      goto LABEL_4;
    }
    *((_QWORD *)this + 11) = 0LL;
LABEL_10:
    v8 = -1073741801LL;
    LODWORD(v7) = -1073741801;
    goto LABEL_11;
  }
LABEL_4:
  v8 = v7;
LABEL_11:
  WdLogSingleEntry1(3LL, v8);
  v12 = *((_QWORD *)this + 10);
  if ( v12 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 56LL))(v12);
    *((_QWORD *)this + 10) = 0LL;
  }
  v13 = *((_QWORD *)this + 11);
  if ( v13 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 56LL))(v13);
    *((_QWORD *)this + 11) = 0LL;
  }
LABEL_16:
  if ( v15[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v15);
  return (unsigned int)v7;
}
