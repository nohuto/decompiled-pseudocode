/*
 * XREFs of MmDeleteTeb @ 0x14063A688
 * Callers:
 *     PspInsertThread @ 0x1406F3184 (PspInsertThread.c)
 *     PspAllocateThread @ 0x14070559C (PspAllocateThread.c)
 *     PspExitThread @ 0x1407064A0 (PspExitThread.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x14025E290 (KiUnstackDetachProcess.c)
 *     MiObtainReferencedVadEx @ 0x140267570 (MiObtainReferencedVadEx.c)
 *     KiStackAttachProcess @ 0x1402A88C0 (KiStackAttachProcess.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     MiFreeToSubAllocatedRegion @ 0x14063A73C (MiFreeToSubAllocatedRegion.c)
 */

__int64 __fastcall MmDeleteTeb(_KPROCESS *a1, unsigned __int64 a2, __int64 a3, _DWORD *a4)
{
  volatile signed __int32 *v5; // rax
  __int64 v6; // r8
  _DWORD *v7; // r9
  int v9; // [rsp+20h] [rbp-48h] BYREF
  _OWORD v10[3]; // [rsp+28h] [rbp-40h] BYREF

  memset(v10, 0, sizeof(v10));
  KiStackAttachProcess(a1, 0LL, (__int64)v10, a4);
  v5 = MiObtainReferencedVadEx(a2, 0, &v9);
  if ( v5 )
    MiFreeToSubAllocatedRegion((PVOID)v5);
  return KiUnstackDetachProcess((__int64)v10, 0LL, v6, v7);
}
