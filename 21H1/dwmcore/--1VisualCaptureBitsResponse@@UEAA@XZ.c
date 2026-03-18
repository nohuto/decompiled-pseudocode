/*
 * XREFs of ??1VisualCaptureBitsResponse@@UEAA@XZ @ 0x18008C34C
 * Callers:
 *     ??_GVisualCaptureBitsResponse@@UEAAPEAXI@Z @ 0x18008C1D0 (--_GVisualCaptureBitsResponse@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18008C32C (--1-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-CloseHandle@details@wil@@YAX0@ZU-$integr.c)
 */

void __fastcall VisualCaptureBitsResponse::~VisualCaptureBitsResponse(wil::details **this, void *a2)
{
  *this = (wil::details *)&VisualCaptureBitsResponse::`vftable';
  wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(
    this + 215,
    a2);
  CaptureBitsResponse::~CaptureBitsResponse((CaptureBitsResponse *)this);
}
