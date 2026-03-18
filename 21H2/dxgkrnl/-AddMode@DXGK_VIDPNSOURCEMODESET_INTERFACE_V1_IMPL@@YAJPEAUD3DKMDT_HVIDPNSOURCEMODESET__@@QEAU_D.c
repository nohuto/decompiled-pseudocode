/*
 * XREFs of ?AddMode@DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNSOURCEMODESET__@@QEAU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z @ 0x1C018ACA0
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000B780 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C000D96C (--3@YAXPEAX@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D9B8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?ContainsByReference@?$DoublyLinkedList@VDMMVIDPNSOURCEMODE@@U?$DoubleLinkedListElementDeleter@VDMMVIDPNSOURCEMODE@@@@@@QEAAEQEBVDMMVIDPNSOURCEMODE@@@Z @ 0x1C001A4EC (-ContainsByReference@-$DoublyLinkedList@VDMMVIDPNSOURCEMODE@@U-$DoubleLinkedListElementDeleter@V.c)
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C001CC0C (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     ??8DMMVIDPNSOURCEMODE@@QEBA_NAEBV0@@Z @ 0x1C001D29C (--8DMMVIDPNSOURCEMODE@@QEBA_NAEBV0@@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002B284 (McTemplateK0q_EtwWriteTransfer.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     ??1?$auto_ptr@VDMMVIDPNSOURCEMODE@@@@QEAA@XZ @ 0x1C004ED14 (--1-$auto_ptr@VDMMVIDPNSOURCEMODE@@@@QEAA@XZ.c)
 *     ?IsPathFromSourceConnectedToIndirectDisplay@DMMVIDPN@@QEBAEI@Z @ 0x1C03A7720 (-IsPathFromSourceConnectedToIndirectDisplay@DMMVIDPN@@QEBAEI@Z.c)
 */

__int64 __fastcall DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL::AddMode(
        DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNSOURCEMODESET__ *a2,
        struct _D3DKMDT_VIDPN_SOURCE_MODE *const a3)
{
  void (__fastcall ***v3)(_QWORD, __int64); // rbx
  struct D3DKMDT_HVIDPNSOURCEMODESET__ *v4; // rbp
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // r9
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rsi
  int v13; // ecx
  DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL *v14; // rcx
  _OWORD *v15; // r9
  int v16; // eax
  int v17; // eax
  _DWORD *v18; // r14
  _DWORD *v19; // r15
  char *v20; // r8
  DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL *v21; // r9
  _QWORD *v22; // r12
  char *v23; // rdi
  __int64 v24; // r8
  int v25; // eax
  DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL *v26; // rax
  __int64 v27; // rax
  _QWORD *v28; // rcx
  _QWORD *v29; // rcx
  _QWORD *v30; // rax
  struct D3DKMDT_HVIDPNSOURCEMODESET__ *v31; // r11
  __int64 v32; // rdx
  int v33; // edi
  __int64 v34; // r8
  __int64 v36; // rdi
  __int64 v37; // rcx
  __int64 v38; // rdi
  __int64 v39; // rax
  __int64 v40; // rdx
  __int64 v41; // rdi
  __int64 v42; // rcx
  DMMVIDPN *Container; // rax
  __int64 v44; // rax
  __int64 v45; // rdx
  __int64 v46; // rcx
  _QWORD *v47; // rax
  __int64 v48; // rdx
  __int64 v49; // rcx
  _QWORD *v50; // rax
  int v51; // [rsp+50h] [rbp-58h] BYREF
  __int64 v52; // [rsp+58h] [rbp-50h]
  char v53; // [rsp+60h] [rbp-48h]
  __int64 (__fastcall ***v54)(_QWORD, __int64); // [rsp+B0h] [rbp+8h] BYREF
  struct D3DKMDT_HVIDPNSOURCEMODESET__ *v55; // [rsp+B8h] [rbp+10h]

