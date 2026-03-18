/*
 * XREFs of ?UpdateIndependentFlipStateUnsafe@DISPLAY_SOURCE@@QEAAXIE@Z @ 0x1C01D8334
 * Callers:
 *     ?UpdateIndependentFlipState@ADAPTER_DISPLAY@@QEAAXIIE@Z @ 0x1C01ED3C0 (-UpdateIndependentFlipState@ADAPTER_DISPLAY@@QEAAXIIE@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?IsDisplayPlaneConfigQueueEmpty@@YAEPEAU_DISPLAY_PLANE_CONFIG_QUEUE@@@Z @ 0x1C0195D10 (-IsDisplayPlaneConfigQueueEmpty@@YAEPEAU_DISPLAY_PLANE_CONFIG_QUEUE@@@Z.c)
 */

void __fastcall DISPLAY_SOURCE::UpdateIndependentFlipStateUnsafe(
        DISPLAY_SOURCE *this,
        unsigned int a2,
        unsigned __int8 a3)
{
  int v3; // r14d
  __int64 v5; // rsi
  char *v6; // rdi
  char *v7; // rdx

  v3 = a3;
  v5 = a2;
  if ( *(struct _KTHREAD **)(*((_QWORD *)this + 1) + 632LL) != KeGetCurrentThread() )
  {
    WdLogSingleEntry1(1LL, 9508LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"m_DisplayCore->IsDisplayStateMutexOwner()",
      9508LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( (unsigned int)v5 >= *((_DWORD *)this + 940) )
  {
    WdLogSingleEntry1(1LL, 9509LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"PlaneIndex < m_MaxPlanesUsed", 9509LL, 0LL, 0LL, 0LL, 0LL);
  }
  v6 = (char *)this + 168 * v5;
  if ( *((_DWORD *)v6 + 286) == -1 )
  {
    if ( *((_DWORD *)v6 + 287) == -1
      || (WdLogSingleEntry1(1LL, 9067LL),
          DxgkLogInternalTriageEvent(
            0LL,
            262146,
            -1,
            (__int64)L"(pQueue->HeadIndex != CONFIG_INDEX_INVALID) || (pQueue->TailIndex == CONFIG_INDEX_INVALID)",
            9067LL,
            0LL,
            0LL,
            0LL,
            0LL),
          *((_DWORD *)v6 + 286) == -1) )
    {
      WdLogSingleEntry1(1LL, 9510LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"!IsDisplayPlaneConfigQueueEmpty(&m_PlaneConfigurationQueue[PlaneIndex])",
        9510LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
  }
  if ( (unsigned int)v5 < *((_DWORD *)this + 940)
    && !IsDisplayPlaneConfigQueueEmpty((struct _DISPLAY_PLANE_CONFIG_QUEUE *)(v6 + 1144)) )
  {
    _mm_lfence();
    v7 = (char *)this + 168 * v5 + 80 * *((int *)v6 + 286) + 1152;
    if ( v7 )
      *((_DWORD *)v7 + 2) ^= (*((_DWORD *)v7 + 2) ^ (8 * v3)) & 8;
  }
}
