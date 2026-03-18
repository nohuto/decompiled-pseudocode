/*
 * XREFs of MiFlushWaitForReadInProgress @ 0x140597FAC
 * Callers:
 *     MiFlushSectionInternal @ 0x140329730 (MiFlushSectionInternal.c)
 * Callees:
 *     MiInitializePageFaultPacket @ 0x14026C744 (MiInitializePageFaultPacket.c)
 *     MiObtainProtoReference @ 0x14027449C (MiObtainProtoReference.c)
 *     MiWaitForCollidedFaultComplete @ 0x14027FEF8 (MiWaitForCollidedFaultComplete.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall MiFlushWaitForReadInProgress(__int64 a1, __int64 a2, unsigned __int8 a3)
{
  int v7[4]; // [rsp+30h] [rbp-C8h] BYREF
  unsigned __int64 v8[18]; // [rsp+40h] [rbp-B8h] BYREF

  memset(v8, 0, 0x88uLL);
  v7[0] = 1;
  MiInitializePageFaultPacket(0LL, 0LL, 0, 0LL, (__int64)v8);
  MiObtainProtoReference(a2, 1);
  return MiWaitForCollidedFaultComplete(v8, a1, a2, a3, v7);
}
