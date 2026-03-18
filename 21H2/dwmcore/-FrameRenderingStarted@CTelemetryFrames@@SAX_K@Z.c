/*
 * XREFs of ?FrameRenderingStarted@CTelemetryFrames@@SAX_K@Z @ 0x18007ABBC
 * Callers:
 *     ?ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAXXZ @ 0x18007AFD4 (-ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAXXZ.c)
 * Callees:
 *     _anonymous_namespace_::SealCurrentFrameSequence @ 0x180077634 (_anonymous_namespace_--SealCurrentFrameSequence.c)
 *     _anonymous_namespace_::FramesReport::OffsetInMillisecondsFromStartOfReport @ 0x180078738 (_anonymous_namespace_--FramesReport--OffsetInMillisecondsFromStartOfReport.c)
 */

void __fastcall CTelemetryFrames::FrameRenderingStarted(__int64 a1)
{
  unsigned __int64 v2; // rax
  unsigned __int64 v3; // rsi
  int v4; // ecx
  __int32 v5; // ebx
  int v6; // ebx
  __int64 v7; // rcx

  if ( byte_1803D3358 )
  {
    AcquireSRWLockExclusive(&stru_1803D7408);
    GetCurrentThreadId();
    byte_1803D3358 = 0;
    dword_1803D7410 = 0;
    xmmword_1803D3348 = xmmword_1803D3360;
    ReleaseSRWLockExclusive(&stru_1803D7408);
    anonymous_namespace_::SealCurrentFrameSequence(1);
  }
  v2 = a1 - qword_1803D32D0;
  qword_1803D32D0 = a1;
  v3 = 1000 * (v2 % g_qpcFrequency.QuadPart) / g_qpcFrequency.QuadPart + 1000 * (v2 / g_qpcFrequency.QuadPart);
  if ( v3 >= (unsigned int)CCommonRegistryData::TelemetryFramesSequenceIdleIntervalMilliseconds )
    anonymous_namespace_::SealCurrentFrameSequence(0);
  if ( v3 > 0x2A )
  {
    ++dword_1803D314C;
    byte_1803D32D9 = 1;
  }
  else
  {
    byte_1803D32D9 = 0;
  }
  if ( !dword_1803D3168 )
  {
    *(_QWORD *)&xmmword_1803D32B0 = a1;
    v7 = *((_QWORD *)qword_1803D33C8 + 5);
    if ( 0xEEEEEEEEEEEEEEEFuLL * ((__int64)(*(_QWORD *)(v7 + 24) - *(_QWORD *)(v7 + 16)) >> 5) )
      dword_1803D317C = anonymous_namespace_::FramesReport::OffsetInMillisecondsFromStartOfReport(v7, a1);
  }
  v4 = dword_1803D3338 | dword_1803D3160;
  dword_1803D3160 |= dword_1803D3338;
  byte_1803D3329 = byte_1803D3328;
  if ( byte_1803D3328 )
  {
    byte_1803D3328 = 0;
    dword_1803D3160 = v4 | 0x100;
  }
  dword_1803D3338 = 0;
  v5 = _InterlockedExchange(&dword_1803D3A68, 0);
  dword_1803D3164 |= v5;
  ++dword_1803D3168;
  dword_1803D332C = v5;
  v6 = MEMORY[0x7FFE02E4];
  if ( GetTickCount() - v6 < 0x3E8 )
    dword_1803D3160 |= 1u;
  dword_1803D3A70 = dword_1803D31E8;
  dword_1803D3A78 = dword_1803D31F0;
  dword_1803D3A74 = dword_1803D31EC;
  dword_1803D3A7C = dword_1803D31F4;
}
