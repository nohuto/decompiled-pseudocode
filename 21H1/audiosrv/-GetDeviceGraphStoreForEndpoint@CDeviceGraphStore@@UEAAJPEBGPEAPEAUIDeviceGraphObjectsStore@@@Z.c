/*
 * XREFs of ?GetDeviceGraphStoreForEndpoint@CDeviceGraphStore@@UEAAJPEBGPEAPEAUIDeviceGraphObjectsStore@@@Z @ 0x18000B950
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Insert_hint@AEAU?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@@std@@PEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@@std@@@2@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@@std@@@std@@@std@@@1@AEAU?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@@1@PEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@@std@@PEAX@1@@Z @ 0x180008DE4 (--$_Insert_hint@AEAU-$pair@$$CBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180009324 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$MakeAndInitialize@VCDeviceGraphObjectsStore@@UIDeviceGraphObjectsStore@@AEAPEBG@Details@WRL@Microsoft@@YAJPEAPEAUIDeviceGraphObjectsStore@@AEAPEBG@Z @ 0x18002A4C0 (--$MakeAndInitialize@VCDeviceGraphObjectsStore@@UIDeviceGraphObjectsStore@@AEAPEBG@Details@WRL@M.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C604 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x180056710 (--2@YAPEAX_K@Z.c)
 *     __security_check_cookie @ 0x18006A480 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18006AB58 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     memcpy_0 @ 0x180074B4F (memcpy_0.c)
 *     memmove_0 @ 0x180074B5B (memmove_0.c)
 *     _guard_dispatch_icall_nop @ 0x180074B80 (_guard_dispatch_icall_nop.c)
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x1800BBC30 (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CDeviceGraphStore::GetDeviceGraphStoreForEndpoint(
        CDeviceGraphStore *this,
        const unsigned __int16 *a2,
        struct IDeviceGraphObjectsStore **a3)
{
  struct _RTL_CRITICAL_SECTION *v5; // r12
  unsigned __int64 v6; // rbx
  __int64 v7; // rsi
  unsigned __int64 v8; // r14
  HANDLE ProcessHeap; // rax
  _QWORD *v10; // r14
  size_t v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // r8
  char *v14; // r13
  char *v15; // r15
  char *v16; // rbx
  char *v17; // r10
  unsigned __int64 v18; // rsi
  char *v19; // rax
  char *v20; // r9
  unsigned __int64 v21; // r11
  __int64 v22; // rcx
  signed __int64 v23; // r9
  _WORD *v24; // rax
  __int128 *v25; // r9
  unsigned __int64 v26; // r10
  __int64 v27; // rcx
  const struct std::nothrow_t *v28; // rdx
  struct IDeviceGraphObjectsStore *v29; // rcx
  _QWORD *v31; // rax
  int v32; // eax
  unsigned int v33; // edi
  size_t v34; // rbx
  unsigned __int64 v35; // rcx
  void *v36; // rax
  int v37; // [rsp+20h] [rbp-98h]
  unsigned __int64 v38; // [rsp+30h] [rbp-88h] BYREF
  void *v39; // [rsp+38h] [rbp-80h] BYREF
  const unsigned __int16 *v40; // [rsp+40h] [rbp-78h] BYREF
  struct IDeviceGraphObjectsStore **v41; // [rsp+48h] [rbp-70h]
  struct _RTL_CRITICAL_SECTION *v42; // [rsp+50h] [rbp-68h]
  __int128 v43; // [rsp+58h] [rbp-60h] BYREF
  __int128 v44; // [rsp+68h] [rbp-50h]
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+0h]

  v41 = a3;
  v40 = a2;
  *a3 = 0LL;
  v5 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 16);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
  v42 = v5;
  *(_QWORD *)&v44 = 0LL;
  *((_QWORD *)&v44 + 1) = 7LL;
  LOWORD(v43) = 0;
  v6 = -1LL;
  do
    ++v6;
  while ( a2[v6] );
  if ( v6 <= 7 )
  {
    *(_QWORD *)&v44 = v6;
    v34 = 2 * v6;
    memmove_0(&v43, a2, v34);
    *(_WORD *)((char *)&v43 + v34) = 0;
    v10 = (_QWORD *)v43;
    goto LABEL_13;
  }
  v7 = 0x7FFFFFFFFFFFFFFELL;
  if ( v6 > 0x7FFFFFFFFFFFFFFELL )
    std::_Xlength_error("string too long");
  if ( (v6 | 7) <= 0x7FFFFFFFFFFFFFFELL )
  {
    if ( (v6 | 7) < 0xA )
      v7 = 10LL;
    else
      v7 = v6 | 7;
  }
  v8 = 2 * (v7 + 1);
  if ( (unsigned __int64)(v7 + 1) > 0x7FFFFFFFFFFFFFFFLL )
  {
    v8 = -1LL;
    goto LABEL_56;
  }
  if ( v8 >= 0x1000 )
  {
LABEL_56:
    v35 = v8 + 39;
    if ( v8 + 39 < v8 )
      v35 = -1LL;
    v36 = operator new(v35);
    if ( v36 )
    {
      v10 = (_QWORD *)(((unsigned __int64)v36 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
      *(v10 - 1) = v36;
      goto LABEL_12;
    }
    _o__invalid_parameter_noinfo_noreturn();
    __debugbreak();
LABEL_61:
    v10 = 0LL;
    goto LABEL_12;
  }
  if ( !v8 )
    goto LABEL_61;
  ProcessHeap = GetProcessHeap();
  v10 = HeapAlloc(ProcessHeap, 0, 2 * (v7 + 1));
LABEL_12:
  *(_QWORD *)&v44 = v6;
  *((_QWORD *)&v44 + 1) = v7;
  v11 = 2 * v6;
  memcpy_0(v10, a2, v11);
  *(_WORD *)((char *)v10 + v11) = 0;
  *(_QWORD *)&v43 = v10;
LABEL_13:
  v14 = (char *)this + 56;
  v15 = (char *)*((_QWORD *)this + 7);
  v16 = v15;
  v17 = (char *)*((_QWORD *)v15 + 1);
  v18 = *((_QWORD *)&v44 + 1);
  while ( !v17[25] )
  {
    v19 = (char *)&v43;
    if ( *((_QWORD *)&v44 + 1) >= 8uLL )
      v19 = (char *)v10;
    v20 = v17 + 32;
    if ( *((_QWORD *)v17 + 7) >= 8uLL )
      v20 = (char *)*((_QWORD *)v17 + 4);
    v21 = *((_QWORD *)v17 + 6);
    if ( (unsigned __int64)v44 < v21 )
      v22 = v44;
    else
      v22 = *((_QWORD *)v17 + 6);
    if ( v22 )
    {
      v23 = v20 - v19;
      while ( 1 )
      {
        v12 = *(unsigned __int16 *)&v19[v23];
        if ( (_WORD)v12 != *(_WORD *)v19 )
          break;
        v19 += 2;
        if ( !--v22 )
          goto LABEL_24;
      }
      if ( (unsigned __int16)v12 < *(_WORD *)v19 )
      {
LABEL_64:
        v17 = (char *)*((_QWORD *)v17 + 2);
        continue;
      }
    }
    else
    {
LABEL_24:
      if ( v21 < (unsigned __int64)v44 )
        goto LABEL_64;
    }
    v16 = v17;
    v17 = *(char **)v17;
  }
  if ( v16 == v15 )
    goto LABEL_48;
  v24 = v16 + 32;
  if ( *((_QWORD *)v16 + 7) >= 8uLL )
    v24 = (_WORD *)*((_QWORD *)v16 + 4);
  v25 = &v43;
  if ( *((_QWORD *)&v44 + 1) >= 8uLL )
    v25 = (__int128 *)v10;
  v26 = *((_QWORD *)v16 + 6);
  if ( v26 < (unsigned __int64)v44 )
    v27 = *((_QWORD *)v16 + 6);
  else
    v27 = v44;
  if ( !v27 )
  {
LABEL_38:
    if ( (unsigned __int64)v44 >= v26 )
      goto LABEL_39;
    goto LABEL_48;
  }
  v25 = (__int128 *)((char *)v25 - (__int64)v24);
  while ( 1 )
  {
    v12 = *(unsigned __int16 *)((char *)v25 + (_QWORD)v24);
    if ( (_WORD)v12 != *v24 )
      break;
    ++v24;
    if ( !--v27 )
      goto LABEL_38;
  }
  if ( (unsigned __int16)v12 < *v24 )
  {
LABEL_48:
    v31 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x48uLL);
    v31[6] = 0LL;
    v31[7] = 0LL;
    *((_OWORD *)v31 + 2) = v43;
    *((_OWORD *)v31 + 3) = v44;
    *(_QWORD *)&v44 = 0LL;
    *((_QWORD *)&v44 + 1) = 7LL;
    LOWORD(v43) = 0;
    v31[8] = 0LL;
    *v31 = v15;
    v31[1] = v15;
    v31[2] = v15;
    *((_WORD *)v31 + 12) = 0;
    std::_Tree<std::_Tmap_traits<std::wstring,Microsoft::WRL::ComPtr<IDeviceGraphObjectsStore>,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,Microsoft::WRL::ComPtr<IDeviceGraphObjectsStore>>>,0>>::_Insert_hint<std::pair<std::wstring const,Microsoft::WRL::ComPtr<IDeviceGraphObjectsStore>> &,std::_Tree_node<std::pair<std::wstring const,Microsoft::WRL::ComPtr<IDeviceGraphObjectsStore>>,void *> *>(
      (__int64)v14,
      &v39,
      v16,
      (char *)v31 + 32,
      (__int64)v31);
    v16 = (char *)v39;
    v18 = *((_QWORD *)&v44 + 1);
    v10 = (_QWORD *)v43;
  }
LABEL_39:
  if ( v18 >= 8 )
  {
    v28 = (const struct std::nothrow_t *)(2 * v18 + 2);
    v38 = (unsigned __int64)v28;
    v39 = v10;
    if ( (unsigned __int64)v28 >= 0x1000 )
    {
      std::_Adjust_manually_vector_aligned(&v39, &v38);
      v28 = (const struct std::nothrow_t *)v38;
      v10 = v39;
    }
    operator delete(v10, v28);
  }
  *(_QWORD *)&v44 = 0LL;
  *((_QWORD *)&v44 + 1) = 7LL;
  LOWORD(v43) = 0;
  v29 = (struct IDeviceGraphObjectsStore *)*((_QWORD *)v16 + 8);
  if ( v29 )
  {
LABEL_44:
    (*(void (__fastcall **)(struct IDeviceGraphObjectsStore *, __int64, __int64, __int128 *))(*(_QWORD *)v29 + 8LL))(
      v29,
      v12,
      v13,
      v25);
    v29 = (struct IDeviceGraphObjectsStore *)*((_QWORD *)v16 + 8);
LABEL_45:
    *v41 = v29;
    if ( v5 )
      LeaveCriticalSection(v5);
    return 0LL;
  }
  v32 = Microsoft::WRL::Details::MakeAndInitialize<CDeviceGraphObjectsStore,IDeviceGraphObjectsStore,unsigned short const * &>(
          v16 + 64,
          &v40,
          v13,
          v25);
  v33 = v32;
  if ( v32 >= 0 )
  {
    v29 = (struct IDeviceGraphObjectsStore *)*((_QWORD *)v16 + 8);
    if ( !v29 )
      goto LABEL_45;
    goto LABEL_44;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x27F,
    (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphstore.cpp",
    (const char *)(unsigned int)v32,
    v37);
  if ( v5 )
    LeaveCriticalSection(v5);
  return v33;
}