  v55 = a2;
  v3 = 0LL;
  v51 = -1;
  v4 = a2;
  v52 = 0LL;
  if ( (qword_1C012F870 & 2) != 0 )
  {
    v53 = 1;
    v51 = 7006;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, &EventProfilerEnter, (__int64)a3, 7006);
  }
  else
  {
    v53 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v51, 7006);
  v8 = WdLogNewEntry5_WdTrace(v7, v6);
  *(_QWORD *)(v8 + 24) = v4;
  *(_QWORD *)(v8 + 32) = this;
  if ( !v4 )
  {
    WdLogSingleEntry2(2LL, 0LL, this);
    v33 = -1071774960;
    goto LABEL_52;
  }
  if ( !this || *((_DWORD *)this + 32) != 1833173004 )
  {
    WdLogSingleEntry1(2LL, this);
    v33 = -1071774968;
    goto LABEL_52;
  }
  if ( (unsigned int)(*((_DWORD *)v4 + 1) - 3) <= 1 )
  {
    v36 = *((_QWORD *)this + 14);
    v37 = *(_QWORD *)(v36 + 40);
    if ( !v37 )
    {
      WdLogSingleEntry0(1LL);
      v37 = *(_QWORD *)(v36 + 40);
    }
    v38 = *(_QWORD *)(ContainedBy<DMMVIDPN>::GetContainer(v37 + 64) + 48);
    v39 = *(_QWORD *)(v38 + 8);
    if ( !v39 )
    {
      WdLogSingleEntry0(1LL);
      v39 = *(_QWORD *)(v38 + 8);
    }
    v40 = *(_QWORD *)(v39 + 16);
    if ( *(int *)(v40 + 2692) < 1200 && *(_BYTE *)(v40 + 2704) )
    {
      WdLogSingleEntry0(1LL);
      v33 = -1071774960;
      goto LABEL_52;
    }
    v41 = *((_QWORD *)this + 14);
    v42 = *(_QWORD *)(v41 + 40);
    if ( !v42 )
    {
      WdLogSingleEntry0(1LL);
      v42 = *(_QWORD *)(v41 + 40);
    }
    Container = (DMMVIDPN *)ContainedBy<DMMVIDPN>::GetContainer(v42 + 64);
    if ( DMMVIDPN::IsPathFromSourceConnectedToIndirectDisplay(Container, *(_DWORD *)(*((_QWORD *)this + 14) + 24LL)) )
    {
      WdLogSingleEntry0(2LL);
      v33 = -1071774960;
      goto LABEL_52;
    }
  }
  v10 = operator new[](0x70uLL, 0x4E506456u, 256LL, v9);
  v12 = v10;
  if ( !v10 )
  {
    WdLogSingleEntry1(6LL, this);
    v33 = -1073741801;
    goto LABEL_107;
  }
  v13 = *(_DWORD *)v4;
  *(_QWORD *)(v10 + 8) = 0LL;
  *(_QWORD *)(v10 + 16) = 0LL;
  *(_QWORD *)v10 = &SetElement::`vftable';
  *(_DWORD *)(v10 + 24) = v13;
  if ( v13 == -1 )
  {
    WdLogSingleEntry1(1LL, 240LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"i_Id != D3DDDI_ID_UNINITIALIZED", 240LL, 0LL, 0LL, 0LL, 0LL);
  }
  *(_QWORD *)(v12 + 40) = 0LL;
  *(_QWORD *)v12 = &DMMVIDPNSOURCEMODE::`vftable'{for `IndexedSetElement<unsigned int>'};
  *(_DWORD *)(v12 + 56) = 1833173006;
  *(_QWORD *)(v12 + 32) = &DMMVIDPNSOURCEMODE::`vftable'{for `ContainedBy<DMMVIDPNSOURCEMODESET>'};
  *(_QWORD *)(v12 + 48) = &DMMVIDPNSOURCEMODE::`vftable'{for `SignedWithClassSignature<DMMVIDPNSOURCEMODE>'};
  *(_QWORD *)(v12 + 64) = &DMMVIDPNSOURCEMODE::`vftable'{for `NonReferenceCounted'};
  *(_DWORD *)(v12 + 72) = 0;
  *(_OWORD *)(v12 + 76) = 0LL;
  *(_OWORD *)(v12 + 92) = 0LL;
  v14 = (DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL *)*((int *)v4 + 1);
  if ( (_DWORD)v14 == 1 )
  {
LABEL_11:
    v15 = v4 + 2;
    if ( *((_DWORD *)v4 + 2) < 0x64u || *((_DWORD *)v4 + 3) < 0x64u )
    {
      WdLogSingleEntry3(2LL, *((unsigned int *)v4 + 2), *((unsigned int *)v4 + 3), v15);
      v33 = -1071774918;
    }
    else if ( *((_DWORD *)v4 + 4) < 0x64u || *((_DWORD *)v4 + 5) < 0x64u )
    {
      WdLogSingleEntry3(2LL, *((unsigned int *)v4 + 4), *((unsigned int *)v4 + 5), v15);
      v33 = -1071774917;
    }
    else if ( *((_DWORD *)v4 + 6) )
    {
      if ( *((_DWORD *)v4 + 7) )
      {
        v16 = *((_DWORD *)v4 + 8);
        if ( v16 && v16 <= 5 )
        {
          v17 = *((_DWORD *)v4 + 9);
          if ( v17 && v17 <= 3 )
          {
            *(_DWORD *)(v12 + 72) = (_DWORD)v14;
            v18 = (_DWORD *)(v12 + 76);
            v19 = (_DWORD *)(v12 + 72);
            *(_OWORD *)(v12 + 76) = *v15;
            *(_OWORD *)(v12 + 92) = *(_OWORD *)(v4 + 6);
            goto LABEL_22;
          }
          WdLogSingleEntry2(2LL, *((int *)v4 + 9), v4 + 2);
          v33 = -1071774913;
        }
        else
        {
          WdLogSingleEntry2(2LL, *((int *)v4 + 8), v4 + 2);
          v33 = -1071774914;
        }
      }
      else
      {
        WdLogSingleEntry2(2LL, 0LL, v4 + 2);
        v33 = -1071774915;
      }
    }
    else
    {
      WdLogSingleEntry2(2LL, 0LL, v4 + 2);
      v33 = -1071774916;
    }
    WdLogSingleEntry0(3LL);
    v50 = (_QWORD *)WdLogNewEntry5_WdTrace(v49, v48);
    v3 = (void (__fastcall ***)(_QWORD, __int64))v12;
    v50[3] = v12;
    v50[4] = this;
    v50[5] = v33;
LABEL_107:
    if ( v3 )
      (**v3)(v3, 1LL);
    goto LABEL_52;
  }
  if ( (_DWORD)v14 != 2 )
  {
    if ( (int)v14 <= 2 || (int)v14 > 4 )
    {
      WdLogSingleEntry3(2LL, v12, this, *((int *)v4 + 1));
      v33 = -1071774960;
      v3 = (void (__fastcall ***)(_QWORD, __int64))v12;
      goto LABEL_107;
    }
    goto LABEL_11;
  }
  v19 = (_DWORD *)(v12 + 72);
  *(_DWORD *)(v12 + 72) = 2;
  v18 = (_DWORD *)(v12 + 76);
  *(_DWORD *)(struct D3DKMDT_HVIDPNSOURCEMODESET__ *)(v12 + 76) = v4[2];
