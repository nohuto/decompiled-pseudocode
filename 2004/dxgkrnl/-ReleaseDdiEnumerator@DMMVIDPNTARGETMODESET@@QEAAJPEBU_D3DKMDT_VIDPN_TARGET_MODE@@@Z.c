/*
 * XREFs of ?ReleaseDdiEnumerator@DMMVIDPNTARGETMODESET@@QEAAJPEBU_D3DKMDT_VIDPN_TARGET_MODE@@@Z @ 0x1C0110D14
 * Callers:
 *     ?AddMode@DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTARGETMODESET__@@QEAU_D3DKMDT_VIDPN_TARGET_MODE@@@Z @ 0x1C0110920 (-AddMode@DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTARGETMODESET__@@QEAU_D.c)
 *     ?ReleaseModeInfo@DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTARGETMODESET__@@QEBU_D3DKMDT_VIDPN_TARGET_MODE@@@Z @ 0x1C0123120 (-ReleaseModeInfo@DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTARGETMODESET.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C00027E4 (--3@YAXPEAX@Z.c)
 *     ?ContainsByReference@?$DoublyLinkedList@VDMMVIDEOPRESENTTARGET@@U?$DoubleLinkedListElementDeleter@VDMMVIDEOPRESENTTARGET@@@@@@QEAAEQEBVDMMVIDEOPRESENTTARGET@@@Z @ 0x1C0005CF0 (-ContainsByReference@-$DoublyLinkedList@VDMMVIDEOPRESENTTARGET@@U-$DoubleLinkedListElementDelete.c)
 */

__int64 __fastcall DMMVIDPNTARGETMODESET::ReleaseDdiEnumerator(
        DMMVIDPNTARGETMODESET *this,
        const struct _D3DKMDT_VIDPN_TARGET_MODE *a2)
{
  union _D3DKMDT_VIDEO_SIGNAL_INFO::$9963842E1DCCBF6730749724D5C7309E *p_AdditionalSignalInfo; // rbx
  __int64 v4; // rdx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rax

  if ( !a2 )
  {
    v8 = WdLogNewEntry5_WdError(this, 0LL);
    *(_QWORD *)(v8 + 24) = 0LL;
LABEL_9:
    WdLogEvent5_WdError(v8);
    return 3223192337LL;
  }
  p_AdditionalSignalInfo = (union _D3DKMDT_VIDEO_SIGNAL_INFO::$9963842E1DCCBF6730749724D5C7309E *)&a2[-1].VideoSignalInfo.AdditionalSignalInfo;
  if ( *(_DWORD *)&a2[-1].VideoSignalInfo.AdditionalSignalInfo != 305419896 )
  {
    v8 = WdLogNewEntry5_WdError(this, a2);
    *(_QWORD *)(v8 + 24) = p_AdditionalSignalInfo;
    goto LABEL_9;
  }
  v4 = *(_QWORD *)&p_AdditionalSignalInfo[2].AdditionalSignalInfo;
  if ( !v4
    || DoublyLinkedList<DMMVIDEOPRESENTTARGET,DoubleLinkedListElementDeleter<DMMVIDEOPRESENTTARGET>>::ContainsByReference(
         (__int64)this + 32,
         v4) )
  {
    operator delete(p_AdditionalSignalInfo);
    return 0LL;
  }
  else
  {
    v9 = WdLogNewEntry5_WdError(v7, v6);
    *(_QWORD *)(v9 + 24) = p_AdditionalSignalInfo;
    *(_QWORD *)(v9 + 32) = this;
    WdLogEvent5_WdError(v9);
    return 3223192368LL;
  }
}
