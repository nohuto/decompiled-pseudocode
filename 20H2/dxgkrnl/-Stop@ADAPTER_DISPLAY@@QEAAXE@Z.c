/*
 * XREFs of ?Stop@ADAPTER_DISPLAY@@QEAAXE@Z @ 0x1C0213FC8
 * Callers:
 *     ?Stop@DXGADAPTER@@QEAAXEE@Z @ 0x1C020E8D4 (-Stop@DXGADAPTER@@QEAAXEE@Z.c)
 * Callees:
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00029C0 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0002C20 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z @ 0x1C000D03C (-IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z.c)
 *     ?ReleaseAllVidPnSourceOwners@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z @ 0x1C014AB30 (-ReleaseAllVidPnSourceOwners@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z.c)
 *     ?Stop@DXGPROTECTEDSESSION@@QEAAXXZ @ 0x1C0287640 (-Stop@DXGPROTECTEDSESSION@@QEAAXXZ.c)
 *     ?CleanCachedIddDisplayConfigRequest@DXGSESSIONMGR@@QEAAJK@Z @ 0x1C029D2F4 (-CleanCachedIddDisplayConfigRequest@DXGSESSIONMGR@@QEAAJK@Z.c)
 */

void __fastcall ADAPTER_DISPLAY::Stop(ADAPTER_DISPLAY *this, struct _LUID *a2)
{
  PERESOURCE **v3; // rdx
  __int64 v4; // rdx
  _DWORD *i; // rax
  __int64 v6; // rdx
  DXGPROTECTEDSESSION *j; // rdi
  DXGADAPTER *v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  struct DXGGLOBAL *Global; // rax
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rdi
  __int64 v16; // rax
  unsigned int v17; // [rsp+48h] [rbp+10h] BYREF

  if ( !(_BYTE)a2 )
  {
    v3 = *(PERESOURCE ***)(*((_QWORD *)this + 2) + 2704LL);
    if ( !v3 )
      v3 = 0LL;
    ADAPTER_DISPLAY::ReleaseAllVidPnSourceOwners((PERESOURCE **)this, v3);
    DXGFASTMUTEX::Acquire((ADAPTER_DISPLAY *)((char *)this + 24));
    for ( i = (_DWORD *)*((_QWORD *)this + 8); i != (_DWORD *)((char *)this + 64) && i; i = *(_DWORD **)i )
      i[14] = 0;
    DXGFASTMUTEX::Release((struct _KTHREAD **)this + 3, v4);
    DXGFASTMUTEX::Acquire((ADAPTER_DISPLAY *)((char *)this + 568));
    for ( j = (DXGPROTECTEDSESSION *)*((_QWORD *)this + 76);
          j != (ADAPTER_DISPLAY *)((char *)this + 608) && j;
          j = *(DXGPROTECTEDSESSION **)j )
    {
      DXGPROTECTEDSESSION::Stop(j);
    }
    DXGFASTMUTEX::Release((struct _KTHREAD **)this + 71, v6);
  }
  v8 = (DXGADAPTER *)*((_QWORD *)this + 2);
  v17 = 0;
  if ( (*((_DWORD *)v8 + 87) & 0x100) != 0 && DXGADAPTER::IsAdapterSessionized(v8, a2, &v17, 0LL) )
  {
    Global = DXGGLOBAL::GetGlobal(v10, v9);
    v12 = DXGSESSIONMGR::CleanCachedIddDisplayConfigRequest(*((DXGSESSIONMGR **)Global + 102), v17);
    v15 = v12;
    if ( v12 < 0 )
    {
      v16 = WdLogNewEntry5_WdError(v14, v13);
      *(_QWORD *)(v16 + 24) = v17;
      *(_QWORD *)(v16 + 32) = v15;
      WdLogEvent5_WdError(v16);
    }
  }
  KeCancelTimer((PKTIMER)((char *)this + 632));
  KeFlushQueuedDpcs();
}
