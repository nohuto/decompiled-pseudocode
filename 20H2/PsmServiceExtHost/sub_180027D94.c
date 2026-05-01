/*
 * XREFs of sub_180027D94 @ 0x180027D94
 * Callers:
 *     sub_18000C6B0 @ 0x18000C6B0 (sub_18000C6B0.c)
 *     sub_180018AF0 @ 0x180018AF0 (sub_180018AF0.c)
 *     sub_1800265B0 @ 0x1800265B0 (sub_1800265B0.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall sub_180027D94(__int64 *a1)
{
  __int64 v2; // rcx
  void *v3; // rcx
  void *v4; // rcx
  NTSTATUS result; // eax

  v2 = *a1;
  if ( v2 )
  {
    result = TpReleaseWork(v2);
    *a1 = 0LL;
  }
  v3 = (void *)a1[1];
  if ( v3 )
    result = NtClose(v3);
  v4 = (void *)a1[2];
  if ( v4 )
    return NtClose(v4);
  return result;
}
