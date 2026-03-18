/*
 * XREFs of ?AddMode@DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNSOURCEMODESET__@@QEAU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z @ 0x1C01119C0
 * Callers:
 *     <none>
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000A840 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C000BEAC (--3@YAXPEAX@Z.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000D778 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D7CC (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?ContainsByReference@?$DoublyLinkedList@VDMMVIDPNSOURCEMODE@@U?$DoubleLinkedListElementDeleter@VDMMVIDPNSOURCEMODE@@@@@@QEAAEQEBVDMMVIDPNSOURCEMODE@@@Z @ 0x1C0016F54 (-ContainsByReference@-$DoublyLinkedList@VDMMVIDPNSOURCEMODE@@U-$DoubleLinkedListElementDeleter@V.c)
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C0018388 (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024408 (McTemplateK0q_EtwWriteTransfer.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026570 (_guard_dispatch_icall_nop.c)
 *     ?AddMode@DMMVIDPNSOURCEMODESET@@QEAAJV?$auto_ptr@VDMMVIDPNSOURCEMODE@@@@@Z @ 0x1C0111F40 (-AddMode@DMMVIDPNSOURCEMODESET@@QEAAJV-$auto_ptr@VDMMVIDPNSOURCEMODE@@@@@Z.c)
 *     ?IsPathFromSourceConnectedToIndirectDisplay@DMMVIDPN@@QEBAEI@Z @ 0x1C02E42C0 (-IsPathFromSourceConnectedToIndirectDisplay@DMMVIDPN@@QEBAEI@Z.c)
 */

