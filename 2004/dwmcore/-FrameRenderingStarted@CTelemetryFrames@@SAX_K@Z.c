/*
 * XREFs of ?FrameRenderingStarted@CTelemetryFrames@@SAX_K@Z @ 0x18005D904
 * Callers:
 *     ?ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAXXZ @ 0x18005BFE0 (-ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAXXZ.c)
 * Callees:
 *     _anonymous_namespace_::SealCurrentFrameSequence @ 0x180028710 (_anonymous_namespace_--SealCurrentFrameSequence.c)
 *     _anonymous_namespace_::FramesReport::OffsetInMillisecondsFromStartOfReport @ 0x180028B54 (_anonymous_namespace_--FramesReport--OffsetInMillisecondsFromStartOfReport.c)
 */

void __fastcall CTelemetryFrames::FrameRenderingStarted(__int64 a1)
{
  unsigned __int64 v2; // rax
  unsigned __int64 v3; // rsi
  int v4; // ecx
  __int32 v5; // ebx
  int v6; // ebx
  __int64 v7; // rcx

  if ( byte_180345140 )
  {
    AcquireSRWLockExclusive(&stru_180345790);
    GetCurrentThreadId();
    byte_180345140 = 0;
    dword_180345798 = 0;
    xmmword_180345148 = xmmword_180345130;
    ReleaseSRWLockExclusive(&stru_180345790);
    anonymous_namespace_::SealCurrentFrameSequence(1);
  }
  v2 = a1 - qword_180345108;
  qword_180345108 = a1;
  v3 = 1000 * (v2 % g_qpcFrequency.QuadPart) / g_qpcFrequency.QuadPart + 1000 * (v2 / g_qpcFrequency.QuadPart);
  if ( v3 >= (unsigned int)CCommonRegistryData::TelemetryFramesSequenceIdleIntervalMilliseconds )
    anonymous_namespace_::SealCurrentFrameSequence(0);
  byte_1803453F1 = v3 > 0x2A;
  if ( v3 > 0x2A )
    ++dword_18034527C;
  if ( !dword_180345298 )
  {
    *(_QWORD *)&xmmword_1803453E0 = a1;
    v7 = *((_QWORD *)qword_180345450 + 5);
    if ( (*(_QWORD *)(v7 + 24) - *(_QWORD *)(v7 + 16)) / 480LL )
      dword_1803452AC = anonymous_namespace_::FramesReport::OffsetInMillisecondsFromStartOfReport(v7, a1);
  }
  v4 = dword_180345120 | dword_180345290;
  dword_180345290 |= dword_180345120;
  byte_180345114 = byte_180345115;
  if ( byte_180345115 )
  {
    byte_180345115 = 0;
    dword_180345290 = v4 | 0x100;
  }
  dword_180345120 = 0;
  v5 = _InterlockedExchange(&dword_180345750, 0);
  dword_180345294 |= v5;
  ++dword_180345298;
  dword_180345110 = v5;
  v6 = MEMORY[0x7FFE02E4];
  if ( GetTickCount() - v6 < 0x3E8 )
    dword_180345290 |= 1u;
  `anonymous namespace'::_frameStartSnaphot = dword_180345318;
  dword_180345760 = dword_180345320;
  dword_18034575C = dword_18034531C;
  dword_180345764 = dword_180345324;
}
