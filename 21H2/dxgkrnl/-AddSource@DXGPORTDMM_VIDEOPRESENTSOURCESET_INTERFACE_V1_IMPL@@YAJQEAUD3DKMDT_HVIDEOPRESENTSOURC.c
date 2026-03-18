/*
 * XREFs of ?AddSource@DXGPORTDMM_VIDEOPRESENTSOURCESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDEOPRESENTSOURCESET__@@PEBU_D3DKMDT_VIDEO_PRESENT_SOURCE@@@Z @ 0x1C0213FD0
 * Callers:
 *     <none>
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??1?$auto_ptr@VDMMVIDPNSOURCE@@@@QEAA@XZ @ 0x1C0011748 (--1-$auto_ptr@VDMMVIDPNSOURCE@@@@QEAA@XZ.c)
 *     ??0DMMVIDEOPRESENTSOURCE@@QEAA@QEAVDMMVIDEOPRESENTSOURCESET@@I@Z @ 0x1C0028E08 (--0DMMVIDEOPRESENTSOURCE@@QEAA@QEAVDMMVIDEOPRESENTSOURCESET@@I@Z.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDEOPRESENTSOURCESET@@PEAUD3DKMDT_HVIDEOPRESENTSOURCESET__@@@@SAPEAVDMMVIDEOPRESENTSOURCESET@@PEAUD3DKMDT_HVIDEOPRESENTSOURCESET__@@@Z @ 0x1C0028F0C (-GetFromHandle@-$ExposedViaHandle@VDMMVIDEOPRESENTSOURCESET@@PEAUD3DKMDT_HVIDEOPRESENTSOURCESET_.c)
 *     ?ReleaseDdiEnumerator@DMMVIDEOPRESENTSOURCESET@@QEAAJPEBU_D3DKMDT_VIDEO_PRESENT_SOURCE@@@Z @ 0x1C02140A0 (-ReleaseDdiEnumerator@DMMVIDEOPRESENTSOURCESET@@QEAAJPEBU_D3DKMDT_VIDEO_PRESENT_SOURCE@@@Z.c)
 *     ?AddSource@DMMVIDEOPRESENTSOURCESET@@QEAAJV?$auto_ptr@VDMMVIDEOPRESENTSOURCE@@@@@Z @ 0x1C02140E0 (-AddSource@DMMVIDEOPRESENTSOURCESET@@QEAAJV-$auto_ptr@VDMMVIDEOPRESENTSOURCE@@@@@Z.c)
 */

__int64 __fastcall DXGPORTDMM_VIDEOPRESENTSOURCESET_INTERFACE_V1_IMPL::AddSource(
        DXGPORTDMM_VIDEOPRESENTSOURCESET_INTERFACE_V1_IMPL *this,
        const struct _D3DKMDT_VIDEO_PRESENT_SOURCE *a2,
        const struct _D3DKMDT_VIDEO_PRESENT_SOURCE *a3)
{
  __int64 v5; // rax
  struct DMMVIDEOPRESENTSOURCESET *v6; // rbx
  __int64 v7; // r9
  DMMVIDEOPRESENTSOURCE *v8; // rax
  DMMVIDEOPRESENTSOURCE *v9; // rax
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rdi
  _QWORD *v15; // rax
  DMMVIDEOPRESENTSOURCE *v16; // [rsp+30h] [rbp+8h] BYREF
  DMMVIDEOPRESENTSOURCE *v17; // [rsp+38h] [rbp+10h] BYREF

  v5 = WdLogNewEntry5_WdTrace(this, a2);
  *(_QWORD *)(v5 + 24) = a2;
  *(_QWORD *)(v5 + 32) = this;
  if ( !a2 )
  {
    WdLogSingleEntry2(2LL, 0LL, this);
    return 3223192324LL;
  }
  v6 = (struct DMMVIDEOPRESENTSOURCESET *)ExposedViaHandle<DMMVIDEOPRESENTSOURCESET,D3DKMDT_HVIDEOPRESENTSOURCESET__ *>::GetFromHandle((__int64)this);
  if ( !v6 )
  {
    WdLogSingleEntry1(2LL, this);
    return 3223192341LL;
  }
  v8 = (DMMVIDEOPRESENTSOURCE *)operator new[](0x88uLL, 0x4E506456u, 256LL, v7);
  if ( v8 )
  {
    v9 = DMMVIDEOPRESENTSOURCE::DMMVIDEOPRESENTSOURCE(v8, v6, a2->Id);
    v16 = v9;
    if ( v9 )
    {
      v16 = 0LL;
      v17 = v9;
      v10 = DMMVIDEOPRESENTSOURCESET::AddSource(v6, &v17);
      v13 = v10;
      if ( v10 >= 0 )
      {
        auto_ptr<DMMVIDPNSOURCE>::~auto_ptr<DMMVIDPNSOURCE>((__int64 (__fastcall ****)(_QWORD, __int64))&v16);
        return DMMVIDEOPRESENTSOURCESET::ReleaseDdiEnumerator(v6, a2);
      }
      v15 = (_QWORD *)WdLogNewEntry5_WdTrace(v12, v11);
      v15[3] = 0LL;
      v15[4] = v6;
      v15[5] = v13;
      goto LABEL_12;
    }
  }
  else
  {
    v16 = 0LL;
  }
  WdLogSingleEntry1(6LL, v6);
  LODWORD(v13) = -1073741801;
LABEL_12:
  auto_ptr<DMMVIDPNSOURCE>::~auto_ptr<DMMVIDPNSOURCE>((__int64 (__fastcall ****)(_QWORD, __int64))&v16);
  return (unsigned int)v13;
}
