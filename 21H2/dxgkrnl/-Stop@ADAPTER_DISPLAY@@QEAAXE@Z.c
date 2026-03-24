/*
 * XREFs of ?Stop@ADAPTER_DISPLAY@@QEAAXE@Z @ 0x1C0214EA8
 * Callers:
 *     ?Stop@DXGADAPTER@@QEAAXEE@Z @ 0x1C020F7B4 (-Stop@DXGADAPTER@@QEAAXEE@Z.c)
 * Callees:
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0002A00 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0002C60 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00041C0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z @ 0x1C000D178 (-IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z.c)
 *     ?ReleaseAllVidPnSourceOwners@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z @ 0x1C014F550 (-ReleaseAllVidPnSourceOwners@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z.c)
 *     ?Stop@DXGPROTECTEDSESSION@@QEAAXXZ @ 0x1C0288A20 (-Stop@DXGPROTECTEDSESSION@@QEAAXXZ.c)
 *     ?CleanCachedIddDisplayConfigRequest@DXGSESSIONMGR@@QEAAJK@Z @ 0x1C029E7B4 (-CleanCachedIddDisplayConfigRequest@DXGSESSIONMGR@@QEAAJK@Z.c)
 */

void __fastcall ADAPTER_DISPLAY::Stop(struct _KTIMER *this, struct _LUID *a2)
{
  PERESOURCE **Flink; // rdx
  __int64 v4; // rdx
  struct _KTIMER *i; // rax
  __int64 v6; // rdx
  DXGPROTECTEDSESSION *j; // rdi
  struct _LIST_ENTRY *Blink; // rcx
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
    Flink = (PERESOURCE **)this->Header.WaitListHead.Blink[169].Flink;
    if ( !Flink )
      Flink = 0LL;
    ADAPTER_DISPLAY::ReleaseAllVidPnSourceOwners((PERESOURCE **)this, Flink);
    DXGFASTMUTEX::Acquire((DXGFASTMUTEX *)&this->DueTime);
    for ( i = *(struct _KTIMER **)&this[1].Header.Lock; i != &this[1] && i; i = *(struct _KTIMER **)&i->Header.Lock )
      i->Processor = 0;
    DXGFASTMUTEX::Release((struct _KTHREAD **)&this->DueTime, v4);
    DXGFASTMUTEX::Acquire((DXGFASTMUTEX *)&this[9]);
    for ( j = (DXGPROTECTEDSESSION *)this[9].TimerListEntry.Blink;
          j != (DXGPROTECTEDSESSION *)&this[9].TimerListEntry.Blink && j;
          j = *(DXGPROTECTEDSESSION **)j )
    {
      DXGPROTECTEDSESSION::Stop(j);
    }
    DXGFASTMUTEX::Release((struct _KTHREAD **)&this[9], v6);
  }
  Blink = this->Header.WaitListHead.Blink;
  v17 = 0;
  if ( (HIDWORD(Blink[21].Blink) & 0x100) != 0 && DXGADAPTER::IsAdapterSessionized((DXGADAPTER *)Blink, a2, &v17, 0LL) )
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
  KeCancelTimer(this + 10);
  KeFlushQueuedDpcs();
}
