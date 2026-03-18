/*
 * XREFs of MmDeleteTeb @ 0x140605648
 * Callers:
 *     PspInsertThread @ 0x1406AE2E4 (PspInsertThread.c)
 *     PspAllocateThread @ 0x1406AF6DC (PspAllocateThread.c)
 *     PspExitThread @ 0x1406B05E0 (PspExitThread.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140205370 (KiUnstackDetachProcess.c)
 *     MiObtainReferencedVadEx @ 0x14020E520 (MiObtainReferencedVadEx.c)
 *     KiStackAttachProcess @ 0x14024F890 (KiStackAttachProcess.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     MiFreeToSubAllocatedRegion @ 0x1406056FC (MiFreeToSubAllocatedRegion.c)
 */

__int64 __fastcall MmDeleteTeb(_KPROCESS *a1, unsigned __int64 a2)
{
  volatile signed __int32 *v3; // rax
  int v5; // [rsp+20h] [rbp-48h] BYREF
  _OWORD v6[3]; // [rsp+28h] [rbp-40h] BYREF

  memset(v6, 0, sizeof(v6));
  KiStackAttachProcess(a1, 0LL, (__int64)v6);
  v3 = MiObtainReferencedVadEx(a2, 0, &v5);
  if ( v3 )
    MiFreeToSubAllocatedRegion((PVOID)v3);
  return KiUnstackDetachProcess((__int64)v6, 0LL);
}
