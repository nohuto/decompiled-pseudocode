/*
 * XREFs of ?TransferTargetOwnership@DXGDISPLAYMANAGEROBJECT@@QEAAJU_LUID@@IPEAV1@@Z @ 0x1C02F4638
 * Callers:
 *     DxgkDispMgrTargetOperation @ 0x1C02F4CF0 (DxgkDispMgrTargetOperation.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000C3F8 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000F574 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000F5FC (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     ?Add@?$Set@VDXGTARGETENTRY@@@@QEAAEQEAVDXGTARGETENTRY@@@Z @ 0x1C004EEB8 (-Add@-$Set@VDXGTARGETENTRY@@@@QEAAEQEAVDXGTARGETENTRY@@@Z.c)
 *     ?ContainsByReference@?$DoublyLinkedList@VDMMVIDPNTARGETMODESET@@U?$DoubleLinkedListElementDeleter@VDMMVIDPNTARGETMODESET@@@@@@QEAAEQEBVDMMVIDPNTARGETMODESET@@@Z @ 0x1C004EF84 (-ContainsByReference@-$DoublyLinkedList@VDMMVIDPNTARGETMODESET@@U-$DoubleLinkedListElementDelete.c)
 *     ?FindByValue@?$Set@VDXGTARGETENTRY@@@@QEBAPEAVDXGTARGETENTRY@@QEBV2@@Z @ 0x1C004EFD4 (-FindByValue@-$Set@VDXGTARGETENTRY@@@@QEBAPEAVDXGTARGETENTRY@@QEBV2@@Z.c)
 *     ?ExchangeTargetOwnershipDmm@DXGDISPLAYMANAGEROBJECT@@CAJPEBVDXGTARGETENTRY@@PEAV1@1_NW4_D3DKMT_DISPLAY_TARGET_USAGE@@@Z @ 0x1C02F3E04 (-ExchangeTargetOwnershipDmm@DXGDISPLAYMANAGEROBJECT@@CAJPEBVDXGTARGETENTRY@@PEAV1@1_NW4_D3DKMT_D.c)
 */

__int64 __fastcall DXGDISPLAYMANAGEROBJECT::TransferTargetOwnership(
        DXGDISPLAYMANAGEROBJECT *this,
        struct _LUID a2,
        unsigned int a3,
        struct DXGDISPLAYMANAGEROBJECT *a4)
{
  __int64 v4; // rbx
  __int64 v5; // r15
  unsigned int v8; // ebx
  char *v9; // rsi
  __int64 v10; // rdi
  const wchar_t *v11; // r9
  __int64 v12; // rax
  __int64 v13; // rdi
  _QWORD *v14; // rax
  __int64 v15; // rcx
  _QWORD *v16; // rdx
  _BYTE v18[16]; // [rsp+58h] [rbp-19h] BYREF
  _BYTE v19[16]; // [rsp+68h] [rbp-9h] BYREF
  void **v20; // [rsp+78h] [rbp+7h] BYREF
  __int128 v21; // [rsp+80h] [rbp+Fh]
  __int64 v22; // [rsp+90h] [rbp+1Fh]
  int v23; // [rsp+98h] [rbp+27h]
  LONG HighPart; // [rsp+E4h] [rbp+73h]

  HighPart = a2.HighPart;
  v4 = (__int64)a2;
  v5 = a3;
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v18, (DXGDISPLAYMANAGEROBJECT *)((char *)this + 16), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v18);
  if ( !*((_QWORD *)this + 9) )
  {
    WdLogSingleEntry1(2LL, 224LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"DispMgr object called after being invalidated.",
      224LL,
      0LL,
      0LL,
      0LL,
      0LL);
    v8 = -2147483611;
    goto LABEL_20;
  }
  v22 = v4;
  v23 = v5;
  v9 = (char *)this + 80;
  v20 = &SetElement::`vftable';
  v21 = 0LL;
  if ( !Set<DXGTARGETENTRY>::FindByValue((__int64)this + 80) )
  {
    v10 = HighPart;
    v4 = (unsigned int)v4;
    WdLogSingleEntry3(2LL, v5, HighPart, (unsigned int)v4);
    v11 = L"Failed to find owned target 0x%I64x on adapter 0x%I64x-%I64x";
LABEL_8:
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v11, v5, v10, v4, 0LL, 0LL);
    v8 = -1073741275;
    goto LABEL_20;
  }
  DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v18);
  if ( (int)DXGDISPLAYMANAGEROBJECT::ExchangeTargetOwnershipDmm(
              (struct _LUID *)&v20,
              (struct _LUID)a4,
              (__int64)this,
              0,
              0) >= 0 )
  {
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v18);
    v12 = Set<DXGTARGETENTRY>::FindByValue((__int64)this + 80);
    v13 = v12;
    if ( !v12 )
    {
      v10 = HighPart;
      v4 = (unsigned int)v4;
      WdLogSingleEntry3(2LL, v5, HighPart, (unsigned int)v4);
      v11 = L"Target 0x%I64x on adapter 0x%I64x-%I64x is just removed when the lock is released.";
      goto LABEL_8;
    }
    if ( DoublyLinkedList<DMMVIDPNTARGETMODESET,DoubleLinkedListElementDeleter<DMMVIDPNTARGETMODESET>>::ContainsByReference(
           (__int64)(v9 + 8),
           v12) )
    {
      v14 = (_QWORD *)(v13 + 8);
      v15 = *(_QWORD *)(v13 + 8);
      if ( *(_QWORD *)(v15 + 8) != v13 + 8 || (v16 = *(_QWORD **)(v13 + 16), (_QWORD *)*v16 != v14) )
        __fastfail(3u);
      *v16 = v15;
      *(_QWORD *)(v15 + 8) = v16;
      *v14 = 0LL;
      *(_QWORD *)(v13 + 16) = 0LL;
      --*((_QWORD *)v9 + 5);
    }
    else
    {
      v13 = 0LL;
    }
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v18);
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v19, (struct DXGDISPLAYMANAGEROBJECT *)((char *)a4 + 16), 0);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v19);
    if ( !Set<DXGTARGETENTRY>::Add((__int64)a4 + 80, v13) && v13 )
      (**(void (__fastcall ***)(__int64, __int64))v13)(v13, 1LL);
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v19);
    if ( v19[8] )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v19);
  }
  v8 = 0;
LABEL_20:
  if ( v18[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v18);
  return v8;
}
