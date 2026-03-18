/*
 * XREFs of ?ReleaseTargetOwnership@DXGDISPLAYMANAGEROBJECT@@QEAAJU_LUID@@I@Z @ 0x1C02ACE98
 * Callers:
 *     DxgkDispMgrTargetOperation @ 0x1C02AD820 (DxgkDispMgrTargetOperation.c)
 * Callees:
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000CF20 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000D070 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000DBC4 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026570 (_guard_dispatch_icall_nop.c)
 *     ?ContainsByReference@?$DoublyLinkedList@VDMMVIDPNTARGETMODESET@@U?$DoubleLinkedListElementDeleter@VDMMVIDPNTARGETMODESET@@@@@@QEAAEQEBVDMMVIDPNTARGETMODESET@@@Z @ 0x1C004B7B0 (-ContainsByReference@-$DoublyLinkedList@VDMMVIDPNTARGETMODESET@@U-$DoubleLinkedListElementDelete.c)
 *     ?FindByValue@?$Set@VDXGTARGETENTRY@@@@QEBAPEAVDXGTARGETENTRY@@QEBV2@@Z @ 0x1C004B81C (-FindByValue@-$Set@VDXGTARGETENTRY@@@@QEBAPEAVDXGTARGETENTRY@@QEBV2@@Z.c)
 *     ?ExchangeTargetOwnershipDmm@DXGDISPLAYMANAGEROBJECT@@CAJPEBVDXGTARGETENTRY@@PEAV1@1_NW4_D3DKMT_DISPLAY_TARGET_USAGE@@@Z @ 0x1C02AC9F0 (-ExchangeTargetOwnershipDmm@DXGDISPLAYMANAGEROBJECT@@CAJPEBVDXGTARGETENTRY@@PEAV1@1_NW4_D3DKMT_D.c)
 */

__int64 __fastcall DXGDISPLAYMANAGEROBJECT::ReleaseTargetOwnership(
        struct DXGFASTMUTEX *const *this,
        struct _LUID a2,
        unsigned int a3)
{
  __int64 v4; // r14
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rdx
  unsigned int v10; // ebx
  __int64 v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // rcx
  _QWORD *v14; // rcx
  __int64 v15; // rax
  _QWORD *v16; // rdx
  _QWORD *v17; // rax
  _BYTE v19[16]; // [rsp+30h] [rbp-40h] BYREF
  void **v20; // [rsp+40h] [rbp-30h]
  __int128 v21; // [rsp+48h] [rbp-28h]
  struct _LUID v22; // [rsp+58h] [rbp-18h]
  int v23; // [rsp+60h] [rbp-10h]
  LONG HighPart; // [rsp+9Ch] [rbp+2Ch]

  HighPart = a2.HighPart;
  v4 = a3;
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v19, this[2], 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v19);
  if ( *((_QWORD *)this + 4) )
  {
    v22 = a2;
    v23 = v4;
    v20 = &SetElement::`vftable';
    v21 = 0LL;
    v11 = Set<DXGTARGETENTRY>::FindByValue((__int64)(this + 5));
    if ( DoublyLinkedList<DMMVIDPNTARGETMODESET,DoubleLinkedListElementDeleter<DMMVIDPNTARGETMODESET>>::ContainsByReference(
           (__int64)(this + 6),
           v11) )
    {
      v14 = (_QWORD *)(v11 + 8);
      v15 = *(_QWORD *)(v11 + 8);
      if ( *(_QWORD *)(v15 + 8) != v11 + 8 || (v16 = *(_QWORD **)(v11 + 16), (_QWORD *)*v16 != v14) )
        __fastfail(3u);
      *v16 = v15;
      *(_QWORD *)(v15 + 8) = v16;
      *v14 = 0LL;
      *(_QWORD *)(v11 + 16) = 0LL;
      --*((_QWORD *)this + 10);
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v19, (__int64)v16);
      DXGDISPLAYMANAGEROBJECT::ExchangeTargetOwnershipDmm((struct _LUID *)v11, 0LL, (__int64)this, 0, 0);
      (**(void (__fastcall ***)(__int64, __int64))v11)(v11, 1LL);
      v10 = 0;
    }
    else
    {
      v17 = (_QWORD *)WdLogNewEntry5_WdError(v13, v12);
      v17[4] = HighPart;
      v17[5] = a2.LowPart;
      v17[3] = v4;
      WdLogEvent5_WdError(v17);
      v10 = -1073741275;
    }
  }
  else
  {
    v8 = WdLogNewEntry5_WdError(v7, v6);
    *(_QWORD *)(v8 + 24) = 160LL;
    WdLogEvent5_WdError(v8);
    v10 = -2147483611;
  }
  if ( v19[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v19, v9);
  return v10;
}
