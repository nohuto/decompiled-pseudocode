/*
 * XREFs of ?ResumeProcessingForPower@FxPkgIo@@QEAAJXZ @ 0x1C0012BAC
 * Callers:
 *     ?PowerStartSelfManagedIoNP@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C000E0B0 (-PowerStartSelfManagedIoNP@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 *     ?PowerStartSelfManagedIo@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C0011420 (-PowerStartSelfManagedIo@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 *     ?PowerD0StartingStartSelfManagedIo@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C007CF40 (-PowerD0StartingStartSelfManagedIo@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0003FA0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     ?DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z @ 0x1C0008440 (-DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C000C8E0 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C000C960 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     WPP_IFR_SF_q @ 0x1C00138C0 (WPP_IFR_SF_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C001CA60 (_guard_dispatch_icall_nop.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z @ 0x1C005AE28 (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z.c)
 */

__int64 __fastcall FxPkgIo::ResumeProcessingForPower(FxPkgIo *this)
{
  const void *_a1; // rax
  _SINGLE_LIST_ENTRY *Next; // rbx
  unsigned __int8 v4; // r8
  unsigned __int8 v5; // r8
  _LIST_ENTRY *i; // rdi
  unsigned int v7; // ecx
  FxTagTracker *Blink; // rax
  unsigned __int8 v9; // dl
  unsigned __int8 v10; // r8
  _SINGLE_LIST_ENTRY *v11; // rsi
  bool v12; // zf
  _SINGLE_LIST_ENTRY *v13; // rdi
  unsigned __int8 v14; // r8
  unsigned __int16 v15; // r9
  FxIoQueue *v16; // rcx
  unsigned __int8 v17; // dl
  unsigned __int16 v18; // r9
  _SINGLE_LIST_ENTRY *v19; // rsi
  _SINGLE_LIST_ENTRY *v20; // rdi
  unsigned __int8 PreviousIrql; // [rsp+60h] [rbp+30h] BYREF
  unsigned __int8 irql; // [rsp+68h] [rbp+38h] BYREF
  unsigned __int8 v24; // [rsp+70h] [rbp+40h] BYREF
  _SINGLE_LIST_ENTRY queueList; // [rsp+78h] [rbp+48h]

  irql = 0;
  _a1 = (const void *)FxObject::GetObjectHandleUnchecked(this->m_DeviceBase);
  WPP_IFR_SF_q(this->m_Globals, 4u, 0xDu, 0x1Fu, (const _GUID *)&WPP_FxPkgIo_cpp_Traceguids, _a1);
  Next = 0LL;
  queueList.Next = 0LL;
  FxNonPagedObject::Lock(this, &irql, v4);
  for ( i = this->m_IoQueueListHead.Blink; i != &this->m_IoQueueListHead; i = i->Blink )
  {
    if ( LODWORD(i[1].Flink) == 1 )
    {
      i[1].Blink = (_LIST_ENTRY *)Next;
      queueList.Next = (_SINGLE_LIST_ENTRY *)&i[1].Blink;
      v7 = _InterlockedIncrement((volatile signed __int32 *)&i[-56].Flink + 1);
      if ( SLOBYTE(i[-55].Flink) < 0 )
        Blink = (FxTagTracker *)i[-60].Blink;
      else
        Blink = 0LL;
      if ( Blink )
        FxTagTracker::UpdateTagHistory(
          Blink,
          (void *)0x65776F70,
          1478,
          "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxpkgio.cpp",
          TagAddRef,
          v7);
      Next = queueList.Next;
    }
  }
  v9 = irql;
  *(_WORD *)&this->m_PowerStateOn = 1;
  FxNonPagedObject::Unlock(this, v9, v5);
  v11 = Next;
  v12 = Next == 0LL;
  if ( !Next )
    goto LABEL_21;
  do
  {
    v13 = v11 - 116;
    PreviousIrql = 0;
    if ( BYTE2(v11[-99].Next) )
    {
      FxNonPagedObject::Lock((FxNonPagedObject *)&v11[-116], &PreviousIrql, v10);
      v16 = (FxIoQueue *)&v11[-116];
      v17 = PreviousIrql;
      if ( LODWORD(v13[22].Next) == 1 )
      {
        FxNonPagedObject::Unlock(v16, PreviousIrql, v14);
      }
      else
      {
        LODWORD(v13[22].Next) = 10;
        FxIoQueue::DispatchEvents(v16, v17, 0LL, v15);
      }
    }
    v11 = v11->Next;
  }
  while ( v11 );
  while ( 1 )
  {
    v12 = Next == 0LL;
LABEL_21:
    v19 = Next;
    if ( !v12 )
    {
      Next = Next->Next;
      queueList.Next = Next;
    }
    if ( !v19 )
      break;
    v20 = v19 - 116;
    v24 = 0;
    if ( BYTE2(v19[-99].Next) )
    {
      FxNonPagedObject::Lock((FxNonPagedObject *)&v19[-116], &v24, v10);
      if ( SLODWORD(v20[28].Next) > 0 )
      {
        BYTE4(v20[46].Next) = 1;
        BYTE5(v20[46].Next) = 0;
      }
      FxIoQueue::DispatchEvents((FxIoQueue *)&v19[-116], v24, 0LL, v18);
      Next = queueList.Next;
    }
    v19->Next = 0LL;
    ((void (__fastcall *)(_SINGLE_LIST_ENTRY **, __int64, __int64, const char *))v20->Next[2].Next)(
      &v19[-116].Next,
      1702326128LL,
      1327LL,
      "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxpkgio.cpp");
  }
  return 0LL;
}
