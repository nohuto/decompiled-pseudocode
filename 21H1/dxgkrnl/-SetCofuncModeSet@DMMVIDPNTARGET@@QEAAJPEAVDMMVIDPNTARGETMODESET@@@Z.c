/*
 * XREFs of ?SetCofuncModeSet@DMMVIDPNTARGET@@QEAAJPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C0010BA4
 * Callers:
 *     ?AssignTargetModeSet@DXGK_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@IQEAUD3DKMDT_HVIDPNTARGETMODESET__@@@Z @ 0x1C0128970 (-AssignTargetModeSet@DXGK_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@IQEAUD3DKMDT_HVIDPNT.c)
 * Callees:
 *     ?FindByValue@?$Set@VDMMVIDPNTARGETMODE@@@@QEBAPEAVDMMVIDPNTARGETMODE@@QEBV2@@Z @ 0x1C000D8D0 (-FindByValue@-$Set@VDMMVIDPNTARGETMODE@@@@QEBAPEAVDMMVIDPNTARGETMODE@@QEBV2@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C0010C44 (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     ?ContainsByReference@?$DoublyLinkedList@VDMMVIDPNTARGETMODESET@@U?$DoubleLinkedListElementDeleter@VDMMVIDPNTARGETMODESET@@@@@@QEAAEQEBVDMMVIDPNTARGETMODESET@@@Z @ 0x1C004B7B0 (-ContainsByReference@-$DoublyLinkedList@VDMMVIDPNTARGETMODESET@@U-$DoubleLinkedListElementDelete.c)
 *     ?PinMode@DMMVIDPNTARGETMODESET@@QEAAJI@Z @ 0x1C011D8DC (-PinMode@DMMVIDPNTARGETMODESET@@QEAAJI@Z.c)
 */

__int64 __fastcall DMMVIDPNTARGET::SetCofuncModeSet(
        struct DMMVIDPNTARGETMODESET **this,
        struct DMMVIDPNTARGETMODESET **a2)
{
  struct DMMVIDPNTARGETMODESET **v4; // rsi
  struct DMMVIDPNTARGETMODESET *v5; // rax
  __int64 v6; // rdx
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  struct DMMVIDPNTARGETMODESET *v11; // r14
  __int64 v12; // r11
  _QWORD *v13; // rdx
  _QWORD *v14; // rax

  if ( a2[6] == (struct DMMVIDPNTARGETMODESET *)(a2 + 6) )
  {
    v8 = WdLogNewEntry5_WdError(this, a2);
    *(_QWORD *)(v8 + 24) = a2;
    *(_QWORD *)(v8 + 32) = *((unsigned int *)this + 6);
    WdLogEvent5_WdError(v8);
    return 3223192329LL;
  }
  if ( a2 != (struct DMMVIDPNTARGETMODESET **)this[14] )
  {
    v9 = WdLogNewEntry5_WdError(this, a2);
    *(_QWORD *)(v9 + 24) = a2;
    *(_QWORD *)(v9 + 32) = *((unsigned int *)this + 6);
    WdLogEvent5_WdError(v9);
    return 3223192368LL;
  }
  v4 = this + 13;
  v5 = this[13];
  v6 = *((_QWORD *)v5 + 18);
  if ( v6 )
  {
    v10 = Set<DMMVIDPNTARGETMODE>::FindByValue((__int64)(a2 + 3), v6);
    if ( !v10 )
      return 3223192338LL;
    DMMVIDPNTARGETMODESET::PinMode((DMMVIDPNTARGETMODESET *)a2, *(_DWORD *)(v10 + 24));
    v5 = *v4;
  }
  *((_BYTE *)v5 + 136) = 0;
  if ( (unsigned __int64)*((int *)*v4 + 24) > 1 )
  {
    v11 = *v4;
    if ( !(unsigned __int8)DoublyLinkedList<DMMVIDPNTARGETMODESET,DoubleLinkedListElementDeleter<DMMVIDPNTARGETMODESET>>::ContainsByReference(
                             this[15],
                             *v4) )
    {
      v13 = *(_QWORD **)(v12 + 24);
      v14 = (_QWORD *)((char *)v11 + 8);
      if ( *v13 != v12 + 16 )
        __fastfail(3u);
      *v14 = v12 + 16;
      *((_QWORD *)v11 + 2) = v13;
      *v13 = v14;
      *(_QWORD *)(v12 + 24) = v14;
      ++*(_QWORD *)(v12 + 32);
    }
  }
  auto_rc<DMMVIDPNTARGETMODESET>::reset(v4, a2);
  auto_rc<DMMVIDPNTARGETMODESET>::reset(this + 14, 0LL);
  return 0LL;
}
