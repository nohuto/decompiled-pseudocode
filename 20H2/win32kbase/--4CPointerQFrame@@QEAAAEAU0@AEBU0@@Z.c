/*
 * XREFs of ??4CPointerQFrame@@QEAAAEAU0@AEBU0@@Z @ 0x1C0185734
 * Callers:
 *     ?CopyPTPPointerInputFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAU2@PEAX@Z @ 0x1C01892EC (-CopyPTPPointerInputFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAU2@PEAX@Z.c)
 * Callees:
 *     ??4CInputDest@@QEAAAEAV0@AEBV0@@Z @ 0x1C00A89D0 (--4CInputDest@@QEAAAEAV0@AEBV0@@Z.c)
 */

__int64 __fastcall CPointerQFrame::operator=(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v6; // edx
  int v7; // ecx
  int v8; // eax
  int v9; // ecx

  *(_DWORD *)a1 = *(_DWORD *)a2;
  *(_QWORD *)(a1 + 8) = *(_QWORD *)(a2 + 8);
  CInputDest::operator=(a1 + 16, a2 + 16, a3, a4);
  v6 = *(_DWORD *)(a1 + 140);
  *(_DWORD *)(a1 + 136) = *(_DWORD *)(a2 + 136);
  *(_DWORD *)(a1 + 140) ^= (*(_DWORD *)(a2 + 140) ^ v6) & 1;
  v7 = *(_DWORD *)(a1 + 140) ^ ((unsigned __int8)*(_DWORD *)(a1 + 140) ^ (unsigned __int8)*(_DWORD *)(a2 + 140)) & 2;
  *(_DWORD *)(a1 + 140) = v7;
  v8 = v7 ^ ((unsigned __int8)v7 ^ (unsigned __int8)*(_DWORD *)(a2 + 140)) & 4;
  *(_DWORD *)(a1 + 140) = v8;
  v9 = v8 ^ ((unsigned __int8)v8 ^ (unsigned __int8)*(_DWORD *)(a2 + 140)) & 8;
  *(_DWORD *)(a1 + 140) = v9;
  *(_DWORD *)(a1 + 140) = v9 ^ ((unsigned __int8)v9 ^ (unsigned __int8)*(_DWORD *)(a2 + 140)) & 0x10;
  *(_DWORD *)(a1 + 144) = *(_DWORD *)(a2 + 144);
  *(_DWORD *)(a1 + 148) = *(_DWORD *)(a2 + 148);
  *(_QWORD *)(a1 + 152) = *(_QWORD *)(a2 + 152);
  return a1;
}
