/*
 * XREFs of ?ReleaseModeSet@DMMVIDPNTARGET@@QEAAJPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C0009098
 * Callers:
 *     ?ReleaseTargetModeSet@DXGDMM_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@QEAUD3DKMDT_HVIDPNTARGETMODESET__@@@Z @ 0x1C01240A0 (-ReleaseTargetModeSet@DXGDMM_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@QEAUD3DKMDT_HVIDP.c)
 * Callees:
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0005424 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C0008108 (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     ?ContainsByReference@?$DoublyLinkedList@VDMMVIDPNTARGETMODESET@@U?$DoubleLinkedListElementDeleter@VDMMVIDPNTARGETMODESET@@@@@@QEAAEQEBVDMMVIDPNTARGETMODESET@@@Z @ 0x1C004C7C0 (-ContainsByReference@-$DoublyLinkedList@VDMMVIDPNTARGETMODESET@@U-$DoubleLinkedListElementDelete.c)
 */

__int64 __fastcall DMMVIDPNTARGET::ReleaseModeSet(DMMVIDPNTARGET *this, struct DMMVIDPNTARGETMODESET *a2)
{
  struct DMMVIDPNTARGETMODESET *v2; // rbx
  __int64 v5; // rax
  _QWORD *v6; // rax
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // r11
  _QWORD *v11; // rax
  __int64 v12; // rcx

  v2 = a2;
  if ( !a2 )
  {
    v5 = WdLogNewEntry5_WdAssertion(this, 0LL);
    WdLogEvent5_WdAssertion(v5);
  }
  if ( *((DMMVIDPNTARGET **)v2 + 14) == this )
  {
    if ( v2 == *((struct DMMVIDPNTARGETMODESET **)this + 14) )
    {
      v7 = WdLogNewEntry5_WdDmmEvent();
      *(_QWORD *)(v7 + 24) = v2;
      *(_QWORD *)(v7 + 32) = *((unsigned int *)this + 6);
      WdLogEvent5_WdDmmEvent(v7);
      auto_rc<DMMVIDPNTARGETMODESET>::reset((__int64 *)this + 14, 0LL);
      if ( *((_DWORD *)v2 + 24) != 1 )
      {
        v9 = WdLogNewEntry5_WdAssertion(v8, a2);
        WdLogEvent5_WdAssertion(v9);
      }
    }
    if ( *((_DWORD *)v2 + 24) == 1
      && (unsigned __int8)DoublyLinkedList<DMMVIDPNTARGETMODESET,DoubleLinkedListElementDeleter<DMMVIDPNTARGETMODESET>>::ContainsByReference(
                            *((_QWORD *)this + 15),
                            v2) )
    {
      v11 = (_QWORD *)((char *)v2 + 8);
      v12 = *((_QWORD *)v2 + 1);
      if ( *(struct DMMVIDPNTARGETMODESET **)(v12 + 8) != (struct DMMVIDPNTARGETMODESET *)((char *)v2 + 8)
        || (a2 = (struct DMMVIDPNTARGETMODESET *)*((_QWORD *)v2 + 2), *(_QWORD **)a2 != v11) )
      {
        __fastfail(3u);
      }
      *(_QWORD *)a2 = v12;
      *(_QWORD *)(v12 + 8) = a2;
      *v11 = 0LL;
      *((_QWORD *)v2 + 2) = 0LL;
      --*(_QWORD *)(v10 + 32);
    }
    ReferenceCounted::Release((struct DMMVIDPNTARGETMODESET *)((char *)v2 + 88), (__int64)a2);
    return 0LL;
  }
  else
  {
    v6 = (_QWORD *)WdLogNewEntry5_WdError(this, a2);
    v6[3] = *((_QWORD *)v2 + 14);
    v6[4] = v2;
    v6[5] = this;
    WdLogEvent5_WdError(v6);
    return 3223192368LL;
  }
}
