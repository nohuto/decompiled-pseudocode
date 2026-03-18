/*
 * XREFs of ?Insert@?$CQueue@PEAUInteractionUpdate@CManipulationManager@@@@AEAAJ_NPEAUInteractionUpdate@CManipulationManager@@@Z @ 0x1800E5668
 * Callers:
 *     ?NotifyUpdateConfiguration@CManipulationManager@@QEAAJPEAVCInteraction@@W4Enum@InteractionConfigurationUpdateType@@W43InteractionInputType@@IPEBXI@Z @ 0x18006D7CC (-NotifyUpdateConfiguration@CManipulationManager@@QEAAJPEAVCInteraction@@W4Enum@InteractionConfig.c)
 *     ?NotifyUpdateRails@CManipulationManager@@QEAAJPEAVCInteraction@@_NW4RailsAxis@@@Z @ 0x1800E8484 (-NotifyUpdateRails@CManipulationManager@@QEAAJPEAVCInteraction@@_NW4RailsAxis@@@Z.c)
 *     ?NotifyCaptureManipulation@CManipulationManager@@QEAAJPEAVCInteraction@@I_K@Z @ 0x18017C9F4 (-NotifyCaptureManipulation@CManipulationManager@@QEAAJPEAVCInteraction@@I_K@Z.c)
 *     ?NotifyCapturePointer@CManipulationManager@@QEAAJPEAVCInteraction@@I@Z @ 0x18017CB0C (-NotifyCapturePointer@CManipulationManager@@QEAAJPEAVCInteraction@@I@Z.c)
 *     ?NotifyUpdateTemporaryConfiguration@CManipulationManager@@QEAAJPEAVCInteraction@@W4TemporaryConfigurationAxis@@W4Enum@InteractionConfigurationUpdateType@@_NU?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@@Z @ 0x18017CC64 (-NotifyUpdateTemporaryConfiguration@CManipulationManager@@QEAAJPEAVCInteraction@@W4TemporaryConf.c)
 *     ?QueueMidManipulationUpdate@CManipulationManager@@IEAAJW4MidManipulationUpdateType@@PEAVCVisual@@@Z @ 0x18017E7E8 (-QueueMidManipulationUpdate@CManipulationManager@@IEAAJW4MidManipulationUpdateType@@PEAVCVisual@.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18005007C (--2@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CQueue<CManipulationManager::InteractionUpdate *>::Insert(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // ebx
  __int64 v5; // rcx
  _QWORD *v6; // rax
  __int64 v7; // rcx
  _QWORD *v8; // rcx

  v4 = 0;
  EnterCriticalSection(&stru_1803D36A8);
  if ( byte_1803D36A4 )
  {
    v4 = -2147023781;
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0LL, -2147023781, 0x97u);
  }
  else
  {
    v6 = operator new(0x18uLL);
    if ( v6 )
    {
      *(_OWORD *)v6 = 0LL;
      v6[2] = a3;
      v8 = (_QWORD *)qword_1803D3698;
      if ( *(__int64 **)qword_1803D3698 != &CManipulationManager::s_InteractionUpdateQueue )
        __fastfail(3u);
      *v6 = &CManipulationManager::s_InteractionUpdateQueue;
      v6[1] = v8;
      *v8 = v6;
      ++dword_1803D36A0;
      qword_1803D3698 = (__int64)v6;
    }
    else
    {
      v4 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0LL, -2147024882, 0x9Cu);
    }
  }
  LeaveCriticalSection(&stru_1803D36A8);
  return v4;
}
