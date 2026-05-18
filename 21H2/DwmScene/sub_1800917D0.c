/*
 * XREFs of sub_1800917D0 @ 0x1800917D0
 * Callers:
 *     sub_180092894 @ 0x180092894 (sub_180092894.c)
 *     sub_1800CC9E0 @ 0x1800CC9E0 (sub_1800CC9E0.c)
 *     sub_1800E07A0 @ 0x1800E07A0 (sub_1800E07A0.c)
 * Callees:
 *     <none>
 */

bool __fastcall sub_1800917D0(__int64 a1, __int64 a2)
{
  return *(_DWORD *)a1 == *(_DWORD *)a2
      && *(_DWORD *)(a1 + 4) == *(_DWORD *)(a2 + 4)
      && *(_DWORD *)(a1 + 8) == *(_DWORD *)(a2 + 8)
      && *(float *)(a1 + 12) == *(float *)(a2 + 12)
      && *(float *)(a1 + 16) == *(float *)(a2 + 16)
      && *(float *)(a1 + 20) == *(float *)(a2 + 20)
      && *(_BYTE *)(a1 + 24) == *(_BYTE *)(a2 + 24)
      && *(_DWORD *)(a1 + 28) == *(_DWORD *)(a2 + 28)
      && *(_DWORD *)(a1 + 32) == *(_DWORD *)(a2 + 32)
      && *(_DWORD *)(a1 + 36) == *(_DWORD *)(a2 + 36)
      && *(_DWORD *)(a1 + 40) == *(_DWORD *)(a2 + 40)
      && *(_DWORD *)(a1 + 44) == *(_DWORD *)(a2 + 44)
      && *(_DWORD *)(a1 + 48) == *(_DWORD *)(a2 + 48)
      && *(_DWORD *)(a1 + 52) == *(_DWORD *)(a2 + 52)
      && *(_DWORD *)(a1 + 56) == *(_DWORD *)(a2 + 56)
      && *(_BYTE *)(a1 + 60) == *(_BYTE *)(a2 + 60)
      && *(_BYTE *)(a1 + 61) == *(_BYTE *)(a2 + 61)
      && *(_BYTE *)(a1 + 62) == *(_BYTE *)(a2 + 62)
      && *(_BYTE *)(a1 + 63) == *(_BYTE *)(a2 + 63)
      && *(_BYTE *)(a1 + 64) == *(_BYTE *)(a2 + 64)
      && *(_DWORD *)(a1 + 68) == *(_DWORD *)(a2 + 68);
}
