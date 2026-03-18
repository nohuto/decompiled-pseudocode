/*
 * XREFs of MmDeleteTeb @ 0x14079EE84
 * Callers:
 *     PspInsertThread @ 0x140701218 (PspInsertThread.c)
 *     PspExitThread @ 0x1407A0088 (PspExitThread.c)
 *     PspAllocateThread @ 0x1407A34A0 (PspAllocateThread.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x1402D0930 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x14030D5C0 (KiStackAttachProcess.c)
 *     MiObtainReferencedVadEx @ 0x14030E7C0 (MiObtainReferencedVadEx.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     MiFreeToSubAllocatedRegion @ 0x14079EF3C (MiFreeToSubAllocatedRegion.c)
 */

__int64 __fastcall MmDeleteTeb(_KPROCESS *a1, unsigned __int64 a2, __int64 a3, _DWORD *a4)
{
  void *v5; // rax
  int v7; // [rsp+20h] [rbp-48h] BYREF
  _OWORD v8[3]; // [rsp+28h] [rbp-40h] BYREF

  memset(v8, 0, sizeof(v8));
  KiStackAttachProcess(a1, 0LL, (__int64)v8, a4);
  v5 = (void *)MiObtainReferencedVadEx(a2, 0, &v7);
  if ( v5 )
    MiFreeToSubAllocatedRegion(v5);
  return KiUnstackDetachProcess((__int64)v8, 0LL);
}
