/*
 * XREFs of ?DoStackCapture@@YAXJIPEAX@Z @ 0x180004454
 * Callers:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?MilInstrumentationHandleFailure_MaybeFailFast@@YAXJKIPEAX@Z @ 0x1800043B4 (-MilInstrumentationHandleFailure_MaybeFailFast@@YAXJKIPEAX@Z.c)
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x180056228 (-DoStackCaptureDirect@@YAXJI@Z.c)
 * Callees:
 *     ?EnsureStackCaptureRegisteredWithWER@@YAXXZ @ 0x180004588 (-EnsureStackCaptureRegisteredWithWER@@YAXXZ.c)
 *     __security_check_cookie @ 0x180053530 (__security_check_cookie.c)
 *     memcpy_0 @ 0x1800563BA (memcpy_0.c)
 */

void __fastcall DoStackCapture(int a1, int a2, PVOID a3)
{
  volatile int v6; // r9d
  __int64 v7; // r8
  __int64 v8; // rbx
  DWORD CurrentThreadId; // eax
  char *v10; // rbx
  USHORT v11; // ax
  PVOID *v12; // rdx
  PVOID *v13; // rcx
  __int64 v14; // r8
  unsigned __int64 v15; // rcx
  __m128i si128; // xmm0
  PVOID BackTrace[12]; // [rsp+20h] [rbp-78h] BYREF

  EnsureStackCaptureRegisteredWithWER();
  do
  {
    v6 = g_nCurrentStackCaptureIndex;
    v7 = (unsigned __int8)(g_nCurrentStackCaptureIndex + 1);
  }
  while ( v6 != _InterlockedCompareExchange(&g_nCurrentStackCaptureIndex, v7, g_nCurrentStackCaptureIndex) );
  v8 = 5 * v7;
  g_StackCaptureFrames[10 * v7] = a1;
  CurrentThreadId = GetCurrentThreadId();
  g_StackCaptureFrames[2 * v8 + 2] = a2;
  g_StackCaptureFrames[2 * v8 + 1] = CurrentThreadId;
  v10 = (char *)&g_StackCaptureFrames[2 * v8];
  *((_OWORD *)v10 + 1) = 0LL;
  *((_QWORD *)v10 + 4) = 0LL;
  v11 = RtlCaptureStackBackTrace(1u, 0xBu, BackTrace, 0LL);
  v12 = BackTrace;
  v13 = &BackTrace[v11];
  if ( BackTrace != v13 )
  {
    do
    {
      if ( *v12 == a3 )
        break;
      ++v12;
    }
    while ( v12 != v13 );
  }
  v14 = 3LL;
  v15 = v13 - v12;
  if ( v15 < 3 )
    v14 = v15;
  if ( v14 )
  {
    memcpy_0(v10 + 16, v12, 8 * v14);
  }
  else
  {
    si128 = _mm_load_si128((const __m128i *)&_xmm_e0e0e0e0e0e0e0e0e0e0e0e0e0e0e0e0);
    *((__m128i *)v10 + 1) = si128;
    *((_QWORD *)v10 + 4) = si128.m128i_i64[0];
  }
}
