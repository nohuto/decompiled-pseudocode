/*
 * XREFs of sub_1800B522B @ 0x1800B522B
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800B515C @ 0x1800B515C (sub_1800B515C.c)
 */

__int64 __fastcall sub_1800B522B(__int64 a1, __int64 a2)
{
  int v3; // eax

  sub_1800B515C(*(_QWORD *)(a2 + 32), *(char **)(a2 + 64), *(_QWORD *)(a2 + 72));
  v3 = *(_DWORD *)(a2 + 80);
  if ( v3 >= 0 )
    v3 = -2147024322;
  *(_DWORD *)(a2 + 80) = v3;
  return 0LL;
}
