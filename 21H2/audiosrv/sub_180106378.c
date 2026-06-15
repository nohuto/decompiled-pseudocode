/*
 * XREFs of sub_180106378 @ 0x180106378
 * Callers:
 *     sub_180106F68 @ 0x180106F68 (sub_180106F68.c)
 *     sub_180108588 @ 0x180108588 (sub_180108588.c)
 * Callees:
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     sub_1801071D0 @ 0x1801071D0 (sub_1801071D0.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180106378(__int64 a1, __int64 a2)
{
  int v4; // eax
  int v5; // eax
  unsigned int v6; // ebx
  double v7; // xmm1_8
  __int64 v8; // rcx
  int v9; // eax
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h]
  LARGE_INTEGER PerformanceCount; // [rsp+40h] [rbp+8h] BYREF
  struct _FILETIME pftDueTime; // [rsp+50h] [rbp+18h] BYREF
  _Mtx_t v14; // [rsp+58h] [rbp+20h]

  v14 = (_Mtx_t)(a1 + 144);
  v4 = Mtx_lock((_Mtx_t)(a1 + 144));
  if ( v4 )
  {
    std::_Throw_C_error(v4);
    __debugbreak();
  }
  if ( !*(_BYTE *)(a1 + 136) )
  {
    v5 = sub_1801071D0(a1);
    v6 = v5;
    if ( v5 < 0 )
    {
      sub_18004BD84(
        (int)retaddr,
        137,
        (int)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\WorkFifo.h",
        v5);
      goto LABEL_12;
    }
    PerformanceCount.QuadPart = 0LL;
    QueryPerformanceCounter(&PerformanceCount);
    if ( qword_180145000 < 0 )
      v7 = (double)(int)(qword_180145000 & 1 | ((unsigned __int64)qword_180145000 >> 1))
         + (double)(int)(qword_180145000 & 1 | ((unsigned __int64)qword_180145000 >> 1));
    else
      v7 = (double)(int)qword_180145000;
    v8 = (unsigned int)(int)((double)(int)PerformanceCount.LowPart * 10000000.0 / v7);
    if ( v8 < a2 )
    {
      PerformanceCount.QuadPart = v8 - a2;
      pftDueTime = (struct _FILETIME)(v8 - a2);
      *(_BYTE *)(a1 + 137) = 1;
      SetThreadpoolTimer(*(PTP_TIMER *)(a1 + 8), &pftDueTime, 0, 0);
    }
  }
  v6 = 0;
LABEL_12:
  v9 = Mtx_unlock(v14);
  if ( v9 )
    std::_Throw_C_error(v9);
  return v6;
}
