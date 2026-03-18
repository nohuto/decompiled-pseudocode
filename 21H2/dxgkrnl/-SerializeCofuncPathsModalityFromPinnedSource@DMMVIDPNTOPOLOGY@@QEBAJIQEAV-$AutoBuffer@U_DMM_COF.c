/*
 * XREFs of ?SerializeCofuncPathsModalityFromPinnedSource@DMMVIDPNTOPOLOGY@@QEBAJIQEAV?$AutoBuffer@U_DMM_COFUNCPATHSMODALITY_SERIALIZATION@@@DMM@@@Z @ 0x1C03A5958
 * Callers:
 *     ?_SerializePinnedSourceCofuncPathsModalityFromSource@VIDPN_MGR@@AEBAJQEAVDMMVIDPN@@IAEBU_D3DKMDT_VIDPN_SOURCE_MODE@@QEAV?$AutoBuffer@U_DMM_COFUNCPATHSMODALITY_SERIALIZATION@@@DMM@@@Z @ 0x1C039F0B8 (-_SerializePinnedSourceCofuncPathsModalityFromSource@VIDPN_MGR@@AEBAJQEAVDMMVIDPN@@IAEBU_D3DKMDT.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z @ 0x1C000FD8C (-reset@-$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z.c)
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C0010B98 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?FindById@?$IndexedSet@VDMMVIDPNSOURCE@@@@QEBAPEAVDMMVIDPNSOURCE@@I@Z @ 0x1C00114BC (-FindById@-$IndexedSet@VDMMVIDPNSOURCE@@@@QEBAPEAVDMMVIDPNSOURCE@@I@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C0011924 (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C001CC0C (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     memmove @ 0x1C002CD00 (memmove.c)
 *     ??1?$auto_ptr@VDMMVIDPNSOURCEMODE@@@@QEAA@XZ @ 0x1C004ED14 (--1-$auto_ptr@VDMMVIDPNSOURCEMODE@@@@QEAA@XZ.c)
 *     ??1?$AutoBuffer@U_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION@@@DMM@@UEAA@XZ @ 0x1C0067A6C (--1-$AutoBuffer@U_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION@@@DMM@@UEAA@XZ.c)
 *     ??1?$Queue@V?$AutoBuffer@U_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION@@@DMM@@@@UEAA@XZ @ 0x1C0067B00 (--1-$Queue@V-$AutoBuffer@U_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION@@@DMM@@@@UEAA@XZ.c)
 *     ?Enqueue@?$Queue@V?$AutoBuffer@U_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION@@@DMM@@@@QEAAEQEAV?$AutoBuffer@U_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION@@@DMM@@@Z @ 0x1C0068D8C (-Enqueue@-$Queue@V-$AutoBuffer@U_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION@@@DMM@@@@QEAAEQEAV-.c)
 *     ?Initialize@?$AutoBuffer@U_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION@@@DMM@@QEAAJ_KQEBXW4DXGK_POOL_FLAGS@@@Z @ 0x1C0069240 (-Initialize@-$AutoBuffer@U_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION@@@DMM@@QEAAJ_KQEBXW4DXGK_P.c)
 *     ?EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z @ 0x1C01AA388 (-EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z.c)
 *     ?GetNumPathsFromSource@DMMVIDPNTOPOLOGY@@QEBAJIPEA_K@Z @ 0x1C01BB920 (-GetNumPathsFromSource@DMMVIDPNTOPOLOGY@@QEBAJIPEA_K@Z.c)
 *     ?Serialize@DMMVIDPNPRESENTPATH@@QEBAXQEAU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x1C01BD088 (-Serialize@DMMVIDPNPRESENTPATH@@QEBAXQEAU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z.c)
 *     ?Serialize@DMMVIDPNTARGETMODESET@@QEBAJQEAV?$AutoBuffer@U_DMM_VIDPNTARGETMODESET_SERIALIZATION@@@DMM@@@Z @ 0x1C03A87D4 (-Serialize@DMMVIDPNTARGETMODESET@@QEBAJQEAV-$AutoBuffer@U_DMM_VIDPNTARGETMODESET_SERIALIZATION@@.c)
 */

