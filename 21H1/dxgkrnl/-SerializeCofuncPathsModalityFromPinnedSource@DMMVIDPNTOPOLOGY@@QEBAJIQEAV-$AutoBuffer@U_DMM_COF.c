/*
 * XREFs of ?SerializeCofuncPathsModalityFromPinnedSource@DMMVIDPNTOPOLOGY@@QEBAJIQEAV?$AutoBuffer@U_DMM_COFUNCPATHSMODALITY_SERIALIZATION@@@DMM@@@Z @ 0x1C02E23D4
 * Callers:
 *     ?_SerializePinnedSourceCofuncPathsModalityFromSource@VIDPN_MGR@@AEBAJQEAVDMMVIDPN@@IAEBU_D3DKMDT_VIDPN_SOURCE_MODE@@QEAV?$AutoBuffer@U_DMM_COFUNCPATHSMODALITY_SERIALIZATION@@@DMM@@@Z @ 0x1C02DCBE4 (-_SerializePinnedSourceCofuncPathsModalityFromSource@VIDPN_MGR@@AEBAJQEAVDMMVIDPN@@IAEBU_D3DKMDT.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000A840 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C000E170 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?FindById@?$IndexedSet@VDMMVIDEOPRESENTTARGET@@@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C000F360 (-FindById@-$IndexedSet@VDMMVIDEOPRESENTTARGET@@@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z @ 0x1C000F784 (-reset@-$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C0010C44 (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C0018388 (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     memmove @ 0x1C0026580 (memmove.c)
 *     ??1?$auto_ptr@VDMMVIDPNSOURCEMODE@@@@QEAA@XZ @ 0x1C004B580 (--1-$auto_ptr@VDMMVIDPNSOURCEMODE@@@@QEAA@XZ.c)
 *     ??1?$AutoBuffer@U_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION@@@DMM@@UEAA@XZ @ 0x1C0059008 (--1-$AutoBuffer@U_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION@@@DMM@@UEAA@XZ.c)
 *     ??1?$Queue@V?$AutoBuffer@U_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION@@@DMM@@@@UEAA@XZ @ 0x1C005909C (--1-$Queue@V-$AutoBuffer@U_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION@@@DMM@@@@UEAA@XZ.c)
 *     ?Enqueue@?$Queue@V?$AutoBuffer@U_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION@@@DMM@@@@QEAAEQEAV?$AutoBuffer@U_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION@@@DMM@@@Z @ 0x1C005A0EC (-Enqueue@-$Queue@V-$AutoBuffer@U_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION@@@DMM@@@@QEAAEQEAV-.c)
 *     ?Initialize@?$AutoBuffer@U_KEY_VALUE_PARTIAL_INFORMATION@@@DMM@@QEAAJ_KQEBXW4_POOL_TYPE@@@Z @ 0x1C005A534 (-Initialize@-$AutoBuffer@U_KEY_VALUE_PARTIAL_INFORMATION@@@DMM@@QEAAJ_KQEBXW4_POOL_TYPE@@@Z.c)
 *     ?Serialize@DMMVIDPNPRESENTPATH@@QEBAXQEAU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x1C00E2788 (-Serialize@DMMVIDPNPRESENTPATH@@QEBAXQEAU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z.c)
 *     ?EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z @ 0x1C0129B6C (-EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z.c)
 *     ?GetNumPathsFromSource@DMMVIDPNTOPOLOGY@@QEBAJIPEA_K@Z @ 0x1C012B788 (-GetNumPathsFromSource@DMMVIDPNTOPOLOGY@@QEBAJIPEA_K@Z.c)
 *     ?Serialize@DMMVIDPNTARGETMODESET@@QEBAJQEAV?$AutoBuffer@U_DMM_VIDPNTARGETMODESET_SERIALIZATION@@@DMM@@@Z @ 0x1C02E5400 (-Serialize@DMMVIDPNTARGETMODESET@@QEBAJQEAV-$AutoBuffer@U_DMM_VIDPNTARGETMODESET_SERIALIZATION@@.c)
 */

