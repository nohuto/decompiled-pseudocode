/*
 * XREFs of CcFreeVacbArray @ 0x1408641A4
 * Callers:
 *     CcDereferenceVacbArray @ 0x1404E5F80 (CcDereferenceVacbArray.c)
 * Callees:
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 */

void __fastcall CcFreeVacbArray(_DWORD *a1)
{
  if ( a1[1] )
    KeBugCheckEx(0x34u, 0x25EuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  ExFreePoolWithTag(a1, 0x61566356u);
}
