/*
 * XREFs of ?ReleaseEndpointVolumeReference@CEndpointVolumeStateManager@@UEAAJPEBGAEA_N1AEAM11@Z @ 0x18002EC60
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@XZ @ 0x180009CF0 (--1-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@XZ.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x18000CD64 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ?Log_IfFailedMsg@in1diag3@details@wil@@YAJPEAXIPEBDJ1ZZ @ 0x18002E5E8 (-Log_IfFailedMsg@in1diag3@details@wil@@YAJPEAXIPEBDJ1ZZ.c)
 *     ?count@?$_Hash@V?$_Umap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCEndpointVolumeState@@U?$default_delete@VCEndpointVolumeState@@@std@@@2@V?$_Uhash_compare@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCEndpointVolumeState@@U?$default_delete@VCEndpointVolumeState@@@std@@@2@@std@@@2@$0A@@std@@@std@@QEBA_KAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@@Z @ 0x18002EE80 (-count@-$_Hash@V-$_Umap_traits@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$.c)
 *     ?erase@?$_Hash@V?$_Umap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCEndpointVolumeState@@U?$default_delete@VCEndpointVolumeState@@@std@@@2@V?$_Uhash_compare@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCEndpointVolumeState@@U?$default_delete@VCEndpointVolumeState@@@std@@@2@@std@@@2@$0A@@std@@@std@@QEAA_KAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@@Z @ 0x18002F030 (-erase@-$_Hash@V-$_Umap_traits@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$.c)
 *     ?at@?$unordered_map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCEndpointVolumeState@@U?$default_delete@VCEndpointVolumeState@@@std@@@2@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCEndpointVolumeState@@U?$default_delete@VCEndpointVolumeState@@@std@@@2@@std@@@2@@std@@QEAAAEAV?$unique_ptr@VCEndpointVolumeState@@U?$default_delete@VCEndpointVolumeState@@@std@@@2@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@@Z @ 0x18002F23C (-at@-$unordered_map@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$unique_ptr@.c)
 *     __security_check_cookie @ 0x1800396C0 (__security_check_cookie.c)
 */

__int64 __fastcall CEndpointVolumeStateManager::ReleaseEndpointVolumeReference(
        CEndpointVolumeStateManager *this,
        unsigned __int16 *a2,
        bool *a3,
        bool *a4,
        float *a5,
        bool *a6,
        bool *a7)
{
  struct _RTL_CRITICAL_SECTION *v7; // rdi
  char *v8; // rbp
  __int64 v12; // rbx
  float **v13; // rbx
  float *v15; // rdx
  bool v16; // r9
  signed __int32 v17; // eax
  const char *v19; // [rsp+28h] [rbp-C0h]
  _QWORD v20[4]; // [rsp+38h] [rbp-B0h] BYREF
  _QWORD v21[4]; // [rsp+58h] [rbp-90h] BYREF
  _QWORD v22[4]; // [rsp+78h] [rbp-70h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+0h]

  v7 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 16);
  v8 = (char *)this + 56;
  *a3 = 0;
  *a4 = 0;
  *a6 = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
  std::wstring::wstring(v20, a2);
  v12 = std::_Hash<std::_Umap_traits<std::wstring,std::unique_ptr<CEndpointVolumeState>,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::pair<std::wstring const,std::unique_ptr<CEndpointVolumeState>>>,0>>::count(
          v8,
          v20);
  std::wstring::~wstring((__int64)v20);
  if ( v12 )
  {
    std::wstring::wstring(v21, a2);
    v13 = (float **)std::unordered_map<std::wstring,std::unique_ptr<CEndpointVolumeState>>::at(v8, v21);
    std::wstring::~wstring((__int64)v21);
    if ( (*((_DWORD *)*v13 + 9))-- == 1 )
    {
      v15 = *v13;
      *a5 = **v13;
      *a7 = *((_BYTE *)v15 + 8);
      v16 = _InterlockedCompareExchange((volatile signed __int32 *)*v13 + 3, 1234, 1234) == 0;
      v17 = _InterlockedCompareExchange((volatile signed __int32 *)*v13 + 4, 1234, 1234);
      *a4 = v16;
      *a6 = v17 == 0;
      *a3 = 1;
      std::wstring::wstring(v22, a2);
      std::_Hash<std::_Umap_traits<std::wstring,std::unique_ptr<CEndpointVolumeState>,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::pair<std::wstring const,std::unique_ptr<CEndpointVolumeState>>>,0>>::erase(
        v8,
        v22);
      std::wstring::~wstring((__int64)v22);
    }
  }
  else
  {
    wil::details::in1diag3::Log_IfFailedMsg(
      retaddr,
      (void *)0xEE,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\endpointvolumestate\\endpointvolumestate.cpp",
      (const char *)0x8000FFFFLL,
      (__int64)"Unexpected release of reference to EndpointVolumeState.",
      v19);
  }
  if ( v7 )
    LeaveCriticalSection(v7);
  return 0LL;
}
