/*
 * XREFs of sub_18011FF84 @ 0x18011FF84
 * Callers:
 *     sub_18011E5B0 @ 0x18011E5B0 (sub_18011E5B0.c)
 *     sub_18011EA6C @ 0x18011EA6C (sub_18011EA6C.c)
 * Callees:
 *     sub_18001277C @ 0x18001277C (sub_18001277C.c)
 *     sub_18011CC9C @ 0x18011CC9C (sub_18011CC9C.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18011FF84(__int64 a1, __int64 a2)
{
  _QWORD *v4; // rcx

  *(_DWORD *)a1 = *(_DWORD *)a2;
  v4 = (_QWORD *)(a1 + 8);
  v4[2] = 0LL;
  v4[3] = 0LL;
  sub_18001277C(v4, a2 + 8);
  *(_DWORD *)(a1 + 40) = *(_DWORD *)(a2 + 40);
  *(_QWORD *)(a1 + 48) = *(_QWORD *)(a2 + 48);
  *(_DWORD *)(a1 + 56) = *(_DWORD *)(a2 + 56);
  *(_BYTE *)(a1 + 60) = *(_BYTE *)(a2 + 60);
  sub_18011CC9C(a1 + 64, a2 + 64);
  return a1;
}
