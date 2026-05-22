/*
 * XREFs of ?OnInvalidateInput@MobileButtonDeviceCollection@@UEAAJPEAX@Z @ 0x1800986E0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z @ 0x18000DAF4 (-_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z.c)
 *     ?FindDevice@RIMDeviceCollection@@AEAAJKPEAXPEAPEAVRIMDevice@@PEAK@Z @ 0x180033CE0 (-FindDevice@RIMDeviceCollection@@AEAAJKPEAXPEAPEAVRIMDevice@@PEAK@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035770 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x18003C4C0 (memset_0.c)
 *     __security_check_cookie @ 0x18003C4E0 (__security_check_cookie.c)
 *     ?_End@?$_Hash@V?$_Umap_traits@KUtagPOINT@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUtagPOINT@@@std@@@3@$0A@@std@@@std@@IEAA?AV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUtagPOINT@@@std@@@std@@@std@@@2@_K@Z @ 0x180045248 (-_End@-$_Hash@V-$_Umap_traits@KUtagPOINT@@V-$_Uhash_compare@KU-$hash@K@std@@U-$equal_to@K@2@@std.c)
 *     ?equal_range@?$_Hash@V?$_Umap_traits@KUResultInfo@DragNDropProcessor@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUResultInfo@DragNDropProcessor@@@std@@@4@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUResultInfo@DragNDropProcessor@@@std@@@std@@@std@@@std@@V12@@2@AEBK@Z @ 0x180045540 (-equal_range@-$_Hash@V-$_Umap_traits@KUResultInfo@DragNDropProcessor@@V-$_Uhash_compare@KU-$hash.c)
 *     memcpy_0 @ 0x18004A68B (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x18004A6B0 (_guard_dispatch_icall_nop.c)
 *     ?_Tidy@?$vector@GV?$allocator@G@std@@@std@@AEAAXXZ @ 0x1800967E0 (-_Tidy@-$vector@GV-$allocator@G@std@@@std@@AEAAXXZ.c)
 *     ??$_Emplace_reallocate@AEBG@?$vector@GV?$allocator@G@std@@@std@@QEAAPEAGQEAGAEBG@Z @ 0x180096BD0 (--$_Emplace_reallocate@AEBG@-$vector@GV-$allocator@G@std@@@std@@QEAAPEAGQEAGAEBG@Z.c)
 *     ??0?$extent_type@$0?0@details@gsl@@QEAA@_J@Z @ 0x180097598 (--0-$extent_type@$0-0@details@gsl@@QEAA@_J@Z.c)
 *     ?CreateButtonInfo@MobileButtonDeviceCollection@@AEAAJKKT_LARGE_INTEGER@@G_NPEAUInputInfo@@@Z @ 0x180097A30 (-CreateButtonInfo@MobileButtonDeviceCollection@@AEAAJKKT_LARGE_INTEGER@@G_NPEAUInputInfo@@@Z.c)
 *     ?HIDUsageToButtonMapping@MobileButtonDeviceCollection@@AEAAJGPEAK@Z @ 0x180097B5C (-HIDUsageToButtonMapping@MobileButtonDeviceCollection@@AEAAJGPEAK@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall MobileButtonDeviceCollection::OnInvalidateInput(MobileButtonDeviceCollection *this, void *a2)
{
  int v3; // edx
  int Device; // ebx
  __int64 v5; // rdx
  int v7; // edi
  __int64 v8; // rcx
  __int64 appended; // rax
  __int64 v10; // r11
  __int64 v11; // rbx
  _QWORD *v12; // rax
  __int64 v13; // r10
  _QWORD *v14; // rbx
  _BYTE *v15; // r13
  MobileButtonDeviceCollection *v16; // rcx
  void *v17; // r14
  unsigned __int16 *v18; // rsi
  unsigned __int16 *v19; // r12
  _BYTE *v20; // rdi
  _QWORD *v21; // rax
  DWORD TickCount; // ebx
  int ButtonInfo; // eax
  unsigned __int64 v24; // r9
  __int64 v25; // rdx
  unsigned __int8 v26[8]; // [rsp+48h] [rbp-C0h] BYREF
  struct RIMDevice *v27; // [rsp+50h] [rbp-B8h] BYREF
  int Src; // [rsp+58h] [rbp-B0h] BYREF
  void *Src_8[2]; // [rsp+60h] [rbp-A8h] BYREF
  _BYTE *v30; // [rsp+70h] [rbp-98h]
  __int64 v31; // [rsp+78h] [rbp-90h] BYREF
  __int64 v32[2]; // [rsp+80h] [rbp-88h] BYREF
  LARGE_INTEGER PerformanceCount; // [rsp+90h] [rbp-78h] BYREF
  void *v34[2]; // [rsp+98h] [rbp-70h]
  _BYTE v35[24]; // [rsp+A8h] [rbp-60h] BYREF
  int v36; // [rsp+C0h] [rbp-48h]
  wil::details::in1diag3 *retaddr; // [rsp+8D0h] [rbp+7C8h]

  v27 = 0LL;
  Device = RIMDeviceCollection::FindDevice(this, 0, a2, &v27, 0LL);
  if ( Device < 0 )
  {
    v5 = 354LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\mobilebuttondevicecollection.cpp",
      (const char *)(unsigned int)Device);
    return (unsigned int)Device;
  }
  v7 = **((_DWORD **)v27 + 4);
  LODWORD(v27) = v7;
  *(_DWORD *)v26 = v7;
  memset_0(v35, v3, 0x7F0uLL);
  v36 = 2032;
  appended = std::_Fnv1a_append_bytes(v8, v26, 4uLL);
  v11 = appended & *(_QWORD *)(v10 + 48);
  while ( 1 )
  {
    v12 = std::_Hash<std::_Umap_traits<unsigned long,tagPOINT,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,tagPOINT>>,0>>::_End(
            v10,
            &v31,
            v11);
    if ( v13 == *v12 )
      break;
    if ( *(_DWORD *)(v13 + 16) == v7 )
      goto LABEL_10;
  }
  v13 = *(_QWORD *)(v10 + 8);
LABEL_10:
  if ( v13 == *((_QWORD *)this + 346) )
  {
    Device = -2147467259;
    v5 = 367LL;
    goto LABEL_3;
  }
  *(_OWORD *)v34 = *(_OWORD *)(v13 + 24);
  v14 = (_QWORD *)((char *)this + 2824);
  *(_OWORD *)Src_8 = 0LL;
  v15 = 0LL;
  v30 = 0LL;
  v31 = (unsigned int)_mm_cvtsi128_si32(_mm_srli_si128(*(__m128i *)v34, 8));
  gsl::details::extent_type<-1>::extent_type<-1>(v32, (unsigned int)v31);
  if ( v32[0] < 0 || (v17 = v34[0]) == 0LL && v32[0] )
  {
    _o_terminate(v16);
    __debugbreak();
    return MobileButtonDeviceCollection::OnInvalidateInput_::_1_::dtor_0();
  }
  v18 = (unsigned __int16 *)v34[0];
  v19 = (unsigned __int16 *)((char *)v34[0] + 2 * v32[0]);
  v20 = Src_8[1];
  if ( v34[0] == v19 )
  {
LABEL_25:
    memset_0(v17, 0, 2 * v31);
    memcpy_0(v17, Src_8[0], 2 * ((v20 - (char *)Src_8[0]) >> 1));
    Device = 0;
    goto LABEL_26;
  }
  while ( 1 )
  {
    if ( !*v18 || (int)MobileButtonDeviceCollection::HIDUsageToButtonMapping(v16, *v18, (unsigned int *)v26) < 0 )
      goto LABEL_24;
    Src = *(_DWORD *)v26;
    std::_Hash<std::_Umap_traits<unsigned long,DragNDropProcessor::ResultInfo,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,DragNDropProcessor::ResultInfo>>,0>>::equal_range(
      v14,
      v32,
      (const unsigned __int8 *)&Src);
    v21 = (_QWORD *)v32[0];
    v16 = 0LL;
    while ( v21 != (_QWORD *)v32[1] )
    {
      v16 = (MobileButtonDeviceCollection *)((char *)v16 + 1);
      v21 = (_QWORD *)*v21;
    }
    if ( v16 )
    {
      if ( v15 == v20 )
      {
        std::vector<unsigned short>::_Emplace_reallocate<unsigned short const &>((const void **)Src_8, v20, v18);
        v15 = v30;
        v20 = Src_8[1];
      }
      else
      {
        *(_WORD *)v20 = *v18;
        v20 += 2;
        Src_8[1] = v20;
      }
      goto LABEL_24;
    }
    TickCount = GetTickCount();
    QueryPerformanceCounter(&PerformanceCount);
    ButtonInfo = MobileButtonDeviceCollection::CreateButtonInfo(
                   (MobileButtonDeviceCollection *)*v18,
                   (int)v27,
                   TickCount,
                   PerformanceCount,
                   *v18,
                   0,
                   (struct InputInfo *)v35);
    Device = ButtonInfo;
    if ( ButtonInfo < 0 )
      break;
    Device = (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(**((_QWORD **)this + 2) + 24LL))(*((_QWORD *)this + 2), v35);
    if ( Device < 0 )
    {
      v24 = (unsigned int)Device;
      v25 = 422LL;
      goto LABEL_33;
    }
    v14 = (_QWORD *)((char *)this + 2824);
LABEL_24:
    if ( ++v18 == v19 )
      goto LABEL_25;
  }
  v24 = (unsigned int)ButtonInfo;
  v25 = 417LL;
LABEL_33:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v25,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\mobilebuttondevicecollection.cpp",
    (const char *)v24);
LABEL_26:
  std::vector<unsigned short>::_Tidy((__int64)Src_8);
  return (unsigned int)Device;
}