__int64 __fastcall DMMVIDPNTOPOLOGY::SerializeCofuncPathsModalityFromPinnedSource(
        DMMVIDPNTOPOLOGY *this,
        unsigned int a2,
        _QWORD *a3)
{
  __int64 v3; // rdi
  int NumPathsFromSource; // eax
  unsigned int v8; // ebx
  __int64 Container; // rax
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rax
  _QWORD *v13; // r8
  __int64 v14; // r9
  _QWORD *v15; // rcx
  unsigned __int64 v16; // rax
  __int64 v17; // rax
  unsigned __int64 v18; // rdx
  _QWORD *v19; // rcx
  _QWORD *v20; // rax
  int v21; // eax
  unsigned int v22; // r13d
  DMMVIDPNPRESENTPATH *v23; // rbx
  __int64 v24; // rdx
  __int64 v25; // rax
  __int64 v26; // rdx
  DMMVIDPNSOURCEMODESET *v27; // rbx
  int v28; // eax
  size_t v29; // rbx
  __int64 v30; // r9
  __int64 v31; // rax
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // r12
  int v35; // eax
  DMMVIDPNPRESENTPATH *v36; // rbx
  unsigned __int8 v37; // di
  unsigned __int8 v38; // cl
  unsigned __int8 *v39; // rdx
  unsigned __int8 v40; // r8
  unsigned __int8 *v41; // rsi
  __int64 v42; // rbx
  _QWORD *v43; // rax
  DMMVIDPNSOURCEMODESET *v44; // [rsp+30h] [rbp-89h] BYREF
  unsigned __int64 v45; // [rsp+38h] [rbp-81h] BYREF
  unsigned __int64 v46; // [rsp+40h] [rbp-79h]
  _QWORD v47[2]; // [rsp+50h] [rbp-69h] BYREF
  int v48; // [rsp+60h] [rbp-59h]
  _QWORD v49[2]; // [rsp+68h] [rbp-51h] BYREF
  unsigned __int64 v50; // [rsp+78h] [rbp-41h]
  int v51; // [rsp+80h] [rbp-39h]
  __int64 v52; // [rsp+88h] [rbp-31h]
  __int64 v53; // [rsp+90h] [rbp-29h] BYREF
  DMMVIDPNPRESENTPATH *Path; // [rsp+98h] [rbp-21h]
  void **v55; // [rsp+A0h] [rbp-19h] BYREF
  __int128 v56; // [rsp+A8h] [rbp-11h]
  void **v57; // [rsp+B8h] [rbp-1h]
  void *Src; // [rsp+C0h] [rbp+7h]
  size_t Size; // [rsp+C8h] [rbp+Fh]
  __int64 v60; // [rsp+D0h] [rbp+17h]
  unsigned int v61; // [rsp+130h] [rbp+77h] BYREF
  __int64 (__fastcall ***v62)(_QWORD, __int64); // [rsp+138h] [rbp+7Fh] BYREF

  v3 = a2;
  if ( !a3 )
  {
    WdLogSingleEntry1(2LL, 0LL);
    return 3221225485LL;
  }
  if ( a3[4] )
    WdLogSingleEntry0(1LL);
  v45 = 0LL;
  NumPathsFromSource = DMMVIDPNTOPOLOGY::GetNumPathsFromSource(this, v3, &v45);
  v8 = NumPathsFromSource;
  if ( NumPathsFromSource == -1071774919 )
  {
    WdLogSingleEntry2(7LL, v3, this);
    return 3223192377LL;
  }
  if ( NumPathsFromSource < 0 )
  {
    WdLogSingleEntry3(2LL, v3, this, NumPathsFromSource);
    return v8;
  }
  Container = ContainedBy<DMMVIDPN>::GetContainer((__int64)this + 160);
  v10 = IndexedSet<DMMVIDPNSOURCE>::FindById(*(_QWORD *)(Container + 304), v3);
  v11 = *(_QWORD *)(v10 + 104);
  if ( v11 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v11 + 96));
    v12 = *(_QWORD *)(v10 + 104);
  }
  else
  {
    v12 = 0LL;
  }
  v53 = v12;
  if ( !*(_QWORD *)(v12 + 144) )
    WdLogSingleEntry0(1LL);
  auto_rc<DMMVIDPNSOURCEMODESET>::reset(&v53, 0LL);
  v15 = v49;
  v47[0] = &Queue<DMM::AutoBuffer<_DMM_COMMITVIDPNREQUEST_SERIALIZATION>>::`vftable';
  v48 = 0;
  v47[1] = &DoublyLinkedList<DMM::AutoBuffer<_DMM_VIDPN_SERIALIZATION>,DoubleLinkedListElementDeleter<DMM::AutoBuffer<_DMM_VIDPN_SERIALIZATION>>>::`vftable';
  v49[1] = v49;
  v16 = 0LL;
  v46 = 0LL;
  v50 = 0LL;
  v49[0] = v49;
  v51 = 2;
  v52 = 0LL;
  if ( !v45 )
    goto LABEL_15;
  do
  {
    v61 = -1;
    if ( (int)DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource((DMMVIDPNTOPOLOGY **)this, v3, v16, &v61) < 0 )
      WdLogSingleEntry0(1LL);
    v22 = v61;
    Path = DMMVIDPNTOPOLOGY::FindPath(this, v3, v61);
    v23 = Path;
    if ( !Path )
      WdLogSingleEntry0(1LL);
    Src = 0LL;
    v55 = &DMM::AutoBuffer<_DMM_MONITORPRESENCEEVENTSET_SERIALIZATION>::`vftable'{for `SetElement'};
    Size = 0LL;
    v57 = &DMM::AutoBuffer<_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION>::`vftable'{for `NonReferenceCounted'};
    v56 = 0LL;
    v60 = 256LL;
    v24 = *((_QWORD *)v23 + 12);
    v44 = 0LL;
    v25 = *(_QWORD *)(v24 + 104);
    if ( v25 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v25 + 96));
      v26 = *(_QWORD *)(v24 + 104);
      v22 = v61;
    }
    else
    {
      v26 = 0LL;
    }
    auto_rc<DMMVIDPNTARGETMODESET>::reset((__int64 *)&v44, v26);
    v27 = v44;
    if ( !v44 )
      WdLogSingleEntry0(1LL);
    if ( *((_QWORD *)v27 + 18) )
      WdLogSingleEntry0(1LL);
    v28 = DMMVIDPNTARGETMODESET::Serialize(v27);
    v8 = v28;
    if ( v28 < 0 )
    {
      WdLogSingleEntry4(2LL, v3, v22, this, v28);
      auto_rc<DMMVIDPNTARGETMODESET>::reset((__int64 *)&v44, 0LL);
      goto LABEL_48;
    }
    auto_rc<DMMVIDPNTARGETMODESET>::reset((__int64 *)&v44, 0LL);
    v29 = Size;
    v31 = operator new[](0x38uLL, 0x4E506456u, 256LL, v30);
    v34 = v31;
    if ( !v31 )
    {
      v62 = 0LL;
      WdLogSingleEntry3(6LL, 56LL, v3, v22);
      v8 = -1073741801;
      goto LABEL_46;
    }
    *(_QWORD *)(v31 + 8) = 0LL;
    *(_QWORD *)(v31 + 16) = 0LL;
    *(_QWORD *)v31 = &DMM::AutoBuffer<_DMM_MONITORPRESENCEEVENTSET_SERIALIZATION>::`vftable'{for `SetElement'};
    *(_QWORD *)(v31 + 32) = 0LL;
    *(_QWORD *)(v31 + 40) = 0LL;
    *(_QWORD *)(v31 + 24) = &DMM::AutoBuffer<_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION>::`vftable'{for `NonReferenceCounted'};
    *(_QWORD *)(v31 + 48) = 256LL;
    v62 = (__int64 (__fastcall ***)(_QWORD, __int64))v31;
    v35 = DMM::AutoBuffer<_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION>::Initialize((_QWORD *)v31, v29 + 360, v32, v33);
    v8 = v35;
    if ( v35 < 0 )
    {
      WdLogSingleEntry4(2LL, v3, v22, this, v35);
LABEL_46:
      auto_ptr<DMMVIDPNSOURCEMODE>::~auto_ptr<DMMVIDPNSOURCEMODE>(&v62);
LABEL_48:
      DMM::AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>::~AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>(&v55);
      goto LABEL_60;
    }
    v36 = Path;
    if ( *((_DWORD *)Path + 28) != 254 )
      WdLogSingleEntry0(1LL);
    if ( *((_DWORD *)v36 + 29) != 254 )
      WdLogSingleEntry0(1LL);
    DMMVIDPNPRESENTPATH::Serialize(v36, *(struct _D3DKMDT_VIDPN_PRESENT_PATH *const *)(v34 + 32));
    memmove((void *)(*(_QWORD *)(v34 + 32) + 360LL), Src, Size);
    v62 = 0LL;
    Queue<DMM::AutoBuffer<_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION>>::Enqueue(v47, v34);
    auto_ptr<DMMVIDPNSOURCEMODE>::~auto_ptr<DMMVIDPNSOURCEMODE>(&v62);
    DMM::AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>::~AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>(&v55);
    v16 = v46 + 1;
    v46 = v16;
  }
  while ( v16 < v45 );
  v17 = v50;
  v15 = (_QWORD *)v49[0];
  if ( v50 > 1 )
    goto LABEL_16;
