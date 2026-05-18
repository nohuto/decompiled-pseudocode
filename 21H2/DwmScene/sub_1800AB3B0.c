/*
 * XREFs of sub_1800AB3B0 @ 0x1800AB3B0
 * Callers:
 *     sub_1800AB2E0 @ 0x1800AB2E0 (sub_1800AB2E0.c)
 * Callees:
 *     sub_180031070 @ 0x180031070 (sub_180031070.c)
 *     j_j__o_free @ 0x180123E3C (j_j__o_free.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

__int64 *__fastcall sub_1800AB3B0(_QWORD *a1, __int64 *a2, __int64 *a3)
{
  __int64 i; // rbx
  __int64 *v5; // rax
  __int64 j; // rdx
  __int64 *v7; // rdi
  volatile signed __int32 *v8; // rcx

  i = a3[2];
  v5 = a3;
  if ( *(_BYTE *)(i + 25) )
  {
    for ( i = a3[1]; !*(_BYTE *)(i + 25) && v5 == *(__int64 **)(i + 16); i = *(_QWORD *)(i + 8) )
      v5 = (__int64 *)i;
  }
  else
  {
    for ( j = *(_QWORD *)i; !*(_BYTE *)(j + 25); j = *(_QWORD *)j )
      i = j;
  }
  v7 = sub_180031070(a1, a3);
  v8 = (volatile signed __int32 *)v7[5];
  if ( v8 && _InterlockedExchangeAdd(v8 + 3, 0xFFFFFFFF) == 1 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v8 + 8LL))(v8);
  j_j__o_free(v7);
  *a2 = i;
  return a2;
}
