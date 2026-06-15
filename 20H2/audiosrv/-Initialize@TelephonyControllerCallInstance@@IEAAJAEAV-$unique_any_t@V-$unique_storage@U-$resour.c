/*
 * XREFs of ?Initialize@TelephonyControllerCallInstance@@IEAAJAEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@_KP6AX_K@Z$1?ReleaseAudioResourceHandle@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@_K_K$0A@$$T@details@wil@@@details@wil@@@wil@@PEAUIKsControl@@PEAU_TelephonyInstanceData@@@Z @ 0x180143184
 * Callers:
 *     ?CreateInstance@TelephonyControllerCallInstance@@SAJAEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@_KP6AX_K@Z$1?ReleaseAudioResourceHandle@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@_K_K$0A@$$T@details@wil@@@details@wil@@@wil@@PEAUIKsControl@@PEAU_TelephonyInstanceData@@PEAPEAUITelephonyControllerCallInstance@@@Z @ 0x180142ECC (-CreateInstance@TelephonyControllerCallInstance@@SAJAEAV-$unique_any_t@V-$unique_storage@U-$reso.c)
 * Callees:
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x180057AD4 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@_KP6AX_K@Z$1?ReleaseAudioResourceHandle@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@_K_K$0A@$$T@details@wil@@@details@wil@@QEAAX_K@Z @ 0x1800E6F38 (-reset@-$unique_storage@U-$resource_policy@_KP6AX_K@Z$1-ReleaseAudioResourceHandle@@YAX0@ZU-$int.c)
 *     ?ResetState@TelephonyControllerCallInstance@@AEAAJXZ @ 0x18014340C (-ResetState@TelephonyControllerCallInstance@@AEAAJXZ.c)
 *     ?VerifyAndSetCallType@TelephonyControllerCallInstance@@AEAAJPEAU_TelephonyInstanceData@@@Z @ 0x1801435B4 (-VerifyAndSetCallType@TelephonyControllerCallInstance@@AEAAJPEAU_TelephonyInstanceData@@@Z.c)
 */

__int64 __fastcall TelephonyControllerCallInstance::Initialize(
        TelephonyControllerCallInstance *this,
        unsigned __int64 *a2,
        struct IUnknown *a3,
        __int64 a4)
{
  int v7; // ecx
  int v8; // eax

  if ( a3 && a4 )
  {
    *((_DWORD *)this + 12) = *(_DWORD *)(a4 + 4);
    v7 = TelephonyControllerCallInstance::VerifyAndSetCallType(this, (struct _TelephonyInstanceData *)a4);
    if ( v7 >= 0 )
    {
      *((_DWORD *)this + 11) = *((_DWORD *)this + 10);
      if ( (unsigned __int64 *)((char *)this + 24) != a2 )
      {
        wil::details::unique_storage<wil::details::resource_policy<unsigned __int64,void (*)(unsigned __int64),&void ReleaseAudioResourceHandle(unsigned __int64),wistd::integral_constant<unsigned __int64,0>,unsigned __int64,unsigned __int64,0,std::nullptr_t>>::reset(
          (unsigned __int64 *)this + 3,
          *a2);
        *a2 = 0LL;
      }
      if ( *((struct IUnknown **)this + 4) != a3 )
        ATL::AtlComPtrAssign((struct IUnknown **)this + 4, a3);
      v8 = TelephonyControllerCallInstance::ResetState(this);
      v7 = 0;
      if ( v8 < 0 )
        return (unsigned int)v8;
    }
  }
  else
  {
    return (unsigned int)-2147467261;
  }
  return (unsigned int)v7;
}
