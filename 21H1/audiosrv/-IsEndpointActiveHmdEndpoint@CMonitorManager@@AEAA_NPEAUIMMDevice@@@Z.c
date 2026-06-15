/*
 * XREFs of ?IsEndpointActiveHmdEndpoint@CMonitorManager@@AEAA_NPEAUIMMDevice@@@Z @ 0x1800FDAF8
 * Callers:
 *     ?IsRenderMirrorEnabled@CMonitorManager@@AEAA_NPEAUIMMDevice@@PEAPEAG@Z @ 0x18005E948 (-IsRenderMirrorEnabled@CMonitorManager@@AEAA_NPEAUIMMDevice@@PEAPEAG@Z.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x18002AB54 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     _guard_dispatch_icall_nop @ 0x180074B80 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
bool __fastcall CMonitorManager::IsEndpointActiveHmdEndpoint(CMonitorManager *this, struct IMMDevice *a2)
{
  bool v4; // di
  int v5; // eax
  void *v6; // rcx
  __int64 v7; // rdx
  LPVOID pv; // [rsp+38h] [rbp+10h] BYREF

  pv = 0LL;
  v4 = 0;
  wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
    &pv,
    0LL);
  v5 = ((__int64 (__fastcall *)(struct IMMDevice *, LPVOID *))a2->lpVtbl->GetId)(a2, &pv);
  v6 = pv;
  if ( v5 >= 0 )
  {
    if ( pv )
    {
      v7 = *((_QWORD *)this + 43);
      if ( v7 )
      {
        v4 = (unsigned int)_o__wcsicmp(pv, v7) == 0;
        v6 = pv;
      }
    }
  }
  if ( v6 )
    CoTaskMemFree(v6);
  return v4;
}
