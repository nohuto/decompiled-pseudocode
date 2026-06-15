/*
 * XREFs of sub_18013C444 @ 0x18013C444
 * Callers:
 *     sub_1800F5B0C @ 0x1800F5B0C (sub_1800F5B0C.c)
 *     sub_1800F5F10 @ 0x1800F5F10 (sub_1800F5F10.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18013C444(int *a1)
{
  __int64 result; // rax

  if ( a1[a1[34] + 1] )
    return 2147758082LL;
  result = (*(__int64 (__fastcall **)(_QWORD, const char *, __int64))(**(_QWORD **)a1 + 32LL))(*(_QWORD *)a1, "}", 1LL);
  if ( (int)result >= 0 )
  {
    --a1[34];
    a1[35] = 1;
  }
  return result;
}
