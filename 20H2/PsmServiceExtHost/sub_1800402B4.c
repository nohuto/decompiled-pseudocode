/*
 * XREFs of sub_1800402B4 @ 0x1800402B4
 * Callers:
 *     sub_18003F99C @ 0x18003F99C (sub_18003F99C.c)
 * Callees:
 *     memset @ 0x18004683A (memset.c)
 */

__int64 __fastcall sub_1800402B4(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  *(_OWORD *)(a2 + 48) = 0LL;
  *(_OWORD *)(a2 + 64) = 0LL;
  *(_OWORD *)(a2 + 80) = 0LL;
  *(_QWORD *)(a2 + 96) = 0LL;
  *(_QWORD *)(a2 + 56) = -500000LL;
  *(_DWORD *)(a2 + 88) = 50;
  *(_BYTE *)(a2 + 96) = 5;
  memset((void *)(a2 + 104), 0, 0x48uLL);
  *(_OWORD *)(a2 + 136) = 0LL;
  RtlInitializeSRWLock(a2 + 136);
  *(_DWORD *)(a2 + 144) = 0;
  *(_QWORD *)(a2 + 184) = 0LL;
  *(_QWORD *)(a2 + 192) = 0LL;
  *(_QWORD *)(a2 + 200) = 0LL;
  *(_QWORD *)(a2 + 208) = 0LL;
  *(_DWORD *)(a2 + 200) = *(_DWORD *)(a1 + 160);
  *(_DWORD *)(a2 + 204) = *(_DWORD *)(a1 + 164);
  *(_BYTE *)(a2 + 208) = *(_BYTE *)(a1 + 168);
  *(_QWORD *)(a2 + 184) = a2 + 176;
  *(_QWORD *)(a2 + 176) = a2 + 176;
  memset((void *)(a2 + 216), 0, 0x60uLL);
  *(_QWORD *)(a2 + 272) = 0LL;
  *(_QWORD *)(a2 + 280) = -1LL;
  *(_QWORD *)(a2 + 288) = 0LL;
  *(_QWORD *)(a2 + 296) = 0LL;
  *(_DWORD *)(a2 + 304) = 0;
  *(_DWORD *)(a2 + 308) = 0;
  *(_QWORD *)(a2 + 232) = a2 + 224;
  *(_QWORD *)(a2 + 224) = a2 + 224;
  *(_DWORD *)(a2 + 256) = *(_DWORD *)(a1 + 152);
  *(_DWORD *)(a2 + 260) = *(_DWORD *)(a1 + 144);
  result = *(unsigned int *)(a1 + 148);
  *(_DWORD *)(a2 + 264) = result;
  return result;
}
