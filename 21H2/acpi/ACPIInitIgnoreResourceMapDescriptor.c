/*
 * XREFs of ACPIInitIgnoreResourceMapDescriptor @ 0x1C005E810
 * Callers:
 *     PnpiBiosAddressToIoDescriptor @ 0x1C0097330 (PnpiBiosAddressToIoDescriptor.c)
 *     PnpiBiosAddressQuadToIoDescriptor @ 0x1C00974BC (PnpiBiosAddressQuadToIoDescriptor.c)
 *     PnpiBiosAddressDoubleToIoDescriptor @ 0x1C009888C (PnpiBiosAddressDoubleToIoDescriptor.c)
 *     PnpiBiosAddressExtendedToIoDescriptor @ 0x1C00B2EAC (PnpiBiosAddressExtendedToIoDescriptor.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall ACPIInitIgnoreResourceMapDescriptor(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *result; // rax
  _QWORD *v7; // rcx

  result = (_QWORD *)ExAllocatePool2(256LL, 40LL, 1383097153LL);
  result[4] = a3;
  result[2] = a1;
  result[3] = a2;
  v7 = (_QWORD *)qword_1C0081178;
  if ( *(__int64 **)qword_1C0081178 != &AcpiIgnoreResourceMapValidationList )
    __fastfail(3u);
  *result = &AcpiIgnoreResourceMapValidationList;
  result[1] = v7;
  *v7 = result;
  qword_1C0081178 = (__int64)result;
  return result;
}
