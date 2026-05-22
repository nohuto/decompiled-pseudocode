/*
 * XREFs of ?PrepareSpatialInteractionDeviceParsing@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@1@@Z @ 0x1800C9CC0
 * Callers:
 *     ?InitializeValueCaps@Internal@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@2@@Z @ 0x1800CC3D0 (-InitializeValueCaps@Internal@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@2@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035710 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18003B288 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x18003C480 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18003C660 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18003D2B0 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??$_Emplace_reallocate@AEBUHotKeyRegistrationData@@@?$vector@UHotKeyRegistrationData@@V?$allocator@UHotKeyRegistrationData@@@std@@@std@@QEAAPEAUHotKeyRegistrationData@@QEAU2@AEBU2@@Z @ 0x1800BB244 (--$_Emplace_reallocate@AEBUHotKeyRegistrationData@@@-$vector@UHotKeyRegistrationData@@V-$allocat.c)
 *     SpatialInteractionDevices::GetUsageDesc_SpatialInteractionDevices::UsageMapping_SpatialInteractionDevices::UsageDesc_SpatialInteractionDevices::BitUsage_enum_SpatialInteractionDevices::ButtonFlags____1___ @ 0x1800C73FC (SpatialInteractionDevices--GetUsageDesc_SpatialInteractionDevices--UsageMapping_SpatialInteracti.c)
 *     SpatialInteractionDevices::GetUsageDesc_SpatialInteractionDevices::UsageMapping_SpatialInteractionDevices::UsageDesc_SpatialInteractionDevices::ValueUsage__1___ @ 0x1800C74A8 (SpatialInteractionDevices--GetUsageDesc_SpatialInteractionDevices--UsageMapping_Spa_ea_1800C74A8.c)
 *     SpatialInteractionDevices::GetUsageDesc_SpatialInteractionDevices::UsageMapping_SpatialInteractionDevices::UsageDesc_SpatialInteractionDevices::ValueUsage__3___ @ 0x1800C7544 (SpatialInteractionDevices--GetUsageDesc_SpatialInteractionDevices--UsageMapping_Spa_ea_1800C7544.c)
 *     SpatialInteractionDevices::GetUsageDesc_SpatialInteractionDevices::UsageMapping_SpatialInteractionDevices::UsageDesc_SpatialInteractionDevices::ValueUsage__4___ @ 0x1800C75F0 (SpatialInteractionDevices--GetUsageDesc_SpatialInteractionDevices--UsageMapping_Spa_ea_1800C75F0.c)
 *     SpatialInteractionDevices::HasAllCaps_1_ @ 0x1800C7980 (SpatialInteractionDevices--HasAllCaps_1_.c)
 *     SpatialInteractionDevices::HasAllCaps_2_ @ 0x1800C79A0 (SpatialInteractionDevices--HasAllCaps_2_.c)
 *     SpatialInteractionDevices::HasAllCaps_4_ @ 0x1800C79C0 (SpatialInteractionDevices--HasAllCaps_4_.c)
 *     SpatialInteractionDevices::StoreCapsIfMatches_1_ @ 0x1800C80E0 (SpatialInteractionDevices--StoreCapsIfMatches_1_.c)
 *     SpatialInteractionDevices::StoreCapsIfMatches_2_ @ 0x1800C8184 (SpatialInteractionDevices--StoreCapsIfMatches_2_.c)
 *     SpatialInteractionDevices::StoreCapsIfMatches_3_ @ 0x1800C8228 (SpatialInteractionDevices--StoreCapsIfMatches_3_.c)
 *     SpatialInteractionDevices::StoreCapsIfMatches_4_ @ 0x1800C82CC (SpatialInteractionDevices--StoreCapsIfMatches_4_.c)
 *     std::_Sort_unchecked_SpatialInteractionDevices::SpatialInputButtonCaps____lambda_7cb88ca86370cec64ac2ea824bd2a3de___ @ 0x1800C8FB8 (std--_Sort_unchecked_SpatialInteractionDevices--SpatialInputButtonCaps____lambda_7cb88ca86370cec.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKUContactState@MagnifierRecognizer@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x1800C9278 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBKUContactStat.c)
 *     SpatialInteractionDevices::GetReportCaps @ 0x1800C98C0 (SpatialInteractionDevices--GetReportCaps.c)
 *     SpatialInteractionDevices::IsValidButtonUsage @ 0x1800C99AC (SpatialInteractionDevices--IsValidButtonUsage.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall SpatialInteractionDevices::PrepareSpatialInteractionDeviceParsing(
        SpatialInteractionDevices *this,
        struct SpatialInteractionDevices::HID_HANDLE *a2)
{
  _WORD *v3; // rdx
  _WORD *v4; // rdx
  _WORD *v5; // rdx
  _WORD *v6; // rdx
  __int128 *v7; // rax
  __int64 v8; // rdx
  unsigned int v9; // edi
  __int64 v10; // r12
  __int64 v11; // r14
  __int64 ReportCaps; // r15
  unsigned int i; // ebx
  __int64 v14; // rdx
  int v15; // eax
  __int64 v16; // rdx
  unsigned int j; // r14d
  __int64 v18; // rbx
  __int64 v19; // rdi
  int v20; // eax
  unsigned int v21; // r15d
  const char *v22; // r9
  __int64 result; // rax
  int v24; // eax
  unsigned int v25; // r15d
  int v26; // eax
  unsigned int v27; // r15d
  int v28; // eax
  unsigned int v29; // r15d
  int v30; // eax
  unsigned int v31; // r15d
  int v32; // eax
  unsigned int v33; // r15d
  int v34; // eax
  unsigned int v35; // ebx
  char v36; // r15
  int v37; // r12d
  __int64 *v38; // rbx
  __int64 v39; // rax
  volatile signed __int32 *v40; // r14
  __int64 v41; // rdi
  char v42; // r8
  unsigned __int64 v43; // rax
  char v44; // al
  char v45; // al
  ULONG v46; // eax
  size_t v47; // rax
  unsigned __int64 v48; // kr10_8
  void *v49; // rax
  const struct std::nothrow_t *v50; // rdx
  void *v51; // rcx
  int v52; // [rsp+20h] [rbp-F8h] BYREF
  __int128 v53; // [rsp+28h] [rbp-F0h] BYREF
  __int128 v54; // [rsp+38h] [rbp-E0h] BYREF
  __int128 v55; // [rsp+48h] [rbp-D0h] BYREF
  __int128 v56; // [rsp+58h] [rbp-C0h] BYREF
  __int128 v57; // [rsp+68h] [rbp-B0h] BYREF
  __int64 v58; // [rsp+78h] [rbp-A0h]
  volatile signed __int32 *v59; // [rsp+80h] [rbp-98h]
  __int128 v60; // [rsp+88h] [rbp-90h] BYREF
  __int128 v61; // [rsp+98h] [rbp-80h] BYREF
  __int128 v62; // [rsp+A8h] [rbp-70h] BYREF
  __int128 v63; // [rsp+B8h] [rbp-60h] BYREF
  __int128 v64; // [rsp+C8h] [rbp-50h] BYREF
  __int64 v65; // [rsp+D8h] [rbp-40h] BYREF
  int v66; // [rsp+E0h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+118h] [rbp+0h]

  v53 = *SpatialInteractionDevices::GetUsageDesc_SpatialInteractionDevices::UsageMapping_SpatialInteractionDevices::UsageDesc_SpatialInteractionDevices::BitUsage_enum_SpatialInteractionDevices::ButtonFlags____1___(
           &v60,
           this);
  v54 = *SpatialInteractionDevices::GetUsageDesc_SpatialInteractionDevices::UsageMapping_SpatialInteractionDevices::UsageDesc_SpatialInteractionDevices::ValueUsage__1___(
           &v61,
           v3,
           &off_1801B9D48);
  v55 = *SpatialInteractionDevices::GetUsageDesc_SpatialInteractionDevices::UsageMapping_SpatialInteractionDevices::UsageDesc_SpatialInteractionDevices::ValueUsage__1___(
           &v62,
           v4,
           &off_1801B9B20);
  v56 = *SpatialInteractionDevices::GetUsageDesc_SpatialInteractionDevices::UsageMapping_SpatialInteractionDevices::UsageDesc_SpatialInteractionDevices::ValueUsage__3___(
           &v63,
           v5);
  v7 = SpatialInteractionDevices::GetUsageDesc_SpatialInteractionDevices::UsageMapping_SpatialInteractionDevices::UsageDesc_SpatialInteractionDevices::ValueUsage__4___(
         &v64,
         v6);
  v57 = *v7;
  LOBYTE(v7) = word_1801B9E80[2] == 1;
  *(_BYTE *)(v8 + 237) = (_BYTE)v7;
  v9 = 0;
  v10 = v53;
  try
  {
    while ( v9 < *((_DWORD *)this + 38) )
    {
      v11 = *((_QWORD *)this + 18) + 72LL * v9;
      ReportCaps = SpatialInteractionDevices::GetReportCaps(*(_BYTE *)(v11 + 2), (__int64)this);
      for ( i = 0; i < DWORD2(v53); ++i )
      {
        if ( SpatialInteractionDevices::IsValidButtonUsage(v11, (_WORD *)(v10 + 24LL * i)) )
        {
          *(_DWORD *)(ReportCaps + 144) |= *(_DWORD *)(v14 + 8);
          LOWORD(v65) = *(_WORD *)(v11 + 6);
          *(_DWORD *)((char *)&v65 + 2) = *(_DWORD *)(v14 + 4);
          v15 = *(_DWORD *)(v14 + 8);
          v66 = v15;
          v16 = *(_QWORD *)(ReportCaps + 160);
          if ( *(_QWORD *)(ReportCaps + 168) == v16 )
          {
            std::vector<HotKeyRegistrationData>::_Emplace_reallocate<HotKeyRegistrationData const &>(
              (const void **)(ReportCaps + 152),
              (_BYTE *)v16,
              (__int64)&v65);
          }
          else
          {
            *(_QWORD *)v16 = v65;
            *(_DWORD *)(v16 + 8) = v15;
            *(_QWORD *)(ReportCaps + 160) += 12LL;
          }
        }
      }
      ++v9;
    }
    for ( j = 0; j < *((_DWORD *)this + 34); ++j )
    {
      v18 = *((_QWORD *)this + 16) + 72LL * j;
      v19 = SpatialInteractionDevices::GetReportCaps(*(_BYTE *)(v18 + 2), (__int64)this);
      LOBYTE(v52) = 0;
      v20 = SpatialInteractionDevices::StoreCapsIfMatches_1_((__int64)&off_1801B9CA8, v18, v19, &v52);
      v21 = v20;
      if ( v20 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x462,
          (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\lib\\spatialinteractionhidparser.cpp",
          (const char *)(unsigned int)v20);
        return v21;
      }
      if ( !(_BYTE)v52 )
      {
        v24 = SpatialInteractionDevices::StoreCapsIfMatches_4_((__int64)&off_1801B9E20, v18, v19 + 48, &v52);
        v25 = v24;
        if ( v24 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x463,
            (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\lib\\spatialinteractionhidparser.cpp",
            (const char *)(unsigned int)v24);
          return v25;
        }
        if ( !(_BYTE)v52 )
        {
          v26 = SpatialInteractionDevices::StoreCapsIfMatches_2_((__int64)&v54, v18, v19 + 24, &v52);
          v27 = v26;
          if ( v26 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x464,
              (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\lib\\spatialinteractionhidparser.cpp",
              (const char *)(unsigned int)v26);
            return v27;
          }
          if ( !(_BYTE)v52 )
          {
            v28 = SpatialInteractionDevices::StoreCapsIfMatches_2_((__int64)&off_1801B9E50, v18, v19 + 8, &v52);
            v29 = v28;
            if ( v28 < 0 )
            {
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)0x465,
                (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\lib\\spatialinteractionhidparser.cpp",
                (const char *)(unsigned int)v28);
              return v29;
            }
            if ( !(_BYTE)v52 )
            {
              v30 = SpatialInteractionDevices::StoreCapsIfMatches_1_((__int64)&v55, v18, v19 + 40, &v52);
              v31 = v30;
              if ( v30 < 0 )
              {
                wil::details::in1diag3::Return_Hr(
                  retaddr,
                  (void *)0x466,
                  (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\lib\\spatialinteractionhidparser.cpp",
                  (const char *)(unsigned int)v30);
                return v31;
              }
              if ( !(_BYTE)v52 )
              {
                v32 = SpatialInteractionDevices::StoreCapsIfMatches_3_((__int64)&v56, v18, v19 + 80, &v52);
                v33 = v32;
                if ( v32 < 0 )
                {
                  wil::details::in1diag3::Return_Hr(
                    retaddr,
                    (void *)0x467,
                    (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\lib\\spatialinteractionhidparser.cpp",
                    (const char *)(unsigned int)v32);
                  return v33;
                }
                if ( !(_BYTE)v52 )
                {
                  v34 = SpatialInteractionDevices::StoreCapsIfMatches_4_((__int64)&v57, v18, v19 + 104, &v52);
                  v35 = v34;
                  if ( v34 < 0 )
                  {
                    wil::details::in1diag3::Return_Hr(
                      retaddr,
                      (void *)0x468,
                      (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\lib\\spatialinteractionhidparser.cpp",
                      (const char *)(unsigned int)v34);
                    return v35;
                  }
                }
              }
            }
          }
        }
      }
    }
    v36 = 0;
    v37 = 0;
    v38 = (__int64 *)*((_QWORD *)this + 31);
    v39 = *v38;
    *(_QWORD *)&v53 = *v38;
    while ( (__int64 *)v39 != v38 )
    {
      v40 = *(volatile signed __int32 **)(v39 + 48);
      if ( v40 )
      {
        _InterlockedAdd(v40 + 2, 1u);
        v40 = *(volatile signed __int32 **)(v39 + 48);
      }
      v58 = *(_QWORD *)(v39 + 40);
      v41 = v58;
      v59 = v40;
      *(_BYTE *)(v41 + 136) = SpatialInteractionDevices::HasAllCaps_1_(v58);
      *(_BYTE *)(v41 + 137) = SpatialInteractionDevices::HasAllCaps_1_(v41 + 40);
      *(_BYTE *)(v41 + 139) = SpatialInteractionDevices::HasAllCaps_2_(v41 + 24);
      *(_BYTE *)(v41 + 138) = SpatialInteractionDevices::HasAllCaps_2_(v41 + 8);
      *(_BYTE *)(v41 + 140) = SpatialInteractionDevices::HasAllCaps_4_(v41 + 48);
      v43 = 80LL;
      while ( *(_QWORD *)(v41 + v43) )
      {
        v43 += 8LL;
        if ( v43 >= 0x68 )
        {
          v44 = v42;
          goto LABEL_43;
        }
      }
      v44 = 0;
LABEL_43:
      *(_BYTE *)(v41 + 141) = v44;
      *(_BYTE *)(v41 + 142) = SpatialInteractionDevices::HasAllCaps_4_(v41 + 104);
      v37 |= *(_DWORD *)(v41 + 144);
      v36 |= *(_BYTE *)(v41 + 137);
      std::_Sort_unchecked_SpatialInteractionDevices::SpatialInputButtonCaps____lambda_7cb88ca86370cec64ac2ea824bd2a3de___(
        *(char **)(v41 + 152),
        *(char **)(v41 + 160),
        (*(_QWORD *)(v41 + 160) - *(_QWORD *)(v41 + 152)) / 12LL,
        v52);
      if ( *(_DWORD *)(v41 + 144)
        || *(_BYTE *)(v41 + 136)
        || *(_BYTE *)(v41 + 137)
        || *(_BYTE *)(v41 + 139)
        || *(_BYTE *)(v41 + 138)
        || *(_BYTE *)(v41 + 140)
        || *(_BYTE *)(v41 + 141)
        || (v45 = 0, *(_BYTE *)(v41 + 142)) )
      {
        v45 = 1;
      }
      *(_BYTE *)(v41 + 143) = v45;
      if ( v40 )
        std::_Ref_count_base::_Decref((std::_Ref_count_base *)v40);
      std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned long const,MagnifierRecognizer::ContactState>>>,std::_Iterator_base0>::operator++((__int64 **)&v53);
      v39 = v53;
    }
    *((_BYTE *)this + 238) = v36;
    *((_DWORD *)this + 60) = v37;
    v46 = HidP_MaxUsageListLength(HidP_Input, 0, *((PHIDP_PREPARSED_DATA *)this + 7));
    *((_DWORD *)this + 66) = v46;
    v48 = v46;
    v47 = 4LL * v46;
    if ( !is_mul_ok(v48, 4uLL) )
      v47 = -1LL;
    v49 = operator new[](v47, (const struct std::nothrow_t *)&std::nothrow);
    v51 = (void *)*((_QWORD *)this + 34);
    *((_QWORD *)this + 34) = v49;
    if ( v51 )
    {
      operator delete(v51, v50);
      v49 = (void *)*((_QWORD *)this + 34);
    }
    if ( v49 )
    {
      result = 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x494,
        (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\lib\\spatialinteractionhidparser.cpp",
        (const char *)0x8007000ELL);
      result = 2147942414LL;
    }
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x496,
                           (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\lib\\spatialinteractionhidparser.cpp",
                           v22);
  }
  return result;
}
