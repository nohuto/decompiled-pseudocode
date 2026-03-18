/*
 * XREFs of PsPicoSystemCallDispatch @ 0x14090E20C
 * Callers:
 *     PsPicoAltSystemCallDispatch @ 0x140581180 (PsPicoAltSystemCallDispatch.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 */

__int64 __fastcall PsPicoSystemCallDispatch(__int64 a1)
{
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF

  v3 = a1;
  ((void (__fastcall *)(__int64 *))qword_140C1DEA8)(&v3);
  return *(_QWORD *)(a1 + 48);
}
