/*
 * XREFs of ??0DMMVIDPN@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C01105C8
 * Callers:
 *     ?CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C0128C08 (-CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000A840 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??0DMMVIDPNTARGET@@QEAA@QEAVDMMVIDPNTARGETSET@@QEAVDMMVIDEOPRESENTTARGET@@@Z @ 0x1C000AC20 (--0DMMVIDPNTARGET@@QEAA@QEAVDMMVIDPNTARGETSET@@QEAVDMMVIDEOPRESENTTARGET@@@Z.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C000BDF4 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?reset@?$auto_ptr@V?$DoublyLinkedList@VDMMVIDPNSOURCEMODESET@@U?$DoubleLinkedListElementDeleter@VDMMVIDPNSOURCEMODESET@@@@@@@@QEAAXPEAV?$DoublyLinkedList@VDMMVIDPNSOURCEMODESET@@U?$DoubleLinkedListElementDeleter@VDMMVIDPNSOURCEMODESET@@@@@@@Z @ 0x1C000F47C (-reset@-$auto_ptr@V-$DoublyLinkedList@VDMMVIDPNSOURCEMODESET@@U-$DoubleLinkedListElementDeleter@.c)
 *     ??0DMMVIDPNSOURCE@@QEAA@QEAVDMMVIDPNSOURCESET@@QEAVDMMVIDEOPRESENTSOURCE@@@Z @ 0x1C000F4B4 (--0DMMVIDPNSOURCE@@QEAA@QEAVDMMVIDPNSOURCESET@@QEAVDMMVIDEOPRESENTSOURCE@@@Z.c)
 *     ??1?$auto_ptr@VDMMVIDPNSOURCE@@@@QEAA@XZ @ 0x1C000F63C (--1-$auto_ptr@VDMMVIDPNSOURCE@@@@QEAA@XZ.c)
 *     ??0DMMVIDPNTOPOLOGY@@QEAA@XZ @ 0x1C0010470 (--0DMMVIDPNTOPOLOGY@@QEAA@XZ.c)
 *     ?_SetContainingVidPn@DMMVIDPNTOPOLOGY@@IEAAXPEAVDMMVIDPN@@@Z @ 0x1C00106B8 (-_SetContainingVidPn@DMMVIDPNTOPOLOGY@@IEAAXPEAVDMMVIDPN@@@Z.c)
 *     ??0DMMVIDPNSOURCESET@@QEAA@QEAVDMMVIDPN@@@Z @ 0x1C0010EF4 (--0DMMVIDPNSOURCESET@@QEAA@QEAVDMMVIDPN@@@Z.c)
 *     ??0DMMVIDPNTARGETSET@@QEAA@QEAVDMMVIDPN@@@Z @ 0x1C0010F9C (--0DMMVIDPNTARGETSET@@QEAA@QEAVDMMVIDPN@@@Z.c)
 *     ?SetAggregator@?$AggregatedBy@VVIDPN_MGR@@@@QEAAXPEAVVIDPN_MGR@@@Z @ 0x1C0018E88 (-SetAggregator@-$AggregatedBy@VVIDPN_MGR@@@@QEAAXPEAVVIDPN_MGR@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026570 (_guard_dispatch_icall_nop.c)
 *     ??1?$auto_ptr@VDMMVIDPNSOURCEMODE@@@@QEAA@XZ @ 0x1C004B580 (--1-$auto_ptr@VDMMVIDPNSOURCEMODE@@@@QEAA@XZ.c)
 *     ?AddTarget@DMMVIDPNTARGETSET@@QEAAJV?$auto_ptr@VDMMVIDPNTARGET@@@@@Z @ 0x1C010F184 (-AddTarget@DMMVIDPNTARGETSET@@QEAAJV-$auto_ptr@VDMMVIDPNTARGET@@@@@Z.c)
 *     ??0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@Z @ 0x1C011D4B0 (--0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@.c)
 *     ??1ApplyPermissionWithinThisScope@@IEAA@XZ @ 0x1C011D5D8 (--1ApplyPermissionWithinThisScope@@IEAA@XZ.c)
 *     ?AddSource@DMMVIDPNSOURCESET@@QEAAJV?$auto_ptr@VDMMVIDPNSOURCE@@@@@Z @ 0x1C012814C (-AddSource@DMMVIDPNSOURCESET@@QEAAJV-$auto_ptr@VDMMVIDPNSOURCE@@@@@Z.c)
 */

