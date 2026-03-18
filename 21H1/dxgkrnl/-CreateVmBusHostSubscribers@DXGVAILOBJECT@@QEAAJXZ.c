/*
 * XREFs of ?CreateVmBusHostSubscribers@DXGVAILOBJECT@@QEAAJXZ @ 0x1C02B0400
 * Callers:
 *     NtDxgkVailConnect @ 0x1C02B3F90 (NtDxgkVailConnect.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x1C000A43C (--_V@YAXPEAX@Z.c)
 *     ??2@YAPEAX_KIHW4_POOL_TYPE@@@Z @ 0x1C000AE64 (--2@YAPEAX_KIHW4_POOL_TYPE@@@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000CF20 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000D070 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000DBC4 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026570 (_guard_dispatch_icall_nop.c)
 *     ?Initialize@DXG_HOST_COMPOSITIONOBJECTCHANNEL@@QEAAJPEAVDXGVMBUSCHANNEL@@@Z @ 0x1C0288618 (-Initialize@DXG_HOST_COMPOSITIONOBJECTCHANNEL@@QEAAJPEAVDXGVMBUSCHANNEL@@@Z.c)
 *     ?RegisterSubscriber@DXGVMBUSCHANNEL@@QEAAJIPEAUIDXGCHANNELSUBSCRIBER@@PEAPEAUIDXGCHANNEL@@@Z @ 0x1C02AF05C (-RegisterSubscriber@DXGVMBUSCHANNEL@@QEAAJIPEAUIDXGCHANNELSUBSCRIBER@@PEAPEAUIDXGCHANNEL@@@Z.c)
 *     ??0DXG_HOST_REMOTEOBJECTCHANNEL@@QEAA@PEAX0PEAU_EPROCESS@@@Z @ 0x1C02AF5E4 (--0DXG_HOST_REMOTEOBJECTCHANNEL@@QEAA@PEAX0PEAU_EPROCESS@@@Z.c)
 *     ?AllocateDefaultSecurityDescriptor@DXGVAILOBJECT@@SAJKPEAPEAX@Z @ 0x1C02AF8BC (-AllocateDefaultSecurityDescriptor@DXGVAILOBJECT@@SAJKPEAPEAX@Z.c)
 *     ?AllocateResourceSecurityDescriptor@DXGVAILOBJECT@@QEAAJEKPEAPEAX@Z @ 0x1C02AFAA4 (-AllocateResourceSecurityDescriptor@DXGVAILOBJECT@@QEAAJEKPEAPEAX@Z.c)
 */

