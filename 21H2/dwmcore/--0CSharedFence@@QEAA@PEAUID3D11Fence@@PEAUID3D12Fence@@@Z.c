/*
 * XREFs of ??0CSharedFence@@QEAA@PEAUID3D11Fence@@PEAUID3D12Fence@@@Z @ 0x18027CA3C
 * Callers:
 *     ?CreateSharedFence@CD3DDevice@@QEAAJAEBVCResourceTag@@_KPEAPEAVCSharedFence@@@Z @ 0x18027D8EC (-CreateSharedFence@CD3DDevice@@QEAAJAEBVCResourceTag@@_KPEAPEAVCSharedFence@@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

CSharedFence *__fastcall CSharedFence::CSharedFence(CSharedFence *this, struct ID3D11Fence *a2, struct ID3D12Fence *a3)
{
  *((_DWORD *)this + 2) = 0;
  *(_QWORD *)this = &CSharedFence::`vftable';
  *((_QWORD *)this + 2) = a2;
  if ( a2 )
    ((void (__fastcall *)(struct ID3D11Fence *))a2->lpVtbl->AddRef)(a2);
  *((_QWORD *)this + 3) = a3;
  if ( a3 )
    ((void (__fastcall *)(struct ID3D12Fence *))a3->lpVtbl->AddRef)(a3);
  return this;
}
