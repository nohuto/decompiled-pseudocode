/*
 * XREFs of sub_180044E54 @ 0x180044E54
 * Callers:
 *     atexit @ 0x180044EE8 (atexit.c)
 * Callees:
 *     _lock @ 0x1800453E5 (_lock.c)
 *     _unlock @ 0x1800453F1 (_unlock.c)
 *     __dllonexit @ 0x1800453FD (__dllonexit.c)
 *     _guard_dispatch_icall_nop @ 0x180046860 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180044E54(__int64 a1)
{
  __int64 v3; // rbx
  void *v4; // [rsp+38h] [rbp+10h] BYREF
  __int64 v5; // [rsp+40h] [rbp+18h] BYREF

  v4 = Block;
  if ( Block == (void *)-1LL )
    return ((__int64 (*)(void))onexit)();
  lock(8LL);
  v4 = Block;
  v5 = qword_1800B3D20;
  v3 = _dllonexit(a1, &v4, &v5);
  Block = v4;
  qword_1800B3D20 = v5;
  unlock(8LL);
  return v3;
}
