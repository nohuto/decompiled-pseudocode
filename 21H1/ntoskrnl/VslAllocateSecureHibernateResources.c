/*
 * XREFs of VslAllocateSecureHibernateResources @ 0x14088A74C
 * Callers:
 *     PopAllocateHiberContext @ 0x140763244 (PopAllocateHiberContext.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x14032A7E0 (VslpEnterIumSecureMode.c)
 *     PoSetHiberRange @ 0x1403847F0 (PoSetHiberRange.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     memset @ 0x140408F80 (memset.c)
 */

__int64 __fastcall VslAllocateSecureHibernateResources(PVOID MemoryMap)
{
  NTSTATUS v2; // ebx
  ULONG_PTR v4[14]; // [rsp+30h] [rbp-88h] BYREF

  memset(v4, 0, 0x68uLL);
  v2 = VslpEnterIumSecureMode(2u, 35, 0, (__int64)v4);
  if ( v2 >= 0 )
    PoSetHiberRange(MemoryMap, 0xC000u, (PVOID)v4[3], v4[2], 0x526C7356u);
  return (unsigned int)v2;
}
