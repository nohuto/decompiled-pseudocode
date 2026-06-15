/*
 * XREFs of ?UpdateRoutedEndpointId@CMonitorManager@@AEAAXPEA_N@Z @ 0x1800FF9C8
 * Callers:
 *     wistd::__function::__func__lambda_ca79050dc30379a8d322bb4b6dd56097__void___cdecl(enum_wil::RegistryChangeKind)_::operator() @ 0x1800F9DC0 (wistd--__function--__func__lambda_ca79050dc30379a8d322bb4b6dd56097__void___cdecl(en_ea_1800F9DC0.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x18002A4D4 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ??$make_unique_string_nothrow@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@0@PEBG_K@Z @ 0x18005FEAC (--$make_unique_string_nothrow@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@.c)
 *     ?make_cotaskmem_string_nothrow@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@1@PEBG_K@Z @ 0x18006E1A0 (-make_cotaskmem_string_nothrow@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEA.c)
 *     ?SetMonitorMirrorEligibleProperty@CMonitorManager@@AEAAJPEBG@Z @ 0x1800FF400 (-SetMonitorMirrorEligibleProperty@CMonitorManager@@AEAAJPEBG@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CMonitorManager::UpdateRoutedEndpointId(void **this, bool *a2)
{
  char *pvData; // rbx
  const char *v5; // r9
  void **cotaskmem_string_nothrow; // rsi
  LPVOID *v7; // rsi
  const char *v8; // r9
  void *v9; // rcx
  DWORD pcbData; // [rsp+78h] [rbp+38h] BYREF
  char *v11; // [rsp+80h] [rbp+40h] BYREF
  LPVOID pv; // [rsp+88h] [rbp+48h] BYREF

  pcbData = 0;
  pvData = 0LL;
  v11 = 0LL;
  if ( a2 )
    *a2 = 0;
  if ( !RegGetValueW(
          HKEY_LOCAL_MACHINE,
          L"Software\\Microsoft\\Windows\\CurrentVersion\\HoloSI\\Audio",
          L"RoutedAudioDevice",
          2u,
          0LL,
          0LL,
          &pcbData) )
  {
    pcbData += 2;
    cotaskmem_string_nothrow = (void **)wil::make_cotaskmem_string_nothrow(&pv, 0LL, pcbData, v5);
    if ( &v11 != (char **)cotaskmem_string_nothrow )
    {
      wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
        (void **)&v11,
        *cotaskmem_string_nothrow);
      *cotaskmem_string_nothrow = 0LL;
      pvData = v11;
    }
    if ( pv )
      CoTaskMemFree(pv);
    if ( pvData )
    {
      if ( !RegGetValueW(
              HKEY_LOCAL_MACHINE,
              L"Software\\Microsoft\\Windows\\CurrentVersion\\HoloSI\\Audio",
              L"RoutedAudioDevice",
              2u,
              0LL,
              pvData,
              &pcbData) )
      {
        v7 = this + 43;
        if ( (unsigned int)_o__wcsicmp(pvData, this[43]) )
        {
          wil::make_unique_string_nothrow<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>>(
            &pv,
            pvData,
            0xFFFFFFFFFFFFFFFFuLL,
            v8);
          if ( v7 == &pv )
          {
            v9 = pv;
          }
          else
          {
            wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
              this + 43,
              pv);
            v9 = 0LL;
          }
          if ( v9 )
            CoTaskMemFree(v9);
          CMonitorManager::SetMonitorMirrorEligibleProperty((CMonitorManager *)this, (const unsigned __int16 *)*v7);
          if ( a2 )
            *a2 = 1;
        }
      }
    }
  }
  if ( pvData )
    CoTaskMemFree(pvData);
}
