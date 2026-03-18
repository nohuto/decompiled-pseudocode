/*
 * XREFs of ?FrameRenderingStarted@CTelemetryFrames@@SAX_K@Z @ 0x1800402A4
 * Callers:
 *     ?ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAXXZ @ 0x18003E980 (-ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAXXZ.c)
 * Callees:
 *     _anonymous_namespace_::SealCurrentFrameSequence @ 0x1800D99AC (_anonymous_namespace_--SealCurrentFrameSequence.c)
 *     _anonymous_namespace_::FramesReport::OffsetInMillisecondsFromStartOfReport @ 0x1800DA46C (_anonymous_namespace_--FramesReport--OffsetInMillisecondsFromStartOfReport.c)
 */

void __fastcall CTelemetryFrames::FrameRenderingStarted(__int64 a1)
{
  unsigned __int64 v2; // rax
  unsigned __int64 v3; // rsi
  int v4; // ecx
  __int32 v5; // ebx
  int v6; // ebx
  __int64 v7; // rcx
  __int64 v8; // rcx

  if ( byte_180349140 )
  {
    AcquireSRWLockExclusive(&stru_180349770);
    GetCurrentThreadId();
    byte_180349140 = 0;
    dword_180349778 = 0;
    xmmword_180349148 = xmmword_180349130;
    ReleaseSRWLockExclusive(&stru_180349770);
    LOBYTE(v8) = 1;
    anonymous_namespace_::SealCurrentFrameSequence(v8);
  }
  v2 = a1 - qword_180349108;
  qword_180349108 = a1;
  v3 = 1000 * (v2 % g_qpcFrequency.QuadPart) / g_qpcFrequency.QuadPart + 1000 * (v2 / g_qpcFrequency.QuadPart);
  if ( v3 >= (unsigned int)CCommonRegistryData::TelemetryFramesSequenceIdleIntervalMilliseconds )
    anonymous_namespace_::SealCurrentFrameSequence(0LL);
  byte_1803493F1 = v3 > 0x2A;
  if ( v3 > 0x2A )
    ++dword_18034927C;
  if ( !dword_180349298 )
  {
    *(_QWORD *)&xmmword_1803493E0 = a1;
    v7 = *((_QWORD *)qword_180349450 + 5);
    if ( (*(_QWORD *)(v7 + 24) - *(_QWORD *)(v7 + 16)) / 480LL )
      dword_1803492AC = anonymous_namespace_::FramesReport::OffsetInMillisecondsFromStartOfReport(v7, a1);
  }
  v4 = dword_180349120 | dword_180349290;
  dword_180349290 |= dword_180349120;
  byte_180349114 = byte_180349115;
  if ( byte_180349115 )
  {
    byte_180349115 = 0;
    dword_180349290 = v4 | 0x100;
  }
  dword_180349120 = 0;
  v5 = _InterlockedExchange(&dword_180349730, 0);
  dword_180349294 |= v5;
  ++dword_180349298;
  dword_180349110 = v5;
  v6 = MEMORY[0x7FFE02E4];
  if ( GetTickCount() - v6 < 0x3E8 )
    dword_180349290 |= 1u;
  `anonymous namespace'::_frameStartSnaphot = dword_180349318;
  dword_180349740 = dword_180349320;
  dword_18034973C = dword_18034931C;
  dword_180349744 = dword_180349324;
}
