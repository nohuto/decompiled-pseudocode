/*
 * XREFs of ?ReleaseDdiEnumerator@DMMVIDPNSOURCEMODESET@@QEAAJPEBU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z @ 0x1C01319CC
 * Callers:
 *     ?ReleaseModeInfo@DXGDMM_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNSOURCEMODESET__@@QEBU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z @ 0x1C0131940 (-ReleaseModeInfo@DXGDMM_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNSOURCEMODESET.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C00027E4 (--3@YAXPEAX@Z.c)
 *     ?ContainsByReference@?$DoublyLinkedList@VDMMVIDPNSOURCEMODE@@U?$DoubleLinkedListElementDeleter@VDMMVIDPNSOURCEMODE@@@@@@QEAAEQEBVDMMVIDPNSOURCEMODE@@@Z @ 0x1C00168F4 (-ContainsByReference@-$DoublyLinkedList@VDMMVIDPNSOURCEMODE@@U-$DoubleLinkedListElementDeleter@V.c)
 */

__int64 __fastcall DMMVIDPNSOURCEMODESET::ReleaseDdiEnumerator(
        DMMVIDPNSOURCEMODESET *this,
        const struct _D3DKMDT_VIDPN_SOURCE_MODE *a2)
{
  _QWORD *v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v8; // rax
  __int64 v9; // rax

  if ( !a2 )
  {
    v8 = WdLogNewEntry5_WdError(this, 0LL);
    *(_QWORD *)(v8 + 24) = 0LL;
LABEL_8:
    WdLogEvent5_WdError(v8);
    return 3223192336LL;
  }
  v3 = &a2[-1].Format.Text + 4;
  if ( a2[-1].Format.Graphics.Stride != 305419896 )
  {
    v8 = WdLogNewEntry5_WdError(this, a2);
    *(_QWORD *)(v8 + 24) = v3;
    goto LABEL_8;
  }
  v4 = v3[1];
  if ( v4
    && !DoublyLinkedList<DMMVIDPNSOURCEMODE,DoubleLinkedListElementDeleter<DMMVIDPNSOURCEMODE>>::ContainsByReference(
          (__int64)this + 32,
          v4) )
  {
    v9 = WdLogNewEntry5_WdError(v6, v5);
    *(_QWORD *)(v9 + 24) = v3;
    *(_QWORD *)(v9 + 32) = this;
    WdLogEvent5_WdError(v9);
    return 3223192368LL;
  }
  else
  {
    operator delete(v3);
    return 0LL;
  }
}
