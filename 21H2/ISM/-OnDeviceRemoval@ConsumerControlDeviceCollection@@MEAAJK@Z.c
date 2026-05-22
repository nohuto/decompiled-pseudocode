/*
 * XREFs of ?OnDeviceRemoval@ConsumerControlDeviceCollection@@MEAAJK@Z @ 0x180099A60
 * Callers:
 *     <none>
 * Callees:
 *     ?_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z @ 0x18000D864 (-_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035760 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x18003C200 (memset_0.c)
 *     __security_check_cookie @ 0x18003C220 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18003C400 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?_End@?$_Hash@V?$_Umap_traits@KUtagPOINT@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUtagPOINT@@@std@@@3@$0A@@std@@@std@@IEAA?AV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUtagPOINT@@@std@@@std@@@std@@@2@_K@Z @ 0x180046088 (-_End@-$_Hash@V-$_Umap_traits@KUtagPOINT@@V-$_Uhash_compare@KU-$hash@K@std@@U-$equal_to@K@2@@std.c)
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 *     ?erase@?$list@U?$pair@$$CB_KUtagRECT@@@std@@V?$allocator@U?$pair@$$CB_KUtagRECT@@@std@@@2@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KUtagRECT@@@std@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KUtagRECT@@@std@@@std@@@std@@@2@@Z @ 0x1800993F4 (-erase@-$list@U-$pair@$$CB_KUtagRECT@@@std@@V-$allocator@U-$pair@$$CB_KUtagRECT@@@std@@@2@@std@@.c)
 *     ?CreateButtonInfo@ConsumerControlDeviceCollection@@AEAAJKKT_LARGE_INTEGER@@G_NPEAUInputInfo@@@Z @ 0x1800996C0 (-CreateButtonInfo@ConsumerControlDeviceCollection@@AEAAJKKT_LARGE_INTEGER@@G_NPEAUInputInfo@@@Z.c)
 *     ?OnDeviceRemoval@HIDDeviceCollection@@MEAAJK@Z @ 0x18009CD90 (-OnDeviceRemoval@HIDDeviceCollection@@MEAAJK@Z.c)
 */

__int64 __fastcall ConsumerControlDeviceCollection::OnDeviceRemoval(ConsumerControlDeviceCollection *this, DWORD a2)
{
  __int64 v4; // rcx
  __int64 appended; // rax
  _QWORD *v6; // r11
  __int64 v7; // r10
  __int64 i; // rbx
  __int64 v10; // r14
  unsigned int v11; // r12d
  DWORD TickCount; // edi
  int ButtonInfo; // edi
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rax
  const struct std::nothrow_t *v20; // rdx
  LARGE_INTEGER PerformanceCount; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v22; // [rsp+48h] [rbp-B8h] BYREF
  void *v23[2]; // [rsp+50h] [rbp-B0h]
  _BYTE v24[24]; // [rsp+60h] [rbp-A0h] BYREF
  int v25; // [rsp+78h] [rbp-88h]
  wil::details::in1diag3 *retaddr; // [rsp+898h] [rbp+798h]

  PerformanceCount.LowPart = a2;
  memset_0(v24, 0, 0x7F0uLL);
  v25 = 2032;
  appended = std::_Fnv1a_append_bytes(v4, (const unsigned __int8 *const)&PerformanceCount, 4uLL);
  v7 = v6[6] & appended;
  for ( i = *(_QWORD *)(v6[3] + 16 * v7);
        i != *std::_Hash<std::_Umap_traits<unsigned long,tagPOINT,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,tagPOINT>>,0>>::_End(
                (__int64)v6,
                &v22,
                v7);
        i = *(_QWORD *)i )
  {
    if ( *(_DWORD *)(i + 16) == a2 )
      goto LABEL_6;
  }
  i = v6[1];
LABEL_6:
  if ( i == *((_QWORD *)this + 346) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x7E,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\consumercontroldevicecollection.cpp",
      (const char *)0x80004005LL);
    return 2147500037LL;
  }
  v10 = 0LL;
  *(_OWORD *)v23 = *(_OWORD *)(i + 24);
  v11 = _mm_cvtsi128_si32(_mm_srli_si128(*(__m128i *)v23, 8));
  if ( v11 )
  {
    while ( 1 )
    {
      TickCount = GetTickCount();
      QueryPerformanceCounter(&PerformanceCount);
      ButtonInfo = ConsumerControlDeviceCollection::CreateButtonInfo(
                     (ConsumerControlDeviceCollection *)*((unsigned __int16 *)v23[0] + v10),
                     a2,
                     TickCount,
                     PerformanceCount,
                     *((_WORD *)v23[0] + v10),
                     0,
                     (struct InputInfo *)v24);
      if ( ButtonInfo < 0 )
        break;
      ButtonInfo = (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(**((_QWORD **)this + 2) + 24LL))(
                     *((_QWORD *)this + 2),
                     v24);
      if ( ButtonInfo < 0 )
      {
        v15 = 161LL;
        goto LABEL_16;
      }
      v10 = (unsigned int)(v10 + 1);
      if ( (unsigned int)v10 >= v11 )
        goto LABEL_12;
    }
    v15 = 155LL;
    goto LABEL_16;
  }
LABEL_12:
  ButtonInfo = HIDDeviceCollection::OnDeviceRemoval(this, a2);
  if ( ButtonInfo < 0 )
  {
    v15 = 165LL;
LABEL_16:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v15,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\consumercontroldevicecollection.cpp",
      (const char *)(unsigned int)ButtonInfo);
    return (unsigned int)ButtonInfo;
  }
  v16 = std::_Fnv1a_append_bytes(v14, (const unsigned __int8 *const)(i + 16), 4uLL);
  v17 = *((_QWORD *)this + 348);
  v18 = 2 * (*((_QWORD *)this + 351) & v16);
  if ( *(_QWORD *)(v17 + 16 * (*((_QWORD *)this + 351) & v16) + 8) == i )
  {
    if ( *(_QWORD *)(v17 + 16 * (*((_QWORD *)this + 351) & v16)) == i )
    {
      *(_QWORD *)(v17 + 16 * (*((_QWORD *)this + 351) & v16)) = *((_QWORD *)this + 346);
      v17 = *((_QWORD *)this + 348);
      v19 = *((_QWORD *)this + 346);
    }
    else
    {
      v19 = *(_QWORD *)(i + 8);
    }
    *(_QWORD *)(v17 + 8 * v18 + 8) = v19;
  }
  else if ( *(_QWORD *)(v17 + 16 * (*((_QWORD *)this + 351) & v16)) == i )
  {
    *(_QWORD *)(v17 + 16 * (*((_QWORD *)this + 351) & v16)) = *(_QWORD *)i;
  }
  std::list<std::pair<unsigned __int64 const,tagRECT>>::erase((__int64)this + 2768, &v22, (__int64 *)i);
  operator delete(v23[0], v20);
  return 0LL;
}
