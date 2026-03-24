/*
 * XREFs of ?Cleanup@BLTQUEUE@@QEAAXXZ @ 0x1C02FCA58
 * Callers:
 *     ??1BLTQUEUE@@QEAA@XZ @ 0x1C02FC8A4 (--1BLTQUEUE@@QEAA@XZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0028C00 (_guard_dispatch_icall_nop.c)
 *     ?SetIndirectSwapChainHandles@BLTQUEUE@@QEAAJPEAX@Z @ 0x1C02FF31C (-SetIndirectSwapChainHandles@BLTQUEUE@@QEAAJPEAX@Z.c)
 */

void __fastcall BLTQUEUE::Cleanup(BLTQUEUE *this)
{
  void (__fastcall ***v2)(_QWORD, _QWORD); // rcx

  if ( *((_QWORD *)this + 75) )
  {
    *((_QWORD *)this + 77) = KeGetCurrentThread();
    *((_BYTE *)this + 564) = 1;
    KeSetEvent((PRKEVENT)((char *)this + 512), 0, 0);
    ZwWaitForSingleObject(*((HANDLE *)this + 75), 0, 0LL);
    ZwClose(*((HANDLE *)this + 75));
    v2 = (void (__fastcall ***)(_QWORD, _QWORD))*((_QWORD *)this + 16);
    *((_QWORD *)this + 77) = 0LL;
    *((_QWORD *)this + 75) = 0LL;
    *((_QWORD *)this + 76) = 0LL;
    (**v2)(v2, 0LL);
    *((_QWORD *)this + 16) = 0LL;
    BLTQUEUE::SetIndirectSwapChainHandles(this, 0LL);
  }
}
