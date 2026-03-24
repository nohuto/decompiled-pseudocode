/*
 * XREFs of ?Initialize@DXGDEVICESYNCOBJECT@@QEAAJPEAVDXGSYNCOBJECT@@U_D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS@@I@Z @ 0x1C0115F28
 * Callers:
 *     ?Open@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEAPEAXPEA_KIPEAPEAVDXGADAPTERSYNCOBJECT@@_NU_D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS@@@Z @ 0x1C010F530 (-Open@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEA.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002848 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0002B1C (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002BF0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0002D2C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0004448 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C00044A0 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0006910 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?AddReference@DXGSYNCOBJECT@@QEAAJXZ @ 0x1C0026754 (-AddReference@DXGSYNCOBJECT@@QEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028C00 (_guard_dispatch_icall_nop.c)
 *     ?AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z @ 0x1C010C9A0 (-AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0115560 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z @ 0x1C01165B0 (-GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z.c)
 */

__int64 __fastcall DXGDEVICESYNCOBJECT::Initialize(
        DXGDEVICESYNCOBJECT *this,
        struct DXGSYNCOBJECT *a2,
        struct _D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS a3,
        int a4)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rax
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rsi
  __int64 v17; // rax
  __int64 v19; // rax
  __int64 v20; // rbx
  __int64 v21; // rax
  __int64 v22; // rbx
  __int64 v23; // rax
  int v24; // eax
  struct _VIDSCH_SYNC_OBJECT *VidSchSyncObject; // rbx
  _QWORD *v26; // rax
  __int64 v27; // rdx
  struct DXGPROCESS *Current; // rax
  struct DXGPROCESS *v29; // rbx
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v31; // rax
  unsigned int v32; // eax
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  unsigned int v36; // edx
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // r9
  int v40; // r8d
  _BYTE v41[8]; // [rsp+30h] [rbp-38h] BYREF
  char v42; // [rsp+38h] [rbp-30h]
  _BYTE v43[8]; // [rsp+40h] [rbp-28h] BYREF
  DXGPUSHLOCK *v44; // [rsp+48h] [rbp-20h]
  int v45; // [rsp+50h] [rbp-18h]

  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL)) )
  {
    v11 = WdLogNewEntry5_WdAssertion(v9, v8);
    *(_QWORD *)(v11 + 24) = 161LL;
    WdLogEvent5_WdAssertion(v11);
  }
  *((struct _D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS *)this + 18) = a3;
  *((_QWORD *)this + 4) = a2;
  v12 = DXGSYNCOBJECT::AddReference(a2, v8, v10);
  v16 = v12;
  if ( v12 < 0 )
  {
    v17 = WdLogNewEntry5_WdWarning(v14, v13, v15);
    *(_QWORD *)(v17 + 24) = this;
    *(_QWORD *)(v17 + 32) = v16;
    WdLogEvent5_WdWarning(v17);
    return (unsigned int)v16;
  }
  *((_BYTE *)this + 92) |= 1u;
  if ( !*((_BYTE *)a2 + 277) )
  {
    v16 = *((_QWORD *)this + 4);
    if ( (unsigned int)(*(_DWORD *)(v16 + 192) - 5) > 1 )
    {
      v19 = WdLogNewEntry5_WdAssertion(v14, v13);
      *(_QWORD *)(v19 + 24) = 376LL;
      WdLogEvent5_WdAssertion(v19);
    }
    LODWORD(v16) = (*(__int64 (__fastcall **)(_QWORD, __int64, char *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                              + 640LL)
                                                                                  + 8LL)
                                                                      + 936LL))(
                     *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 648LL),
                     v16 + 120,
                     (char *)this + 56);
    if ( (int)v16 < 0 )
      return (unsigned int)v16;
    if ( *(_BYTE *)&a3.0 >= 0 )
    {
      v20 = *((_QWORD *)this + 4);
      if ( (unsigned int)(*(_DWORD *)(v20 + 192) - 5) > 1 )
      {
        v21 = WdLogNewEntry5_WdAssertion(v14, v13);
        *(_QWORD *)(v21 + 24) = 376LL;
        WdLogEvent5_WdAssertion(v21);
      }
      LODWORD(v16) = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, char *, int))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 640LL)
                                                                                                 + 8LL)
                                                                                     + 944LL))(
                       *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 648LL),
                       *(_QWORD *)(*((_QWORD *)this + 2) + 760LL),
                       v20 + 120,
                       (char *)this + 48,
                       a4);
      if ( (int)v16 < 0 )
        return (unsigned int)v16;
    }
    v22 = *((_QWORD *)this + 4);
    if ( (unsigned int)(*(_DWORD *)(v22 + 192) - 5) > 1 )
    {
      v23 = WdLogNewEntry5_WdAssertion(v14, v13);
      *(_QWORD *)(v23 + 24) = 376LL;
      WdLogEvent5_WdAssertion(v23);
    }
    *((_QWORD *)this + 8) = *(_QWORD *)(v22 + 128);
    v24 = *((_DWORD *)this + 18);
    if ( (v24 & 0x10) == 0 && (v24 & 0x40) == 0 )
    {
      DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v41, (struct DXGFASTMUTEX *const)(*((_QWORD *)this + 4) + 32LL), 0);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v41);
      VidSchSyncObject = DXGSYNCOBJECT::GetVidSchSyncObject(
                           *((DXGSYNCOBJECT **)this + 4),
                           *(struct ADAPTER_RENDER **)(*((_QWORD *)this + 2) + 16LL));
      if ( VidSchSyncObject )
      {
        v26 = operator new[](0x18uLL, 0x4B677844u, (POOL_TYPE)512);
        *((_QWORD *)this + 3) = v26;
        if ( !v26 )
        {
          LODWORD(v16) = -1073741801;
          if ( v42 )
            DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v41, v27);
          return (unsigned int)v16;
        }
        *(_OWORD *)v26 = 0LL;
        v26[2] = 0LL;
        *(_QWORD *)(*((_QWORD *)this + 3) + 16LL) = VidSchSyncObject;
        (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                       + 616LL)
                                                           + 8LL)
                                               + 680LL))(
          *(_QWORD *)(*((_QWORD *)this + 2) + 768LL),
          *((_QWORD *)this + 3));
      }
      if ( v42 )
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v41, v13);
    }
  }
  if ( (*((_BYTE *)this + 92) & 4) != 0 )
  {
    Current = DXGPROCESS::GetCurrent(v14, v13);
    v29 = Current;
    v44 = (struct DXGPROCESS *)((char *)Current + 208);
    if ( Current != (struct DXGPROCESS *)-208LL )
    {
      CurrentThread = KeGetCurrentThread();
      if ( *((struct _KTHREAD **)Current + 27) == CurrentThread )
      {
        v31 = WdLogNewEntry5_WdAssertion(CurrentThread, (char *)Current + 208);
        *(_QWORD *)(v31 + 24) = 1571LL;
        WdLogEvent5_WdAssertion(v31);
      }
    }
    DXGPUSHLOCK::AcquireExclusive(v44);
    v45 = 2;
    v32 = HMGRTABLE::AllocHandle((unsigned int *)v29 + 60, (__int64)this, 11, 0, 0);
    *((_DWORD *)this + 10) = v32;
    v36 = v32;
    if ( !v32 )
    {
      v37 = WdLogNewEntry5_WdLowResource(v33, 0LL, v34, v35);
      LODWORD(v16) = -1073741801;
      *(_QWORD *)(v37 + 24) = this;
      *(_QWORD *)(v37 + 32) = -1073741801LL;
      WdLogEvent5_WdLowResource(v37);
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v43);
      return (unsigned int)v16;
    }
    v38 = (v32 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v38 < *((_DWORD *)v29 + 64) )
    {
      v39 = *((_QWORD *)v29 + 30);
      v40 = *(_DWORD *)(v39 + 16 * v38 + 8);
      if ( ((v36 >> 25) & 0x60) == (*(_BYTE *)(v39 + 16 * v38 + 8) & 0x60) && (v40 & 0x2000) == 0 && (v40 & 0x1F) != 0 )
        *(_DWORD *)(v39 + 16 * (((unsigned __int64)v36 >> 6) & 0xFFFFFF) + 8) |= 0x2000u;
    }
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v43);
  }
  return 0LL;
}
