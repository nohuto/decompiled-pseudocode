/*
 * XREFs of ?RetireScenariosIfOverdueOrLastFrameUnpresented@CAnimationTracking@@QEAAXAEBUTelFrameInfo@1@@Z @ 0x180078994
 * Callers:
 *     ?ScheduleAndProcessFrame@CPartitionVerticalBlankScheduler@@UEAAJXZ @ 0x18007A020 (-ScheduleAndProcessFrame@CPartitionVerticalBlankScheduler@@UEAAJXZ.c)
 * Callees:
 *     ?StopAnalyzingAnimationScenario@CAnimationTracking@@AEAAXIAEBUTelFrameInfo@1@@Z @ 0x1800745D0 (-StopAnalyzingAnimationScenario@CAnimationTracking@@AEAAXIAEBUTelFrameInfo@1@@Z.c)
 */

void __fastcall CAnimationTracking::RetireScenariosIfOverdueOrLastFrameUnpresented(
        CAnimationTracking *this,
        const struct CAnimationTracking::TelFrameInfo *a2)
{
  __int64 v4; // rdi
  ULONGLONG TickCount64; // rbp
  __int64 v6; // r8
  ULONGLONG v7; // rcx
  bool v8; // dl
  unsigned __int64 v9; // rax
  bool v10; // cl
  int v11; // eax

  if ( *((_DWORD *)this + 6) )
  {
    v4 = 0LL;
    TickCount64 = GetTickCount64();
    while ( (unsigned int)v4 < *((_DWORD *)this + 6) )
    {
      v6 = *(_QWORD *)(*(_QWORD *)this + 8 * v4);
      v7 = *(_QWORD *)(v6 + 128);
      v8 = v7 && v7 < TickCount64;
      v9 = *(_QWORD *)(v6 + 64);
      v10 = v9 && *((_QWORD *)a2 + 1) >= v9;
      v11 = *(_DWORD *)(v6 + 152);
      if ( !v11 )
      {
        v11 = v10 && *((_BYTE *)a2 + 1);
        *(_DWORD *)(v6 + 152) = v11;
      }
      if ( v8 || v10 && !v11 )
        CAnimationTracking::StopAnalyzingAnimationScenario(this, v4, a2);
      else
        v4 = (unsigned int)(v4 + 1);
    }
  }
}