__int64 __fastcall DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL::AddMode(
        DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNSOURCEMODESET__ *a2,
        struct _D3DKMDT_VIDPN_SOURCE_MODE *const a3)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL *v12; // r15
  struct D3DKMDT_HVIDPNSOURCEMODESET__ *v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  struct D3DKMDT_HVIDPNSOURCEMODESET__ *v18; // rsi
  struct D3DKMDT_HVIDPNSOURCEMODESET__ *v19; // rbx
  int v20; // eax
  struct D3DKMDT_HVIDPNSOURCEMODESET__ *v21; // rdi
  __int64 v22; // rcx
  __int64 v23; // rcx
  int v24; // eax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rdx
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rbx
  __int64 v37; // rcx
  __int64 v38; // rax
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // rbx
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // rbx
  __int64 v47; // rcx
  unsigned int v48; // edi
  __int64 v49; // rax
  DMMVIDPN *Container; // rax
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // rax
  __int64 v54; // rax
  _QWORD *v55; // rax
  __int64 v56; // rax
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // r8
  __int64 v60; // rax
  __int64 v61; // rax
  __int64 v62; // rax
  _QWORD *v63; // rax
  _QWORD *v64; // rax
  __int64 v65; // rax
  _QWORD *v66; // rax
  _QWORD *v67; // rax
  __int64 v68; // rdx
  __int64 v69; // rcx
  __int64 v70; // rax
  int v71; // [rsp+20h] [rbp-38h] BYREF
  __int64 v72; // [rsp+28h] [rbp-30h]
  char v73; // [rsp+30h] [rbp-28h]
  struct D3DKMDT_HVIDPNSOURCEMODESET__ *v74; // [rsp+60h] [rbp+8h] BYREF

  v71 = -1;
  v72 = 0LL;
  if ( (qword_1C00AE9B0 & 2) != 0 )
  {
    v73 = 1;
    v71 = 7006;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, &EventProfilerEnter, (__int64)a3, 7006);
  }
  else
  {
    v73 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v71, 7006LL);
  v9 = WdLogNewEntry5_WdTrace(v6, v5, v7, v8);
  *(_QWORD *)(v9 + 24) = a2;
  *(_QWORD *)(v9 + 32) = this;
  if ( !a2 )
  {
    v34 = WdLogNewEntry5_WdError(v11, v10);
    *(_QWORD *)(v34 + 24) = 0LL;
    *(_QWORD *)(v34 + 32) = this;
LABEL_52:
    WdLogEvent5_WdError(v34);
    goto LABEL_53;
  }
  if ( this && *((_DWORD *)this + 32) == 1833173004 )
    v12 = this;
  else
    v12 = 0LL;
  if ( !v12 )
  {
    v35 = WdLogNewEntry5_WdError(v11, v10);
    *(_QWORD *)(v35 + 24) = this;
    WdLogEvent5_WdError(v35);
    LODWORD(v21) = -1071774968;
    goto LABEL_33;
  }
  if ( (unsigned int)(*((_DWORD *)a2 + 1) - 3) <= 1 )
  {
    v36 = *((_QWORD *)v12 + 14);
    v37 = *(_QWORD *)(v36 + 40);
    if ( !v37 )
    {
      v38 = WdLogNewEntry5_WdAssertion(0LL, v10);
      WdLogEvent5_WdAssertion(v38);
      v37 = *(_QWORD *)(v36 + 40);
    }
    v41 = *(_QWORD *)(ContainedBy<DMMVIDPN>::GetContainer(v37 + 64, v10) + 48);
    v42 = *(_QWORD *)(v41 + 8);
    if ( !v42 )
    {
      v43 = WdLogNewEntry5_WdAssertion(v40, v39);
      WdLogEvent5_WdAssertion(v43);
      v42 = *(_QWORD *)(v41 + 8);
    }
    v44 = *(_QWORD *)(v42 + 16);
    if ( *(int *)(v44 + 2572) < 1200 && *(_BYTE *)(v44 + 2584) )
    {
      v45 = WdLogNewEntry5_WdAssertion(v40, v39);
      WdLogEvent5_WdAssertion(v45);
LABEL_53:
      LODWORD(v21) = -1071774960;
      goto LABEL_33;
    }
    v46 = *((_QWORD *)v12 + 14);
    v47 = *(_QWORD *)(v46 + 40);
    v48 = *(_DWORD *)(v46 + 24);
    if ( !v47 )
    {
      v49 = WdLogNewEntry5_WdAssertion(0LL, v39);
      WdLogEvent5_WdAssertion(v49);
      v47 = *(_QWORD *)(v46 + 40);
    }
    Container = (DMMVIDPN *)ContainedBy<DMMVIDPN>::GetContainer(v47 + 64, v39);
    if ( DMMVIDPN::IsPathFromSourceConnectedToIndirectDisplay(Container, v48) )
    {
      v34 = WdLogNewEntry5_WdError(v52, v51);
      goto LABEL_52;
    }
  }
  v13 = (struct D3DKMDT_HVIDPNSOURCEMODESET__ *)operator new[](0x70uLL, 0x4E506456u, PagedPool);
  v18 = v13;
  if ( v13 )
  {
    v15 = *(_DWORD *)a2;
    *((_QWORD *)v13 + 1) = 0LL;
    *((_QWORD *)v13 + 2) = 0LL;
    *(_QWORD *)v13 = &SetElement::`vftable';
    *((_DWORD *)v13 + 6) = v15;
    if ( (_DWORD)v15 == -1 )
    {
      v53 = WdLogNewEntry5_WdAssertion(v15, v14);
      *(_QWORD *)(v53 + 24) = 240LL;
      WdLogEvent5_WdAssertion(v53);
    }
    *((_QWORD *)v18 + 5) = 0LL;
    *((_DWORD *)v18 + 18) = 0;
    *(_QWORD *)v18 = &DMMVIDPNTARGETMODE::`vftable'{for `IndexedSetElement<unsigned int>'};
    *((_QWORD *)v18 + 4) = &DMMVIDPNSOURCEMODE::`vftable'{for `ContainedBy<DMMVIDPNSOURCEMODESET>'};
    *((_QWORD *)v18 + 6) = &DMMVIDPNTARGETMODE::`vftable'{for `SignedWithClassSignature<DMMVIDPNTARGETMODE>'};
    *((_QWORD *)v18 + 8) = &DMMVIDPNSOURCEMODE::`vftable'{for `NonReferenceCounted'};
    *((_DWORD *)v18 + 14) = 1833173006;
    *(_OWORD *)(v18 + 19) = 0LL;
    *(_OWORD *)(v18 + 23) = 0LL;
  }
  else
  {
    v18 = 0LL;
  }
  v19 = v18;
  if ( !v18 )
  {
    v54 = WdLogNewEntry5_WdLowResource(v15, v14, v16, v17);
    *(_QWORD *)(v54 + 24) = this;
    WdLogEvent5_WdLowResource(v54);
    LODWORD(v21) = -1073741801;
    goto LABEL_31;
  }
  v20 = *((_DWORD *)a2 + 1);
  if ( v20 != 1 )
  {
    if ( v20 == 2 )
    {
      *((_DWORD *)v18 + 18) = 2;
      v18[19] = a2[2];
      goto LABEL_27;
    }
    if ( v20 <= 2 || v20 > 4 )
    {
      v55 = (_QWORD *)WdLogNewEntry5_WdError(v15, v14);
      v55[3] = v18;
      v55[4] = this;
      v55[5] = *((int *)a2 + 1);
      WdLogEvent5_WdError(v55);
      LODWORD(v21) = -1071774960;
      goto LABEL_31;
    }
  }
  v21 = a2 + 2;
  if ( *((_DWORD *)a2 + 2) < 0x64u || *((_DWORD *)a2 + 3) < 0x64u )
  {
    v64 = (_QWORD *)WdLogNewEntry5_WdError(v15, v14);
    v64[3] = *(_DWORD *)v21;
    v64[4] = *((unsigned int *)a2 + 3);
    v64[5] = v21;
    WdLogEvent5_WdError(v64);
    LODWORD(v21) = -1071774918;
  }
  else if ( *((_DWORD *)a2 + 4) < 0x64u || *((_DWORD *)a2 + 5) < 0x64u )
  {
    v63 = (_QWORD *)WdLogNewEntry5_WdError(v15, v14);
    v63[3] = *((unsigned int *)a2 + 4);
    v63[4] = *((unsigned int *)a2 + 5);
    v63[5] = v21;
    WdLogEvent5_WdError(v63);
    LODWORD(v21) = -1071774917;
  }
  else if ( *((_DWORD *)a2 + 6) )
  {
    if ( *((_DWORD *)a2 + 7) )
    {
      v22 = *((unsigned int *)a2 + 8);
      if ( (_DWORD)v22 && (int)v22 <= 5 )
      {
        v23 = *((unsigned int *)a2 + 9);
        if ( (_DWORD)v23 && (int)v23 <= 3 )
        {
          *((_DWORD *)v18 + 18) = v20;
          *(_OWORD *)(v18 + 19) = *(_OWORD *)v21;
          LODWORD(v21) = 0;
          *(_OWORD *)(v18 + 23) = *(_OWORD *)(a2 + 6);
          goto LABEL_26;
        }
        v61 = WdLogNewEntry5_WdError(v23, v14);
        *(_QWORD *)(v61 + 24) = *((int *)a2 + 9);
        *(_QWORD *)(v61 + 32) = v21;
        WdLogEvent5_WdError(v61);
        LODWORD(v21) = -1071774913;
      }
      else
      {
        v62 = WdLogNewEntry5_WdError(v22, v14);
        *(_QWORD *)(v62 + 24) = *((int *)a2 + 8);
        *(_QWORD *)(v62 + 32) = v21;
        WdLogEvent5_WdError(v62);
        LODWORD(v21) = -1071774914;
      }
    }
    else
    {
      v60 = WdLogNewEntry5_WdError(v15, v14);
      *(_QWORD *)(v60 + 24) = *((int *)a2 + 7);
      *(_QWORD *)(v60 + 32) = v21;
      WdLogEvent5_WdError(v60);
      LODWORD(v21) = -1071774915;
    }
  }
  else
  {
    v56 = WdLogNewEntry5_WdError(v15, v14);
    *(_QWORD *)(v56 + 24) = *((unsigned int *)a2 + 6);
    *(_QWORD *)(v56 + 32) = v21;
    WdLogEvent5_WdError(v56);
    LODWORD(v21) = -1071774916;
  }
  v65 = WdLogNewEntry5_WdWarning(v58, v57, v59);
  WdLogEvent5_WdWarning(v65);