LABEL_15:
  v17 = 1LL;
LABEL_16:
  v18 = 4 * v17 + 4;
  if ( v15 != v49 )
  {
    v19 = v15 - 1;
    while ( v19 )
    {
      v18 += v19[5];
      v13 = v49;
      v20 = (_QWORD *)v19[1];
      v19 = v20 - 1;
      if ( v20 == v49 )
        v19 = 0LL;
    }
  }
  v21 = DMM::AutoBuffer<_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION>::Initialize(a3, v18, (__int64)v13, v14);
  v8 = v21;
  if ( v21 >= 0 )
  {
    v37 = 0;
    *(_BYTE *)a3[4] = v50;
    v38 = 1;
    v39 = (unsigned __int8 *)a3[4];
    v40 = *v39;
    if ( *v39 > 1u )
      v38 = *v39;
    v41 = &v39[4 * v38 + 4];
    if ( (_QWORD *)v49[0] != v49 )
    {
      v42 = v49[0] - 8LL;
      if ( v49[0] != 8LL )
      {
        do
        {
          *(_DWORD *)(a3[4] + 4LL * v37 + 4) = (_DWORD)v41 - *((_DWORD *)a3 + 8);
          memmove(v41, *(const void **)(v42 + 32), *(_QWORD *)(v42 + 40));
          v41 += *(_QWORD *)(v42 + 40);
          v43 = *(_QWORD **)(v42 + 8);
          v42 = (__int64)(v43 - 1);
          if ( v43 == v49 )
            v42 = 0LL;
          ++v37;
        }
        while ( v42 );
        v40 = *(_BYTE *)a3[4];
      }
    }
    if ( v37 != v40 )
      WdLogSingleEntry0(1LL);
    v8 = 0;
  }
  else
  {
    WdLogSingleEntry4(2LL, a3, v3, this, v21);
  }
LABEL_60:
  Queue<DMM::AutoBuffer<_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION>>::~Queue<DMM::AutoBuffer<_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION>>(v47);
  return v8;
}
