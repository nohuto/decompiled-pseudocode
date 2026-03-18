/*
 * XREFs of ?TransferTargetOwnership@DXGDISPLAYMANAGEROBJECT@@QEAAJU_LUID@@IPEAV1@@Z @ 0x1C02AD1BC
 * Callers:
 *     DxgkDispMgrTargetOperation @ 0x1C02AD820 (DxgkDispMgrTargetOperation.c)
 * Callees:
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000CF20 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C000D034 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000D070 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000DBC4 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026570 (_guard_dispatch_icall_nop.c)
 *     ?Add@?$Set@VDXGTARGETENTRY@@@@QEAAEQEAVDXGTARGETENTRY@@@Z @ 0x1C004B728 (-Add@-$Set@VDXGTARGETENTRY@@@@QEAAEQEAVDXGTARGETENTRY@@@Z.c)
 *     ?ContainsByReference@?$DoublyLinkedList@VDMMVIDPNTARGETMODESET@@U?$DoubleLinkedListElementDeleter@VDMMVIDPNTARGETMODESET@@@@@@QEAAEQEBVDMMVIDPNTARGETMODESET@@@Z @ 0x1C004B7B0 (-ContainsByReference@-$DoublyLinkedList@VDMMVIDPNTARGETMODESET@@U-$DoubleLinkedListElementDelete.c)
 *     ?ContainsByValue@?$Set@VDXGTARGETENTRY@@@@QEAAEQEBVDXGTARGETENTRY@@@Z @ 0x1C004B800 (-ContainsByValue@-$Set@VDXGTARGETENTRY@@@@QEAAEQEBVDXGTARGETENTRY@@@Z.c)
 *     ?FindByValue@?$Set@VDXGTARGETENTRY@@@@QEBAPEAVDXGTARGETENTRY@@QEBV2@@Z @ 0x1C004B81C (-FindByValue@-$Set@VDXGTARGETENTRY@@@@QEBAPEAVDXGTARGETENTRY@@QEBV2@@Z.c)
 *     ?ExchangeTargetOwnershipDmm@DXGDISPLAYMANAGEROBJECT@@CAJPEBVDXGTARGETENTRY@@PEAV1@1_NW4_D3DKMT_DISPLAY_TARGET_USAGE@@@Z @ 0x1C02AC9F0 (-ExchangeTargetOwnershipDmm@DXGDISPLAYMANAGEROBJECT@@CAJPEBVDXGTARGETENTRY@@PEAV1@1_NW4_D3DKMT_D.c)
 */

__int64 __fastcall DXGDISPLAYMANAGEROBJECT::TransferTargetOwnership(
        struct DXGFASTMUTEX *const *this,
        struct _LUID a2,
        unsigned int a3,
        struct DXGFASTMUTEX *const *a4)
{
  __int64 v5; // rsi
  __int64 v8; // rdx
  __int64 v9; // rcx
  unsigned int v10; // edi
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v14; // rdx
  __int64 v15; // rcx
  _QWORD *v16; // rax
  __int64 v17; // rbx
  _QWORD *v18; // rdx
  _QWORD *v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rdx
  _BYTE v23[16]; // [rsp+30h] [rbp-50h] BYREF
  _BYTE v24[16]; // [rsp+40h] [rbp-40h] BYREF
  void **v25; // [rsp+50h] [rbp-30h] BYREF
  __int128 v26; // [rsp+58h] [rbp-28h]
  struct _LUID v27; // [rsp+68h] [rbp-18h]
  int v28; // [rsp+70h] [rbp-10h]
  LONG HighPart; // [rsp+BCh] [rbp+3Ch]

  HighPart = a2.HighPart;
  v5 = a3;
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v23, this[2], 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v23);
  v10 = 0;
  if ( *((_QWORD *)this + 4) )
  {
    v27 = a2;
    v28 = v5;
    v25 = &SetElement::`vftable';
    v26 = 0LL;
    if ( !Set<DXGTARGETENTRY>::ContainsByValue() )
      goto LABEL_7;
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v23, v14);
    if ( (int)DXGDISPLAYMANAGEROBJECT::ExchangeTargetOwnershipDmm(
                (struct _LUID *)&v25,
                (struct _LUID)a4,
                (__int64)this,
                0,
                0) < 0 )
      goto LABEL_3;
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v23);
    if ( !Set<DXGTARGETENTRY>::ContainsByValue() )
    {
LABEL_7:
      v16 = (_QWORD *)WdLogNewEntry5_WdError(v15, v14);
      v16[3] = v5;
      v16[4] = HighPart;
      v16[5] = a2.LowPart;
      WdLogEvent5_WdError(v16);
      v10 = -1073741275;
      goto LABEL_3;
    }
    v17 = Set<DXGTARGETENTRY>::FindByValue((__int64)(this + 5));
    if ( DoublyLinkedList<DMMVIDPNTARGETMODESET,DoubleLinkedListElementDeleter<DMMVIDPNTARGETMODESET>>::ContainsByReference(
           (__int64)(this + 6),
           v17) )
    {
      v19 = (_QWORD *)(v17 + 8);
      v20 = *(_QWORD *)(v17 + 8);
      if ( *(_QWORD *)(v20 + 8) != v17 + 8 || (v18 = *(_QWORD **)(v17 + 16), (_QWORD *)*v18 != v19) )
        __fastfail(3u);
      *v18 = v20;
      *(_QWORD *)(v20 + 8) = v18;
      *v19 = 0LL;
      *(_QWORD *)(v17 + 16) = 0LL;
      --*((_QWORD *)this + 10);
    }
    else
    {
      v17 = 0LL;
    }
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v23, (__int64)v18);
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v24, a4[2], 0);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v24);
    if ( !Set<DXGTARGETENTRY>::Add((__int64)(a4 + 5), v17) && v17 )
      (**(void (__fastcall ***)(__int64, __int64))v17)(v17, 1LL);
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v24, v21);
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v24, v22);
  }
  else
  {
    v11 = WdLogNewEntry5_WdError(v9, v8);
    *(_QWORD *)(v11 + 24) = 226LL;
    WdLogEvent5_WdError(v11);
    v10 = -2147483611;
  }
LABEL_3:
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v23, v12);
  return v10;
}
