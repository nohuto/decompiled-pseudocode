/*
 * XREFs of sub_1800B555D @ 0x1800B555D
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800B5130 @ 0x1800B5130 (sub_1800B5130.c)
 */

__int64 __fastcall sub_1800B555D(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx

  **(_BYTE **)(a2 + 128) = 1;
  v3 = *(_QWORD *)(a2 + 32);
  sub_1800B5130(v3, *(_WORD **)(a2 + 112), *(_QWORD *)(a2 + 120));
  *(_DWORD *)(a2 + 112) = *(_DWORD *)(v3 + 28);
  return 0LL;
}
