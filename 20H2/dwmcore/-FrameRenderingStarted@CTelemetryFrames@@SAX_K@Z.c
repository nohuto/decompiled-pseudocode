/*
 * XREFs of ?FrameRenderingStarted@CTelemetryFrames@@SAX_K@Z @ 0x18007C924
 * Callers:
 *     ?ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAXXZ @ 0x18007B000 (-ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAXXZ.c)
 * Callees:
 *     _anonymous_namespace_::SealCurrentFrameSequence @ 0x180035330 (_anonymous_namespace_--SealCurrentFrameSequence.c)
 *     _anonymous_namespace_::FramesReport::OffsetInMillisecondsFromStartOfReport @ 0x180035774 (_anonymous_namespace_--FramesReport--OffsetInMillisecondsFromStartOfReport.c)
 */

void __fastcall CTelemetryFrames::FrameRenderingStarted(__int64 a1)
{
  unsigned __int64 v2; // rax
  unsigned __int64 v3; // rsi
  int v4; // ecx
  __int32 v5; // ebx
  int v6; // ebx
  __int64 v7; // rcx

  if ( byte_180344128 )
  {
    AcquireSRWLockExclusive(&stru_180344770);
    GetCurrentThreadId();
    byte_180344128 = 0;
    dword_180344778 = 0;
    xmmword_180344130 = xmmword_180344140;
    ReleaseSRWLockExclusive(&stru_180344770);
    anonymous_namespace_::SealCurrentFrameSequence(1);
  }
  v2 = a1 - qword_1803440B8;
  qword_1803440B8 = a1;
  v3 = 1000 * (v2 % g_qpcFrequency.QuadPart) / g_qpcFrequency.QuadPart + 1000 * (v2 / g_qpcFrequency.QuadPart);
  if ( v3 >= (unsigned int)CCommonRegistryData::TelemetryFramesSequenceIdleIntervalMilliseconds )
    anonymous_namespace_::SealCurrentFrameSequence(0);
  byte_1803443E1 = v3 > 0x2A;
  if ( v3 > 0x2A )
    ++dword_18034426C;
  if ( !dword_180344288 )
  {
    *(_QWORD *)&xmmword_1803443D0 = a1;
    v7 = *((_QWORD *)qword_180344440 + 5);
    if ( (*(_QWORD *)(v7 + 24) - *(_QWORD *)(v7 + 16)) / 480LL )
      dword_18034429C = anonymous_namespace_::FramesReport::OffsetInMillisecondsFromStartOfReport(v7, a1);
  }
  v4 = dword_180344110 | dword_180344280;
  dword_180344280 |= dword_180344110;
  byte_180344108 = byte_180344109;
  if ( byte_180344109 )
  {
    byte_180344109 = 0;
    dword_180344280 = v4 | 0x100;
  }
  dword_180344110 = 0;
  v5 = _InterlockedExchange(&dword_180344730, 0);
  dword_180344284 |= v5;
  ++dword_180344288;
  dword_18034410C = v5;
  v6 = MEMORY[0x7FFE02E4];
  if ( GetTickCount() - v6 < 0x3E8 )
    dword_180344280 |= 1u;
  `anonymous namespace'::_frameStartSnaphot = dword_180344308;
  dword_180344740 = dword_180344310;
  dword_18034473C = dword_18034430C;
  dword_180344744 = dword_180344314;
}
