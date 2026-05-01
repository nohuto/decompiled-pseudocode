/*
 * XREFs of ?ShouldHandleActivation@KioskPositioner@@UEAAHPEAUIApplicationView@@PEAUIUnknown@@@Z @ 0x18007FA00
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall KioskPositioner::ShouldHandleActivation(
        KioskPositioner *this,
        struct IApplicationView *a2,
        struct IUnknown *a3)
{
  unsigned int v3; // ebx

  v3 = 0;
  if ( *((_BYTE *)this + 520)
    && (*((_BYTE *)this + 521)
     || (*(unsigned __int8 (__fastcall **)(_QWORD, struct IApplicationView *, struct IUnknown *))(**((_QWORD **)this + 66)
                                                                                                + 8LL))(
          *((_QWORD *)this + 66),
          a2,
          a3)) )
  {
    return 1;
  }
  return v3;
}
