/*
 * XREFs of ?PerformLicenseCheckForAllEndpoints@AtmosCheck@@AEAAJPEA_N@Z @ 0x180136F8C
 * Callers:
 *     _lambda_ec703c986ad76684d6e21ab1fd48d19c_::operator() @ 0x180008B50 (_lambda_ec703c986ad76684d6e21ab1fd48d19c_--operator().c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180047BD0 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C654 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@std@@YAXPEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@0AEAV?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@0@@Z @ 0x18013475C (--$_Destroy_range@V-$allocator@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@st.c)
 *     ?GetCurrentEndpointsUnderLock@AtmosCheck@@AEAAJAEAV?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@@Z @ 0x180135C80 (-GetCurrentEndpointsUnderLock@AtmosCheck@@AEAAJAEAV-$vector@V-$basic_string@GU-$char_traits@G@st.c)
 *     ?PerformLicenseCheckForEndpoint@AtmosCheck@@AEAAJPEBGPEA_N@Z @ 0x180137090 (-PerformLicenseCheckForEndpoint@AtmosCheck@@AEAAJPEBGPEA_N@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall AtmosCheck::PerformLicenseCheckForAllEndpoints(AtmosCheck *this, bool *a2)
{
  bool v4; // si
  int CurrentEndpointsUnderLock; // eax
  unsigned int v6; // edi
  __int64 v7; // rdx
  __int64 i; // rbx
  const unsigned __int16 *v9; // rdx
  __int128 v11; // [rsp+20h] [rbp-38h] BYREF
  __int64 v12; // [rsp+30h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  bool v14; // [rsp+70h] [rbp+18h] BYREF

  v4 = 0;
  v11 = 0LL;
  v12 = 0LL;
  CurrentEndpointsUnderLock = AtmosCheck::GetCurrentEndpointsUnderLock((__int64)this, (__int64 *)&v11);
  v6 = CurrentEndpointsUnderLock;
  if ( CurrentEndpointsUnderLock >= 0 )
  {
    for ( i = v11; i != *((_QWORD *)&v11 + 1); i += 32LL )
    {
      v14 = 0;
      v9 = (const unsigned __int16 *)i;
      if ( *(_QWORD *)(i + 24) >= 8uLL )
        v9 = *(const unsigned __int16 **)i;
      CurrentEndpointsUnderLock = AtmosCheck::PerformLicenseCheckForEndpoint(this, v9, &v14);
      v6 = CurrentEndpointsUnderLock;
      if ( CurrentEndpointsUnderLock < 0 )
      {
        v7 = 2021LL;
        goto LABEL_13;
      }
      if ( v4 || v14 )
        v4 = 1;
    }
    if ( a2 )
      *a2 = v4;
    v6 = 0;
  }
  else
  {
    v7 = 2015LL;
LABEL_13:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (__int64)"avcore\\published\\audiocore\\lib\\atmoscheck\\atmoscheck.cpp",
      (const char *)(unsigned int)CurrentEndpointsUnderLock);
  }
  if ( (_QWORD)v11 )
  {
    std::_Destroy_range<std::allocator<std::wstring>>(v11, *((__int64 *)&v11 + 1));
    std::_Deallocate<16,0>((void *)v11, (const struct std::nothrow_t *)((v12 - v11) & 0xFFFFFFFFFFFFFFE0uLL));
  }
  return v6;
}
