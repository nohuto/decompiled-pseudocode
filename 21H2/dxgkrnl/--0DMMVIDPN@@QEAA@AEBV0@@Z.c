/*
 * XREFs of ??0DMMVIDPN@@QEAA@AEBV0@@Z @ 0x1C01A6FD0
 * Callers:
 *     ?CacheVidPnToBeComitted@VIDPN_MGR@@QEAAJPEBVDMMVIDPN@@IAEBU_DMM_COMMITVIDPNREQUEST_DIAGINFO@@@Z @ 0x1C0068854 (-CacheVidPnToBeComitted@VIDPN_MGR@@QEAAJPEBVDMMVIDPN@@IAEBU_DMM_COMMITVIDPNREQUEST_DIAGINFO@@@Z.c)
 *     ?CreateVidPnCopyForClient@VIDPN_MGR@@QEAAJQEBVDMMVIDPN@@PEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C01A63A0 (-CreateVidPnCopyForClient@VIDPN_MGR@@QEAAJQEBVDMMVIDPN@@PEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ?RecommendFunctionalVidPn@VIDPN_MGR@@QEAAJW4_DXGK_RECOMMENDFUNCTIONALVIDPN_REASON@@QEAXIQEAPEAVDMMVIDPN@@@Z @ 0x1C0216A7C (-RecommendFunctionalVidPn@VIDPN_MGR@@QEAAJW4_DXGK_RECOMMENDFUNCTIONALVIDPN_REASON@@QEAXIQEAPEAVD.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??0DMMVIDPNTARGET@@QEAA@QEAVDMMVIDPNTARGETSET@@QEAVDMMVIDEOPRESENTTARGET@@@Z @ 0x1C000C834 (--0DMMVIDPNTARGET@@QEAA@QEAVDMMVIDPNTARGETSET@@QEAVDMMVIDEOPRESENTTARGET@@@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C000D514 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ??0DMMVIDPNSOURCESET@@QEAA@AEBV0@@Z @ 0x1C000FC18 (--0DMMVIDPNSOURCESET@@QEAA@AEBV0@@Z.c)
 *     ??0DMMVIDPNTARGETSET@@QEAA@AEBV0@@Z @ 0x1C000FCA4 (--0DMMVIDPNTARGETSET@@QEAA@AEBV0@@Z.c)
 *     ??0DMMVIDPNTOPOLOGY@@QEAA@XZ @ 0x1C0010744 (--0DMMVIDPNTOPOLOGY@@QEAA@XZ.c)
 *     ?_SetContainingVidPn@DMMVIDPNTOPOLOGY@@IEAAXPEAVDMMVIDPN@@@Z @ 0x1C0010960 (-_SetContainingVidPn@DMMVIDPNTOPOLOGY@@IEAAXPEAVDMMVIDPN@@@Z.c)
 *     ?FindById@?$IndexedSet@VDMMVIDPNTARGET@@@@QEBAPEAVDMMVIDPNTARGET@@I@Z @ 0x1C0010BF0 (-FindById@-$IndexedSet@VDMMVIDPNTARGET@@@@QEBAPEAVDMMVIDPNTARGET@@I@Z.c)
 *     ?SetContainer@?$ContainedBy@VDMMVIDPN@@@@QEAAJPEAVDMMVIDPN@@@Z @ 0x1C0011444 (-SetContainer@-$ContainedBy@VDMMVIDPN@@@@QEAAJPEAVDMMVIDPN@@@Z.c)
 *     ?FindById@?$IndexedSet@VDMMVIDPNSOURCE@@@@QEBAPEAVDMMVIDPNSOURCE@@I@Z @ 0x1C00114BC (-FindById@-$IndexedSet@VDMMVIDPNSOURCE@@@@QEBAPEAVDMMVIDPNSOURCE@@I@Z.c)
 *     ??1?$auto_ptr@VDMMVIDPNPRESENTPATH@@@@QEAA@XZ @ 0x1C00114FC (--1-$auto_ptr@VDMMVIDPNPRESENTPATH@@@@QEAA@XZ.c)
 *     ?reset@?$auto_ptr@VDMMVIDPNPRESENTPATH@@@@QEAAXPEAVDMMVIDPNPRESENTPATH@@@Z @ 0x1C0011528 (-reset@-$auto_ptr@VDMMVIDPNPRESENTPATH@@@@QEAAXPEAVDMMVIDPNPRESENTPATH@@@Z.c)
 *     ??0DMMVIDPNPRESENTPATH@@QEAA@PEAVDMMVIDPNSOURCE@@PEAVDMMVIDPNTARGET@@QEBV0@@Z @ 0x1C0011560 (--0DMMVIDPNPRESENTPATH@@QEAA@PEAVDMMVIDPNSOURCE@@PEAVDMMVIDPNTARGET@@QEBV0@@Z.c)
 *     ?reset@?$auto_ptr@V?$DoublyLinkedList@VDMMVIDPNSOURCEMODESET@@U?$DoubleLinkedListElementDeleter@VDMMVIDPNSOURCEMODESET@@@@@@@@QEAAXPEAV?$DoublyLinkedList@VDMMVIDPNSOURCEMODESET@@U?$DoubleLinkedListElementDeleter@VDMMVIDPNSOURCEMODESET@@@@@@@Z @ 0x1C00116A0 (-reset@-$auto_ptr@V-$DoublyLinkedList@VDMMVIDPNSOURCEMODESET@@U-$DoubleLinkedListElementDeleter@.c)
 *     ?SetAggregator@?$AggregatedBy@VVIDPN_MGR@@@@QEAAXPEAVVIDPN_MGR@@@Z @ 0x1C001DC80 (-SetAggregator@-$AggregatedBy@VVIDPN_MGR@@@@QEAAXPEAVVIDPN_MGR@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     ??1?$auto_ptr@VDMMVIDPNSOURCEMODE@@@@QEAA@XZ @ 0x1C004ED14 (--1-$auto_ptr@VDMMVIDPNSOURCEMODE@@@@QEAA@XZ.c)
 *     ?reset@?$auto_ptr@VDMMVIDPNTARGET@@@@QEAAXPEAVDMMVIDPNTARGET@@@Z @ 0x1C006AAF0 (-reset@-$auto_ptr@VDMMVIDPNTARGET@@@@QEAAXPEAVDMMVIDPNTARGET@@@Z.c)
 *     ?AddTarget@DMMVIDPNTARGETSET@@QEAAJV?$auto_ptr@VDMMVIDPNTARGET@@@@@Z @ 0x1C018A3C0 (-AddTarget@DMMVIDPNTARGETSET@@QEAAJV-$auto_ptr@VDMMVIDPNTARGET@@@@@Z.c)
 *     ??0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@Z @ 0x1C01A80EC (--0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@.c)
 *     ??1ApplyPermissionWithinThisScope@@IEAA@XZ @ 0x1C01A8214 (--1ApplyPermissionWithinThisScope@@IEAA@XZ.c)
 *     ?AddPath@DMMVIDPNTOPOLOGY@@QEAAJPEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1C01A85C4 (-AddPath@DMMVIDPNTOPOLOGY@@QEAAJPEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@.c)
 */

