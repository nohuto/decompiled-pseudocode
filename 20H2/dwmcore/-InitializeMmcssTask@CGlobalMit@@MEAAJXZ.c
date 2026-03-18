/*
 * XREFs of ?InitializeMmcssTask@CGlobalMit@@MEAAJXZ @ 0x18002D6A0
 * Callers:
 *     <none>
 * Callees:
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x180029CF8 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x180029FC8 (-reset@-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-CloseHandle@details@wil@@YAX0@ZU-$in.c)
 *     ?Set@CMmcssTask@@QEAAJPEBUDWM_MMTASK@@_N@Z @ 0x18003D650 (-Set@CMmcssTask@@QEAAJPEBUDWM_MMTASK@@_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180068608 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x1800E29B0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800E3DCC (memset_0.c)
 *     ?GetLastErrorFailHr@details@wil@@YAJXZ @ 0x18014CE4C (-GetLastErrorFailHr@details@wil@@YAJXZ.c)
 */

__int64 __fastcall CGlobalMit::InitializeMmcssTask(wil::details **this)
{
  int v2; // eax
  unsigned int v3; // ecx
  int LastErrorFailHr; // ebx
  wil::details *v5; // rcx
  wil::details *Event; // rbx
  unsigned int v7; // ecx
  unsigned __int16 v9[66]; // [rsp+30h] [rbp-A8h] BYREF
  int v10; // [rsp+B4h] [rbp-24h]

  memset_0(v9, 0, 0x90uLL);
  StringCchCopyW(v9, 0x40uLL, (size_t *)L"Capture");
  v10 = 1;
  v2 = CMmcssTask::Set((CMmcssTask *)(this + 6), (const struct DWM_MMTASK *)v9, 0);
  LastErrorFailHr = v2;
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v3, 0LL, 0, v2, 0x4Bu, 0LL);
  }
  else
  {
    Event = (wil::details *)CreateEventExW(0LL, 0LL, 0, 0x1F0003u);
    if ( Event )
    {
      GetLastError();
      wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::reset(
        this + 17,
        Event);
      LastErrorFailHr = 0;
    }
    else
    {
      LastErrorFailHr = wil::details::GetLastErrorFailHr(v5);
    }
    if ( LastErrorFailHr < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, LastErrorFailHr, 0x4Du, 0LL);
  }
  return (unsigned int)LastErrorFailHr;
}
