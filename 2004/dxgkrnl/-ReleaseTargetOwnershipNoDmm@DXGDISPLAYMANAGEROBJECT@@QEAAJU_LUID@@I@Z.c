/*
 * XREFs of ?ReleaseTargetOwnershipNoDmm@DXGDISPLAYMANAGEROBJECT@@QEAAJU_LUID@@I@Z @ 0x1C02B154C
 * Callers:
 *     ?DmmClearDisplayManagerReferencesForAdapter@@YAJPEBVDXGADAPTER@@@Z @ 0x1C0167694 (-DmmClearDisplayManagerReferencesForAdapter@@YAJPEBVDXGADAPTER@@@Z.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002808 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002BB0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0006598 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00271E0 (_guard_dispatch_icall_nop.c)
 *     ?ContainsByReference@?$DoublyLinkedList@VDMMVIDPNTARGETMODESET@@U?$DoubleLinkedListElementDeleter@VDMMVIDPNTARGETMODESET@@@@@@QEAAEQEBVDMMVIDPNTARGETMODESET@@@Z @ 0x1C004C7C0 (-ContainsByReference@-$DoublyLinkedList@VDMMVIDPNTARGETMODESET@@U-$DoubleLinkedListElementDelete.c)
 *     ?FindByValue@?$Set@VDXGTARGETENTRY@@@@QEBAPEAVDXGTARGETENTRY@@QEBV2@@Z @ 0x1C004C82C (-FindByValue@-$Set@VDXGTARGETENTRY@@@@QEBAPEAVDXGTARGETENTRY@@QEBV2@@Z.c)
 */

__int64 __fastcall DXGDISPLAYMANAGEROBJECT::ReleaseTargetOwnershipNoDmm(
        struct DXGFASTMUTEX *const *this,
        struct _LUID a2,
        unsigned int a3)
{
  __int64 v4; // rsi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rdx
  unsigned int v10; // ebx
  __int64 v11; // r11
  __int64 v12; // rdi
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r11
  _QWORD *v16; // rcx
  __int64 v17; // rdx
  __int64 *v18; // rax
  _QWORD *v19; // rax
  _BYTE v21[16]; // [rsp+20h] [rbp-40h] BYREF
  void **v22; // [rsp+30h] [rbp-30h]
  __int128 v23; // [rsp+38h] [rbp-28h]
  struct _LUID v24; // [rsp+48h] [rbp-18h]
  int v25; // [rsp+50h] [rbp-10h]
  LONG HighPart; // [rsp+7Ch] [rbp+1Ch]

  HighPart = a2.HighPart;
  v4 = a3;
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v21, this[2], 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v21);
  if ( *((_QWORD *)this + 4) )
  {
    v24 = a2;
    v25 = v4;
    v22 = &SetElement::`vftable';
    v23 = 0LL;
    v12 = Set<DXGTARGETENTRY>::FindByValue((__int64)(this + 5));
    if ( DoublyLinkedList<DMMVIDPNTARGETMODESET,DoubleLinkedListElementDeleter<DMMVIDPNTARGETMODESET>>::ContainsByReference(
           v11 + 8,
           v12) )
    {
      v16 = (_QWORD *)(v12 + 8);
      v17 = *(_QWORD *)(v12 + 8);
      if ( *(_QWORD *)(v17 + 8) != v12 + 8 || (v18 = *(__int64 **)(v12 + 16), (_QWORD *)*v18 != v16) )
        __fastfail(3u);
      *v18 = v17;
      *(_QWORD *)(v17 + 8) = v18;
      *v16 = 0LL;
      *(_QWORD *)(v12 + 16) = 0LL;
      --*(_QWORD *)(v15 + 40);
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v21, v17);
      (**(void (__fastcall ***)(__int64, __int64))v12)(v12, 1LL);
      v10 = 0;
    }
    else
    {
      v19 = (_QWORD *)WdLogNewEntry5_WdError(v14, v13);
      v19[4] = HighPart;
      v19[5] = a2.LowPart;
      v19[3] = v4;
      WdLogEvent5_WdError(v19);
      v10 = -1073741275;
    }
  }
  else
  {
    v8 = WdLogNewEntry5_WdError(v7, v6);
    *(_QWORD *)(v8 + 24) = 194LL;
    WdLogEvent5_WdError(v8);
    v10 = -2147483611;
  }
  if ( v21[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v21, v9);
  return v10;
}
