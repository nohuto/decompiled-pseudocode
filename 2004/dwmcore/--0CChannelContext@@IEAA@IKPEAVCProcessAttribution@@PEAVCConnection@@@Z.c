/*
 * XREFs of ??0CChannelContext@@IEAA@IKPEAVCProcessAttribution@@PEAVCConnection@@@Z @ 0x180096104
 * Callers:
 *     ?Create@CChannelContext@@SAJIK_KPEAVCConnection@@PEAPEAV1@@Z @ 0x1800961FC (-Create@CChannelContext@@SAJIK_KPEAVCConnection@@PEAPEAV1@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 */

CChannelContext *__fastcall CChannelContext::CChannelContext(
        CChannelContext *this,
        int a2,
        int a3,
        struct CProcessAttribution *a4,
        struct CConnection *a5)
{
  CChannelContext *result; // rax

  *((_DWORD *)this + 2) = 0;
  *(_QWORD *)this = &CChannelContext::`vftable';
  *((_QWORD *)this + 4) = a5;
  if ( a5 )
    (**(void (__fastcall ***)(struct CConnection *))a5)(a5);
  *((_DWORD *)this + 4) = a2;
  *((_DWORD *)this + 5) = a3;
  *((_QWORD *)this + 5) = a4;
  if ( a4 )
    _InterlockedIncrement((volatile signed __int32 *)a4 + 2);
  *((_QWORD *)this + 3) = 0LL;
  result = this;
  *((_QWORD *)this + 6) = 0LL;
  *((_DWORD *)this + 19) = 0;
  *((_DWORD *)this + 20) = 0;
  *((_DWORD *)this + 21) = 0;
  *((_DWORD *)this + 2) = 1;
  return result;
}
