/*
 * XREFs of ?DelayWorkUntil@CWorkFifo@@QEAAJ_J@Z @ 0x180106268
 * Callers:
 *     ?HandleRequestForDynamicObjects@CSpatialAudioResourceManager@Sarm@@AEAAX_JII@Z @ 0x180106E58 (-HandleRequestForDynamicObjects@CSpatialAudioResourceManager@Sarm@@AEAAX_JII@Z.c)
 *     ?RevokeApplicationResources@CSpatialAudioResourceManager@Sarm@@AEAAXK@Z @ 0x180108478 (-RevokeApplicationResources@CSpatialAudioResourceManager@Sarm@@AEAAXK@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004BEB4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Initialize@CWorkFifo@@AEAAJXZ @ 0x1801070C0 (-Initialize@CWorkFifo@@AEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWorkFifo::DelayWorkUntil(PTP_TIMER *this, __int64 a2)
{
  int v4; // eax
  int v5; // eax
  unsigned int v6; // ebx
  double v7; // xmm1_8
  __int64 v8; // rcx
  int v9; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  LARGE_INTEGER PerformanceCount; // [rsp+40h] [rbp+8h] BYREF
  struct _FILETIME pftDueTime; // [rsp+50h] [rbp+18h] BYREF
  _Mtx_t v14; // [rsp+58h] [rbp+20h]

  v14 = (_Mtx_t)(this + 18);
  v4 = _Mtx_lock((_Mtx_t)(this + 18));
  if ( v4 )
  {
    std::_Throw_C_error(v4);
    __debugbreak();
  }
  if ( !*((_BYTE *)this + 136) )
  {
    v5 = CWorkFifo::Initialize((CWorkFifo *)this);
    v6 = v5;
    if ( v5 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x89,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\WorkFifo.h",
        (const char *)(unsigned int)v5);
      goto LABEL_12;
    }
    PerformanceCount.QuadPart = 0LL;
    QueryPerformanceCounter(&PerformanceCount);
    if ( (g_u64QPCFrequency & 0x8000000000000000uLL) != 0LL )
      v7 = (double)(int)(g_u64QPCFrequency & 1 | (g_u64QPCFrequency >> 1))
         + (double)(int)(g_u64QPCFrequency & 1 | (g_u64QPCFrequency >> 1));
    else
      v7 = (double)(int)g_u64QPCFrequency;
    v8 = (unsigned int)(int)((double)(int)PerformanceCount.LowPart * 10000000.0 / v7);
    if ( v8 < a2 )
    {
      PerformanceCount.QuadPart = v8 - a2;
      pftDueTime = (struct _FILETIME)(v8 - a2);
      *((_BYTE *)this + 137) = 1;
      SetThreadpoolTimer(this[1], &pftDueTime, 0, 0);
    }
  }
  v6 = 0;
LABEL_12:
  v9 = _Mtx_unlock(v14);
  if ( v9 )
    std::_Throw_C_error(v9);
  return v6;
}
