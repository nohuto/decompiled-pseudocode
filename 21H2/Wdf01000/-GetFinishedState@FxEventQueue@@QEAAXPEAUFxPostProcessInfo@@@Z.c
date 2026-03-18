/*
 * XREFs of ?GetFinishedState@FxEventQueue@@QEAAXPEAUFxPostProcessInfo@@@Z @ 0x1C0016154
 * Callers:
 *     ?ProcessEventInner@FxDevicePwrRequirementMachine@@AEAAXPEAUFxPostProcessInfo@@@Z @ 0x1C0014E88 (-ProcessEventInner@FxDevicePwrRequirementMachine@@AEAAXPEAUFxPostProcessInfo@@@Z.c)
 *     ?PowerProcessEventInner@FxPkgPnp@@IEAAXPEAUFxPostProcessInfo@@@Z @ 0x1C0016CA4 (-PowerProcessEventInner@FxPkgPnp@@IEAAXPEAUFxPostProcessInfo@@@Z.c)
 *     ?PnpProcessEventInner@FxPkgPnp@@IEAAXPEAUFxPostProcessInfo@@@Z @ 0x1C001E4F0 (-PnpProcessEventInner@FxPkgPnp@@IEAAXPEAUFxPostProcessInfo@@@Z.c)
 *     ?ProcessEventInner@FxWakeInterruptMachine@@AEAAXPEAUFxPostProcessInfo@@@Z @ 0x1C008E618 (-ProcessEventInner@FxWakeInterruptMachine@@AEAAXPEAUFxPostProcessInfo@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall FxEventQueue::GetFinishedState(FxEventQueue *this, FxPostProcessInfo *Info)
{
  unsigned __int8 m_QueueFlags; // r8

  m_QueueFlags = this->m_QueueFlags;
  if ( (m_QueueFlags & 1) == 0 && !this->m_WorkItemRunningCount && this->m_QueueHead == this->m_QueueTail )
  {
    if ( (m_QueueFlags & 4) != 0 )
    {
      this->m_QueueFlags = m_QueueFlags & 0xFB;
      Info->m_DeleteObject = 1;
      m_QueueFlags = this->m_QueueFlags;
    }
    if ( (m_QueueFlags & 2) != 0 )
    {
      Info->m_Event = this->m_WorkItemFinished;
      this->m_WorkItemFinished = 0LL;
    }
  }
}
