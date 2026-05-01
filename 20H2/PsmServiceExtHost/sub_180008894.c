/*
 * XREFs of sub_180008894 @ 0x180008894
 * Callers:
 *     sub_18000879C @ 0x18000879C (sub_18000879C.c)
 *     sub_1800096AC @ 0x1800096AC (sub_1800096AC.c)
 *     sub_18007BF28 @ 0x18007BF28 (sub_18007BF28.c)
 *     sub_180081D54 @ 0x180081D54 (sub_180081D54.c)
 * Callees:
 *     sub_180008938 @ 0x180008938 (sub_180008938.c)
 *     sub_18000895C @ 0x18000895C (sub_18000895C.c)
 *     sub_180027374 @ 0x180027374 (sub_180027374.c)
 */

BOOLEAN __fastcall sub_180008894(__int64 a1)
{
  void *v2; // rcx
  void *v3; // rcx

  sub_180027374();
  if ( !(unsigned int)sub_180008938(a1 + 8) )
    sub_18000895C(a1);
  v2 = *(void **)(a1 + 160);
  if ( v2 )
    NtClose(v2);
  v3 = *(void **)(a1 + 168);
  if ( v3 )
    NtClose(v3);
  if ( (*(_BYTE *)(a1 + 128) & 2) == 0 && (*(_DWORD *)(a1 + 104) || *(_DWORD *)(a1 + 108)) )
    NtDeleteWnfStateName();
  return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, (PVOID)a1);
}
