/*
 * XREFs of ?GetMMDevice@EndpointDevice@@UEAAJPEAPEAUIMMDevice@@@Z @ 0x18013E930
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800741C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall EndpointDevice::GetMMDevice(EndpointDevice *this, struct IMMDevice **a2)
{
  __int64 v2; // rcx

  if ( a2 )
  {
    *a2 = (struct IMMDevice *)*((_QWORD *)this + 3);
    v2 = *((_QWORD *)this + 3);
    if ( v2 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  }
  return 0LL;
}
