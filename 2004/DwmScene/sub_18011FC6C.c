/*
 * XREFs of sub_18011FC6C @ 0x18011FC6C
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000C9AC @ 0x18000C9AC (sub_18000C9AC.c)
 */

__int64 __fastcall sub_18011FC6C(__int64 a1, __int64 a2)
{
  _WORD *v3; // rcx
  __int64 v4; // rbx

  **(_BYTE **)(a2 + 128) = 1;
  v3 = *(_WORD **)(a2 + 112);
  v4 = *(_QWORD *)(a2 + 32);
  if ( v3 )
    sub_18000C9AC(v3, *(_QWORD *)(a2 + 120), v4 + 24);
  *(_DWORD *)(a2 + 112) = *(_DWORD *)(v4 + 28);
  return 0LL;
}
