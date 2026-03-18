/*
 * XREFs of KeLeaveGuardedRegionThread @ 0x1403CF934
 * Callers:
 *     MiCreatePagingFile @ 0x14084AA8C (MiCreatePagingFile.c)
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 */

char __fastcall KeLeaveGuardedRegionThread(__int64 a1)
{
  _QWORD *v2; // rax

  if ( (*(_WORD *)(a1 + 486))++ == 0xFFFF )
  {
    v2 = (_QWORD *)(a1 + 152);
    if ( (_QWORD *)*v2 != v2 )
      LOBYTE(v2) = KiCheckForKernelApcDelivery();
  }
  return (char)v2;
}
