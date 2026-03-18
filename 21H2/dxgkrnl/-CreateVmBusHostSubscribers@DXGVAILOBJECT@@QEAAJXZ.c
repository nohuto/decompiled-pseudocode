/*
 * XREFs of ?CreateVmBusHostSubscribers@DXGVAILOBJECT@@QEAAJXZ @ 0x1C0350B5C
 * Callers:
 *     NtDxgkVailConnect @ 0x1C0353FA0 (NtDxgkVailConnect.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000C3F8 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C000D990 (--_V@YAXPEAX@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000F574 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000F5FC (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     ?Initialize@DXG_HOST_COMPOSITIONOBJECTCHANNEL@@QEAAJPEAVDXGVMBUSCHANNEL@@@Z @ 0x1C02DFAD0 (-Initialize@DXG_HOST_COMPOSITIONOBJECTCHANNEL@@QEAAJPEAVDXGVMBUSCHANNEL@@@Z.c)
 *     ??0DXG_HOST_REMOTEOBJECTCHANNEL@@QEAA@PEAX0PEAU_EPROCESS@@@Z @ 0x1C034FDC8 (--0DXG_HOST_REMOTEOBJECTCHANNEL@@QEAA@PEAX0PEAU_EPROCESS@@@Z.c)
 *     ?AllocateDefaultSecurityDescriptor@DXGVAILOBJECT@@SAJKPEAPEAX@Z @ 0x1C03500A4 (-AllocateDefaultSecurityDescriptor@DXGVAILOBJECT@@SAJKPEAPEAX@Z.c)
 *     ?AllocateResourceSecurityDescriptor@DXGVAILOBJECT@@QEAAJEKPEAPEAX@Z @ 0x1C0350290 (-AllocateResourceSecurityDescriptor@DXGVAILOBJECT@@QEAAJEKPEAPEAX@Z.c)
 *     ?RegisterSubscriber@DXGVMBUSCHANNEL@@QEAAJIPEAUIDXGCHANNELSUBSCRIBER@@PEAPEAUIDXGCHANNEL@@@Z @ 0x1C0356550 (-RegisterSubscriber@DXGVMBUSCHANNEL@@QEAAJIPEAUIDXGCHANNELSUBSCRIBER@@PEAPEAUIDXGCHANNEL@@@Z.c)
 */

