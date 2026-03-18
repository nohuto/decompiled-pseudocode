/*
 * XREFs of ?LookupShader@CCompiledEffectCache@@QEBAPEAVCLinkedShader@@IAEBUShaderLinkingConfig@@@Z @ 0x180249728
 * Callers:
 *     ?CreateLinkedShader@CCompiledEffectCache@@QEAAJIAEBUShaderLinkingConfig@@AEBUShaderLinkingBody@@V?$span@PEBUShaderLinkingBody@@$0?0@gsl@@PEAPEAVCLinkedShader@@@Z @ 0x18003C310 (-CreateLinkedShader@CCompiledEffectCache@@QEAAJIAEBUShaderLinkingConfig@@AEBUShaderLinkingBody@@.c)
 * Callees:
 *     ?GetLookupKey@ShaderLinkingConfig@@QEBA?AULookupKey@1@I@Z @ 0x180039A40 (-GetLookupKey@ShaderLinkingConfig@@QEBA-AULookupKey@1@I@Z.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x1800B2E40 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@UIMILRefCount@@@@IEAAKXZ @ 0x1800D193C (-InternalRelease@-$CMILRefCountBaseT@UIMILRefCount@@@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 */

struct CLinkedShader *__fastcall CCompiledEffectCache::LookupShader(
        CCompiledEffectCache *this,
        int a2,
        const struct ShaderLinkingConfig *a3)
{
  int v4; // edx
  __int64 v5; // rcx
  __int64 i; // rax
  volatile signed __int32 *v7; // rbx
  __int128 v9; // [rsp+20h] [rbp-28h] BYREF

  ShaderLinkingConfig::GetLookupKey((__int64)a3, &v9, a2);
  v4 = 0;
  if ( *((int *)this + 4) <= 0 )
    return 0LL;
  v5 = 0LL;
  for ( i = *(_QWORD *)this; *(_QWORD *)i != (_QWORD)v9 || *(_DWORD *)(i + 8) != DWORD2(v9); i += 16LL )
  {
    ++v4;
    if ( ++v5 >= *((int *)this + 4) )
      return 0LL;
  }
  if ( v4 == -1 )
    return 0LL;
  v7 = *(volatile signed __int32 **)(*((_QWORD *)this + 1) + 8LL * v4);
  if ( v7 )
  {
    CMILRefCountImpl::AddReference((CMILRefCountImpl *)(v7 + 2));
    CMILRefCountBaseT<IMILRefCount>::InternalRelease(v7);
  }
  return (struct CLinkedShader *)v7;
}
