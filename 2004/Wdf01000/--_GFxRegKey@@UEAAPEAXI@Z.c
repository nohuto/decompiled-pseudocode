/*
 * XREFs of ??_GFxRegKey@@UEAAPEAXI@Z @ 0x1C0005A80
 * Callers:
 *     <none>
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0005638 (-FxPoolFree@@YAXPEAX@Z.c)
 *     ??1FxObject@@UEAA@XZ @ 0x1C00079A0 (--1FxObject@@UEAA@XZ.c)
 *     memset @ 0x1C001D340 (memset.c)
 *     ?FxPoolRemoveNonPagedAllocateTracker@@YAXPEAUFX_POOL_TRACKER@@@Z @ 0x1C004ED74 (-FxPoolRemoveNonPagedAllocateTracker@@YAXPEAUFX_POOL_TRACKER@@@Z.c)
 *     ?FxPoolRemovePagedAllocateTracker@@YAXPEAUFX_POOL_TRACKER@@@Z @ 0x1C0054D2C (-FxPoolRemovePagedAllocateTracker@@YAXPEAUFX_POOL_TRACKER@@@Z.c)
 */

FxRegKey *__fastcall FxRegKey::`scalar deleting destructor'(FxRegKey *this, char a2)
{
  void *m_Key; // rcx
  MxPagedLock *m_Lock; // rcx
  MxPagedLock *p_m_ChildEntry; // rax
  MxPagedLock *Blink; // rdi
  MxPagedLock *v8; // rcx
  ULONG_PTR retaddr; // [rsp+38h] [rbp+0h]

  this->__vftable = (FxRegKey_vtbl *)FxRegKey::`vftable';
  m_Key = this->m_Key;
  if ( m_Key )
  {
    ZwClose(m_Key);
    this->m_Key = 0LL;
  }
  m_Lock = this->m_Lock;
  this->__vftable = (FxRegKey_vtbl *)FxPagedObject::`vftable';
  if ( m_Lock )
  {
    FxPoolFree((FX_POOL_TRACKER *)m_Lock);
    this->m_Lock = 0LL;
  }
  FxObject::~FxObject(this);
  if ( (a2 & 1) != 0 )
  {
    if ( SLOBYTE(this->m_ObjectFlags) < 0 )
      p_m_ChildEntry = (MxPagedLock *)&this[-1].m_ChildEntry;
    else
      p_m_ChildEntry = (MxPagedLock *)this;
    if ( !p_m_ChildEntry )
      KeBugCheckEx(0x10Du, 4uLL, 0LL, retaddr, 0LL);
    if ( ((unsigned __int16)p_m_ChildEntry & 0xFFF) != 0 )
    {
      Blink = (MxPagedLock *)p_m_ChildEntry[-1].m_Lock.Event.Header.WaitListHead.Blink;
      if ( *(_BYTE *)(*(_QWORD *)&p_m_ChildEntry[-1].m_Lock.OldIrql + 264LL) )
      {
        if ( ((__int64)Blink->m_Lock.Event.Header.WaitListHead.Flink & 0xFFFFFEFF) == 1
          || ((__int64)Blink->m_Lock.Event.Header.WaitListHead.Flink & 0xFFFFFEFF) == 5 )
        {
          FxPoolRemovePagedAllocateTracker((FX_POOL_TRACKER *)Blink);
        }
        else
        {
          FxPoolRemoveNonPagedAllocateTracker((FX_POOL_TRACKER *)Blink);
        }
        memset(Blink, 0, *(_QWORD *)&Blink->m_Lock.Event.Header.Lock + 64LL);
      }
      v8 = Blink;
    }
    else
    {
      v8 = p_m_ChildEntry;
    }
    ExFreePoolWithTag(v8, 0);
  }
  return this;
}
