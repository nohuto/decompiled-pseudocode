/*
 * XREFs of ?OnDeviceRemoval@MobileButtonDeviceCollection@@MEAAJK@Z @ 0x180097F80
 * Callers:
 *     <none>
 * Callees:
 *     ?_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z @ 0x18000DAF4 (-_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800357E0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x18003C540 (memset_0.c)
 *     __security_check_cookie @ 0x18003C560 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18003C740 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?_End@?$_Hash@V?$_Umap_traits@KUtagPOINT@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUtagPOINT@@@std@@@3@$0A@@std@@@std@@IEAA?AV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUtagPOINT@@@std@@@std@@@std@@@2@_K@Z @ 0x1800451F8 (-_End@-$_Hash@V-$_Umap_traits@KUtagPOINT@@V-$_Uhash_compare@KU-$hash@K@std@@U-$equal_to@K@2@@std.c)
 *     _guard_dispatch_icall_nop @ 0x18004A660 (_guard_dispatch_icall_nop.c)
 *     ??0?$extent_type@$0?0@details@gsl@@QEAA@_J@Z @ 0x1800974F8 (--0-$extent_type@$0-0@details@gsl@@QEAA@_J@Z.c)
 *     ?CreateButtonInfo@MobileButtonDeviceCollection@@AEAAJKKT_LARGE_INTEGER@@G_NPEAUInputInfo@@@Z @ 0x180097990 (-CreateButtonInfo@MobileButtonDeviceCollection@@AEAAJKKT_LARGE_INTEGER@@G_NPEAUInputInfo@@@Z.c)
 *     ?erase@?$list@U?$pair@$$CB_KUtagRECT@@@std@@V?$allocator@U?$pair@$$CB_KUtagRECT@@@std@@@2@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KUtagRECT@@@std@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KUtagRECT@@@std@@@std@@@std@@@2@@Z @ 0x180098F94 (-erase@-$list@U-$pair@$$CB_KUtagRECT@@@std@@V-$allocator@U-$pair@$$CB_KUtagRECT@@@std@@@2@@std@@.c)
 *     ?OnDeviceRemoval@HIDDeviceCollection@@MEAAJK@Z @ 0x18009C930 (-OnDeviceRemoval@HIDDeviceCollection@@MEAAJK@Z.c)
 */

__int64 __fastcall MobileButtonDeviceCollection::OnDeviceRemoval(__int64 **this, DWORD a2)
{
  unsigned int v2; // edi
  __int64 v4; // rcx
  __int64 appended; // rax
  _QWORD *v6; // r11
  __int64 v7; // r10
  __int64 *i; // rbx
  unsigned __int16 *v10; // rsi
  unsigned __int16 *v11; // r12
  DWORD TickCount; // edi
  int ButtonInfo; // edi
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 *v17; // rcx
  __int64 v18; // rdx
  __int64 *v19; // rax
  const struct std::nothrow_t *v20; // rdx
  LARGE_INTEGER PerformanceCount; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v23[2]; // [rsp+50h] [rbp-B0h] BYREF
  void *v24[2]; // [rsp+60h] [rbp-A0h]
  _BYTE v25[24]; // [rsp+70h] [rbp-90h] BYREF
  int v26; // [rsp+88h] [rbp-78h]
  wil::details::in1diag3 *retaddr; // [rsp+898h] [rbp+798h]

  v2 = a2;
  PerformanceCount.LowPart = a2;
  memset_0(v25, 0, 0x7F0uLL);
  v26 = 2032;
  appended = std::_Fnv1a_append_bytes(v4, (const unsigned __int8 *const)&PerformanceCount, 4uLL);
  v7 = v6[6] & appended;
  for ( i = *(__int64 **)(v6[3] + 16 * v7);
        i != (__int64 *)*std::_Hash<std::_Umap_traits<unsigned long,tagPOINT,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,tagPOINT>>,0>>::_End(
                           (__int64)v6,
                           v23,
                           v7);
        i = (__int64 *)*i )
  {
    if ( *((_DWORD *)i + 4) == v2 )
      goto LABEL_6;
  }
  i = (__int64 *)v6[1];
LABEL_6:
  if ( i == this[346] )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x8B,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\mobilebuttondevicecollection.cpp",
      (const char *)0x80004005LL);
    return 2147500037LL;
  }
  *(_OWORD *)v24 = *(_OWORD *)(i + 3);
  gsl::details::extent_type<-1>::extent_type<-1>(
    v23,
    (unsigned int)_mm_cvtsi128_si32(_mm_srli_si128(*(__m128i *)v24, 8)));
  if ( v23[0] < 0 || !v24[0] && v23[0] )
  {
    _o_terminate(0LL);
    __debugbreak();
    JUMPOUT(0x180098218LL);
  }
  v10 = (unsigned __int16 *)v24[0];
  v11 = (unsigned __int16 *)((char *)v24[0] + 2 * v23[0]);
  if ( v24[0] != v11 )
  {
    while ( 1 )
    {
      if ( *v10 )
      {
        TickCount = GetTickCount();
        QueryPerformanceCounter(&PerformanceCount);
        ButtonInfo = MobileButtonDeviceCollection::CreateButtonInfo(
                       (MobileButtonDeviceCollection *)*v10,
                       a2,
                       TickCount,
                       PerformanceCount,
                       *v10,
                       0,
                       (struct InputInfo *)v25);
        if ( ButtonInfo < 0 )
        {
          v15 = 173LL;
LABEL_21:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v15,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\mobilebuttondevicecollection.cpp",
            (const char *)(unsigned int)ButtonInfo);
          return (unsigned int)ButtonInfo;
        }
        ButtonInfo = (*(__int64 (__fastcall **)(__int64 *, _BYTE *))(*this[2] + 24))(this[2], v25);
        if ( ButtonInfo < 0 )
        {
          v15 = 179LL;
          goto LABEL_21;
        }
      }
      if ( ++v10 == v11 )
      {
        v2 = a2;
        break;
      }
    }
  }
  ButtonInfo = HIDDeviceCollection::OnDeviceRemoval((HIDDeviceCollection *)this, v2);
  if ( ButtonInfo < 0 )
  {
    v15 = 183LL;
    goto LABEL_21;
  }
  v16 = std::_Fnv1a_append_bytes(v14, (const unsigned __int8 *const)i + 16, 4uLL);
  v17 = this[348];
  v18 = 2 * ((unsigned __int64)this[351] & v16);
  if ( (__int64 *)v17[2 * ((unsigned __int64)this[351] & v16) + 1] == i )
  {
    if ( (__int64 *)v17[2 * ((unsigned __int64)this[351] & v16)] == i )
    {
      v17[2 * ((unsigned __int64)this[351] & v16)] = (__int64)this[346];
      v17 = this[348];
      v19 = this[346];
    }
    else
    {
      v19 = (__int64 *)i[1];
    }
    v17[v18 + 1] = (__int64)v19;
  }
  else if ( (__int64 *)v17[2 * ((unsigned __int64)this[351] & v16)] == i )
  {
    v17[2 * ((unsigned __int64)this[351] & v16)] = *i;
  }
  std::list<std::pair<unsigned __int64 const,tagRECT>>::erase(this + 346, v23, i);
  operator delete(v24[0], v20);
  return 0LL;
}
