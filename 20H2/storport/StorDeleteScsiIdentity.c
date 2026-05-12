/*
 * XREFs of StorDeleteScsiIdentity @ 0x1C00184D8
 * Callers:
 *     RaidUnitFreeResources @ 0x1C0015B28 (RaidUnitFreeResources.c)
 *     RaidDeleteBusEnumerator @ 0x1C0016540 (RaidDeleteBusEnumerator.c)
 *     RaidBusEnumeratorProcessBusUnit @ 0x1C00183BC (RaidBusEnumeratorProcessBusUnit.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall StorDeleteScsiIdentity(__int64 a1)
{
  void *v2; // rcx
  void *v3; // rcx
  void *v4; // rcx
  void *v5; // rcx
  void *v6; // rcx
  __int64 result; // rax

  v2 = *(void **)a1;
  if ( v2 )
    ExFreePoolWithTag(v2, 0x32316152u);
  v3 = *(void **)(a1 + 16);
  if ( v3 )
    ExFreePoolWithTag(v3, 0x53446152u);
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_DWORD *)(a1 + 8) = 0;
  v4 = *(void **)(a1 + 32);
  if ( v4 )
    ExFreePoolWithTag(v4, 0x32316152u);
  v5 = *(void **)(a1 + 40);
  if ( v5 )
    ExFreePoolWithTag(v5, 0x32316152u);
  v6 = *(void **)(a1 + 48);
  if ( v6 )
    ExFreePoolWithTag(v6, 0x32316152u);
  result = 0LL;
  *(_OWORD *)a1 = 0LL;
  *(_OWORD *)(a1 + 16) = 0LL;
  *(_OWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  return result;
}
