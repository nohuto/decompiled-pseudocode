/*
 * XREFs of sub_1C004E878 @ 0x1C004E878
 * Callers:
 *     sub_1C004C954 @ 0x1C004C954 (sub_1C004C954.c)
 * Callees:
 *     sub_1C0004060 @ 0x1C0004060 (sub_1C0004060.c)
 */

LONG __fastcall sub_1C004E878(__int64 a1, __int64 a2, char a3)
{
  struct _KEVENT *v3; // rdi

  v3 = (struct _KEVENT *)(a2 + 2888);
  KeWaitForSingleObject((PVOID)(a2 + 2888), Executive, 0, 0, 0LL);
  if ( !*(_DWORD *)(a2 + 2912) && !*(_BYTE *)(a2 + 2916) )
    *(_QWORD *)(a2 + 2880) = sub_1C0004060(a1, a2 + 200, a2, 1129280371, 0);
  if ( a3 == 1 )
    ++*(_DWORD *)(a2 + 2912);
  else
    *(_BYTE *)(a2 + 2916) = 1;
  return KeSetEvent(v3, 0, 0);
}