__int64 __fastcall DXGVAILOBJECT::CreateVmBusHostSubscribers(DXGVAILOBJECT *this)
{
  __int64 v2; // rcx
  int DefaultSecurityDescriptor; // eax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // rbx
  __int64 v8; // rax
  __int64 v9; // rdx
  void *v10; // r15
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rax
  void *v16; // r12
  DXG_HOST_REMOTEOBJECTCHANNEL *v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  DXG_HOST_REMOTEOBJECTCHANNEL *v21; // rax
  __int64 v22; // rax
  int v23; // eax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // rax
  int v28; // eax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // rax
  void *v33; // r14
  _QWORD *v34; // rax
  void **v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // rax
  int v39; // eax
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // rcx
  __int64 v43; // rcx
  char v44; // bl
  char v45; // al
  _BYTE v47[16]; // [rsp+20h] [rbp-10h] BYREF
  void *v48; // [rsp+70h] [rbp+40h] BYREF
  void *v49; // [rsp+78h] [rbp+48h] BYREF
  void *v50; // [rsp+80h] [rbp+50h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v47, (DXGVAILOBJECT *)((char *)this + 40), 1);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v47);
  v2 = *((_QWORD *)this + 14);
  if ( !v2 && !*((_QWORD *)this + 15) )
  {
    v48 = 0LL;
    v49 = 0LL;
    v50 = 0LL;
    DefaultSecurityDescriptor = DXGVAILOBJECT::AllocateDefaultSecurityDescriptor(0x20000u, (struct _ACL **)&v48);
    v7 = DefaultSecurityDescriptor;
    if ( DefaultSecurityDescriptor >= 0 )
    {
      v11 = DXGVAILOBJECT::AllocateResourceSecurityDescriptor(this, 0, 0x10000000u, &v49);
      v7 = v11;
      if ( v11 >= 0 )
      {
        v17 = (DXG_HOST_REMOTEOBJECTCHANNEL *)operator new(0x30uLL, 0x4B677844u, 1, PagedPool);
        v10 = v48;
        v16 = v49;
        if ( v17 )
          v21 = DXG_HOST_REMOTEOBJECTCHANNEL::DXG_HOST_REMOTEOBJECTCHANNEL(
                  v17,
                  v48,
                  v49,
                  *((struct _EPROCESS **)this + 12));
        else
          v21 = 0LL;
        *((_QWORD *)this + 14) = v21;
        if ( v21 )
        {
          v10 = 0LL;
          v16 = 0LL;
          v23 = DXGVMBUSCHANNEL::RegisterSubscriber(
                  *((DXGVMBUSCHANNEL **)this + 13),
                  0x6F746D72u,
                  v21,
                  (struct IDXGCHANNEL **)v21 + 1);
          v7 = v23;
          if ( v23 < 0 )
          {
            v27 = WdLogNewEntry5_WdWarning(v25, v24, v26);
            *(_QWORD *)(v27 + 24) = v7;
            WdLogEvent5_WdWarning(v27);
LABEL_30:
            if ( (int)v7 < 0 )
            {
              v42 = *((_QWORD *)this + 14);
              if ( v42 )
              {
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v42 + 56LL))(v42);
                *((_QWORD *)this + 14) = 0LL;
              }
              v43 = *((_QWORD *)this + 15);
              if ( v43 )
              {
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v43 + 56LL))(v43);
                *((_QWORD *)this + 15) = 0LL;
              }
            }
            goto LABEL_38;
          }
          v28 = DXGVAILOBJECT::AllocateResourceSecurityDescriptor(this, 1, 3u, &v50);
          v7 = v28;
          if ( v28 >= 0 )
          {
            v34 = operator new(0x38uLL, 0x4B677844u, 1, PagedPool);
            v33 = v50;
            if ( v34 )
            {
              v36 = *((_QWORD *)this + 12);
              v35 = &DXG_HOST_COMPOSITIONOBJECTCHANNEL::`vftable';
              *v34 = &DXG_HOST_COMPOSITIONOBJECTCHANNEL::`vftable';
              v34[5] = v36;
              v34[1] = 0LL;
              *((_WORD *)v34 + 8) = 0;
              v34[3] = 0LL;
              v34[4] = 0LL;
              v34[6] = v33;
            }
            else
            {
              v34 = 0LL;
            }
            *((_QWORD *)this + 15) = v34;
            if ( v34 )
            {
              v33 = 0LL;
              v39 = DXG_HOST_COMPOSITIONOBJECTCHANNEL::Initialize(
                      (struct _EPROCESS **)v34,
                      *((struct DXGVMBUSCHANNEL **)this + 13));
              v7 = v39;
              if ( v39 >= 0 )
                goto LABEL_38;
              v38 = WdLogNewEntry5_WdWarning(v40, v9, v41);
              *(_QWORD *)(v38 + 24) = v7;
            }
            else
            {
              LODWORD(v7) = -1073741801;
              v38 = WdLogNewEntry5_WdWarning(v36, v35, v37);
              *(_QWORD *)(v38 + 24) = -1073741801LL;
            }
            WdLogEvent5_WdWarning(v38);
          }
          else
          {
            v32 = WdLogNewEntry5_WdWarning(v30, v29, v31);
            *(_QWORD *)(v32 + 24) = v7;
            WdLogEvent5_WdWarning(v32);
            v33 = v50;
          }
          if ( !v33 )
            goto LABEL_30;
          operator delete[](v33);
        }
        else
        {
          LODWORD(v7) = -1073741801;
          v22 = WdLogNewEntry5_WdWarning(v19, v18, v20);
          *(_QWORD *)(v22 + 24) = -1073741801LL;
          WdLogEvent5_WdWarning(v22);
        }
      }
      else
      {
        v15 = WdLogNewEntry5_WdWarning(v13, v12, v14);
        *(_QWORD *)(v15 + 24) = v7;
        WdLogEvent5_WdWarning(v15);
        v10 = v48;
        v16 = v49;
      }
      if ( v16 )
        operator delete[](v16);
    }
    else
    {
      v8 = WdLogNewEntry5_WdWarning(v5, v4, v6);
      *(_QWORD *)(v8 + 24) = v7;
      WdLogEvent5_WdWarning(v8);
      v10 = v48;
    }
    if ( v10 )
      operator delete[](v10);
    goto LABEL_30;
  }
  v44 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 64LL))(v2);
  v45 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 15) + 64LL))(*((_QWORD *)this + 15));
  if ( v44 || (LODWORD(v7) = -1073740528, v45) )
    LODWORD(v7) = 0;
LABEL_38:
  if ( v47[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v47, v9);
  return (unsigned int)v7;
}
