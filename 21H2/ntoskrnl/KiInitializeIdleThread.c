/*
 * XREFs of KiInitializeIdleThread @ 0x14099F354
 * Callers:
 *     KiInitializeKernel @ 0x14099E6F0 (KiInitializeKernel.c)
 * Callees:
 *     KeStartThread @ 0x140265A0C (KeStartThread.c)
 *     KeInitThread @ 0x140990D94 (KeInitThread.c)
 */

unsigned __int64 __fastcall KiInitializeIdleThread(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int16 v7; // dx
  __int64 v8; // rax
  int v9; // ecx
  _QWORD *v10; // rbx
  _QWORD *v11; // rax
  unsigned __int64 result; // rax

  *(_DWORD *)(a1 + 80) = 0;
  KeInitThread(a1, a2, (__int64)KiIdleLoop, 0LL, 0LL, 0LL, 0LL, a3, 0);
  *(_DWORD *)(a1 + 116) &= ~0x4000u;
  KeStartThread(a1, 0LL, 0LL);
  *(_DWORD *)(a1 + 536) = *(_DWORD *)(a4 + 36);
  *(_BYTE *)(a1 + 388) = 2;
  v7 = *(unsigned __int8 *)(a4 + 208);
  *(_WORD *)(a1 + 560) = v7;
  v8 = *(_QWORD *)(a4 + 200);
  *(_QWORD *)(a1 + 552) = v8;
  v9 = *(_DWORD *)(a4 + 36);
  *(_DWORD *)(a1 + 116) |= 8u;
  *(_DWORD *)(a1 + 196) = v9;
  *(_DWORD *)(a1 + 588) = v9;
  *(_WORD *)(a1 + 584) = v7;
  *(_QWORD *)(a1 + 576) = v8;
  *(_BYTE *)(a1 + 113) = 1;
  *(_BYTE *)(a1 + 390) = 2;
  *(_QWORD *)(a1 + 1104) = KiIdleLoop;
  *(_QWORD *)(a1 + 1232) = KiIdleLoop;
  **(_BYTE **)(a4 + 56) = 127;
  *(_BYTE *)(a1 + 195) = 127;
  if ( *(_DWORD *)(a4 + 36) )
  {
    if ( KiSchedulerAssistThreadFlagEnabled )
      _interlockedbittestandset((volatile signed __int32 *)a1, 0x16u);
  }
  else
  {
    qword_140D24FE8 = (__int64)&qword_140D24FE0;
    qword_140D24FE0 = (__int64)&qword_140D24FE0;
    _InterlockedOr(dword_140D24E60, 0x8000u);
    _InterlockedOr(dword_140D2527C, 0x400000u);
  }
  *(_QWORD *)(a1 + 1384) = a1 + 1376;
  *(_QWORD *)(a1 + 1376) = a1 + 1376;
  *(_QWORD *)(a1 + 1400) = a1 + 1392;
  *(_QWORD *)(a1 + 1392) = a1 + 1392;
  *(_QWORD *)(a1 + 1408) = 0LL;
  v10 = (_QWORD *)(a1 + 1256);
  v11 = (_QWORD *)qword_140D24FE8;
  if ( *(__int64 **)qword_140D24FE8 != &qword_140D24FE0 )
    __fastfail(3u);
  *v10 = &qword_140D24FE0;
  v10[1] = v11;
  *v11 = v10;
  qword_140D24FE8 = (__int64)v10;
  result = (unsigned __int64)(unsigned int)KiProcessorIndexToNumberMappingTable[*(unsigned int *)(a4 + 36)] >> 6;
  _InterlockedOr64(
    (volatile signed __int64 *)(a3 + 8 * result + 376),
    1LL << (KiProcessorIndexToNumberMappingTable[*(unsigned int *)(a4 + 36)] & 0x3F));
  return result;
}
