/*
 * XREFs of ?RuntimeClassInitialize@CAudioSessionStore@@QEAAJPEBG0@Z @ 0x18002AA70
 * Callers:
 *     ??$MakeAndInitialize@VCAudioSessionStore@@UIAudioSessionStore@@AEAPEBGAEAPEBG@Details@WRL@Microsoft@@YAJPEAPEAUIAudioSessionStore@@AEAPEBG1@Z @ 0x18002AB9C (--$MakeAndInitialize@VCAudioSessionStore@@UIAudioSessionStore@@AEAPEBGAEAPEBG@Details@WRL@Micros.c)
 * Callees:
 *     ?LoadPropertyStore@CAudioSessionStore@@AEAAJPEBG@Z @ 0x18000360C (-LoadPropertyStore@CAudioSessionStore@@AEAAJPEBG@Z.c)
 *     ?StringCchCopyNExW@@YAJPEAG_KPEBG1PEAPEAGPEA_KK@Z @ 0x18002A740 (-StringCchCopyNExW@@YAJPEAG_KPEBG1PEAPEAGPEA_KK@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x18002AB54 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C604 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CAudioSessionStore::RuntimeClassInitialize(
        CAudioSessionStore *this,
        const unsigned __int16 *a2,
        const unsigned __int16 *a3)
{
  char **v3; // rbx
  unsigned __int64 v7; // rdi
  unsigned __int64 v8; // rsi
  char *v9; // rax
  int v10; // ebx
  __int64 result; // rax
  __int64 v12; // rdx
  int v13; // [rsp+20h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v3 = (char **)((char *)this + 48);
  wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
    (char *)this + 48,
    0LL);
  v7 = -1LL;
  do
    ++v7;
  while ( a2[v7] );
  v8 = v7 + 1;
  *v3 = 0LL;
  if ( v7 + 1 < v7 )
  {
    v10 = -2147024362;
    goto LABEL_17;
  }
  if ( is_mul_ok(v8, 2uLL) )
  {
    v9 = (char *)CoTaskMemAlloc(2 * v8);
    *v3 = v9;
    if ( !v9 )
    {
      v10 = -2147024882;
      goto LABEL_17;
    }
    v10 = 0;
    StringCchCopyNExW(v9, v7 + 1, a2, v7);
  }
  else
  {
    v10 = -2147024362;
  }
  if ( v10 < 0 )
  {
LABEL_17:
    v12 = 2922LL;
    goto LABEL_18;
  }
  result = CAudioSessionStore::LoadPropertyStore(this, a3);
  v10 = result;
  if ( (int)result >= 0 )
    return 0LL;
  if ( (_DWORD)result != -2147024891 && (_DWORD)result != -2147024894 )
  {
    v12 = 2923LL;
LABEL_18:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
      (const char *)(unsigned int)v10,
      v13);
    return (unsigned int)v10;
  }
  return result;
}
