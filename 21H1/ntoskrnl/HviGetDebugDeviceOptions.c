/*
 * XREFs of HviGetDebugDeviceOptions @ 0x1405B9260
 * Callers:
 *     <none>
 * Callees:
 *     HviIsHypervisorVendorMicrosoft @ 0x1403AF360 (HviIsHypervisorVendorMicrosoft.c)
 */

char __fastcall HviGetDebugDeviceOptions(unsigned __int64 *a1)
{
  unsigned __int64 v2; // rax

  LOBYTE(v2) = HviIsHypervisorVendorMicrosoft();
  if ( (_BYTE)v2 )
  {
    v2 = __readmsr(0x400000FFu);
    *a1 = v2;
  }
  else
  {
    *a1 = 0LL;
  }
  return v2;
}
