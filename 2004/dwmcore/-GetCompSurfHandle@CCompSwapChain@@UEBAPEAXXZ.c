/*
 * XREFs of ?GetCompSurfHandle@CCompSwapChain@@UEBAPEAXXZ @ 0x18024F490
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180024DE0 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCompSwapChain::GetCompSurfHandle(CCompSwapChain *this)
{
  int (__fastcall ***v1)(_QWORD, GUID *, __int64 *); // rcx
  __int64 v2; // rbx
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  v1 = (int (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)this + 4);
  v2 = 0LL;
  v5 = 0LL;
  if ( v1 )
  {
    v4 = 0LL;
    if ( (**v1)(v1, &GUID_7652c85a_0df5_4567_bcdd_8176a332b99b, &v4) >= 0 )
      (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v4 + 88LL))(v4, &v5);
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v4);
    return v5;
  }
  return v2;
}
