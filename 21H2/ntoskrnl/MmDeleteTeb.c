/*
 * XREFs of MmDeleteTeb @ 0x1406E93D0
 * Callers:
 *     PspInsertThread @ 0x140649028 (PspInsertThread.c)
 *     PspExitThread @ 0x14064A838 (PspExitThread.c)
 *     PspAllocateThread @ 0x14064B048 (PspAllocateThread.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140207000 (KiUnstackDetachProcess.c)
 *     MiObtainReferencedVadEx @ 0x14021B2A0 (MiObtainReferencedVadEx.c)
 *     KiStackAttachProcess @ 0x14025C2E0 (KiStackAttachProcess.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     MiFreeToSubAllocatedRegion @ 0x1406E9484 (MiFreeToSubAllocatedRegion.c)
 */

__int64 __fastcall MmDeleteTeb(_KPROCESS *a1, unsigned __int64 a2, __int64 a3, _DWORD *a4)
{
  volatile signed __int32 *v5; // rax
  int v7; // [rsp+20h] [rbp-48h] BYREF
  _OWORD v8[3]; // [rsp+28h] [rbp-40h] BYREF

  memset(v8, 0, sizeof(v8));
  KiStackAttachProcess(a1, 0LL, (__int64)v8, a4);
  v5 = MiObtainReferencedVadEx(a2, 0, &v7);
  if ( v5 )
    MiFreeToSubAllocatedRegion((PVOID)v5);
  return KiUnstackDetachProcess((__int64)v8, 0);
}
