/*
 * XREFs of ExpInitializeSessionDriver @ 0x1406EB324
 * Callers:
 *     NtSetSystemInformation @ 0x1407D6120 (NtSetSystemInformation.c)
 * Callees:
 *     MmSessionSetUnloadAddress @ 0x14025E078 (MmSessionSetUnloadAddress.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall ExpInitializeSessionDriver(__int64 (__fastcall *a1)(_QWORD *, _QWORD), __int64 a2)
{
  int v4; // ebx
  _QWORD v6[43]; // [rsp+20h] [rbp-158h] BYREF

  memset(v6, 0, 0x150uLL);
  v6[3] = a2;
  v4 = a1(v6, 0LL);
  if ( v4 >= 0 )
    MmSessionSetUnloadAddress((__int64)v6);
  return (unsigned int)v4;
}
