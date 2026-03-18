/*
 * XREFs of ?CheckOcclusionState@CDDisplayRenderTarget@@UEAAJXZ @ 0x18018D5F4
 * Callers:
 *     ?CheckOcclusionState@CDDisplayRenderTarget@@$4PPPPPPPM@A@EAAJXZ @ 0x1800EF250 (-CheckOcclusionState@CDDisplayRenderTarget@@$4PPPPPPPM@A@EAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$?9V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@YA_NAEBV?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@0@$$T@Z @ 0x1800DA064 (--$-9V-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@w.c)
 *     ??4?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@QEAAAEAV01@$$T@Z @ 0x180165D40 (--4-$unique_any_t@V-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH.c)
 *     ?TryEnsureSwapChain@CDDisplayRenderTarget@@IEAAJXZ @ 0x18018E838 (-TryEnsureSwapChain@CDDisplayRenderTarget@@IEAAJXZ.c)
 */

__int64 __fastcall CDDisplayRenderTarget::CheckOcclusionState(CDDisplayRenderTarget *this)
{
  unsigned int v1; // ebx
  void **v2; // rdi
  __int64 v3; // rdx
  int v4; // eax
  __int64 v5; // rcx

  v1 = 142213121;
  if ( *((_DWORD *)this - 4650) )
  {
    if ( *((_DWORD *)this - 4649) )
    {
      v2 = (void **)((char *)this - 18528);
      if ( wil::operator!=<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>((_QWORD *)this - 2316) )
      {
        v4 = CDDisplayRenderTarget::TryEnsureSwapChain((CDDisplayRenderTarget *)(v3 - 18680));
        if ( v4 < 0 )
        {
          if ( v4 == -2147023728 )
          {
            wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>::operator=(v2);
          }
          else
          {
            v1 = v4;
            MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, v4, 0x146u, 0LL);
          }
        }
        else
        {
          return 0;
        }
      }
    }
  }
  return v1;
}