DMMVIDPN *__fastcall DMMVIDPN::DMMVIDPN(DMMVIDPN *this, struct VIDPN_MGR *const a2, unsigned __int8 a3)
{
  unsigned __int8 (__fastcall ***v3)(_QWORD); // r14
  struct VIDPN_MGR *v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // rcx
  struct DMMVIDPNSOURCESET *const *v8; // r15
  struct DMMVIDPNTARGETSET *const *v9; // r13
  DMMVIDPNSOURCESET *v10; // rax
  DMMVIDPNSOURCESET *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  struct DMMVIDPNTARGETSET *v15; // rcx
  DMMVIDPNTARGETSET *v16; // rax
  DMMVIDPNTARGETSET *v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rbx
  __int64 v20; // r14
  struct DMMVIDEOPRESENTSOURCE *v21; // r14
  DMMVIDPNSOURCE *v22; // rsi
  DMMVIDPNSOURCE *v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  struct DMMVIDPNSOURCESET *v28; // rcx
  __int64 v29; // rdx
  __int64 v30; // rcx
  int v31; // esi
  __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // r14
  struct DMMVIDEOPRESENTTARGET *v35; // r14
  DMMVIDPNTARGET *v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // r9
  DMMVIDPNTARGET *v41; // rsi
  struct DMMVIDPNTARGETSET *v42; // rcx
  __int64 v43; // rcx
  int v44; // esi
  __int64 v45; // rax
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // r8
  __int64 v51; // r9
  __int64 v53; // rax
  __int64 v54; // rax
  int v55; // eax
  __int64 v56; // rax
  __int64 v57; // rax
  struct DMMVIDPNSOURCESET *v58; // rax
  __int64 v59; // rax
  __int64 v60; // rax
  __int64 v61; // rax
  __int64 v62; // rax
  __int64 v63; // rdx
  __int64 v64; // rax
  __int64 v65; // rax
  __int64 v66; // rax
  __int64 v67; // rax
  DMMVIDPNTARGET *v68; // [rsp+40h] [rbp-28h] BYREF
  _BYTE v69[32]; // [rsp+48h] [rbp-20h] BYREF
  DMMVIDPNSOURCE *v70; // [rsp+B0h] [rbp+48h] BYREF
  struct VIDPN_MGR *v71; // [rsp+B8h] [rbp+50h]
  DMMVIDPNTARGET *v72; // [rsp+C0h] [rbp+58h] BYREF
  DMMVIDPNSOURCE *v73; // [rsp+C8h] [rbp+60h] BYREF

  v71 = a2;
  *((_DWORD *)this + 16) = 1833172997;
  *((_QWORD *)this + 1) = 0LL;
  *(_QWORD *)this = &SetElement::`vftable';
  v3 = (unsigned __int8 (__fastcall ***)(_QWORD))((char *)this + 96);
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = &ReferenceCounted::`vftable';
  *((_QWORD *)this + 6) = 0LL;
  *((_DWORD *)this + 8) = 1;
  v5 = a2;
  *((_DWORD *)this + 20) = 0;
  *(_QWORD *)this = &DMMVIDPN::`vftable'{for `SetElement'};
  *((_QWORD *)this + 3) = &DMMVIDPN::`vftable'{for `ReferenceCounted'};
  *((_QWORD *)this + 5) = &DMMVIDPN::`vftable'{for `AggregatedBy<VIDPN_MGR>'};
  *((_QWORD *)this + 7) = &DMMVIDPN::`vftable'{for `SignedWithClassSignature<DMMVIDPN>'};
  *((_QWORD *)this + 9) = &DMMVIDPN::`vftable'{for `FallibleConstruction'};
  DMMVIDPNTOPOLOGY::DMMVIDPNTOPOLOGY((DMMVIDPN *)((char *)this + 96), (unsigned __int8)a2, a3);
  v8 = (struct DMMVIDPNSOURCESET *const *)((char *)this + 304);
  *((_QWORD *)this + 38) = 0LL;
  v9 = (struct DMMVIDPNTARGETSET *const *)((char *)this + 312);
  *((_QWORD *)this + 39) = 0LL;
  if ( !v5 )
  {
    v53 = WdLogNewEntry5_WdAssertion(v7, v6);
    WdLogEvent5_WdAssertion(v53);
  }
  *((_DWORD *)this + 22) = 1;
  AggregatedBy<VIDPN_MGR>::SetAggregator((__int64)this + 40, (__int64)v5);
  if ( !(**v3)(v3) )
  {
    v54 = WdLogNewEntry5_WdDmmEvent();
    *(_QWORD *)(v54 + 24) = this;
    WdLogEvent5_WdDmmEvent(v54);
    v55 = *((_DWORD *)this + 28);
    if ( v55 >= 0 )
      v55 = *((_DWORD *)this + 40);
    *((_DWORD *)this + 20) = v55;
    return this;
  }
  v10 = (DMMVIDPNSOURCESET *)operator new[](0x60uLL, 0x4E506456u, PagedPool);
  if ( v10 )
    v11 = DMMVIDPNSOURCESET::DMMVIDPNSOURCESET(v10, this);
  else
    v11 = 0LL;
  auto_ptr<DoublyLinkedList<DMMVIDPNSOURCEMODESET,DoubleLinkedListElementDeleter<DMMVIDPNSOURCEMODESET>>>::reset(
    (__int64 *)this + 38,
    (__int64)v11);
  v15 = *v8;
  if ( !*v8 )
    goto LABEL_42;
  if ( !(**(unsigned __int8 (__fastcall ***)(struct DMMVIDPNTARGETSET *))v15)(v15) )
  {
    v57 = WdLogNewEntry5_WdDmmEvent();
    *(_QWORD *)(v57 + 24) = this;
    WdLogEvent5_WdDmmEvent(v57);
    v58 = *v8;
LABEL_45:
    *((_DWORD *)this + 20) = *((_DWORD *)v58 + 4);
    return this;
  }
  v16 = (DMMVIDPNTARGETSET *)operator new[](0x60uLL, 0x4E506456u, PagedPool);
  v17 = v16 ? DMMVIDPNTARGETSET::DMMVIDPNTARGETSET(v16, this) : 0LL;
  auto_ptr<DoublyLinkedList<DMMVIDPNSOURCEMODESET,DoubleLinkedListElementDeleter<DMMVIDPNSOURCEMODESET>>>::reset(
    (__int64 *)this + 39,
    (__int64)v17);
  v15 = *v9;
  if ( !*v9 )
  {
LABEL_42:
    v56 = WdLogNewEntry5_WdLowResource(v15, v12, v13, v14);
    WdLogEvent5_WdLowResource(v56);
    *((_DWORD *)this + 20) = -1073741801;
    return this;
  }
  if ( !(**(unsigned __int8 (__fastcall ***)(struct DMMVIDPNTARGETSET *))v15)(v15) )
  {
    v59 = WdLogNewEntry5_WdDmmEvent();
    *(_QWORD *)(v59 + 24) = this;
    WdLogEvent5_WdDmmEvent(v59);
    v58 = *v9;
    goto LABEL_45;
  }
  _InterlockedAdd((volatile signed __int32 *)(*((_QWORD *)v5 + 9) + 72LL), 1u);
  v19 = *((_QWORD *)v5 + 9);
  v20 = *(_QWORD *)(v19 + 24);
  if ( v20 != v19 + 24 )
  {
    v21 = (struct DMMVIDEOPRESENTSOURCE *)(v20 - 8);
    if ( v21 )
    {
      v22 = 0LL;
      while ( 1 )
      {
        v23 = (DMMVIDPNSOURCE *)operator new[](0xB8uLL, 0x4E506456u, PagedPool);
        if ( v23 )
          v22 = DMMVIDPNSOURCE::DMMVIDPNSOURCE(v23, *v8, v21);
        v70 = v22;
        if ( !v22 )
          break;
        if ( !(**((unsigned __int8 (__fastcall ***)(__int64))v22 + 8))((__int64)v22 + 64) )
        {
          v61 = WdLogNewEntry5_WdDmmEvent();
          *(_QWORD *)(v61 + 24) = this;
          WdLogEvent5_WdDmmEvent(v61);
          *((_DWORD *)this + 20) = *((_DWORD *)v22 + 18);
          goto LABEL_50;
        }
        v28 = *v8;
        v70 = 0LL;
        v73 = v22;
        v31 = DMMVIDPNSOURCESET::AddSource(v28, &v73);
        if ( v31 < 0 )
        {
          v60 = WdLogNewEntry5_WdError(v30, v29);
          WdLogEvent5_WdError(v60);
          *((_DWORD *)this + 20) = v31;
          goto LABEL_50;
        }
        auto_ptr<DMMVIDPNSOURCE>::~auto_ptr<DMMVIDPNSOURCE>((__int64 (__fastcall ****)(_QWORD, __int64))&v70);
        v32 = *((_QWORD *)v21 + 1);
        v22 = 0LL;
        v21 = (struct DMMVIDEOPRESENTSOURCE *)(v32 - 8);
        if ( v32 == v19 + 24 )
          v21 = 0LL;
        if ( !v21 )
        {
          v5 = v71;
          goto LABEL_24;
        }
      }
      v62 = WdLogNewEntry5_WdLowResource(v25, v24, v26, v27);
      WdLogEvent5_WdLowResource(v62);
      *((_DWORD *)this + 20) = -1073741801;
LABEL_50:
      auto_ptr<DMMVIDPNSOURCE>::~auto_ptr<DMMVIDPNSOURCE>((__int64 (__fastcall ****)(_QWORD, __int64))&v70);
      goto LABEL_53;
    }
  }
LABEL_24:
  ReferenceCounted::Release((ReferenceCounted *)(v19 + 64), v18);
  _InterlockedAdd((volatile signed __int32 *)(*((_QWORD *)v5 + 10) + 72LL), 1u);
  v19 = *((_QWORD *)v5 + 10);
  v34 = *(_QWORD *)(v19 + 24);
  if ( v34 != v19 + 24 )
  {
    v35 = (struct DMMVIDEOPRESENTTARGET *)(v34 - 8);
    if ( v35 )
    {
      while ( 1 )
      {
        v36 = (DMMVIDPNTARGET *)operator new[](0x80uLL, 0x4E506456u, PagedPool);
        if ( v36 )
          v41 = DMMVIDPNTARGET::DMMVIDPNTARGET(v36, *v9, v35);
        else
          v41 = 0LL;
        v72 = v41;
        if ( !v41 )
        {
          v64 = WdLogNewEntry5_WdLowResource(v38, v37, v39, v40);
          WdLogEvent5_WdLowResource(v64);
          *((_DWORD *)this + 20) = -1073741801;
          goto LABEL_52;
        }
        if ( !(**((unsigned __int8 (__fastcall ***)(__int64))v41 + 8))((__int64)v41 + 64) )
          break;
        v42 = *v9;
        v72 = 0LL;
        v68 = v41;
        v44 = DMMVIDPNTARGETSET::AddTarget(v42, (unsigned int **)&v68);
        if ( v44 < 0 )
        {
          v65 = WdLogNewEntry5_WdError(v43, v33);
          WdLogEvent5_WdError(v65);
          *((_DWORD *)this + 20) = v44;
          goto LABEL_52;
        }
        v45 = *((_QWORD *)v35 + 1);
        v35 = (struct DMMVIDEOPRESENTTARGET *)(v45 - 8);
        if ( v45 == v19 + 24 )
          v35 = 0LL;
        if ( !v35 )
          goto LABEL_34;
      }
      v66 = WdLogNewEntry5_WdDmmEvent();
      *(_QWORD *)(v66 + 24) = this;
      WdLogEvent5_WdDmmEvent(v66);
      *((_DWORD *)this + 20) = *((_DWORD *)v41 + 18);
LABEL_52:
      auto_ptr<DMMVIDPNSOURCEMODE>::~auto_ptr<DMMVIDPNSOURCEMODE>((__int64 (__fastcall ****)(_QWORD, __int64))&v72);
LABEL_53:
      ReferenceCounted::Release((ReferenceCounted *)(v19 + 64), v63);
      return this;
    }
  }
LABEL_34:
  ReferenceCounted::Release((ReferenceCounted *)(v19 + 64), v33);
  LOBYTE(v47) = *((_BYTE *)this + 172);
  if ( ((unsigned __int16)((2 << v47) - 1) & *((_WORD *)this + 87)) != 0 )
  {
    v67 = WdLogNewEntry5_WdAssertion(v47, v46);
    WdLogEvent5_WdAssertion(v67);
  }
  ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(
    v69,
    ((unsigned __int64)this + 152) & ((unsigned __int128)-(__int128)((unsigned __int64)this + 96) >> 64),
    0LL);
  DMMVIDPNTOPOLOGY::_SetContainingVidPn((DMMVIDPN *)((char *)this + 96), this);
  ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v69);
  *((_DWORD *)this + 22) = 2;
  *(_QWORD *)(WdLogNewEntry5_WdTrace(v49, v48, v50, v51) + 24) = this;
  return this;
}
