/*
 * XREFs of ?GetApplicationSpecificEndpointInfo@CProcess@@UEAAJPEAPEAUIApplicationSpecificEndpointInfo@@@Z @ 0x18001A650
 * Callers:
 *     ?GetApplicationSpecificEndpointInfoForProcess@CWindowsPolicyManager@@UEAAJKPEAPEAUIApplicationSpecificEndpointInfo@@@Z @ 0x18000B3C0 (-GetApplicationSpecificEndpointInfoForProcess@CWindowsPolicyManager@@UEAAJKPEAPEAUIApplicationSp.c)
 *     ?DelinkProcess@CApplication@@QEAAJPEAVCProcess@@@Z @ 0x180015EEC (-DelinkProcess@CApplication@@QEAAJPEAVCProcess@@@Z.c)
 * Callees:
 *     ??1?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@XZ @ 0x18000F4F0 (--1-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@XZ.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x1800126C4 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ??R?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@QEBA_NAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@0@Z @ 0x18001D5FC (--R-$less@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@std@@QEBA_NAEBV-$basic_.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001FC90 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?GetApplicationName@ApplicationSpecificEndpointInfo@@SAPEBGPEAUIAudioProcess@@@Z @ 0x1800366D4 (-GetApplicationName@ApplicationSpecificEndpointInfo@@SAPEBGPEAUIAudioProcess@@@Z.c)
 *     __security_check_cookie @ 0x18003EF80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180040700 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CProcess::GetApplicationSpecificEndpointInfo(
        unsigned __int64 this,
        struct IApplicationSpecificEndpointInfo **a2)
{
  unsigned int v2; // edi
  __int64 v4; // r14
  unsigned __int16 *ApplicationName; // rbx
  __int64 v6; // rcx
  _QWORD *v7; // rbx
  _QWORD *v8; // rbp
  __int64 v9; // r11
  _QWORD *v10; // r11
  struct IApplicationSpecificEndpointInfo *v11; // rcx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-58h] BYREF
  char v14; // [rsp+28h] [rbp-50h]
  _QWORD v15[4]; // [rsp+30h] [rbp-48h] BYREF

  v2 = 0;
  *a2 = 0LL;
  v4 = *(_QWORD *)(this + 240);
  ApplicationName = (unsigned __int16 *)ApplicationSpecificEndpointInfo::GetApplicationName((struct IAudioProcess *)(this & -(__int64)(this != 16)));
  *a2 = 0LL;
  v14 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)(v4 + 32);
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
  std::wstring::wstring(v15, ApplicationName);
  v7 = *(_QWORD **)(v4 + 648);
  v8 = v7;
  v9 = v7[1];
  while ( !*(_BYTE *)(v9 + 25) )
  {
    if ( (unsigned __int8)std::less<std::wstring>::operator()(v6, v9 + 32, v15) )
    {
      v9 = v10[2];
    }
    else
    {
      v7 = v10;
      v9 = *v10;
    }
  }
  if ( v7 == v8 || (unsigned __int8)std::less<std::wstring>::operator()(v6, v15, v7 + 4) )
    v7 = v8;
  std::wstring::~wstring((__int64)v15);
  if ( v7 == *(_QWORD **)(v4 + 648) )
  {
    if ( v14 )
      LeaveCriticalSection(lpCriticalSection);
    return (unsigned int)-2147023728;
  }
  else
  {
    v11 = (struct IApplicationSpecificEndpointInfo *)v7[8];
    if ( v11 )
    {
      *a2 = v11;
      (*(void (__fastcall **)(struct IApplicationSpecificEndpointInfo *))(*(_QWORD *)v11 + 8LL))(v11);
    }
    else
    {
      *a2 = 0LL;
    }
    if ( v14 )
      LeaveCriticalSection(lpCriticalSection);
  }
  return v2;
}
