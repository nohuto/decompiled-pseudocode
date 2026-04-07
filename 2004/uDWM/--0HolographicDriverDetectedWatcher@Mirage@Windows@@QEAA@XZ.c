/*
 * XREFs of ??0HolographicDriverDetectedWatcher@Mirage@Windows@@QEAA@XZ @ 0x18004BEEC
 * Callers:
 *     ??0CAnalogCompositorManager@@AEAA@XZ @ 0x18004BB24 (--0CAnalogCompositorManager@@AEAA@XZ.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x180042358 (-reset@-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-CloseHandle@details@wil@@YAX0@ZU-$in.c)
 *     ?GetLastErrorFailHr@details@wil@@YAJXZ @ 0x18007E290 (-GetLastErrorFailHr@details@wil@@YAJXZ.c)
 *     ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180081174 (-_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

Windows::Mirage::HolographicDriverDetectedWatcher *__fastcall Windows::Mirage::HolographicDriverDetectedWatcher::HolographicDriverDetectedWatcher(
        Windows::Mirage::HolographicDriverDetectedWatcher *this)
{
  wil::details *v2; // rcx
  wil::details *Event; // rdi
  int LastErrorFailHr; // eax
  wil::details *v5; // rcx
  wil::details *v6; // rdi
  int v7; // eax
  int v9; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  Event = (wil::details *)CreateEventExW(0LL, 0LL, 0, 0x1F0003u);
  if ( Event )
  {
    GetLastError();
    wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::reset(
      (wil::details **)this,
      Event);
    LastErrorFailHr = 0;
  }
  else
  {
    LastErrorFailHr = wil::details::GetLastErrorFailHr(v2);
  }
  if ( LastErrorFailHr < 0 )
  {
    wil::details::in1diag3::_FailFast_Hr(
      retaddr,
      (void *)0x21,
      (unsigned int)"onecoreuap\\internal\\sdk\\inc\\HolographicDriverDetectedWatcher.h",
      (const char *)(unsigned int)LastErrorFailHr,
      v9);
    __debugbreak();
  }
  v6 = (wil::details *)CreateEventExW(0LL, 0LL, 0, 0x1F0003u);
  if ( v6 )
  {
    GetLastError();
    wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::reset(
      (wil::details **)this + 1,
      v6);
    v7 = 0;
  }
  else
  {
    v7 = wil::details::GetLastErrorFailHr(v5);
  }
  if ( v7 < 0 )
  {
    wil::details::in1diag3::_FailFast_Hr(
      retaddr,
      (void *)0x22,
      (unsigned int)"onecoreuap\\internal\\sdk\\inc\\HolographicDriverDetectedWatcher.h",
      (const char *)(unsigned int)v7,
      v9);
    JUMPOUT(0x180073D16LL);
  }
  return this;
}