DMMVIDPN *__fastcall DMMVIDPN::DMMVIDPN(DMMVIDPN *this, const struct DMMVIDPN *a2, __int64 a3, __int64 a4)
{
  DMMVIDPN *v4; // r12
  unsigned __int8 (__fastcall ***v6)(_QWORD); // rbx
  __int64 *v7; // r13
  struct DMMVIDPNTARGETSET *const *v8; // r15
  unsigned __int8 (__fastcall **v9)(_QWORD); // rax
  __int64 v10; // r9
  DMMVIDPNSOURCESET *v11; // rax
  DMMVIDPNSOURCESET *v12; // rax
  __int64 v13; // r9
  _QWORD *v14; // rax
  __int64 v15; // rbx
  __int64 v16; // rsi
  __int64 v17; // rcx
  __int64 v18; // rdi
  __int64 v19; // rdi
  DMMVIDPNTARGETSET *v20; // rax
  DMMVIDPNTARGETSET *v21; // rax
  __int64 v22; // r9
  _QWORD *v23; // rax
  _QWORD *v24; // rcx
  _QWORD *v25; // r14
  int v26; // ebx
  __int64 v27; // rsi
  __int64 v28; // rsi
  __int64 v29; // rsi
  void (__fastcall ***v30)(_QWORD, __int64); // rcx
  int v31; // eax
  struct DMMVIDPNTARGETSET *v32; // rsi
  struct DMMVIDPNTARGETSET *v33; // rcx
  __int64 v34; // rax
  __int64 v35; // rsi
  _QWORD *v36; // rcx
  __int64 v37; // rax
  _QWORD *v38; // rax
  __int64 v39; // rax
  char *v40; // rdx
  __int64 v41; // r8
  char *v42; // rdx
  const struct DMMVIDPN *v43; // rsi
  const struct DMMVIDPNPRESENTPATH *v44; // rsi
  unsigned int *v45; // r12
  __int64 v46; // rax
  unsigned int *v47; // r13
  __int64 v48; // r9
  DMMVIDPNPRESENTPATH *v49; // rax
  DMMVIDPNPRESENTPATH *v50; // rax
  struct DMMVIDPNPRESENTPATH *v51; // rbx
  int v52; // eax
  int v53; // r15d
  const struct DMMVIDPN *v54; // rsi
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // rax
  int v59; // eax
  __int64 v60; // rbx
  DMMVIDPNTARGET *v61; // rax
  __int64 v62; // r9
  DMMVIDPNTARGET *v63; // rax
  struct DMMVIDPNPRESENTPATH *v64; // rbx
  struct DMMVIDPNTARGETSET *v65; // rcx
  int v66; // ebx
  int v67; // eax
  int v68; // ebx
  __int64 v69; // rdx
  __int64 v70; // rdx
  __int64 v71; // rdx
  struct DMMVIDPNPRESENTPATH *v72; // [rsp+50h] [rbp-39h] BYREF
  struct DMMVIDPNTARGETSET *const *v73; // [rsp+58h] [rbp-31h]
  __int64 *v74; // [rsp+60h] [rbp-29h]
  _BYTE v75[24]; // [rsp+68h] [rbp-21h] BYREF
  _BYTE v76[40]; // [rsp+80h] [rbp-9h] BYREF
  struct DMMVIDPNPRESENTPATH *v79; // [rsp+100h] [rbp+77h] BYREF
  DMMVIDPNTOPOLOGY *v80; // [rsp+108h] [rbp+7Fh]

  v4 = this;
  *(_QWORD *)this = &SetElement::`vftable';
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 3) = &ReferenceCounted::`vftable';
  *((_DWORD *)this + 16) = 1833172997;
  *((_DWORD *)this + 20) = 0;
  v6 = (unsigned __int8 (__fastcall ***)(_QWORD))((char *)this + 96);
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_DWORD *)this + 8) = 1;
  *(_QWORD *)this = &DMMVIDPN::`vftable'{for `SetElement'};
  *((_QWORD *)this + 3) = &DMMVIDPN::`vftable'{for `ReferenceCounted'};
  *((_QWORD *)this + 7) = &DMMVIDPN::`vftable'{for `SignedWithClassSignature<DMMVIDPN>'};
  *((_QWORD *)this + 5) = &DMMVIDPN::`vftable'{for `AggregatedBy<VIDPN_MGR>'};
  *((_QWORD *)this + 9) = &DMMVIDPN::`vftable'{for `FallibleConstruction'};
  v80 = (DMMVIDPN *)((char *)this + 96);
  DMMVIDPNTOPOLOGY::DMMVIDPNTOPOLOGY((DMMVIDPN *)((char *)this + 96), (__int64)a2, a3, a4);
  v7 = (__int64 *)((char *)v4 + 304);
  *((_DWORD *)v4 + 22) = 1;
  v8 = (struct DMMVIDPNTARGETSET *const *)((char *)v4 + 312);
  *((_QWORD *)v4 + 38) = 0LL;
  *((_QWORD *)v4 + 39) = 0LL;
  v9 = *v6;
  v74 = (__int64 *)((char *)v4 + 304);
  v73 = (struct DMMVIDPNTARGETSET *const *)((char *)v4 + 312);
  if ( !(*v9)(v6) )
  {
    WdLogSingleEntry1(7LL, v4);
    v59 = *((_DWORD *)v4 + 28);
    if ( v59 >= 0 )
      v59 = *((_DWORD *)v4 + 40);
    *((_DWORD *)v4 + 20) = v59;
    return v4;
  }
  v11 = (DMMVIDPNSOURCESET *)operator new[](0x60uLL, 0x4E506456u, 256LL, v10);
  if ( v11 )
    v12 = DMMVIDPNSOURCESET::DMMVIDPNSOURCESET(v11, *((const struct DMMVIDPNSOURCESET **)a2 + 38));
  else
    v12 = 0LL;
  auto_ptr<DoublyLinkedList<DMMVIDPNSOURCEMODESET,DoubleLinkedListElementDeleter<DMMVIDPNSOURCEMODESET>>>::reset(
    (__int64 *)v4 + 38,
    (__int64)v12);
  if ( !*v7 )
  {
    WdLogSingleEntry0(6LL);
    *((_DWORD *)v4 + 20) = -1073741801;
    return v4;
  }
  if ( !(**(unsigned __int8 (__fastcall ***)(__int64))*v7)(*v7) )
  {
    WdLogSingleEntry1(7LL, v4);
    *((_DWORD *)v4 + 20) = *(_DWORD *)(*v7 + 16);
    return v4;
  }
  ContainedBy<DMMVIDPN>::SetContainer(*v7 + 64, (__int64)v4);
  v14 = (_QWORD *)(*v7 + 24);
  if ( (_QWORD *)*v14 == v14 || (v15 = *v14 - 8LL, *v14 == 8LL) )
  {
LABEL_16:
    v18 = *((_QWORD *)a2 + 6);
    _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v18 + 120) + 72LL));
    v19 = *(_QWORD *)(v18 + 120);
    v20 = (DMMVIDPNTARGETSET *)operator new[](0x60uLL, 0x4E506456u, 256LL, v13);
    if ( v20 )
      v21 = DMMVIDPNTARGETSET::DMMVIDPNTARGETSET(v20, *((const struct DMMVIDPNTARGETSET **)a2 + 39));
    else
      v21 = 0LL;
    auto_ptr<DoublyLinkedList<DMMVIDPNSOURCEMODESET,DoubleLinkedListElementDeleter<DMMVIDPNSOURCEMODESET>>>::reset(
      (__int64 *)v4 + 39,
      (__int64)v21);
    if ( *v8 )
    {
      if ( (***(unsigned __int8 (__fastcall ****)(struct DMMVIDPNTARGETSET *const))v8)(*v8) )
      {
        ContainedBy<DMMVIDPN>::SetContainer((__int64)*v8 + 64, (__int64)v4);
        v23 = (_QWORD *)((char *)*v8 + 24);
        v24 = (_QWORD *)*v23;
        if ( (_QWORD *)*v23 == v23 || (v25 = v24 - 1, v24 == (_QWORD *)8) )
        {
LABEL_42:
          v34 = *(_QWORD *)(v19 + 24);
          if ( v34 != v19 + 24 )
          {
            v35 = v34 - 8;
            if ( v34 != 8 )
            {
              do
              {
                v36 = (_QWORD *)((char *)*v8 + 24);
                if ( (_QWORD *)*v36 == v36 || (v37 = *v36 - 8LL, *v36 == 8LL) )
                {
LABEL_93:
                  v79 = 0LL;
                  v61 = (DMMVIDPNTARGET *)operator new[](0x80uLL, 0x4E506456u, 256LL, v22);
                  if ( v61 )
                    v63 = DMMVIDPNTARGET::DMMVIDPNTARGET(v61, *v8, (struct DMMVIDEOPRESENTTARGET *const)v35, v62);
                  else
                    v63 = 0LL;
                  auto_ptr<DMMVIDPNTARGET>::reset(
                    (__int64 (__fastcall ****)(_QWORD, __int64))&v79,
                    (__int64 (__fastcall ***)(_QWORD, __int64))v63);
                  v64 = v79;
                  if ( !v79 )
                  {
                    WdLogSingleEntry0(6LL);
                    *((_DWORD *)v4 + 20) = -1073741801;
                    auto_ptr<DMMVIDPNSOURCEMODE>::~auto_ptr<DMMVIDPNSOURCEMODE>((__int64 (__fastcall ****)(_QWORD, __int64))&v79);
                    goto LABEL_70;
                  }
                  if ( !(**((unsigned __int8 (__fastcall ***)(char *))v79 + 8))((char *)v79 + 64) )
                  {
                    WdLogSingleEntry1(7LL, v4);
                    *((_DWORD *)v4 + 20) = *((_DWORD *)v64 + 18);
                    auto_ptr<DMMVIDPNSOURCEMODE>::~auto_ptr<DMMVIDPNSOURCEMODE>((__int64 (__fastcall ****)(_QWORD, __int64))&v79);
                    goto LABEL_70;
                  }
                  v65 = *v8;
                  v79 = 0LL;
                  v72 = v64;
                  v66 = DMMVIDPNTARGETSET::AddTarget(v65, (__int64 (__fastcall ****)(_QWORD, __int64))&v72);
                  if ( v66 < 0 )
                  {
                    WdLogSingleEntry0(2LL);
                    *((_DWORD *)v4 + 20) = v66;
                    auto_ptr<DMMVIDPNSOURCEMODE>::~auto_ptr<DMMVIDPNSOURCEMODE>((__int64 (__fastcall ****)(_QWORD, __int64))&v79);
                    goto LABEL_70;
                  }
                  auto_ptr<DMMVIDPNSOURCEMODE>::~auto_ptr<DMMVIDPNSOURCEMODE>((__int64 (__fastcall ****)(_QWORD, __int64))&v79);
                }
                else
                {
                  while ( *(_DWORD *)(v37 + 24) != *(_DWORD *)(v35 + 24) )
                  {
                    v38 = *(_QWORD **)(v37 + 8);
                    if ( v38 != v36 )
                    {
                      v37 = (__int64)(v38 - 1);
                      if ( v37 )
                        continue;
                    }
                    goto LABEL_93;
                  }
                }
                v39 = *(_QWORD *)(v35 + 8);
                v35 = v39 - 8;
                if ( v39 == v19 + 24 )
                  v35 = 0LL;
              }
              while ( v35 );
            }
          }
          AggregatedBy<VIDPN_MGR>::SetAggregator((__int64)v4 + 40, *((_QWORD *)a2 + 6));
          if ( ((unsigned __int16)((2 << *((_BYTE *)v4 + 172)) - 1) & *((_WORD *)v4 + 87)) != 0 )
            WdLogSingleEntry0(1LL);
          if ( v4 == (DMMVIDPN *)-96LL )
            v40 = 0LL;
          else
            v40 = (char *)v4 + 152;
          ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(v76, v40, 0LL);
          DMMVIDPNTOPOLOGY::_SetContainingVidPn((DMMVIDPN *)((char *)v4 + 96), v4);
          ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v76);
          if ( v4 == (DMMVIDPN *)-96LL )
            v42 = 0LL;
          else
            v42 = (char *)v4 + 152;
          LOBYTE(v41) = 1;
          ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(v75, v42, v41);
          v43 = (const struct DMMVIDPN *)*((_QWORD *)a2 + 15);
          if ( v43 == (const struct DMMVIDPN *)((char *)a2 + 120)
            || (v44 = (const struct DMMVIDPN *)((char *)v43 - 8)) == 0LL )
          {
LABEL_69:
            ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v75);
            *((_DWORD *)v4 + 22) = 2;
            v57 = WdLogNewEntry5_WdTrace(v56, v55);
            *(_QWORD *)(v57 + 24) = v4;
            *(_QWORD *)(v57 + 32) = a2;
          }
          else
          {
            while ( 1 )
            {
              v45 = (unsigned int *)IndexedSet<DMMVIDPNSOURCE>::FindById(*v7, *(_DWORD *)(*((_QWORD *)v44 + 11) + 24LL));
              v46 = IndexedSet<DMMVIDPNTARGET>::FindById((__int64)*v8, *(_DWORD *)(*((_QWORD *)v44 + 12) + 24LL));
              v79 = 0LL;
              v47 = (unsigned int *)v46;
              v49 = (DMMVIDPNPRESENTPATH *)operator new[](0xC0uLL, 0x4E506456u, 256LL, v48);
              if ( v49 )
                v50 = DMMVIDPNPRESENTPATH::DMMVIDPNPRESENTPATH(
                        v49,
                        (struct DMMVIDPNSOURCE *)v45,
                        (struct DMMVIDPNTARGET *)v47,
                        v44);
              else
                v50 = 0LL;
              auto_ptr<DMMVIDPNPRESENTPATH>::reset(
                (__int64 (__fastcall ****)(_QWORD, __int64))&v79,
                (__int64 (__fastcall ***)(_QWORD, __int64))v50);
              v51 = v79;
              if ( !v79 )
              {
                WdLogSingleEntry0(6LL);
                v4 = this;
                *((_DWORD *)this + 20) = -1073741801;
                goto LABEL_109;
              }
              if ( !(**((unsigned __int8 (__fastcall ***)(char *))v79 + 7))((char *)v79 + 56) )
                break;
              v52 = DMMVIDPNTOPOLOGY::AddPath(v80, v51, D3DKMDT_MCC_ENFORCE);
              v53 = v52;
              if ( v52 == -1071774920 )
              {
                WdLogSingleEntry4(7LL, v45[6], v47[6], this, (char *)a2 + 96);
                v67 = DMMVIDPNTOPOLOGY::AddPath(v80, v51, D3DKMDT_MCC_IGNORE);
                v68 = v67;
                if ( v67 < 0 )
                {
                  v69 = v45[6];
                  v4 = this;
                  WdLogSingleEntry5(2LL, v69, v47[6], this, (char *)a2 + 96, v67);
                  *((_DWORD *)this + 20) = v68;
                  goto LABEL_109;
                }
              }
              else if ( v52 < 0 )
              {
                v70 = v45[6];
                v4 = this;
                WdLogSingleEntry5(2LL, v70, v47[6], this, (char *)a2 + 96, v52);
                *((_DWORD *)this + 20) = v53;
                goto LABEL_109;
              }
              v79 = 0LL;
              auto_ptr<DMMVIDPNPRESENTPATH>::~auto_ptr<DMMVIDPNPRESENTPATH>((__int64 (__fastcall ****)(_QWORD, __int64))&v79);
              v54 = (const struct DMMVIDPN *)*((_QWORD *)v44 + 1);
              if ( v54 == (const struct DMMVIDPN *)((char *)a2 + 120)
                || (v44 = (const struct DMMVIDPN *)((char *)v54 - 8)) == 0LL )
              {
                v4 = this;
                goto LABEL_69;
              }
              v8 = v73;
              v7 = v74;
            }
            v71 = v45[6];
            v4 = this;
            WdLogSingleEntry4(7LL, v71, v47[6], this, (char *)a2 + 96);
            *((_DWORD *)this + 20) = *((_DWORD *)v51 + 16);
LABEL_109:
            auto_ptr<DMMVIDPNPRESENTPATH>::~auto_ptr<DMMVIDPNPRESENTPATH>((__int64 (__fastcall ****)(_QWORD, __int64))&v79);
            ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v75);
          }
        }
        else
        {
          while ( (*(unsigned __int8 (__fastcall **)(_QWORD *))v25[8])(v25 + 8) )
          {
            v26 = *((_DWORD *)v25 + 6);
            if ( v26 == -1 )
              WdLogSingleEntry0(1LL);
            v27 = *(_QWORD *)(v19 + 24);
            if ( v27 != v19 + 24 )
            {
              v28 = v27 - 8;
              if ( v28 )
              {
                while ( *(_DWORD *)(v28 + 24) != v26 )
                {
                  v29 = *(_QWORD *)(v28 + 8);
                  if ( v29 != v19 + 24 )
                  {
                    v28 = v29 - 8;
                    if ( v28 )
                      continue;
                  }
                  goto LABEL_35;
                }
                _InterlockedIncrement((volatile signed __int32 *)(v28 + 72));
                v30 = (void (__fastcall ***)(_QWORD, __int64))(v25[12] + 64LL);
                v31 = _InterlockedDecrement((volatile signed __int32 *)(v25[12] + 72LL));
                if ( v31 )
                {
                  if ( v31 < 0 )
                  {
                    v60 = v31;
                    WdLogSingleEntry1(2LL, v31);
                    DxgkLogInternalTriageEvent(
                      0LL,
                      0x40000,
                      -1,
                      (__int64)L"Client is trying to release a destroyed object (ref count = %I64d)!",
                      v60,
                      0LL,
                      0LL,
                      0LL,
                      0LL);
                  }
                }
                else if ( v30 )
                {
                  (**v30)(v30, 1LL);
                }
                v25[12] = v28;
              }
            }
LABEL_35:
            v32 = *v8;
            if ( *v8 )
            {
              if ( v25[5] )
                WdLogSingleEntry0(1LL);
              v25[5] = v32;
            }
            else
            {
              WdLogSingleEntry2(2LL, v25 + 4, v25[5]);
            }
            v33 = (struct DMMVIDPNTARGETSET *)v25[1];
            v25 = (_QWORD *)((char *)v33 - 8);
            if ( v33 == (struct DMMVIDPNTARGETSET *)((char *)*v8 + 24) )
              v25 = 0LL;
            if ( !v25 )
              goto LABEL_42;
          }
          WdLogSingleEntry1(7LL, v25);
          *((_DWORD *)v4 + 20) = *((_DWORD *)v25 + 18);
          if ( !v19 )
            return v4;
        }
      }
      else
      {
        WdLogSingleEntry1(7LL, v4);
        *((_DWORD *)v4 + 20) = *((_DWORD *)*v8 + 4);
        if ( !v19 )
          return v4;
      }
    }
    else
    {
      WdLogSingleEntry0(6LL);
      *((_DWORD *)v4 + 20) = -1073741801;
      if ( !v19 )
        return v4;
    }
LABEL_70:
    ReferenceCounted::Release((ReferenceCounted *)(v19 + 64));
    return v4;
  }
  while ( (**(unsigned __int8 (__fastcall ***)(__int64))(v15 + 64))(v15 + 64) )
  {
    v16 = *v7;
    if ( *v7 )
    {
      if ( *(_QWORD *)(v15 + 40) )
        WdLogSingleEntry0(1LL);
      *(_QWORD *)(v15 + 40) = v16;
    }
    else
    {
      WdLogSingleEntry2(2LL, v15 + 32, *(_QWORD *)(v15 + 40));
    }
    v17 = *(_QWORD *)(v15 + 8);
    v15 = v17 - 8;
    if ( v17 == *v7 + 24 )
      v15 = 0LL;
    if ( !v15 )
      goto LABEL_16;
  }
  WdLogSingleEntry1(7LL, v15);
  *((_DWORD *)v4 + 20) = *(_DWORD *)(v15 + 72);
  return v4;
}