__int64 __fastcall DXGVAILOBJECT::CreateVmBusHostSubscribers(DXGVAILOBJECT *this)
{
  __int64 v2; // rcx
  int DefaultSecurityDescriptor; // eax
  int v4; // ebx
  void *v5; // rsi
  int v6; // eax
  __int64 v7; // r9
  void *v8; // r15
  DXG_HOST_REMOTEOBJECTCHANNEL *v9; // rax
  DXG_HOST_REMOTEOBJECTCHANNEL *v10; // rax
  int v11; // eax
  int v12; // eax
  __int64 v13; // r9
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rdx
  void *v17; // r14
  struct DXGVMBUSCHANNEL *v18; // rdx
  int v19; // eax
  __int64 v20; // rcx
  __int64 v21; // rcx
  char v22; // bl
  char v23; // al
  _BYTE v25[16]; // [rsp+20h] [rbp-10h] BYREF
  void *v26; // [rsp+70h] [rbp+40h] BYREF
  void *v27; // [rsp+78h] [rbp+48h] BYREF
  void *v28; // [rsp+80h] [rbp+50h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v25, (DXGVAILOBJECT *)((char *)this + 40), 1);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v25);
  v2 = *((_QWORD *)this + 15);
  if ( !v2 && !*((_QWORD *)this + 16) )
  {
    v26 = 0LL;
    v28 = 0LL;
    v27 = 0LL;
    DefaultSecurityDescriptor = DXGVAILOBJECT::AllocateDefaultSecurityDescriptor(0x20000u, (struct _ACL **)&v26);
    v4 = DefaultSecurityDescriptor;
    if ( DefaultSecurityDescriptor < 0 )
    {
      WdLogSingleEntry1(3LL, DefaultSecurityDescriptor);
      v5 = v26;
LABEL_24:
      if ( v5 )
        operator delete[](v5);
LABEL_26:
      if ( v4 >= 0 )
        goto LABEL_34;
      goto LABEL_27;
    }
    v6 = DXGVAILOBJECT::AllocateResourceSecurityDescriptor(this, 0, 0x10000000u, &v28);
    v4 = v6;
    if ( v6 < 0 )
    {
      WdLogSingleEntry1(3LL, v6);
      v5 = v26;
      v8 = v28;
      goto LABEL_22;
    }
    v9 = (DXG_HOST_REMOTEOBJECTCHANNEL *)operator new[](0x30uLL, 0x4B677844u, 256LL, v7);
    v5 = v26;
    v8 = v28;
    if ( v9 )
    {
      v10 = DXG_HOST_REMOTEOBJECTCHANNEL::DXG_HOST_REMOTEOBJECTCHANNEL(v9, v26, v28, *((struct _EPROCESS **)this + 13));
      *((_QWORD *)this + 15) = v10;
      if ( v10 )
      {
        v5 = 0LL;
        v8 = 0LL;
        v11 = DXGVMBUSCHANNEL::RegisterSubscriber(
                *((DXGVMBUSCHANNEL **)this + 14),
                0x6F746D72u,
                v10,
                (struct IDXGCHANNEL **)v10 + 1);
        v4 = v11;
        if ( v11 < 0 )
        {
          WdLogSingleEntry1(3LL, v11);
LABEL_27:
          v20 = *((_QWORD *)this + 15);
          if ( v20 )
          {
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 56LL))(v20);
            *((_QWORD *)this + 15) = 0LL;
          }
          v21 = *((_QWORD *)this + 16);
          if ( v21 )
          {
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 56LL))(v21);
            *((_QWORD *)this + 16) = 0LL;
          }
          goto LABEL_34;
        }
        v12 = DXGVAILOBJECT::AllocateResourceSecurityDescriptor(this, 1, 3u, &v27);
        v4 = v12;
        if ( v12 >= 0 )
        {
          v15 = operator new[](0x38uLL, 0x4B677844u, 256LL, v13);
          if ( v15 )
          {
            v16 = *((_QWORD *)this + 13);
            *(_QWORD *)v15 = &DXG_HOST_COMPOSITIONOBJECTCHANNEL::`vftable';
            v17 = 0LL;
            *(_QWORD *)(v15 + 48) = v27;
            *(_QWORD *)(v15 + 8) = 0LL;
            *(_WORD *)(v15 + 16) = 0;
            *(_QWORD *)(v15 + 24) = 0LL;
            *(_QWORD *)(v15 + 32) = 0LL;
            *(_QWORD *)(v15 + 40) = v16;
            v18 = (struct DXGVMBUSCHANNEL *)*((_QWORD *)this + 14);
            *((_QWORD *)this + 16) = v15;
            v19 = DXG_HOST_COMPOSITIONOBJECTCHANNEL::Initialize((struct _EPROCESS **)v15, v18);
            v4 = v19;
            if ( v19 >= 0 )
              goto LABEL_34;
            WdLogSingleEntry1(3LL, v19);
            goto LABEL_18;
          }
          v14 = -1073741801LL;
          *((_QWORD *)this + 16) = 0LL;
          v4 = -1073741801;
        }
        else
        {
          v14 = v12;
        }
        WdLogSingleEntry1(3LL, v14);
        v17 = v27;
LABEL_18:
        if ( !v17 )
          goto LABEL_26;
        operator delete[](v17);
        goto LABEL_22;
      }
    }
    else
    {
      *((_QWORD *)this + 15) = 0LL;
    }
    v4 = -1073741801;
    WdLogSingleEntry1(3LL, -1073741801LL);
LABEL_22:
    if ( v8 )
      operator delete[](v8);
    goto LABEL_24;
  }
  v22 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 64LL))(v2);
  v23 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 16) + 64LL))(*((_QWORD *)this + 16));
  if ( v22 || (v4 = -1073740528, v23) )
    v4 = 0;
LABEL_34:
  if ( v25[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v25);
  return (unsigned int)v4;
}
