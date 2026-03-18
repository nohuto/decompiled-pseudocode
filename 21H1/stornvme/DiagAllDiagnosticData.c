/*
 * XREFs of DiagAllDiagnosticData @ 0x1C000FBE8
 * Callers:
 *     DiagGeneric @ 0x1C000FF68 (DiagGeneric.c)
 * Callees:
 *     NVMeZeroMemory @ 0x1C00044E0 (NVMeZeroMemory.c)
 *     memmove @ 0x1C0005240 (memmove.c)
 */

__int64 __fastcall DiagAllDiagnosticData(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // edx
  unsigned int v5; // ebp
  unsigned int v7; // ebx
  __int64 v8; // rax

  v4 = *(_DWORD *)(a2 + 32);
  v5 = 0;
  v7 = 104 * *(_DWORD *)(a1 + 188) + 8656;
  if ( v4 >= v7 )
  {
    NVMeZeroMemory((void *)(a2 + 40), v4);
    *(_DWORD *)(a2 + 40) = v7;
    *(_DWORD *)(a2 + 44) = 1;
    *(_DWORD *)(a2 + 48) = *(_DWORD *)a1;
    *(_WORD *)(a2 + 52) = *(_WORD *)(a1 + 4);
    *(_WORD *)(a2 + 54) = *(_WORD *)(a1 + 6);
    *(_BYTE *)(a2 + 56) = *(_BYTE *)(a1 + 8);
    *(_DWORD *)(a2 + 60) = *(_DWORD *)(a1 + 12);
    *(_BYTE *)(a2 + 64) = *(_BYTE *)(a1 + 16);
    *(_BYTE *)(a2 + 65) = *(_BYTE *)(a1 + 17);
    *(_BYTE *)(a2 + 66) = *(_BYTE *)(a1 + 18);
    *(_BYTE *)(a2 + 67) = *(_BYTE *)(a1 + 19);
    *(_BYTE *)(a2 + 68) = *(_BYTE *)(a1 + 20);
    *(_BYTE *)(a2 + 69) = *(_BYTE *)(a1 + 21);
    *(_DWORD *)(a2 + 72) = *(_DWORD *)(a1 + 24);
    *(_DWORD *)(a2 + 76) = *(_DWORD *)(a1 + 28);
    *(_OWORD *)(a2 + 80) = *(_OWORD *)(a1 + 32);
    *(_OWORD *)(a2 + 96) = *(_OWORD *)(a1 + 48);
    *(_OWORD *)(a2 + 112) = *(_OWORD *)(a1 + 64);
    *(_OWORD *)(a2 + 128) = *(_OWORD *)(a1 + 80);
    *(_OWORD *)(a2 + 144) = *(_OWORD *)(a1 + 96);
    *(_OWORD *)(a2 + 160) = *(_OWORD *)(a1 + 112);
    *(_OWORD *)(a2 + 176) = *(_OWORD *)(a1 + 128);
    *(_QWORD *)(a2 + 192) = *(_QWORD *)(a1 + 144);
    *(_DWORD *)(a2 + 200) = *(_DWORD *)(a1 + 160);
    *(_QWORD *)(a2 + 208) = *(_QWORD *)(a1 + 168);
    *(_DWORD *)(a2 + 216) = *(_DWORD *)(*(_QWORD *)(a1 + 152) + 20LL);
    *(_DWORD *)(a2 + 220) = *(_DWORD *)(*(_QWORD *)(a1 + 152) + 28LL);
    *(_DWORD *)(a2 + 224) = *(_DWORD *)(*(_QWORD *)(a1 + 152) + 56LL);
    *(_DWORD *)(a2 + 228) = *(_DWORD *)(*(_QWORD *)(a1 + 152) + 60LL);
    *(_OWORD *)(a2 + 232) = *(_OWORD *)(a1 + 176);
    *(_OWORD *)(a2 + 248) = *(_OWORD *)(a1 + 192);
    *(_OWORD *)(a2 + 264) = *(_OWORD *)(a1 + 208);
    *(_OWORD *)(a2 + 280) = *(_OWORD *)(a1 + 224);
    *(_OWORD *)(a2 + 296) = *(_OWORD *)(a1 + 240);
    *(_OWORD *)(a2 + 312) = *(_OWORD *)(a1 + 256);
    memmove((void *)(a2 + 328), (const void *)(a1 + 1608), 0x1000uLL);
    *(_OWORD *)(a2 + 4424) = *(_OWORD *)(a1 + 1632);
    *(_OWORD *)(a2 + 4440) = *(_OWORD *)(a1 + 1648);
    *(_OWORD *)(a2 + 4456) = *(_OWORD *)(a1 + 1664);
    *(_OWORD *)(a2 + 4472) = *(_OWORD *)(a1 + 1680);
    *(_QWORD *)(a2 + 4488) = *(_QWORD *)(a1 + 1696);
    memmove((void *)(a2 + 4496), (const void *)(a1 + 3760), 0x1000uLL);
    *(_OWORD *)(a2 + 8592) = *(_OWORD *)(a1 + 3776);
    *(_DWORD *)(a2 + 8608) = *(_DWORD *)(a1 + 3792);
    *(_OWORD *)(a2 + 8612) = *(_OWORD *)(a1 + 3800);
    *(_OWORD *)(a2 + 8628) = *(_OWORD *)(a1 + 3816);
    *(_QWORD *)(a2 + 8648) = *(_QWORD *)(a1 + 3832);
    *(_DWORD *)(a2 + 8656) = *(_DWORD *)(a1 + 3840);
    *(_WORD *)(a2 + 8664) = *(_WORD *)(a1 + 272);
    *(_WORD *)(a2 + 8666) = *(_WORD *)(a1 + 274);
    *(_WORD *)(a2 + 8668) = *(_WORD *)(a1 + 276);
    *(_WORD *)(a2 + 8670) = *(_WORD *)(a1 + 278);
    *(_WORD *)(a2 + 8672) = *(_WORD *)(a1 + 280);
    *(_WORD *)(a2 + 8674) = *(_WORD *)(a1 + 282);
    *(_WORD *)(a2 + 8676) = *(_WORD *)(a1 + 284);
    *(_WORD *)(a2 + 8678) = *(_WORD *)(a1 + 784);
    *(_WORD *)(a2 + 8680) = *(_WORD *)(a1 + 786);
    *(_WORD *)(a2 + 8682) = *(_WORD *)(a1 + 808);
    *(_WORD *)(a2 + 8684) = *(_WORD *)(a1 + 810);
    *(_WORD *)(a2 + 8686) = *(_WORD *)(a1 + 812);
    *(_WORD *)(a2 + 8688) = *(_WORD *)(a1 + 814);
    v8 = *(unsigned int *)(a1 + 188);
    *(_DWORD *)(a2 + 8692) = v8;
    if ( (_DWORD)v8 )
      memmove((void *)(a2 + 8696), (const void *)(a1 + 1720), 104 * v8);
    *(_DWORD *)(a2 + 32) = v7;
  }
  else
  {
    *(_DWORD *)(a2 + 32) = v7;
    v5 = -1056964604;
    *(_DWORD *)(a3 + 20) = 6;
  }
  return v5;
}