__int64 __fastcall DMMVIDPNTOPOLOGY::SerializeCofuncPathsModalityFromPinnedSource(
        DMMVIDPNTOPOLOGY *this,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // rsi
  __int64 v6; // rax
  __int64 v8; // rax
  int NumPathsFromSource; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rbx
  __int64 v13; // rax
  _QWORD *v14; // rax
  __int64 Container; // rax
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rax
  _QWORD *v21; // rcx
  unsigned __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rax
  unsigned int v26; // r12d
  __int64 v27; // rdx
  __int64 v28; // rcx
  struct DMMVIDPNPRESENTPATH *Path; // r13
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rdx
  __int64 v35; // rcx
  DMMVIDPNSOURCEMODESET *v36; // rbx
  __int64 v37; // rax
  __int64 v38; // rax
  int v39; // eax
  __int64 v40; // rdx
  __int64 v41; // rcx
  size_t v42; // rbx
  _QWORD *v43; // rax
  __int64 v44; // rdx
  __int64 v45; // r8
  __int64 v46; // r9
  __int64 v47; // rdi
  int v48; // eax
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // rax
  __int64 v52; // rax
  __int64 v53; // rax
  SIZE_T v54; // rdx
  _QWORD *v55; // rcx
  _QWORD *v56; // rax
  int v57; // eax
  __int64 v58; // rdx
  __int64 v59; // rcx
  _QWORD *v60; // rax
  _QWORD *v61; // rax
  _QWORD *v62; // rax
  _QWORD *v63; // rax
  unsigned __int8 v64; // di
  __int64 v65; // rcx
  unsigned __int8 *v66; // rdx
  unsigned __int8 v67; // r8
  unsigned __int8 *v68; // rsi
  __int64 v69; // rbx
  _QWORD *v70; // rax
  __int64 v71; // rax
  unsigned __int64 v72; // [rsp+20h] [rbp-79h] BYREF
  __int64 (__fastcall ***v73)(_QWORD, __int64); // [rsp+28h] [rbp-71h] BYREF
  unsigned __int64 v74; // [rsp+30h] [rbp-69h]
  _QWORD v75[2]; // [rsp+40h] [rbp-59h] BYREF
  int v76; // [rsp+50h] [rbp-49h]
  _QWORD v77[2]; // [rsp+58h] [rbp-41h] BYREF
  unsigned __int64 v78; // [rsp+68h] [rbp-31h]
  int v79; // [rsp+70h] [rbp-29h]
  __int64 v80; // [rsp+78h] [rbp-21h]
  __int64 v81; // [rsp+80h] [rbp-19h] BYREF
  void **v82; // [rsp+88h] [rbp-11h] BYREF
  __int128 v83; // [rsp+90h] [rbp-9h]
  void **v84; // [rsp+A0h] [rbp+7h]
  void *Src; // [rsp+A8h] [rbp+Fh]
  size_t Size; // [rsp+B0h] [rbp+17h]
  int v87; // [rsp+B8h] [rbp+1Fh]
  unsigned int v88; // [rsp+110h] [rbp+77h] BYREF
  DMMVIDPNSOURCEMODESET *v89; // [rsp+118h] [rbp+7Fh] BYREF

  v3 = (unsigned int)a2;
  if ( !a3 )
  {
    v6 = WdLogNewEntry5_WdError(this, a2);
    *(_QWORD *)(v6 + 24) = 0LL;
    WdLogEvent5_WdError(v6);
    return 3221225485LL;
  }
  if ( *(_QWORD *)(a3 + 32) )
  {
    v8 = WdLogNewEntry5_WdAssertion(this, a2);
    WdLogEvent5_WdAssertion(v8);
  }
  v72 = 0LL;
  NumPathsFromSource = DMMVIDPNTOPOLOGY::GetNumPathsFromSource(this, (unsigned int)v3, &v72);
  v12 = NumPathsFromSource;
  if ( NumPathsFromSource == -1071774919 )
  {
    v13 = WdLogNewEntry5_WdDmmEvent(v11);
    *(_QWORD *)(v13 + 24) = v3;
    *(_QWORD *)(v13 + 32) = this;
    WdLogEvent5_WdDmmEvent(v13);
    return 3223192377LL;
  }
  if ( NumPathsFromSource < 0 )
  {
    v14 = (_QWORD *)WdLogNewEntry5_WdError(v11, v10);
    v14[3] = v3;
    v14[4] = this;
    v14[5] = v12;
    WdLogEvent5_WdError(v14);
    return (unsigned int)v12;
  }
  Container = ContainedBy<DMMVIDPN>::GetContainer((__int64)this + 160, v10);
  v16 = IndexedSet<DMMVIDEOPRESENTTARGET>::FindById(*(_QWORD *)(Container + 304), v3);
  v18 = *(_QWORD *)(v16 + 104);
  if ( v18 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v18 + 96));
    v19 = *(_QWORD *)(v16 + 104);
  }
  else
  {
    v19 = 0LL;
  }
  v81 = v19;
  if ( !*(_QWORD *)(v19 + 144) )
  {
    v20 = WdLogNewEntry5_WdAssertion(v18, v17);
    WdLogEvent5_WdAssertion(v20);
  }
  auto_rc<DMMVIDPNSOURCEMODESET>::reset(&v81, 0LL);
  v76 = 0;
  v21 = v77;
  v75[0] = &Queue<DMM::AutoBuffer<_DMM_COMMITVIDPNREQUEST_SERIALIZATION>>::`vftable';
  v78 = 0LL;
  v75[1] = &DoublyLinkedList<DMM::AutoBuffer<_DMM_VIDPN_SERIALIZATION>,DoubleLinkedListElementDeleter<DMM::AutoBuffer<_DMM_VIDPN_SERIALIZATION>>>::`vftable';
  v77[1] = v77;
  v22 = 0LL;
  v74 = 0LL;
  v77[0] = v77;
  v79 = 2;
  v80 = 0LL;
  if ( !v72 )
    goto LABEL_38;
  do
  {
    v88 = -1;
    if ( (int)DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource((char **)this, (unsigned int)v3, v22, &v88) < 0 )
    {
      v25 = WdLogNewEntry5_WdAssertion(v24, v23);
      WdLogEvent5_WdAssertion(v25);
    }
    v26 = v88;
    Path = DMMVIDPNTOPOLOGY::FindPath(this, v3, v88);
    if ( !Path )
    {
      v30 = WdLogNewEntry5_WdAssertion(v28, v27);
      WdLogEvent5_WdAssertion(v30);
    }
    Src = 0LL;
    v82 = &DMM::AutoBuffer<_DMM_MONITORPRESENCEEVENTSET_SERIALIZATION>::`vftable'{for `SetElement'};
    Size = 0LL;
    v84 = &DMM::AutoBuffer<_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION>::`vftable'{for `NonReferenceCounted'};
    v83 = 0LL;
    v87 = 3;
    v31 = *((_QWORD *)Path + 12);
    v89 = 0LL;
    v32 = *(_QWORD *)(v31 + 104);
    if ( v32 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v32 + 96));
      v33 = *(_QWORD *)(v31 + 104);
      v26 = v88;
    }
    else
    {
      v33 = 0LL;
    }
    auto_rc<DMMVIDPNTARGETMODESET>::reset((__int64 *)&v89, v33);
    v36 = v89;
    if ( !v89 )
    {
      v37 = WdLogNewEntry5_WdAssertion(v35, v34);
      WdLogEvent5_WdAssertion(v37);
    }
    if ( *((_QWORD *)v36 + 18) )
    {
      v38 = WdLogNewEntry5_WdAssertion(v35, v34);
      WdLogEvent5_WdAssertion(v38);
    }
    v39 = DMMVIDPNTARGETMODESET::Serialize(v36);
    v12 = v39;
    if ( v39 < 0 )
    {
      v63 = (_QWORD *)WdLogNewEntry5_WdError(v41, v40);
      v63[4] = v26;
      v63[3] = v3;
      v63[5] = this;
      v63[6] = v12;
      WdLogEvent5_WdError(v63);
      auto_rc<DMMVIDPNTARGETMODESET>::reset((__int64 *)&v89, 0LL);
      goto LABEL_50;
    }
    auto_rc<DMMVIDPNTARGETMODESET>::reset((__int64 *)&v89, 0LL);
    v42 = Size;
    v43 = operator new[](0x38uLL, 0x4E506456u, PagedPool);
    v47 = (__int64)v43;
    if ( v43 )
    {
      v43[1] = 0LL;
      v43[2] = 0LL;
      *v43 = &DMM::AutoBuffer<_DMM_MONITOR_SERIALIZATION>::`vftable'{for `SetElement'};
      v43[3] = &DMM::AutoBuffer<_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION>::`vftable'{for `NonReferenceCounted'};
      v43[4] = 0LL;
      v43[5] = 0LL;
      *((_DWORD *)v43 + 12) = 3;
    }
    else
    {
      v47 = 0LL;
    }
    v73 = (__int64 (__fastcall ***)(_QWORD, __int64))v47;
    if ( !v47 )
    {
      v62 = (_QWORD *)WdLogNewEntry5_WdLowResource(0LL, v44, v45, v46);
      v62[5] = v26;
      v62[3] = 56LL;
      v62[4] = v3;
      WdLogEvent5_WdLowResource(v62);
      LODWORD(v12) = -1073741801;
      goto LABEL_48;
    }
    v48 = DMM::AutoBuffer<_KEY_VALUE_PARTIAL_INFORMATION>::Initialize(v47, v42 + 360);
    v12 = v48;
    if ( v48 < 0 )
    {
      v61 = (_QWORD *)WdLogNewEntry5_WdError(v50, v49);
      v61[4] = v26;
      v61[3] = v3;
      v61[5] = this;
      v61[6] = v12;
      WdLogEvent5_WdError(v61);
LABEL_48:
      auto_ptr<DMMVIDPNSOURCEMODE>::~auto_ptr<DMMVIDPNSOURCEMODE>(&v73);
LABEL_50:
      DMM::AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>::~AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>(&v82);
      goto LABEL_64;
    }
    if ( *((_DWORD *)Path + 28) != 254 )
    {
      v51 = WdLogNewEntry5_WdAssertion(v50, v49);
      WdLogEvent5_WdAssertion(v51);
    }
    if ( *((_DWORD *)Path + 29) != 254 )
    {
      v52 = WdLogNewEntry5_WdAssertion(v50, v49);
      WdLogEvent5_WdAssertion(v52);
    }
    DMMVIDPNPRESENTPATH::Serialize(Path, *(struct _D3DKMDT_VIDPN_PRESENT_PATH *const *)(v47 + 32));
    memmove((void *)(*(_QWORD *)(v47 + 32) + 360LL), Src, Size);
    v73 = 0LL;
    Queue<DMM::AutoBuffer<_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION>>::Enqueue(v75, v47);
    auto_ptr<DMMVIDPNSOURCEMODE>::~auto_ptr<DMMVIDPNSOURCEMODE>(&v73);
    DMM::AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>::~AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>(&v82);
    v22 = v74 + 1;
    v74 = v22;
  }
  while ( v22 < v72 );
  v53 = v78;
  v21 = (_QWORD *)v77[0];
  if ( v78 > 1 )
    goto LABEL_39;
