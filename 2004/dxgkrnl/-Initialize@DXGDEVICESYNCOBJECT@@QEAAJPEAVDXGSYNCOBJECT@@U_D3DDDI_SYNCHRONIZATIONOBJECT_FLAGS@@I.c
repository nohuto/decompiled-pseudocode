/*
 * XREFs of ?Initialize@DXGDEVICESYNCOBJECT@@QEAAJPEAVDXGSYNCOBJECT@@U_D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS@@I@Z @ 0x1C0113C80
 * Callers:
 *     ?Open@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEAPEAXPEA_KIPEAPEAVDXGADAPTERSYNCOBJECT@@_NU_D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS@@@Z @ 0x1C010E240 (-Open@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEA.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002808 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0002ADC (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002BB0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0002CEC (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0004298 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C00042F0 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00271E0 (_guard_dispatch_icall_nop.c)
 *     ?AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z @ 0x1C010B7A0 (-AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0113030 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z @ 0x1C0114208 (-GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z.c)
 */

__int64 __fastcall DXGDEVICESYNCOBJECT::Initialize(
        DXGDEVICESYNCOBJECT *this,
        struct DXGSYNCOBJECT *a2,
        struct _D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS a3,
        int a4)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rsi
  int v11; // esi
  __int64 v12; // rbx
  __int64 v13; // rbx
  int v14; // eax
  __int64 v15; // rax
  struct _KTHREAD *CurrentThread; // rcx
  struct _VIDSCH_SYNC_OBJECT *VidSchSyncObject; // rbx
  _QWORD *v18; // rax
  __int64 v19; // rdx
  struct DXGPROCESS *Current; // rax
  struct DXGPROCESS *v21; // rbx
  struct _KTHREAD *v22; // rcx
  unsigned int v23; // eax
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  unsigned int v27; // edx
  __int64 v28; // rax
  __int64 v29; // r9
  int v30; // r8d
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // [rsp+30h] [rbp-30h] BYREF
  char v41; // [rsp+38h] [rbp-28h]
  _BYTE v42[8]; // [rsp+40h] [rbp-20h] BYREF
  DXGPUSHLOCK *v43; // [rsp+48h] [rbp-18h]
  int v44; // [rsp+50h] [rbp-10h]

  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL)) )
  {
    v32 = WdLogNewEntry5_WdAssertion(v9, v8);
    *(_QWORD *)(v32 + 24) = 161LL;
    WdLogEvent5_WdAssertion(v32);
  }
  *((struct _D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS *)this + 18) = a3;
  *((_QWORD *)this + 4) = a2;
  _InterlockedIncrement((volatile signed __int32 *)a2 + 6);
  *((_BYTE *)this + 92) |= 1u;
  if ( !*((_BYTE *)a2 + 277) )
  {
    v10 = *((_QWORD *)this + 4);
    if ( (unsigned int)(*(_DWORD *)(v10 + 192) - 5) > 1 )
    {
      v33 = WdLogNewEntry5_WdAssertion(v9, v8);
      *(_QWORD *)(v33 + 24) = 353LL;
      WdLogEvent5_WdAssertion(v33);
    }
    v11 = (*(__int64 (__fastcall **)(_QWORD, __int64, char *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2)
                                                                                                 + 16LL)
                                                                                     + 640LL)
                                                                         + 8LL)
                                                             + 936LL))(
            *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 648LL),
            v10 + 120,
            (char *)this + 56);
    if ( v11 < 0 )
      return (unsigned int)v11;
    if ( *(_BYTE *)&a3.0 >= 0 )
    {
      v12 = *((_QWORD *)this + 4);
      if ( (unsigned int)(*(_DWORD *)(v12 + 192) - 5) > 1 )
      {
        v34 = WdLogNewEntry5_WdAssertion(v9, v8);
        *(_QWORD *)(v34 + 24) = 353LL;
        WdLogEvent5_WdAssertion(v34);
      }
      v11 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, char *, int))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 640LL)
                                                                                        + 8LL)
                                                                            + 944LL))(
              *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 648LL),
              *(_QWORD *)(*((_QWORD *)this + 2) + 760LL),
              v12 + 120,
              (char *)this + 48,
              a4);
      if ( v11 < 0 )
        return (unsigned int)v11;
    }
    v13 = *((_QWORD *)this + 4);
    if ( (unsigned int)(*(_DWORD *)(v13 + 192) - 5) > 1 )
    {
      v35 = WdLogNewEntry5_WdAssertion(v9, v8);
      *(_QWORD *)(v35 + 24) = 353LL;
      WdLogEvent5_WdAssertion(v35);
    }
    *((_QWORD *)this + 8) = *(_QWORD *)(v13 + 128);
    v14 = *((_DWORD *)this + 18);
    if ( (v14 & 0x10) == 0 && (v14 & 0x40) == 0 )
    {
      v15 = *((_QWORD *)this + 4);
      v41 = 0;
      v40 = v15 + 32;
      if ( v15 == -32 )
      {
        v36 = WdLogNewEntry5_WdAssertion(v9, v8);
        *(_QWORD *)(v36 + 24) = 762LL;
        WdLogEvent5_WdAssertion(v36);
      }
      CurrentThread = KeGetCurrentThread();
      if ( *(struct _KTHREAD **)(v40 + 16) == CurrentThread )
      {
        v37 = WdLogNewEntry5_WdAssertion(CurrentThread, v8);
        *(_QWORD *)(v37 + 24) = 769LL;
        WdLogEvent5_WdAssertion(v37);
      }
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v40);
      VidSchSyncObject = DXGSYNCOBJECT::GetVidSchSyncObject(
                           *((DXGSYNCOBJECT **)this + 4),
                           *(struct ADAPTER_RENDER **)(*((_QWORD *)this + 2) + 16LL));
      if ( VidSchSyncObject )
      {
        v18 = operator new[](0x18uLL, 0x4B677844u, (POOL_TYPE)512);
        *((_QWORD *)this + 3) = v18;
        if ( !v18 )
        {
          v11 = -1073741801;
          if ( v41 )
            DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&v40, v19);
          return (unsigned int)v11;
        }
        *(_OWORD *)v18 = 0LL;
        v18[2] = 0LL;
        *(_QWORD *)(*((_QWORD *)this + 3) + 16LL) = VidSchSyncObject;
        (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                       + 616LL)
                                                           + 8LL)
                                               + 680LL))(
          *(_QWORD *)(*((_QWORD *)this + 2) + 768LL),
          *((_QWORD *)this + 3));
      }
      if ( v41 )
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&v40, v8);
    }
  }
  if ( (*((_BYTE *)this + 92) & 4) == 0 )
    return 0LL;
  Current = DXGPROCESS::GetCurrent(v9, v8);
  v21 = Current;
  v43 = (struct DXGPROCESS *)((char *)Current + 208);
  if ( Current != (struct DXGPROCESS *)-208LL )
  {
    v22 = KeGetCurrentThread();
    if ( *((struct _KTHREAD **)Current + 27) == v22 )
    {
      v38 = WdLogNewEntry5_WdAssertion(v22, (char *)Current + 208);
      *(_QWORD *)(v38 + 24) = 1571LL;
      WdLogEvent5_WdAssertion(v38);
    }
  }
  DXGPUSHLOCK::AcquireExclusive(v43);
  v44 = 2;
  v23 = HMGRTABLE::AllocHandle((unsigned int *)v21 + 60, (__int64)this, 11, 0, 0);
  *((_DWORD *)this + 10) = v23;
  v27 = v23;
  if ( v23 )
  {
    v28 = (v23 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v28 < *((_DWORD *)v21 + 64) )
    {
      v29 = *((_QWORD *)v21 + 30);
      v30 = *(_DWORD *)(v29 + 16 * v28 + 8);
      if ( ((v27 >> 25) & 0x60) == (*(_BYTE *)(v29 + 16 * v28 + 8) & 0x60) && (v30 & 0x2000) == 0 && (v30 & 0x1F) != 0 )
        *(_DWORD *)(v29 + 16 * (((unsigned __int64)v27 >> 6) & 0xFFFFFF) + 8) |= 0x2000u;
    }
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v42);
    return 0LL;
  }
  v39 = WdLogNewEntry5_WdLowResource(v24, 0LL, v25, v26);
  v11 = -1073741801;
  *(_QWORD *)(v39 + 24) = this;
  *(_QWORD *)(v39 + 32) = -1073741801LL;
  WdLogEvent5_WdLowResource(v39);
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v42);
  return (unsigned int)v11;
}
