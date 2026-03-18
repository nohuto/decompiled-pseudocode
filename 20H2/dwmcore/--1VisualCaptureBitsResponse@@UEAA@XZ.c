/*
 * XREFs of ??1VisualCaptureBitsResponse@@UEAA@XZ @ 0x18005061C
 * Callers:
 *     ??_GVisualCaptureBitsResponse@@UEAAPEAXI@Z @ 0x1800504E0 (--_GVisualCaptureBitsResponse@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x180051D10 (--1-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-CloseHandle@details@wil@@YAX0@ZU-$integr.c)
 */

void __fastcall VisualCaptureBitsResponse::~VisualCaptureBitsResponse(VisualCaptureBitsResponse *this)
{
  *(_QWORD *)this = &VisualCaptureBitsResponse::`vftable';
  wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>((char *)this + 1720);
  CaptureBitsResponse::~CaptureBitsResponse(this);
}
