/*
 * XREFs of ?EnsurePriviledgedDmaPool@DXGCONTEXT@@QEAAJII@Z @ 0x1C014FDBC
 * Callers:
 *     ?Initialize@DXGCONTEXT@@QEAAJPEAXI@Z @ 0x1C00F2188 (-Initialize@DXGCONTEXT@@QEAAJPEAXI@Z.c)
 * Callees:
 *     ??_GDXGDEVICESYNCOBJECT@@QEAAPEAXI@Z @ 0x1C0008268 (--_GDXGDEVICESYNCOBJECT@@QEAAPEAXI@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000A650 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C000EB44 (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C000EC34 (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z @ 0x1C000EC88 (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026570 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0026840 (memset.c)
 *     ?CreateSyncObject@DXGGLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@IPEAU_D3DDDI_SYNCHRONIZATIONOBJECTINFO2@@U_VIDSCH_SYNC_OBJECT_CLIENTHINT@@_NPEAVDXGPAGINGQUEUE@@PEAPEAVDXGSYNCOBJECT@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEAPEAVDXGADAPTERSYNCOBJECT@@@Z @ 0x1C01120E0 (-CreateSyncObject@DXGGLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@IPEAU_D3DDDI_SYNCHRONIZATIO.c)
 */

__int64 __fastcall DXGCONTEXT::EnsurePriviledgedDmaPool(DXGCONTEXT *this, int a2, int a3)
{
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rbx
  int v10; // eax
  __int64 v12; // rax
  DXGDEVICESYNCOBJECT *v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  PERESOURCE *Global; // rax
  __int64 v17; // rdx
  struct DXGDEVICE *v18; // rdi
  __int64 v19; // rcx
  unsigned int v20; // r14d
  struct ADAPTER_RENDER *v21; // rsi
  __int64 v22; // rdx
  struct DXGGLOBAL *v23; // rax
  int SyncObject; // eax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // rax
  __int64 v29; // rdx
  char v30; // [rsp+20h] [rbp-B8h]
  _BYTE v31[8]; // [rsp+60h] [rbp-78h] BYREF
  char v32; // [rsp+68h] [rbp-70h]
  _QWORD v33[10]; // [rsp+70h] [rbp-68h] BYREF

  if ( *((_QWORD *)this + 29) )
    return 0LL;
  v30 = 1;
  v6 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, DXGCONTEXT *, char, _DWORD, int, int, _DWORD, _DWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 640LL) + 8LL) + 440LL))(
         *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 648LL),
         *((unsigned int *)this + 104),
         *(_QWORD *)(*((_QWORD *)this + 2) + 760LL),
         this,
         v30,
         *((_DWORD *)this + 50),
         a2,
         a3,
         *((_DWORD *)this + 51),
         *((_DWORD *)this + 52));
  *((_QWORD *)this + 29) = v6;
  if ( v6 )
  {
    LODWORD(v9) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                             + 640LL)
                                                                 + 8LL)
                                                     + 448LL))(v6);
    if ( (int)v9 >= 0 )
    {
      v10 = *((_DWORD *)this + 105);
      *((_DWORD *)this + 53) = a2;
      *((_DWORD *)this + 54) = a3;
      if ( (v10 & 0x10) == 0 )
        return 0LL;
      memset(v33, 0, sizeof(v33));
      LODWORD(v33[0]) = 5;
      *((_QWORD *)this + 31) = 0LL;
      v33[1] = 0LL;
      Global = (PERESOURCE *)DXGGLOBAL::GetGlobal(v15, v14);
      DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v31, Global, 0);
      DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)v31, v17);
      v18 = (struct DXGDEVICE *)*((_QWORD *)this + 2);
      v19 = *((unsigned int *)this + 104);
      v20 = 1 << v19;
      v21 = (struct ADAPTER_RENDER *)*((_QWORD *)v18 + 2);
      v23 = DXGGLOBAL::GetGlobal(v19, v22);
      SyncObject = DXGGLOBAL::CreateSyncObject(
                     (__int64)v23,
                     v21,
                     v18,
                     v20,
                     (__int64)v33,
                     4u,
                     0,
                     0LL,
                     0LL,
                     (struct DXGDEVICESYNCOBJECT **)this + 30,
                     0LL,
                     0LL);
      v9 = SyncObject;
      if ( SyncObject >= 0 )
      {
        if ( v32 )
          DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v31, v25);
        return 0LL;
      }
      v28 = WdLogNewEntry5_WdWarning(v26, v25, v27);
      *(_QWORD *)(v28 + 24) = this;
      *(_QWORD *)(v28 + 32) = v9;
      WdLogEvent5_WdWarning(v28);
      if ( v32 )
        DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v31, v29);
    }
  }
  else
  {
    v12 = WdLogNewEntry5_WdWarning(v7, 0LL, v8);
    LODWORD(v9) = -1073741801;
    *(_QWORD *)(v12 + 24) = this;
    *(_QWORD *)(v12 + 32) = -1073741801LL;
    WdLogEvent5_WdWarning(v12);
  }
  v13 = (DXGDEVICESYNCOBJECT *)*((_QWORD *)this + 30);
  if ( v13 )
  {
    DXGDEVICESYNCOBJECT::`scalar deleting destructor'(v13);
    *((_QWORD *)this + 30) = 0LL;
  }
  if ( *((_QWORD *)this + 29) )
  {
    (*(void (**)(void))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 640LL) + 8LL) + 456LL))();
    *((_QWORD *)this + 29) = 0LL;
  }
  return (unsigned int)v9;
}
