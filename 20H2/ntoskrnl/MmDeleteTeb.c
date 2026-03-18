/*
 * XREFs of MmDeleteTeb @ 0x140658D4C
 * Callers:
 *     PspExitThread @ 0x14068390C (PspExitThread.c)
 *     PspAllocateThread @ 0x14068411C (PspAllocateThread.c)
 *     PspInsertThread @ 0x1406867E0 (PspInsertThread.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140268320 (KiUnstackDetachProcess.c)
 *     MiObtainReferencedVadEx @ 0x14027CA80 (MiObtainReferencedVadEx.c)
 *     KiStackAttachProcess @ 0x1402D6FA0 (KiStackAttachProcess.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     MiFreeToSubAllocatedRegion @ 0x140658E00 (MiFreeToSubAllocatedRegion.c)
 */

__int64 __fastcall MmDeleteTeb(_KPROCESS *a1, unsigned __int64 a2)
{
  volatile signed __int32 *v3; // rax
  int v5; // [rsp+20h] [rbp-48h] BYREF
  _OWORD v6[3]; // [rsp+28h] [rbp-40h] BYREF

  memset(v6, 0, sizeof(v6));
  KiStackAttachProcess(a1, 0, (__int64)v6);
  v3 = MiObtainReferencedVadEx(a2, 0, &v5);
  if ( v3 )
    MiFreeToSubAllocatedRegion((PVOID)v3);
  return KiUnstackDetachProcess((__int64)v6, 0);
}
