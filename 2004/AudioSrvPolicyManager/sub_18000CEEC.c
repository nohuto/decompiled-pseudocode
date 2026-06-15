/*
 * XREFs of sub_18000CEEC @ 0x18000CEEC
 * Callers:
 *     sub_18000CDD8 @ 0x18000CDD8 (sub_18000CDD8.c)
 *     sub_180033438 @ 0x180033438 (sub_180033438.c)
 * Callees:
 *     sub_18000A174 @ 0x18000A174 (sub_18000A174.c)
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

int *__fastcall sub_18000CEEC(int **a1)
{
  int *result; // rax
  volatile signed __int32 *v3; // rdx
  __int64 v4; // rdi

  result = *a1;
  v3 = *a1 - 6;
  v4 = *(_QWORD *)v3;
  if ( *((_DWORD *)v3 + 2) )
  {
    if ( *((int *)v3 + 4) >= 0 )
    {
      if ( _InterlockedExchangeAdd(v3 + 4, 0xFFFFFFFF) <= 1 )
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v3 + 8LL))(*(_QWORD *)v3);
      result = (int *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 24LL))(v4) + 24);
      *a1 = result;
    }
    else
    {
      if ( *(result - 3) < 0 )
        sub_18000A174(-2147024809);
      *(result - 4) = 0;
      result = *a1;
      *(_WORD *)*a1 = 0;
    }
  }
  return result;
}
