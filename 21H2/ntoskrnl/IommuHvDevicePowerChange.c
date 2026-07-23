/*
 * XREFs of IommuHvDevicePowerChange @ 0x1404D9F80
 * Callers:
 *     <none>
 * Callees:
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 */

__int64 __fastcall IommuHvDevicePowerChange(__int64 a1, __int64 a2, unsigned __int8 a3)
{
  __int64 v3; // rdi
  ULONG_PTR BugCheckParameter4; // rbx
  __int64 v5; // rcx
  int v6; // eax

  v3 = a2;
  BugCheckParameter4 = a3;
  if ( qword_140C4A300 )
  {
    v5 = *(unsigned int *)(a2 + 40);
    LOBYTE(a2) = a3;
    v6 = qword_140C4A300(v5, a2);
    if ( v6 == 3473497 )
      KeBugCheckEx(0x159u, 0x3002uLL, *(unsigned int *)(v3 + 40), (unsigned int)BugCheckParameter4, 0LL);
    if ( v6 < 0 )
      KeBugCheckEx(0x159u, 0x3201uLL, v6, *(unsigned int *)(v3 + 40), BugCheckParameter4);
  }
  return 0LL;
}
