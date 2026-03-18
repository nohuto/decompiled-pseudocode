/*
 * XREFs of ?CreateNewTargetInfo@DXGPORTDMM_VIDEOPRESENTTARGETSET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDEOPRESENTTARGETSET__@@PEAPEAU_D3DKMDT_VIDEO_PRESENT_TARGET@@@Z @ 0x1C0190B30
 * Callers:
 *     <none>
 * Callees:
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDEOPRESENTTARGETSET@@PEAUD3DKMDT_HVIDEOPRESENTTARGETSET__@@@@SAPEAVDMMVIDEOPRESENTTARGETSET@@PEAUD3DKMDT_HVIDEOPRESENTTARGETSET__@@@Z @ 0x1C0022FB0 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDEOPRESENTTARGETSET@@PEAUD3DKMDT_HVIDEOPRESENTTARGETSET_.c)
 *     ?AcquireRawDdiEnumeratorCachedTargetInfo@DMMVIDEOPRESENTTARGETSET@@QEAAJPEAPEAU_D3DKMDT_VIDEO_PRESENT_TARGET@@@Z @ 0x1C0190BAC (-AcquireRawDdiEnumeratorCachedTargetInfo@DMMVIDEOPRESENTTARGETSET@@QEAAJPEAPEAU_D3DKMDT_VIDEO_PR.c)
 */

__int64 __fastcall DXGPORTDMM_VIDEOPRESENTTARGETSET_INTERFACE_V1_IMPL::CreateNewTargetInfo(
        DXGPORTDMM_VIDEOPRESENTTARGETSET_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDEOPRESENTTARGETSET__ *const a2,
        struct _D3DKMDT_VIDEO_PRESENT_TARGET **a3,
        __int64 a4)
{
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  DMMVIDEOPRESENTTARGETSET *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 result; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  struct _D3DKMDT_VIDEO_PRESENT_TARGET *v15; // [rsp+30h] [rbp+8h] BYREF

  v6 = WdLogNewEntry5_WdTrace(this, a2, a3, a4);
  *(_QWORD *)(v6 + 24) = this;
  *(_QWORD *)(v6 + 32) = a2;
  if ( !a2 )
  {
    v13 = WdLogNewEntry5_WdAssertion(v8, v7);
    WdLogEvent5_WdAssertion(v13);
  }
  *(_QWORD *)a2 = 0LL;
  v9 = (DMMVIDEOPRESENTTARGETSET *)ExposedViaHandle<DMMVIDEOPRESENTTARGETSET,D3DKMDT_HVIDEOPRESENTTARGETSET__ *>::GetFromHandle((__int64)this);
  if ( v9 )
  {
    v15 = 0LL;
    result = DMMVIDEOPRESENTTARGETSET::AcquireRawDdiEnumeratorCachedTargetInfo(v9, &v15);
    if ( (int)result < 0 )
    {
      if ( (_DWORD)result == -1071774971 )
        return 3221225495LL;
    }
    else
    {
      *(_QWORD *)a2 = v15;
      return 0LL;
    }
  }
  else
  {
    v14 = WdLogNewEntry5_WdError(v11, v10);
    *(_QWORD *)(v14 + 24) = this;
    WdLogEvent5_WdError(v14);
    return 3223192342LL;
  }
  return result;
}
