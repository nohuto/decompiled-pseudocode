/*
 * XREFs of sub_1800187F0 @ 0x1800187F0
 * Callers:
 *     sub_1800165CC @ 0x1800165CC (sub_1800165CC.c)
 * Callees:
 *     sub_180018764 @ 0x180018764 (sub_180018764.c)
 */

__int64 __fastcall sub_1800187F0(__int64 a1, __int64 a2)
{
  __int64 v4; // rax

  *(_DWORD *)a1 = *(_DWORD *)a2;
  *(_QWORD *)(a1 + 8) = *(_QWORD *)(a2 + 8);
  *(_DWORD *)(a1 + 16) = *(_DWORD *)(a2 + 16);
  *(_DWORD *)(a1 + 20) = *(_DWORD *)(a2 + 20);
  *(_BYTE *)(a1 + 24) = *(_BYTE *)(a2 + 24);
  *(_DWORD *)(a1 + 28) = *(_DWORD *)(a2 + 28);
  *(_DWORD *)(a1 + 32) = *(_DWORD *)(a2 + 32);
  *(_DWORD *)(a1 + 36) = *(_DWORD *)(a2 + 36);
  *(_DWORD *)(a1 + 40) = *(_DWORD *)(a2 + 40);
  *(_DWORD *)(a1 + 44) = *(_DWORD *)(a2 + 44);
  sub_180018764((_QWORD *)(a1 + 48), a2 + 48);
  *(_QWORD *)(a1 + 72) = 0LL;
  *(_QWORD *)(a1 + 80) = 0LL;
  v4 = *(_QWORD *)(a2 + 80);
  if ( v4 )
    _InterlockedIncrement((volatile signed __int32 *)(v4 + 8));
  *(_QWORD *)(a1 + 72) = *(_QWORD *)(a2 + 72);
  *(_QWORD *)(a1 + 80) = *(_QWORD *)(a2 + 80);
  *(_DWORD *)(a1 + 88) = *(_DWORD *)(a2 + 88);
  return a1;
}
