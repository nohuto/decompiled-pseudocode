/*
 * XREFs of ??0CCheckMPOCache@@QEAA@PEBUDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@I_N@Z @ 0x1800EC010
 * Callers:
 *     ?AddCheckMPOCache@CD3DDevice@@QEAAXPEBUDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@I_N@Z @ 0x1800EC138 (-AddCheckMPOCache@CD3DDevice@@QEAAXPEBUDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@I_N@Z.c)
 * Callees:
 *     ?GetCurrentFrameId@@YA_KXZ @ 0x180099EC4 (-GetCurrentFrameId@@YA_KXZ.c)
 *     ??$emplace@UDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@@?$vector_facade@UDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@V?$buffer_impl@UDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@$05$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA?AV?$basic_iterator@UDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@@1@V?$basic_iterator@$$CBUDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@@1@UDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@@Z @ 0x1800EBDF0 (--$emplace@UDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@@-$vector_facade@UDXGI_CHECK_MULTIPL.c)
 */

CCheckMPOCache *__fastcall CCheckMPOCache::CCheckMPOCache(
        CCheckMPOCache *this,
        const struct DXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO *a2)
{
  unsigned __int64 CurrentFrameId; // rax
  unsigned int v5; // r8d
  unsigned __int64 *v6; // r10
  char v7; // r9
  __int64 v8; // rdi
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int64 v19; // [rsp+20h] [rbp-A8h] BYREF
  _OWORD v20[9]; // [rsp+30h] [rbp-98h] BYREF
  __int64 v21; // [rsp+D0h] [rbp+8h] BYREF

  *(_QWORD *)this = (char *)this + 24;
  *((_QWORD *)this + 1) = (char *)this + 24;
  *((_QWORD *)this + 2) = (char *)this + 888;
  CurrentFrameId = GetCurrentFrameId();
  *v6 = CurrentFrameId;
  *((_BYTE *)this + 896) = v7;
  if ( v5 )
  {
    v8 = v5;
    do
    {
      v9 = *(_OWORD *)a2;
      v10 = *((_OWORD *)a2 + 1);
      v21 = *((_QWORD *)this + 1);
      v20[0] = v9;
      v11 = *((_OWORD *)a2 + 2);
      v20[1] = v10;
      v12 = *((_OWORD *)a2 + 3);
      v20[2] = v11;
      v13 = *((_OWORD *)a2 + 4);
      v20[3] = v12;
      v14 = *((_OWORD *)a2 + 5);
      v20[4] = v13;
      v15 = *((_OWORD *)a2 + 6);
      v20[5] = v14;
      v16 = *((_OWORD *)a2 + 7);
      v20[6] = v15;
      v17 = *((_OWORD *)a2 + 8);
      v20[7] = v16;
      v20[8] = v17;
      detail::vector_facade<DXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO,detail::buffer_impl<DXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO,6,1,detail::liberal_expansion_policy>>::emplace<DXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO>(
        this,
        &v19,
        &v21,
        v20);
      a2 = (const struct DXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO *)((char *)a2 + 144);
      --v8;
    }
    while ( v8 );
  }
  return this;
}