LABEL_22:
  v20 = (char *)this + 32;
  v54 = (__int64 (__fastcall ***)(_QWORD, __int64))v12;
  v21 = (DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL *)*((_QWORD *)this + 6);
  v22 = (_QWORD *)((char *)this + 48);
  v23 = (char *)v21 - 8;
  if ( v21 != (DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL *)((char *)this + 48) )
  {
    v24 = (__int64)v21 - 8;
    if ( v21 != (DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL *)8 )
    {
      v11 = *(unsigned int *)(v12 + 24);
      while ( *(_DWORD *)(v24 + 24) != (_DWORD)v11 )
      {
        v14 = *(DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL **)(v24 + 8);
        v24 = (__int64)v14 - 8;
        if ( v14 == (DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL *)((char *)this + 48) )
          v24 = 0LL;
        if ( !v24 )
          goto LABEL_29;
      }
      if ( DMMVIDPNSOURCEMODE::operator==(v24, v12) )
        goto LABEL_93;
      WdLogSingleEntry3(2LL, *(unsigned int *)(v12 + 24), v12, this);
      v33 = -1071774940;
LABEL_94:
      auto_ptr<DMMVIDPNSOURCEMODE>::~auto_ptr<DMMVIDPNSOURCEMODE>(&v54);
      v47 = (_QWORD *)WdLogNewEntry5_WdTrace(v46, v45);
      v47[3] = v4;
      v47[4] = this;
      v47[5] = v33;
      goto LABEL_107;
    }
LABEL_29:
    v20 = (char *)this + 32;
  }
  if ( v21 != (DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL *)((char *)this + 48)
    && v21 != (DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL *)8 )
  {
    while ( 1 )
    {
      v25 = *((_DWORD *)v23 + 18);
      if ( v25 != *v19 )
        goto LABEL_35;
      if ( v25 == 1 )
        goto LABEL_91;
      if ( v25 == 2 )
      {
        if ( *((_DWORD *)v23 + 19) == *v18 )
          goto LABEL_92;
        goto LABEL_35;
      }
      if ( v25 <= 2 )
      {
        if ( (unsigned int)(v25 - 3) <= 1 )
          WdLogSingleEntry0(1LL);
        goto LABEL_35;
      }
      if ( v25 <= 4 )
      {
LABEL_91:
        if ( *((_DWORD *)v23 + 19) == *v18
          && *((_DWORD *)v23 + 20) == v18[1]
          && *((_DWORD *)v23 + 21) == v18[2]
          && *((_DWORD *)v23 + 22) == v18[3]
          && *((_DWORD *)v23 + 23) == v18[4]
          && *((_DWORD *)v23 + 24) == v18[5]
          && *((_DWORD *)v23 + 25) == v18[6]
          && *((_DWORD *)v23 + 26) == v18[7] )
        {
LABEL_92:
          v4 = v55;
LABEL_93:
          v44 = WdLogNewEntry5_WdTrace(v14, v11);
          v33 = -1071774956;
          *(_QWORD *)(v44 + 24) = v12;
          *(_QWORD *)(v44 + 32) = this;
          goto LABEL_94;
        }
      }
LABEL_35:
      v26 = (DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL *)*((_QWORD *)v23 + 1);
      v23 = (char *)v26 - 8;
      if ( v26 == (DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL *)((char *)this + 48) )
        v23 = 0LL;
      if ( !v23 )
      {
        v20 = (char *)this + 32;
        break;
      }
    }
  }
  if ( (_QWORD *)*v22 == v22 || (v27 = *v22 - 8LL, *v22 == 8LL) )
  {
LABEL_45:
    v29 = (_QWORD *)*((_QWORD *)this + 7);
    v30 = (_QWORD *)(v12 + 8);
    if ( (_QWORD *)*v29 != v22 )
      __fastfail(3u);
    *v30 = v22;
    *(_QWORD *)(v12 + 16) = v29;
    *v29 = v30;
    *((_QWORD *)this + 7) = v30;
    ++*((_QWORD *)v20 + 4);
  }
  else
  {
    while ( v27 != v12 )
    {
      v28 = *(_QWORD **)(v27 + 8);
      v27 = (__int64)(v28 - 1);
      if ( v28 == v22 )
        v27 = 0LL;
      if ( !v27 )
        goto LABEL_45;
    }
    WdLogSingleEntry1(1LL, 108LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"bInsertTailStatus == TRUE", 108LL, 0LL, 0LL, 0LL, 0LL);
    v20 = (char *)this + 32;
  }
  if ( *(_QWORD *)(v12 + 40) )
  {
    WdLogSingleEntry0(1LL);
    v20 = (char *)this + 32;
  }
  v31 = v55 - 4;
  *(_QWORD *)(v12 + 40) = this;
  if ( *(_DWORD *)v31 == 305419896 )
  {
    v32 = *((_QWORD *)v31 + 1);
    if ( !v32
      || DoublyLinkedList<DMMVIDPNSOURCEMODE,DoubleLinkedListElementDeleter<DMMVIDPNSOURCEMODE>>::ContainsByReference(
           (__int64)v20,
           v32) )
    {
      operator delete(v31);
      v33 = 0;
    }
    else
    {
      WdLogSingleEntry2(2LL, v31, this);
      v33 = -1071774928;
    }
  }
  else
  {
    WdLogSingleEntry1(2LL, v31);
    v33 = -1071774960;
  }
LABEL_52:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v51);
  if ( v53 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(BYTE1(Microsoft_Windows_DxgKrnlEnableBits), &EventProfilerExit, v34, v51);
  return (unsigned int)v33;
}