LABEL_38:
  v53 = 1LL;
LABEL_39:
  v54 = 4 * v53 + 4;
  if ( v21 != v77 )
  {
    v55 = v21 - 1;
    while ( v55 )
    {
      v54 += v55[5];
      v56 = (_QWORD *)v55[1];
      v55 = v56 - 1;
      if ( v56 == v77 )
        v55 = 0LL;
    }
  }
  v57 = DMM::AutoBuffer<_KEY_VALUE_PARTIAL_INFORMATION>::Initialize(a3, v54);
  v12 = v57;
  if ( v57 >= 0 )
  {
    v64 = 0;
    **(_BYTE **)(a3 + 32) = v78;
    v65 = 1LL;
    v66 = *(unsigned __int8 **)(a3 + 32);
    v67 = *v66;
    if ( *v66 > 1u )
      v65 = *v66;
    v68 = &v66[4 * (unsigned __int8)v65 + 4];
    if ( (_QWORD *)v77[0] == v77 )
      v69 = 0LL;
    else
      v69 = v77[0] - 8LL;
    if ( v69 )
    {
      do
      {
        *(_DWORD *)(*(_QWORD *)(a3 + 32) + 4LL * v64 + 4) = (_DWORD)v68 - *(_DWORD *)(a3 + 32);
        memmove(v68, *(const void **)(v69 + 32), *(_QWORD *)(v69 + 40));
        v68 += *(_QWORD *)(v69 + 40);
        v65 = (__int64)v77;
        v70 = *(_QWORD **)(v69 + 8);
        v69 = (__int64)(v70 - 1);
        if ( v70 == v77 )
          v69 = 0LL;
        ++v64;
      }
      while ( v69 );
      v67 = **(_BYTE **)(a3 + 32);
    }
    if ( v64 != v67 )
    {
      v71 = WdLogNewEntry5_WdAssertion(v65, v66);
      WdLogEvent5_WdAssertion(v71);
    }
    LODWORD(v12) = 0;
  }
  else
  {
    v60 = (_QWORD *)WdLogNewEntry5_WdError(v59, v58);
    v60[3] = a3;
    v60[4] = v3;
    v60[5] = this;
    v60[6] = v12;
    WdLogEvent5_WdError(v60);
  }
LABEL_64:
  Queue<DMM::AutoBuffer<_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION>>::~Queue<DMM::AutoBuffer<_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION>>(v75);
  return (unsigned int)v12;
}
