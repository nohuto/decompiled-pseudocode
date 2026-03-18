/*
 * XREFs of ?RetireFrames@CPartitionVerticalBlankScheduler@@AEAAJ_N@Z @ 0x18007BF7C
 * Callers:
 *     ?UpdateTimes@CPartitionVerticalBlankScheduler@@EEAAJXZ @ 0x18007ADD0 (-UpdateTimes@CPartitionVerticalBlankScheduler@@EEAAJXZ.c)
 *     ?Reset@CPartitionVerticalBlankScheduler@@QEAAJXZ @ 0x1800DD8E0 (-Reset@CPartitionVerticalBlankScheduler@@QEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?RetireFrame@CPartitionVerticalBlankScheduler@@AEAAJPEAVCFrameInfo@@IPEA_N_N@Z @ 0x18007C008 (-RetireFrame@CPartitionVerticalBlankScheduler@@AEAAJPEAVCFrameInfo@@IPEA_N_N@Z.c)
 *     ?FindFirstOutstandingFrameIndex@CPartitionVerticalBlankScheduler@@AEAAIXZ @ 0x18007C450 (-FindFirstOutstandingFrameIndex@CPartitionVerticalBlankScheduler@@AEAAIXZ.c)
 */

__int64 __fastcall CPartitionVerticalBlankScheduler::RetireFrames(CPartitionVerticalBlankScheduler *this, bool a2)
{
  unsigned int v4; // edi
  unsigned int FirstOutstandingFrameIndex; // ebx
  int v6; // eax
  __int64 v7; // rcx
  bool v9; // [rsp+50h] [rbp+18h] BYREF

  v4 = 0;
  FirstOutstandingFrameIndex = CPartitionVerticalBlankScheduler::FindFirstOutstandingFrameIndex(this);
  if ( FirstOutstandingFrameIndex != -1 )
  {
    while ( 1 )
    {
      v6 = CPartitionVerticalBlankScheduler::RetireFrame(
             this,
             (CPartitionVerticalBlankScheduler *)((char *)this + 272 * FirstOutstandingFrameIndex + 144),
             FirstOutstandingFrameIndex,
             &v9,
             a2);
      v4 = v6;
      if ( v6 < 0 )
        break;
      FirstOutstandingFrameIndex = ((_BYTE)FirstOutstandingFrameIndex + 1) & 0xF;
      if ( !v9 || FirstOutstandingFrameIndex == *((_DWORD *)this + 1124) )
        return v4;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0LL, v6, 0x5B8u);
  }
  return v4;
}
