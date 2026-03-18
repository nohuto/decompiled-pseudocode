/*
 * XREFs of ?CreateNewSourceInfo@DXGPORTDMM_VIDEOPRESENTSOURCESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDEOPRESENTSOURCESET__@@PEAPEAU_D3DKMDT_VIDEO_PRESENT_SOURCE@@@Z @ 0x1C0214150
 * Callers:
 *     <none>
 * Callees:
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDEOPRESENTSOURCESET@@PEAUD3DKMDT_HVIDEOPRESENTSOURCESET__@@@@SAPEAVDMMVIDEOPRESENTSOURCESET@@PEAUD3DKMDT_HVIDEOPRESENTSOURCESET__@@@Z @ 0x1C0028F0C (-GetFromHandle@-$ExposedViaHandle@VDMMVIDEOPRESENTSOURCESET@@PEAUD3DKMDT_HVIDEOPRESENTSOURCESET_.c)
 *     ?AcquireRawDdiEnumeratorCachedSourceInfo@DMMVIDEOPRESENTSOURCESET@@QEAAJPEAPEAU_D3DKMDT_VIDEO_PRESENT_SOURCE@@@Z @ 0x1C02141CC (-AcquireRawDdiEnumeratorCachedSourceInfo@DMMVIDEOPRESENTSOURCESET@@QEAAJPEAPEAU_D3DKMDT_VIDEO_PR.c)
 */

__int64 __fastcall DXGPORTDMM_VIDEOPRESENTSOURCESET_INTERFACE_V1_IMPL::CreateNewSourceInfo(
        DXGPORTDMM_VIDEOPRESENTSOURCESET_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDEOPRESENTSOURCESET__ *const a2,
        struct _D3DKMDT_VIDEO_PRESENT_SOURCE **a3)
{
  __int64 v5; // rax
  DMMVIDEOPRESENTSOURCESET *v6; // rax
  int v7; // eax
  __int64 v8; // rbx
  struct _D3DKMDT_VIDEO_PRESENT_SOURCE *v10; // [rsp+30h] [rbp+8h] BYREF

  v5 = WdLogNewEntry5_WdTrace(this, a2);
  *(_QWORD *)(v5 + 24) = this;
  *(_QWORD *)(v5 + 32) = a2;
  if ( !a2 )
    WdLogSingleEntry0(1LL);
  *(_QWORD *)a2 = 0LL;
  v6 = (DMMVIDEOPRESENTSOURCESET *)ExposedViaHandle<DMMVIDEOPRESENTSOURCESET,D3DKMDT_HVIDEOPRESENTSOURCESET__ *>::GetFromHandle((__int64)this);
  if ( v6 )
  {
    v10 = 0LL;
    v7 = DMMVIDEOPRESENTSOURCESET::AcquireRawDdiEnumeratorCachedSourceInfo(v6, &v10);
    v8 = v7;
    if ( v7 < 0 )
    {
      if ( v7 != -1073741801 )
        WdLogSingleEntry0(1LL);
      WdLogSingleEntry1(2LL, v8);
      return (unsigned int)v8;
    }
    else
    {
      *(_QWORD *)a2 = v10;
      return 0LL;
    }
  }
  else
  {
    WdLogSingleEntry1(2LL, this);
    return 3223192341LL;
  }
}
