/*
 * XREFs of ?ReleaseD2DResources@CD2DPrimitiveProperties@@UEAAXXZ @ 0x180249590
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CD2DPrimitiveProperties::ReleaseD2DResources(CD2DPrimitiveProperties *this)
{
  __int64 v2; // rcx

  v2 = *((_QWORD *)this + 10);
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
    *((_QWORD *)this + 10) = 0LL;
  }
}
