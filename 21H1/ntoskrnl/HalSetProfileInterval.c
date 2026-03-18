/*
 * XREFs of HalSetProfileInterval @ 0x1404B9200
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HalSetProfileInterval(unsigned int a1)
{
  unsigned int v2; // [rsp+30h] [rbp+8h] BYREF

  v2 = a1;
  if ( (*((int (__fastcall **)(_QWORD, unsigned int *))HalpProfileInterface[0] + 3))(0LL, &v2) >= 0 )
    return v2;
  else
    return 0LL;
}
