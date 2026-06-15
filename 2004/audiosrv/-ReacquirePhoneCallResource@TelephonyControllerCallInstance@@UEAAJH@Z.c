/*
 * XREFs of ?ReacquirePhoneCallResource@TelephonyControllerCallInstance@@UEAAJH@Z @ 0x180144020
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074C80 (_guard_dispatch_icall_nop.c)
 *     ?reset@?$unique_storage@U?$resource_policy@_KP6AX_K@Z$1?ReleaseAudioResourceHandle@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@_K_K$0A@$$T@details@wil@@@details@wil@@QEAAX_K@Z @ 0x1800E7BC8 (-reset@-$unique_storage@U-$resource_policy@_KP6AX_K@Z$1-ReleaseAudioResourceHandle@@YAX0@ZU-$int.c)
 */

__int64 __fastcall TelephonyControllerCallInstance::ReacquirePhoneCallResource(
        TelephonyControllerCallInstance *this,
        int a2)
{
  unsigned int v2; // ebx
  char *v3; // rbp
  __int64 v6; // rdx
  int v7; // eax

  v2 = 0;
  v3 = (char *)this + 24;
  if ( *((_QWORD *)this + 3) && a2 != *((_DWORD *)this + 13) )
  {
    wil::details::unique_storage<wil::details::resource_policy<unsigned __int64,void (*)(unsigned __int64),&void ReleaseAudioResourceHandle(unsigned __int64),wistd::integral_constant<unsigned __int64,0>,unsigned __int64,unsigned __int64,0,std::nullptr_t>>::reset(
      (unsigned __int64 *)this + 3,
      0LL);
    LOBYTE(v6) = a2 != 0;
    v7 = (*(__int64 (__fastcall **)(struct IAudioResourceManager *, __int64, char *))(*(_QWORD *)g_AudioResourceManager
                                                                                    + 56LL))(
           g_AudioResourceManager,
           v6,
           v3);
    if ( v7 >= 0 )
      *((_DWORD *)this + 13) = a2;
    else
      return (unsigned int)v7;
  }
  return v2;
}
