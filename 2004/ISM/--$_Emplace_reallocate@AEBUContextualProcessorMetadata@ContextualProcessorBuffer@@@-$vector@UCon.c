/*
 * XREFs of ??$_Emplace_reallocate@AEBUContextualProcessorMetadata@ContextualProcessorBuffer@@@?$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V?$allocator@UContextualProcessorMetadata@ContextualProcessorBuffer@@@std@@@std@@QEAAPEAUContextualProcessorMetadata@ContextualProcessorBuffer@@QEAU23@AEBU23@@Z @ 0x180013440
 * Callers:
 *     ?AddProcessor@ContextualProcessorBuffer@@UEAAXPEAUIContextualProcessor@@UContextualProcessorInitialState@@@Z @ 0x180012CF0 (-AddProcessor@ContextualProcessorBuffer@@UEAAXPEAUIContextualProcessor@@UContextualProcessorInit.c)
 *     ?TryAddProcessorAndContact@ContextualProcessorBuffer@@UEAAXKPEAUIContextualProcessor@@UContextualProcessorInitialState@@@Z @ 0x18014D550 (-TryAddProcessorAndContact@ContextualProcessorBuffer@@UEAAXKPEAUIContextualProcessor@@UContextua.c)
 * Callees:
 *     ??0ContextualProcessorMetadata@ContextualProcessorBuffer@@QEAA@AEBU01@@Z @ 0x180012AB0 (--0ContextualProcessorMetadata@ContextualProcessorBuffer@@QEAA@AEBU01@@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800130C0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Insert_unverified@U?$pair@$$CBKW4ContextualProcessorState@@@std@@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKW4ContextualProcessorState@@@std@@@std@@@std@@@2@@?$_Hash@V?$_Umap_traits@KW4ContextualProcessorState@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKW4ContextualProcessorState@@@std@@@3@$0A@@std@@@std@@IEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKW4ContextualProcessorState@@@std@@@std@@@std@@@std@@_N@1@$$QEAU?$pair@$$CBKW4ContextualProcessorState@@@1@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKW4ContextualProcessorState@@@std@@@std@@@std@@@1@@Z @ 0x180013AE0 (--$_Insert_unverified@U-$pair@$$CBKW4ContextualProcessorState@@@std@@V-$_List_unchecked_iterator.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18003C6C0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18003CA78 (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004A6B0 (_guard_dispatch_icall_nop.c)
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x180067D98 (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 *     ??$_Uninitialized_move@PEAUContextualProcessorMetadata@ContextualProcessorBuffer@@PEAU12@V?$allocator@UContextualProcessorMetadata@ContextualProcessorBuffer@@@std@@@std@@YAPEAUContextualProcessorMetadata@ContextualProcessorBuffer@@QEAU12@0PEAU12@AEAV?$allocator@UContextualProcessorMetadata@ContextualProcessorBuffer@@@0@@Z @ 0x18014A5EC (--$_Uninitialized_move@PEAUContextualProcessorMetadata@ContextualProcessorBuffer@@PEAU12@V-$allo.c)
 */

