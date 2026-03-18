/*
 * XREFs of ??0CCheckMPOCache@@QEAA@PEBUDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@I_N@Z @ 0x18001259C
 * Callers:
 *     ?AddCheckMPOCache@CD3DDevice@@QEAAXPEBUDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@I_N@Z @ 0x180012500 (-AddCheckMPOCache@CD3DDevice@@QEAAXPEBUDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@I_N@Z.c)
 * Callees:
 *     ??$emplace@UDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@@?$vector_facade@UDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@V?$buffer_impl@UDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@$05$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA?AV?$basic_iterator@UDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@@1@V?$basic_iterator@$$CBUDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@@1@UDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@@Z @ 0x18001268C (--$emplace@UDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@@-$vector_facade@UDXGI_CHECK_MULTIPL.c)
 *     ?GetCurrentFrameId@@YA_KXZ @ 0x180092F80 (-GetCurrentFrameId@@YA_KXZ.c)
 */

CCheckMPOCache *__fastcall CCheckMPOCache::CCheckMPOCache(
        CCheckMPOCache *this,
        const struct DXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO *a2)
{
  unsigned __int64 CurrentFrameId; // rax
  unsigned int v5; // r8d
  unsigned __int64 *v6; // r10
  __int64 v7; // rcx
  char v8; // r9
  __int64 v9; // rdi
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  _BYTE v20[16]; // [rsp+20h] [rbp-A8h] BYREF
  _OWORD v21[9]; // [rsp+30h] [rbp-98h] BYREF
  __int64 v22; // [rsp+D0h] [rbp+8h] BYREF

  *(_QWORD *)this = (char *)this + 24;
  *((_QWORD *)this + 1) = (char *)this + 24;
  *((_QWORD *)this + 2) = (char *)this + 888;
  CurrentFrameId = GetCurrentFrameId();
  *v6 = CurrentFrameId;
  *(_BYTE *)(v7 + 896) = v8;
  if ( v5 )
  {
    v9 = v5;
    do
    {
      v10 = *(_OWORD *)a2;
      v11 = *((_OWORD *)a2 + 1);
      v22 = *((_QWORD *)this + 1);
      v21[0] = v10;
      v12 = *((_OWORD *)a2 + 2);
      v21[1] = v11;
      v13 = *((_OWORD *)a2 + 3);
      v21[2] = v12;
      v14 = *((_OWORD *)a2 + 4);
      v21[3] = v13;
      v15 = *((_OWORD *)a2 + 5);
      v21[4] = v14;
      v16 = *((_OWORD *)a2 + 6);
      v21[5] = v15;
      v17 = *((_OWORD *)a2 + 7);
      v21[6] = v16;
      v18 = *((_OWORD *)a2 + 8);
      v21[7] = v17;
      v21[8] = v18;
      detail::vector_facade<DXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO,detail::buffer_impl<DXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO,6,1,detail::liberal_expansion_policy>>::emplace<DXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO>(
        this,
        v20,
        &v22,
        v21);
      a2 = (const struct DXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO *)((char *)a2 + 144);
      --v9;
    }
    while ( v9 );
  }
  return this;
}
