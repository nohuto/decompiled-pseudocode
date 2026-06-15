/*
 * XREFs of ?GetVpoContext@CSaDeviceProxy@@UEAAJPEAPEAUIVpoContext@@@Z @ 0x1800E5F70
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074B80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSaDeviceProxy::GetVpoContext(CSaDeviceProxy *this, struct IVpoContext **a2)
{
  HRESULT v4; // ebx
  struct IVpoContext *v5; // rax
  LPVOID v6; // rcx
  LPVOID v8; // [rsp+50h] [rbp+18h] BYREF

  v8 = 0LL;
  v4 = CoCreateInstance(
         &GUID_d9aaaf82_03b1_4f9f_9fd5_07d2a42c8531,
         0LL,
         0x17u,
         &GUID_4f4f92b5_6ded_4e9b_a93f_013891b3a8b7,
         &v8);
  if ( v4 < 0
    || (v4 = (*(__int64 (__fastcall **)(LPVOID, _QWORD, _QWORD))(*(_QWORD *)v8 + 24LL))(v8, 0LL, *((_QWORD *)this + 9)),
        v4 < 0) )
  {
    v6 = v8;
  }
  else
  {
    v5 = (struct IVpoContext *)v8;
    v6 = 0LL;
    v8 = 0LL;
    *a2 = v5;
  }
  if ( v6 )
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v6 + 16LL))(v6);
  return (unsigned int)v4;
}