// Hidden C++ exception states: #wind=9
_QWORD *__fastcall std::vector<ContextualProcessorBuffer::ContextualProcessorMetadata>::_Emplace_reallocate<ContextualProcessorBuffer::ContextualProcessorMetadata const &>(
        __int64 **a1,
        __int64 *a2,
        const struct ContextualProcessorBuffer::ContextualProcessorMetadata *a3)
{
  __int64 v6; // rdi
  __int64 v7; // rdx
  unsigned __int64 v8; // r8
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rbx
  size_t v12; // rcx
  _QWORD *v13; // r13
  _QWORD *v14; // r12
  __int64 *v15; // rax
  __int64 *v16; // rsi
  __int64 v17; // rcx
  _QWORD *v18; // rax
  unsigned __int64 v19; // rbx
  unsigned __int64 v20; // rax
  _QWORD *v21; // rax
  char *v22; // rdx
  _QWORD *v23; // rax
  _QWORD *v24; // rdi
  _QWORD *v25; // rax
  unsigned __int64 v26; // rbx
  unsigned __int64 v27; // rax
  _QWORD *v28; // rax
  char *v29; // rdx
  _QWORD *v30; // rax
  _QWORD *v31; // rdi
  __int64 v32; // rbx
  _QWORD *v33; // rax
  __int64 v34; // rbx
  _QWORD *v35; // rax
  __int64 v36; // rcx
  __int64 *v37; // rsi
  __int64 *v38; // r12
  _QWORD *v39; // rdi
  __int64 v40; // rcx
  void *v41; // rcx
  void *v42; // rdx
  _QWORD **v43; // rcx
  _QWORD *v44; // rcx
  _QWORD *v45; // rbx
  void *v46; // rcx
  void *v47; // rdx
  _QWORD **v48; // rcx
  _QWORD *v49; // rcx
  _QWORD *v50; // rbx
  __int64 v51; // rcx
  unsigned __int64 v52; // rdx
  size_t v54; // rcx
  void *v55; // rax
  void *v56; // rcx
  size_t v57; // rcx
  void *v58; // rax
  void *v59; // rcx
  unsigned __int64 v60; // [rsp+20h] [rbp-D8h]
  _QWORD *v61; // [rsp+20h] [rbp-D8h]
  _QWORD *v62; // [rsp+20h] [rbp-D8h]
  _QWORD *v63; // [rsp+28h] [rbp-D0h]
  unsigned __int64 v64; // [rsp+28h] [rbp-D0h]
  _QWORD *v65; // [rsp+28h] [rbp-D0h]
  _QWORD *v66; // [rsp+30h] [rbp-C8h]
  __int64 *v67; // [rsp+38h] [rbp-C0h]
  __int64 v68; // [rsp+40h] [rbp-B8h]
  char v69[16]; // [rsp+98h] [rbp-60h] BYREF
  char v70[80]; // [rsp+A8h] [rbp-50h] BYREF
  unsigned __int64 v71; // [rsp+100h] [rbp+8h] BYREF
  void *v72; // [rsp+108h] [rbp+10h] BYREF
  void *v73; // [rsp+118h] [rbp+20h] BYREF

  v6 = ((char *)a2 - (char *)*a1) / 160;
  v7 = ((char *)a1[1] - (char *)*a1) / 160;
  if ( v7 == 0x199999999999999LL )
    std::_Xlength_error("vector<T> too long");
  v8 = v7 + 1;
  v68 = v7 + 1;
  v9 = ((char *)a1[2] - (char *)*a1) / 160;
  v10 = v9 >> 1;
  if ( v9 > 0x199999999999999LL - (v9 >> 1) )
  {
    v11 = v8;
  }
  else
  {
    v11 = v10 + v9;
    if ( v10 + v9 < v8 )
      v11 = v8;
  }
  v71 = v11;
  v12 = 160 * v11;
  if ( v11 > 0x199999999999999LL )
    v12 = -1LL;
  v13 = std::_Allocate<16,std::_Default_allocate_traits,0>(v12);
  v73 = v13;
  v14 = &v13[20 * v6];
  v66 = v14;
  v72 = v14 + 20;
  ContextualProcessorBuffer::ContextualProcessorMetadata::ContextualProcessorMetadata(
    (ContextualProcessorBuffer::ContextualProcessorMetadata *)v14,
    a3);
  v72 = v14;
  v15 = a1[1];
  v67 = v15;
  v16 = *a1;
  if ( a2 == v15 )
  {
    while ( 1 )
    {
      if ( v16 == v15 )
      {
        v11 = v71;
        v13 = v73;
        goto LABEL_35;
      }
      v17 = *v16;
      *v13 = *v16;
      if ( v17 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 8LL))(v17);
      *((_DWORD *)v13 + 2) = *((_DWORD *)v16 + 2);
      v13[2] = 0LL;
      v13[3] = 0LL;
      v18 = operator new(0x18uLL);
      *v18 = v18;
      v18[1] = v18;
      v13[2] = v18;
      v19 = (unsigned __int64)v18;
      v60 = (v16[5] - v16[4]) >> 3;
      v13[4] = 0LL;
      v13[5] = 0LL;
      v13[6] = 0LL;
      if ( v60 )
        break;
LABEL_17:
      v13[7] = v16[7];
      v13[8] = v16[8];
      v23 = (_QWORD *)v16[2];
      v63 = v23;
      v24 = (_QWORD *)*v23;
      while ( v24 != v23 )
      {
        v34 = *(_QWORD *)v13[2];
        if ( v13[3] == 0xAAAAAAAAAAAAAAALL )
          std::_Xlength_error("list<T> too long");
        v62 = *(_QWORD **)(v34 + 8);
        v35 = operator new(0x18uLL);
        v35[2] = v24[2];
        *v35 = v34;
        v35[1] = v62;
        ++v13[3];
        *(_QWORD *)(v34 + 8) = v35;
        *v62 = v35;
        std::_Hash<std::_Umap_traits<unsigned long,enum ContextualProcessorState,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,enum ContextualProcessorState>>,0>>::_Insert_unverified<std::pair<unsigned long const,enum ContextualProcessorState>,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned long const,enum ContextualProcessorState>>>>>(
          v13 + 1,
          v69,
          *(_QWORD *)v13[2] + 16LL);
        v24 = (_QWORD *)*v24;
        v23 = v63;
      }
      *((_DWORD *)v13 + 18) = *((_DWORD *)v16 + 18);
      *((_DWORD *)v13 + 20) = *((_DWORD *)v16 + 20);
      v13[11] = 0LL;
      v13[12] = 0LL;
      v25 = operator new(0x18uLL);
      *v25 = v25;
      v25[1] = v25;
      v13[11] = v25;
      v26 = (unsigned __int64)v25;
      v64 = (v16[14] - v16[13]) >> 3;
      v13[13] = 0LL;
      v13[14] = 0LL;
      v13[15] = 0LL;
      if ( v64 )
      {
        if ( v64 > 0x1FFFFFFFFFFFFFFFLL )
          std::_Xlength_error("vector<T> too long");
        v27 = 8 * v64;
        if ( 8 * v64 >= 0x1000 )
        {
          v57 = v27 + 39;
          if ( v27 + 39 < v27 )
            v57 = -1LL;
          v58 = operator new(v57);
          v59 = v58;
          if ( v58 )
          {
            v28 = (_QWORD *)(((unsigned __int64)v58 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
            *(v28 - 1) = v59;
            goto LABEL_24;
          }
          _o__invalid_parameter_noinfo_noreturn();
          __debugbreak();
        }
        else if ( v27 )
        {
          v28 = operator new(8 * v64);
LABEL_24:
          v13[13] = v28;
          v29 = (char *)&v28[v64];
          v13[15] = v29;
          memset64(v28, v26, v64);
          v13[14] = v29;
          goto LABEL_25;
        }
        v28 = 0LL;
        goto LABEL_24;
      }
LABEL_25:
      v13[16] = v16[16];
      v13[17] = v16[17];
      v30 = (_QWORD *)v16[11];
      v61 = v30;
      v31 = (_QWORD *)*v30;
      while ( v31 != v30 )
      {
        v32 = *(_QWORD *)v13[11];
        if ( v13[12] == 0xAAAAAAAAAAAAAAALL )
          std::_Xlength_error("list<T> too long");
        v65 = *(_QWORD **)(v32 + 8);
        v33 = operator new(0x18uLL);
        v33[2] = v31[2];
        *v33 = v32;
        v33[1] = v65;
        ++v13[12];
        *(_QWORD *)(v32 + 8) = v33;
        *v65 = v33;
        std::_Hash<std::_Umap_traits<unsigned long,enum ContextualProcessorState,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,enum ContextualProcessorState>>,0>>::_Insert_unverified<std::pair<unsigned long const,enum ContextualProcessorState>,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned long const,enum ContextualProcessorState>>>>>(
          v13 + 10,
          v70,
          *(_QWORD *)v13[11] + 16LL);
        v31 = (_QWORD *)*v31;
        v30 = v61;
      }
      v36 = v16[18];
      v13[18] = v36;
      if ( v36 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v36 + 8LL))(v36);
      *((_BYTE *)v13 + 152) = *((_BYTE *)v16 + 152);
      v13 += 20;
      v16 += 20;
      v15 = v67;
    }
    if ( v60 > 0x1FFFFFFFFFFFFFFFLL )
      std::_Xlength_error("vector<T> too long");
    v20 = 8 * v60;
    if ( 8 * v60 >= 0x1000 )
    {
      v54 = v20 + 39;
      if ( v20 + 39 < v20 )
        v54 = -1LL;
      v55 = operator new(v54);
      v56 = v55;
      if ( v55 )
      {
        v21 = (_QWORD *)(((unsigned __int64)v55 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
        *(v21 - 1) = v56;
        goto LABEL_16;
      }
      _o__invalid_parameter_noinfo_noreturn();
      __debugbreak();
    }
    else if ( v20 )
    {
      v21 = operator new(8 * v60);
LABEL_16:
      v13[4] = v21;
      v22 = (char *)&v21[v60];
      v13[6] = v22;
      memset64(v21, v19, v60);
      v13[5] = v22;
      goto LABEL_17;
    }
    v21 = 0LL;
    goto LABEL_16;
  }
  std::_Uninitialized_move<ContextualProcessorBuffer::ContextualProcessorMetadata *,ContextualProcessorBuffer::ContextualProcessorMetadata *,std::allocator<ContextualProcessorBuffer::ContextualProcessorMetadata>>(
    *a1,
    a2,
    v13,
    a1);
  v72 = v13;
  std::_Uninitialized_move<ContextualProcessorBuffer::ContextualProcessorMetadata *,ContextualProcessorBuffer::ContextualProcessorMetadata *,std::allocator<ContextualProcessorBuffer::ContextualProcessorMetadata>>(
    a2,
    a1[1],
    v14 + 20,
    a1);
LABEL_35:
  v37 = *a1;
  if ( *a1 )
  {
    v38 = a1[1];
    if ( v37 != v38 )
    {
      v39 = v37 + 15;
      do
      {
        v40 = v39[3];
        if ( v40 )
        {
          v39[3] = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v40 + 16LL))(v40);
        }
        v41 = (void *)*(v39 - 2);
        if ( v41 )
        {
          v42 = (void *)((*v39 - (_QWORD)v41) & 0xFFFFFFFFFFFFFFF8uLL);
          v72 = v42;
          v73 = v41;
          if ( (unsigned __int64)v42 >= 0x1000 )
          {
            std::_Adjust_manually_vector_aligned(&v73, (unsigned __int64 *)&v72);
            v42 = v72;
            v41 = v73;
          }
          operator delete(v41, (const struct std::nothrow_t *)v42);
          *(v39 - 2) = 0LL;
          *(v39 - 1) = 0LL;
          *v39 = 0LL;
        }
        v43 = (_QWORD **)*(v39 - 4);
        *v43[1] = 0LL;
        v44 = *v43;
        if ( v44 )
        {
          do
          {
            v45 = (_QWORD *)*v44;
            operator delete(v44, (const struct std::nothrow_t *)0x18);
            v44 = v45;
          }
          while ( v45 );
        }
        operator delete((void *)*(v39 - 4), (const struct std::nothrow_t *)0x18);
        v46 = (void *)*(v39 - 11);
        if ( v46 )
        {
          v47 = (void *)((*(v39 - 9) - (_QWORD)v46) & 0xFFFFFFFFFFFFFFF8uLL);
          v72 = v47;
          v73 = v46;
          if ( (unsigned __int64)v47 >= 0x1000 )
          {
            std::_Adjust_manually_vector_aligned(&v73, (unsigned __int64 *)&v72);
            v47 = v72;
            v46 = v73;
          }
          operator delete(v46, (const struct std::nothrow_t *)v47);
          *(v39 - 11) = 0LL;
          *(v39 - 10) = 0LL;
          *(v39 - 9) = 0LL;
        }
        v48 = (_QWORD **)*(v39 - 13);
        *v48[1] = 0LL;
        v49 = *v48;
        if ( v49 )
        {
          do
          {
            v50 = (_QWORD *)*v49;
            operator delete(v49, (const struct std::nothrow_t *)0x18);
            v49 = v50;
          }
          while ( v50 );
        }
        operator delete((void *)*(v39 - 13), (const struct std::nothrow_t *)0x18);
        v51 = *v37;
        if ( *v37 )
        {
          *v37 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v51 + 16LL))(v51);
        }
        v37 += 20;
        v39 += 20;
      }
      while ( v37 != v38 );
      v37 = *a1;
      v11 = v71;
    }
    v52 = 160 * (((char *)a1[2] - (char *)v37) / 160);
    v71 = v52;
    v72 = v37;
    if ( v52 >= 0x1000 )
    {
      std::_Adjust_manually_vector_aligned(&v72, &v71);
      v52 = v71;
      v37 = (__int64 *)v72;
    }
    operator delete(v37, (const struct std::nothrow_t *)v52);
    v14 = v66;
  }
  *a1 = v13;
  a1[1] = &v13[20 * v68];
  a1[2] = &v13[20 * v11];
  return v14;
}
