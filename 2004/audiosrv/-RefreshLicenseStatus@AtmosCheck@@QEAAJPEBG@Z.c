/*
 * XREFs of ?RefreshLicenseStatus@AtmosCheck@@QEAAJPEBG@Z @ 0x1801378DC
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_98875cb7b650817bfd28d2b98d662752__void_::_Do_call @ 0x1800D9910 (std--_Func_impl_no_alloc__lambda_98875cb7b650817bfd28d2b98d662752__void_--_Do_call.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180047BD0 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C654 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180074C80 (_guard_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@@Z @ 0x1801343D8 (--$Write@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_G_ea_1801343D8.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$00@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$00@@@Z @ 0x180134470 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$00@@@-$_tlgWriteTemplate@$$A6AJPEBU__ea_180134470.c)
 *     ??$_Destroy_range@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@std@@YAXPEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@0AEAV?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@0@@Z @ 0x18013475C (--$_Destroy_range@V-$allocator@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@st.c)
 *     ?GetCurrentEndpointsUnderLock@AtmosCheck@@AEAAJAEAV?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@@Z @ 0x180135C80 (-GetCurrentEndpointsUnderLock@AtmosCheck@@AEAAJAEAV-$vector@V-$basic_string@GU-$char_traits@G@st.c)
 *     ?MapSubtypeToCommonTechIndex@AtmosCheck@@AEBAHPEBG@Z @ 0x180136D64 (-MapSubtypeToCommonTechIndex@AtmosCheck@@AEBAHPEBG@Z.c)
 *     ?PerformLicenseCheckForSpatialAudioSubtype@AtmosCheck@@AEAAJPEBG0PEA_N@Z @ 0x180137238 (-PerformLicenseCheckForSpatialAudioSubtype@AtmosCheck@@AEAAJPEBG0PEA_N@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall AtmosCheck::RefreshLicenseStatus(AtmosCheck *this, const unsigned __int16 *a2)
{
  unsigned int v4; // ebx
  __int64 v5; // rdx
  int v7; // eax
  int CurrentEndpointsUnderLock; // eax
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned int v11; // esi
  __int64 v12; // rdx
  char v13; // r14
  __int64 i; // rbx
  const unsigned __int16 *v15; // rdx
  __int64 v16; // rcx
  char v17; // si
  void (__fastcall ***v18)(_QWORD); // rcx
  __int128 v19; // [rsp+30h] [rbp-20h] BYREF
  __int64 v20; // [rsp+40h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]
  void *v22; // [rsp+80h] [rbp+30h] BYREF
  void *v23; // [rsp+90h] [rbp+40h] BYREF

  if ( !*((_BYTE *)this + 96) )
  {
    v4 = -2147418113;
    v5 = 2039LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (__int64)"avcore\\published\\audiocore\\lib\\atmoscheck\\atmoscheck.cpp",
      (const char *)v4);
    return v4;
  }
  if ( !*((_BYTE *)this + 209) )
  {
    v4 = -2147467259;
    v5 = 2040LL;
    goto LABEL_3;
  }
  v7 = AtmosCheck::MapSubtypeToCommonTechIndex(this, a2);
  if ( v7 == -1 )
  {
    v4 = -2147024809;
    v5 = 2045LL;
    goto LABEL_3;
  }
  if ( !*((_BYTE *)this + 32 * v7 + 272) )
  {
    v4 = -2147024809;
    v5 = 2046LL;
    goto LABEL_3;
  }
  v19 = 0LL;
  v20 = 0LL;
  CurrentEndpointsUnderLock = AtmosCheck::GetCurrentEndpointsUnderLock((__int64)this, (__int64 *)&v19);
  v11 = CurrentEndpointsUnderLock;
  if ( CurrentEndpointsUnderLock >= 0 )
  {
    v13 = 0;
    for ( i = v19; i != *((_QWORD *)&v19 + 1); i += 32LL )
    {
      LOBYTE(v22) = 0;
      v15 = (const unsigned __int16 *)i;
      if ( *(_QWORD *)(i + 24) >= 8uLL )
        v15 = *(const unsigned __int16 **)i;
      CurrentEndpointsUnderLock = AtmosCheck::PerformLicenseCheckForSpatialAudioSubtype(this, v15, a2, (bool *)&v22);
      v11 = CurrentEndpointsUnderLock;
      if ( CurrentEndpointsUnderLock < 0 )
      {
        v12 = 2056LL;
        goto LABEL_24;
      }
      v17 = (char)v22;
      if ( (unsigned int)dword_18019D520 > 5 )
      {
        v23 = (void *)a2;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<1>>(
          v16,
          byte_18016DA87,
          v9,
          v10,
          &v23,
          (__int64)&v22);
      }
      if ( v13 || v17 )
        v13 = 1;
    }
    if ( v13 )
    {
      v18 = (void (__fastcall ***)(_QWORD))*((_QWORD *)this + 5);
      if ( v18 )
      {
        if ( (unsigned int)dword_18019D520 > 5 )
        {
          v22 = (void *)a2;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>>(
            (__int64)v18,
            byte_18016D72A,
            v9,
            v10,
            &v22);
          v18 = (void (__fastcall ***)(_QWORD))*((_QWORD *)this + 5);
        }
        (**v18)(v18);
      }
    }
    v11 = 0;
  }
  else
  {
    v12 = 2050LL;
LABEL_24:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (__int64)"avcore\\published\\audiocore\\lib\\atmoscheck\\atmoscheck.cpp",
      (const char *)(unsigned int)CurrentEndpointsUnderLock);
  }
  if ( (_QWORD)v19 )
  {
    std::_Destroy_range<std::allocator<std::wstring>>(v19, *((__int64 *)&v19 + 1));
    std::_Deallocate<16,0>((void *)v19, (const struct std::nothrow_t *)((v20 - v19) & 0xFFFFFFFFFFFFFFE0uLL));
  }
  return v11;
}
