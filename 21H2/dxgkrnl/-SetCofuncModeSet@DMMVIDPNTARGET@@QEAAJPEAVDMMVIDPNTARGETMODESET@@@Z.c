/*
 * XREFs of ?SetCofuncModeSet@DMMVIDPNTARGET@@QEAAJPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C001188C
 * Callers:
 *     ?AssignTargetModeSet@DXGK_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@IQEAUD3DKMDT_HVIDPNTARGETMODESET__@@@Z @ 0x1C01A9D20 (-AssignTargetModeSet@DXGK_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@IQEAUD3DKMDT_HVIDPNT.c)
 * Callees:
 *     ?FindByValue@?$Set@VDMMVIDPNTARGETMODE@@@@QEBAPEAVDMMVIDPNTARGETMODE@@QEBV2@@Z @ 0x1C0010F08 (-FindByValue@-$Set@VDMMVIDPNTARGETMODE@@@@QEBAPEAVDMMVIDPNTARGETMODE@@QEBV2@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C0011924 (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     ?ContainsByReference@?$DoublyLinkedList@VDMMVIDPNTARGETMODESET@@U?$DoubleLinkedListElementDeleter@VDMMVIDPNTARGETMODESET@@@@@@QEAAEQEBVDMMVIDPNTARGETMODESET@@@Z @ 0x1C004EF84 (-ContainsByReference@-$DoublyLinkedList@VDMMVIDPNTARGETMODESET@@U-$DoubleLinkedListElementDelete.c)
 *     ?PinMode@DMMVIDPNTARGETMODESET@@QEAAJI@Z @ 0x1C01A7640 (-PinMode@DMMVIDPNTARGETMODESET@@QEAAJI@Z.c)
 */

__int64 __fastcall DMMVIDPNTARGET::SetCofuncModeSet(
        struct DMMVIDPNTARGETMODESET **this,
        struct DMMVIDPNTARGETMODESET **a2)
{
  char *v4; // rbp
  struct DMMVIDPNTARGETMODESET **v5; // rsi
  struct DMMVIDPNTARGETMODESET *v6; // rax
  __int64 v7; // rdx
  unsigned int v9; // esi
  __int64 v10; // rax
  struct DMMVIDPNTARGETMODESET *v11; // r11
  struct DMMVIDPNTARGETMODESET *v12; // rdi
  __int64 v13; // r11
  _QWORD *v14; // rdx
  _QWORD *v15; // rax

  if ( a2[6] == (struct DMMVIDPNTARGETMODESET *)(a2 + 6) )
  {
    v9 = -1071774967;
LABEL_8:
    WdLogSingleEntry2(2LL, a2, *((unsigned int *)this + 6));
    return v9;
  }
  v4 = (char *)(this + 14);
  if ( a2 != (struct DMMVIDPNTARGETMODESET **)this[14] )
  {
    v9 = -1071774928;
    goto LABEL_8;
  }
  v5 = this + 13;
  v6 = this[13];
  v7 = *((_QWORD *)v6 + 18);
  if ( v7 )
  {
    v10 = Set<DMMVIDPNTARGETMODE>::FindByValue((__int64)(a2 + 3), v7);
    if ( !v10 )
      return 3223192338LL;
    DMMVIDPNTARGETMODESET::PinMode((DMMVIDPNTARGETMODESET *)a2, *(_DWORD *)(v10 + 24));
    v6 = *v5;
  }
  *((_BYTE *)v6 + 136) = 0;
  if ( (unsigned __int64)*((int *)*v5 + 24) > 1 )
  {
    v11 = this[15];
    v12 = *v5;
    if ( !(unsigned __int8)DoublyLinkedList<DMMVIDPNTARGETMODESET,DoubleLinkedListElementDeleter<DMMVIDPNTARGETMODESET>>::ContainsByReference(
                             v11,
                             *v5) )
    {
      v14 = *(_QWORD **)(v13 + 24);
      v15 = (_QWORD *)((char *)v12 + 8);
      if ( *v14 != v13 + 16 )
        __fastfail(3u);
      *v15 = v13 + 16;
      *((_QWORD *)v12 + 2) = v14;
      *v14 = v15;
      *(_QWORD *)(v13 + 24) = v15;
      ++*(_QWORD *)(v13 + 32);
    }
  }
  auto_rc<DMMVIDPNTARGETMODESET>::reset(v5, a2);
  auto_rc<DMMVIDPNTARGETMODESET>::reset(v4, 0LL);
  return 0LL;
}
