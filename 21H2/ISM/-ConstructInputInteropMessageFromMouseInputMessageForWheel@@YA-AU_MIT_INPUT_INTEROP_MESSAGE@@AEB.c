/*
 * XREFs of ?ConstructInputInteropMessageFromMouseInputMessageForWheel@@YA?AU_MIT_INPUT_INTEROP_MESSAGE@@AEBU_MIT_MOUSE_INPUT_MESSAGE@@@Z @ 0x1800AF23C
 * Callers:
 *     ?ProcessMouseInputMessage@Win32kInterop@@AEAAXPEBU_MIT_MOUSE_INPUT_MESSAGE@@@Z @ 0x1800B2044 (-ProcessMouseInputMessage@Win32kInterop@@AEAAXPEBU_MIT_MOUSE_INPUT_MESSAGE@@@Z.c)
 * Callees:
 *     memset_0 @ 0x18003C200 (memset_0.c)
 */

__int64 __fastcall ConstructInputInteropMessageFromMouseInputMessageForWheel(__int64 a1, __int64 a2)
{
  __int64 v4; // rax

  memset_0((void *)(a1 + 4), 0, 0x12CuLL);
  *(_DWORD *)a1 = 0;
  *(_QWORD *)(a1 + 8) = *(_QWORD *)(a2 + 40);
  *(_DWORD *)(a1 + 52) = 1;
  *(_OWORD *)(a1 + 208) = *(_OWORD *)(a2 + 104);
  *(_OWORD *)(a1 + 224) = *(_OWORD *)(a2 + 120);
  *(_OWORD *)(a1 + 240) = *(_OWORD *)(a2 + 136);
  *(_DWORD *)(a1 + 256) = *(_DWORD *)(a2 + 184);
  v4 = -1LL;
  if ( *(_QWORD *)a2 )
    v4 = *(_QWORD *)a2;
  *(_QWORD *)(a1 + 80) = v4;
  *(_DWORD *)(a1 + 68) = 1;
  *(_DWORD *)(a1 + 64) = 4;
  *(_DWORD *)(a1 + 72) = *(_DWORD *)(a2 + 276);
  *(_DWORD *)(a1 + 132) = 1;
  *(_DWORD *)(a1 + 128) = *(_DWORD *)(a2 + 32);
  *(_QWORD *)(a1 + 144) = *(_QWORD *)(a2 + 40);
  *(_QWORD *)(a1 + 96) = *(_QWORD *)(a2 + 56);
  *(_QWORD *)(a1 + 104) = *(_QWORD *)(a2 + 64);
  *(_QWORD *)(a1 + 112) = *(_QWORD *)(a2 + 56);
  *(_QWORD *)(a1 + 120) = *(_QWORD *)(a2 + 64);
  *(_DWORD *)(a1 + 140) = *(_DWORD *)(a2 + 280);
  *(_DWORD *)(a1 + 76) = (*(_WORD *)(a2 + 12) & 0x400) != 0 ? 0x80000 : 0x100000;
  *(_OWORD *)(a1 + 280) = *(_OWORD *)(a2 + 284);
  *(_DWORD *)(a1 + 136) = *(__int16 *)(a2 + 14);
  return a1;
}
