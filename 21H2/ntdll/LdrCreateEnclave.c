/*
 * XREFs of LdrCreateEnclave @ 0x1800CCC80
 * Callers:
 *     <none>
 * Callees:
 *     ZwFreeVirtualMemory @ 0x18009DA00 (ZwFreeVirtualMemory.c)
 *     ZwCreateEnclave @ 0x18009EB50 (ZwCreateEnclave.c)
 *     LdrpCreateSoftwareEnclave @ 0x1800CD2FC (LdrpCreateSoftwareEnclave.c)
 *     LdrpLogVsmEnclaveLdrCreateEnclaveTelemetry @ 0x1800CFEB0 (LdrpLogVsmEnclaveLdrCreateEnclaveTelemetry.c)
 */

__int64 __fastcall LdrCreateEnclave(__int64 a1, __int64 *a2, __int64 a3, __int64 a4, __int64 a5, unsigned int a6)
{
  int Enclave; // ebx
  __int64 v10; // [rsp+58h] [rbp-10h]

  v10 = *a2;
  Enclave = ZwCreateEnclave();
  if ( Enclave >= 0 )
  {
    if ( a6 - 16 > 1 || (Enclave = LdrpCreateSoftwareEnclave(v10, a4, a6), Enclave >= 0) )
      *a2 = v10;
    else
      ZwFreeVirtualMemory();
  }
  if ( a6 == 16 )
    LdrpLogVsmEnclaveLdrCreateEnclaveTelemetry(16LL, (unsigned int)Enclave);
  return (unsigned int)Enclave;
}