LABEL_26:
  if ( (int)v21 < 0 )
  {
    v66 = (_QWORD *)WdLogNewEntry5_WdTrace(v23, v14, v16, v17);
    v66[3] = v18;
    v66[4] = this;
    v66[5] = (int)v21;
    goto LABEL_31;
  }
LABEL_27:
  v74 = v18;
  v19 = 0LL;
  v24 = DMMVIDPNSOURCEMODESET::AddMode(v12, &v74);
  v21 = (struct D3DKMDT_HVIDPNSOURCEMODESET__ *)v24;
  if ( v24 >= 0 )
  {
    v21 = a2 - 4;
    if ( *((_DWORD *)a2 - 4) == 305419896 )
    {
      v29 = *((_QWORD *)v21 + 1);
      if ( v29
        && !DoublyLinkedList<DMMVIDPNSOURCEMODE,DoubleLinkedListElementDeleter<DMMVIDPNSOURCEMODE>>::ContainsByReference(
              (__int64)v12 + 32,
              v29) )
      {
        v70 = WdLogNewEntry5_WdError(v69, v68);
        *(_QWORD *)(v70 + 24) = v21;
        *(_QWORD *)(v70 + 32) = v12;
        WdLogEvent5_WdError(v70);
        LODWORD(v21) = -1071774928;
        goto LABEL_33;
      }
      operator delete(a2 - 4);
      LODWORD(v21) = 0;
      goto LABEL_31;
    }
    v34 = WdLogNewEntry5_WdError(v26, v25);
    *(_QWORD *)(v34 + 24) = v21;
    goto LABEL_52;
  }
  v67 = (_QWORD *)WdLogNewEntry5_WdTrace(v26, v25, v27, v28);
  v67[3] = a2;
  v67[4] = this;
  v67[5] = v21;
LABEL_31:
  if ( v19 )
    (**(void (__fastcall ***)(struct D3DKMDT_HVIDPNSOURCEMODESET__ *, __int64))v19)(v19, 1LL);
LABEL_33:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v71, v30);
  if ( v73 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v31, &EventProfilerExit, v32, v71);
  return (unsigned int)v21;
}
