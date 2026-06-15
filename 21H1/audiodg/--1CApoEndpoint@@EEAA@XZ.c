/*
 * XREFs of ??1CApoEndpoint@@EEAA@XZ @ 0x140032520
 * Callers:
 *     ??_GCApoEndpoint@@EEAAPEAXI@Z @ 0x140032630 (--_GCApoEndpoint@@EEAAPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x14001F470 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CApoEndpoint::~CApoEndpoint(CApoEndpoint *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx

  *(_QWORD *)this = &CApoEndpoint::`vftable';
  *((_QWORD *)this + 1) = &CApoEndpoint::`vftable'{for `IAudioEndpointRT'};
  *((_QWORD *)this + 2) = &CApoEndpoint::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IAudioOutputEndpointRT>'};
  if ( *((_DWORD *)this + 18) )
  {
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 7) + 32LL))(*((_QWORD *)this + 7));
    *((_DWORD *)this + 18) = 0;
  }
  if ( *((_QWORD *)this + 6) )
  {
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 5) + 48LL))(*((_QWORD *)this + 5));
    *((_QWORD *)this + 6) = 0LL;
  }
  v2 = *((_QWORD *)this + 8);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  v3 = *((_QWORD *)this + 7);
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  v4 = *((_QWORD *)this + 5);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  CoTaskMemFree(*((LPVOID *)this + 4));
  *((_QWORD *)this + 4) = 0LL;
  *((_DWORD *)this + 7) = -1073741823;
}
