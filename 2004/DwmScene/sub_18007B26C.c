/*
 * XREFs of sub_18007B26C @ 0x18007B26C
 * Callers:
 *     sub_180016ADC @ 0x180016ADC (sub_180016ADC.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18007B26C(__int64 a1, __int64 a2)
{
  __int64 v2; // rax

  *(_QWORD *)(a1 + 20) = 1LL;
  *(_QWORD *)(a1 + 80) = 1LL;
  v2 = *(_QWORD *)(a2 + 48);
  *(_QWORD *)(a1 + 56) = 0LL;
  *(_DWORD *)(a1 + 68) = 40960;
  *(_QWORD *)(a1 + 72) = 45312LL;
  *(_QWORD *)(a1 + 88) = 0LL;
  *(_QWORD *)(a1 + 96) = 0LL;
  *(_QWORD *)(a1 + 104) = 0LL;
  *(_QWORD *)(a1 + 112) = 0LL;
  *(_QWORD *)(a1 + 120) = 0LL;
  *(_DWORD *)(a1 + 136) = 3;
  *(_DWORD *)(a1 + 160) = 0;
  *(_QWORD *)a1 = v2;
  *(_QWORD *)(a1 + 8) = *(_QWORD *)(a2 + 56);
  *(_DWORD *)(a1 + 16) = *(_DWORD *)(a2 + 40);
  *(_BYTE *)(a1 + 28) = *(_BYTE *)(a2 + 92);
  *(_DWORD *)(a1 + 32) = *(_DWORD *)(a2 + 80);
  *(_DWORD *)(a1 + 40) = *(_DWORD *)(a2 + 4);
  *(_DWORD *)(a1 + 76) = *(_DWORD *)(a2 + 72);
  *(_DWORD *)(a1 + 80) = *(_DWORD *)(a2 + 76);
  *(_DWORD *)(a1 + 60) = *(_DWORD *)(a2 + 36);
  *(_QWORD *)(a1 + 48) = *(_QWORD *)(a2 + 16);
  *(_DWORD *)(a1 + 84) = *(_DWORD *)(a2 + 84);
  *(_BYTE *)(a1 + 64) = *(_BYTE *)(a2 + 44);
  *(_DWORD *)(a1 + 72) = *(_DWORD *)(a2 + 68);
  *(_DWORD *)(a1 + 68) = *(_DWORD *)(a2 + 64);
  *(_DWORD *)(a1 + 56) = *(_DWORD *)(a2 + 32);
  *(_DWORD *)(a1 + 128) = *(_DWORD *)(a2 + 88);
  *(_DWORD *)(a1 + 136) = *(_DWORD *)a2;
  *(_QWORD *)(a1 + 144) = *(_QWORD *)(a2 + 8);
  *(_QWORD *)(a1 + 152) = *(_QWORD *)(a2 + 24);
  return a1;
}
