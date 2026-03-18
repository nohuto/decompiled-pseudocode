/*
 * XREFs of ?Serialize@COMMITVIDPNREQUEST@VIDPN_MGR@@QEAAJPEAV?$AutoBuffer@U_DMM_COMMITVIDPNREQUEST_SERIALIZATION@@@DMM@@@Z @ 0x1C00696B0
 * Callers:
 *     ?SerializeCommitVidPnRequests@COMMITVIDPNREQUEST@VIDPN_MGR@@SAJAEBV?$Queue@UCOMMITVIDPNREQUEST@VIDPN_MGR@@@@PEAV?$AutoBuffer@U_DMM_COMMITVIDPNREQUESTSET_SERIALIZATION@@@DMM@@@Z @ 0x1C039E9C8 (-SerializeCommitVidPnRequests@COMMITVIDPNREQUEST@VIDPN_MGR@@SAJAEBV-$Queue@UCOMMITVIDPNREQUEST@V.c)
 * Callees:
 *     memmove @ 0x1C002CD00 (memmove.c)
 *     ??1?$AutoBuffer@U_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION@@@DMM@@UEAA@XZ @ 0x1C0067A6C (--1-$AutoBuffer@U_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION@@@DMM@@UEAA@XZ.c)
 *     ?Initialize@?$AutoBuffer@U_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION@@@DMM@@QEAAJ_KQEBXW4DXGK_POOL_FLAGS@@@Z @ 0x1C0069240 (-Initialize@-$AutoBuffer@U_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION@@@DMM@@QEAAJ_KQEBXW4DXGK_P.c)
 *     ?Serialize@DMMVIDPN@@QEBAJPEAV?$AutoBuffer@U_DMM_VIDPN_SERIALIZATION@@@DMM@@@Z @ 0x1C03A7788 (-Serialize@DMMVIDPN@@QEBAJPEAV-$AutoBuffer@U_DMM_VIDPN_SERIALIZATION@@@DMM@@@Z.c)
 */

__int64 __fastcall VIDPN_MGR::COMMITVIDPNREQUEST::Serialize(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rcx
  int v5; // eax
  __int64 v6; // r8
  __int64 v7; // r9
  unsigned int v8; // ebx
  __int64 v9; // rax
  int v10; // ecx
  void **v12; // [rsp+20h] [rbp-48h] BYREF
  __int128 v13; // [rsp+28h] [rbp-40h]
  void **v14; // [rsp+38h] [rbp-30h]
  void *Src; // [rsp+40h] [rbp-28h]
  size_t Size; // [rsp+48h] [rbp-20h]
  __int64 v17; // [rsp+50h] [rbp-18h]

  if ( a2[4] )
    WdLogSingleEntry0(1LL);
  v4 = *(_QWORD *)(a1 + 48);
  Src = 0LL;
  Size = 0LL;
  v12 = &DMM::AutoBuffer<_DMM_MONITORPRESENCEEVENTSET_SERIALIZATION>::`vftable'{for `SetElement'};
  v14 = &DMM::AutoBuffer<_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION>::`vftable'{for `NonReferenceCounted'};
  v13 = 0LL;
  v17 = 256LL;
  v5 = DMMVIDPN::Serialize(v4, &v12);
  v8 = v5;
  if ( v5 >= 0 )
  {
    DMM::AutoBuffer<_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION>::Initialize(a2, Size + 16, v6, v7);
    memmove((void *)(a2[4] + 16LL), Src, Size);
    v8 = 0;
    *(_DWORD *)a2[4] = *(_DWORD *)(a1 + 56);
    v9 = a2[4];
    v10 = *(_DWORD *)(a1 + 68);
    *(_QWORD *)(v9 + 4) = *(_QWORD *)(a1 + 60);
    *(_DWORD *)(v9 + 12) = v10;
  }
  else
  {
    WdLogSingleEntry2(2LL, *(_QWORD *)(a1 + 48), v5);
  }
  DMM::AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>::~AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>(&v12);
  return v8;
}
