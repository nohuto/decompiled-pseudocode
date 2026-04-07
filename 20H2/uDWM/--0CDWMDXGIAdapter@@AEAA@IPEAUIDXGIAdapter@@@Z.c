/*
 * XREFs of ??0CDWMDXGIAdapter@@AEAA@IPEAUIDXGIAdapter@@@Z @ 0x180037CE4
 * Callers:
 *     ?Create@CDWMDXGIAdapter@@SAJPEAUIDXGIAdapter@@IPEAPEAV1@@Z @ 0x18003761C (-Create@CDWMDXGIAdapter@@SAJPEAUIDXGIAdapter@@IPEAPEAV1@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180056410 (_guard_dispatch_icall_nop.c)
 */

CDWMDXGIAdapter *__fastcall CDWMDXGIAdapter::CDWMDXGIAdapter(CDWMDXGIAdapter *this, int a2, struct IDXGIAdapter *a3)
{
  *(_QWORD *)this = &CMILRefCountBase::`vftable';
  *((_DWORD *)this + 2) = 0;
  *(_QWORD *)this = &CDWMDXGIAdapter::`vftable';
  *((_DWORD *)this + 4) = a2;
  *((_QWORD *)this + 44) = 0LL;
  *((_QWORD *)this + 45) = 0LL;
  *((_QWORD *)this + 46) = 0LL;
  *((_DWORD *)this + 94) = 0;
  *((_DWORD *)this + 86) = 0;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 3) = a3;
  ((void (__fastcall *)(struct IDXGIAdapter *))a3->lpVtbl->AddRef)(a3);
  return this;
}
