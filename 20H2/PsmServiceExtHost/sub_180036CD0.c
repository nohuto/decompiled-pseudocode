/*
 * XREFs of sub_180036CD0 @ 0x180036CD0
 * Callers:
 *     sub_180036BA0 @ 0x180036BA0 (sub_180036BA0.c)
 *     sub_180041E9C @ 0x180041E9C (sub_180041E9C.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180036CD0(__int64 a1, int *a2)
{
  __int64 v3; // rax
  __int64 v5; // rcx

  v3 = *a2 + 3LL;
  if ( *(_DWORD *)(a1 + 24 * v3) != -1 )
    return 2147943642LL;
  *(_OWORD *)(a1 + 24 * v3) = *(_OWORD *)a2;
  *(_QWORD *)(a1 + 24 * v3 + 16) = *((_QWORD *)a2 + 2);
  if ( *((_QWORD *)a2 + 1) == 0xFFFFFFFFLL )
  {
    v5 = *(_QWORD *)(a1 + 1272);
    _bittestandset64(&v5, *a2);
    *(_QWORD *)(a1 + 1272) = v5;
  }
  return 0LL;
}
