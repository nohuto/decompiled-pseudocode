/*
 * XREFs of sub_180125615 @ 0x180125615
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000CA8C @ 0x18000CA8C (sub_18000CA8C.c)
 */

__int64 __fastcall sub_180125615(__int64 a1, __int64 a2)
{
  _WORD *v3; // rcx
  __int64 v4; // rbx

  **(_BYTE **)(a2 + 128) = 1;
  v3 = *(_WORD **)(a2 + 112);
  v4 = *(_QWORD *)(a2 + 40);
  if ( v3 )
    sub_18000CA8C(v3, *(_QWORD *)(a2 + 120), v4 + 24);
  *(_DWORD *)(a2 + 112) = *(_DWORD *)(v4 + 28);
  return 0LL;
}
