/*
 * XREFs of ?Invalidate@DXGDISPLAYMANAGEROBJECT@@QEAAXXZ @ 0x1C01DE65C
 * Callers:
 *     ?DxgkDisplayManagerDeleteProcedure@@YAXPEAX@Z @ 0x1C01DE620 (-DxgkDisplayManagerDeleteProcedure@@YAXPEAX@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000C3F8 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000F574 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000F5FC (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Clear@?$DoublyLinkedList@VDXGDISPLAYMANAGERSOURCEOBJECT@@U?$DoubleLinkedListElementDeleter@VDXGDISPLAYMANAGERSOURCEOBJECT@@@@@@QEAAXXZ @ 0x1C001D434 (-Clear@-$DoublyLinkedList@VDXGDISPLAYMANAGERSOURCEOBJECT@@U-$DoubleLinkedListElementDeleter@VDXG.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     ?ContainsByReference@?$DoublyLinkedList@VDMMVIDPNTARGETMODESET@@U?$DoubleLinkedListElementDeleter@VDMMVIDPNTARGETMODESET@@@@@@QEAAEQEBVDMMVIDPNTARGETMODESET@@@Z @ 0x1C004EF84 (-ContainsByReference@-$DoublyLinkedList@VDMMVIDPNTARGETMODESET@@U-$DoubleLinkedListElementDelete.c)
 *     ?FindByValue@?$Set@VDXGTARGETENTRY@@@@QEBAPEAVDXGTARGETENTRY@@QEBV2@@Z @ 0x1C004EFD4 (-FindByValue@-$Set@VDXGTARGETENTRY@@@@QEBAPEAVDXGTARGETENTRY@@QEBV2@@Z.c)
 *     ?ExchangeTargetOwnershipDmm@DXGDISPLAYMANAGEROBJECT@@CAJPEBVDXGTARGETENTRY@@PEAV1@1_NW4_D3DKMT_DISPLAY_TARGET_USAGE@@@Z @ 0x1C02F3E04 (-ExchangeTargetOwnershipDmm@DXGDISPLAYMANAGEROBJECT@@CAJPEBVDXGTARGETENTRY@@PEAV1@1_NW4_D3DKMT_D.c)
 */

void __fastcall DXGDISPLAYMANAGEROBJECT::Invalidate(DXGDISPLAYMANAGEROBJECT *this)
{
  char *v2; // rcx
  __int64 v3; // rdi
  _QWORD *v4; // rax
  __int64 v5; // rcx
  _QWORD *v6; // rdx
  _BYTE v7[16]; // [rsp+50h] [rbp-18h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v7, (DXGDISPLAYMANAGEROBJECT *)((char *)this + 16), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v7);
  if ( !*((_QWORD *)this + 9) )
  {
    WdLogSingleEntry1(1LL, 580LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_Object != nullptr", 580LL, 0LL, 0LL, 0LL, 0LL);
  }
  *((_QWORD *)this + 9) = 0LL;
  *((_BYTE *)this + 64) = 0;
  while ( 1 )
  {
    v2 = (char *)this + 80;
    if ( *((DXGDISPLAYMANAGEROBJECT **)this + 13) == (DXGDISPLAYMANAGEROBJECT *)((char *)this + 104) )
      break;
    v3 = Set<DXGTARGETENTRY>::FindByValue((__int64)v2);
    if ( DoublyLinkedList<DMMVIDPNTARGETMODESET,DoubleLinkedListElementDeleter<DMMVIDPNTARGETMODESET>>::ContainsByReference(
           (__int64)this + 88,
           v3) )
    {
      v4 = (_QWORD *)(v3 + 8);
      v5 = *(_QWORD *)(v3 + 8);
      if ( *(_QWORD *)(v5 + 8) != v3 + 8 || (v6 = *(_QWORD **)(v3 + 16), (_QWORD *)*v6 != v4) )
        __fastfail(3u);
      *v6 = v5;
      *(_QWORD *)(v5 + 8) = v6;
      *v4 = 0LL;
      *(_QWORD *)(v3 + 16) = 0LL;
      --*((_QWORD *)this + 15);
    }
    else
    {
      v3 = 0LL;
      WdLogSingleEntry1(1LL, 588LL);
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pEntry", 588LL, 0LL, 0LL, 0LL, 0LL);
    }
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v7);
    DXGDISPLAYMANAGEROBJECT::ExchangeTargetOwnershipDmm(v3, 0LL, this, 0LL, 0);
    if ( v3 )
      (**(void (__fastcall ***)(__int64, __int64))v3)(v3, 1LL);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v7);
  }
  (*(void (__fastcall **)(char *))(*((_QWORD *)this + 10) + 24LL))(v2);
  DoublyLinkedList<DXGDISPLAYMANAGERSOURCEOBJECT,DoubleLinkedListElementDeleter<DXGDISPLAYMANAGERSOURCEOBJECT>>::Clear((__int64)this + 136);
  if ( v7[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v7);
}
