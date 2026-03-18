/*
 * XREFs of PopDirectedDripsEngage @ 0x1405C9C94
 * Callers:
 *     PopDirectedDripsNotify @ 0x140811764 (PopDirectedDripsNotify.c)
 * Callees:
 *     PopFxClearDirectedDripsCandidateDeviceList @ 0x1405CB970 (PopFxClearDirectedDripsCandidateDeviceList.c)
 *     PopDirectedDripsQueryEnabledMitigations @ 0x140858820 (PopDirectedDripsQueryEnabledMitigations.c)
 *     PopDirectedDripsNotifyAppsAndServices @ 0x14098C0DC (PopDirectedDripsNotifyAppsAndServices.c)
 */

__int64 __fastcall PopDirectedDripsEngage(__int64 a1, char a2, __int64 a3)
{
  __int64 result; // rax

  if ( a2 )
  {
    _InterlockedOr((volatile signed __int32 *)&PopDirectedDripsState, 0xA00u);
    LOBYTE(a3) = 1;
    return PopDirectedDripsNotifyAppsAndServices(&PopDirectedDripsState, &dword_140C24078, a3);
  }
  else
  {
    PopFxClearDirectedDripsCandidateDeviceList();
    dword_140C24258 = 0;
    _InterlockedAnd((volatile signed __int32 *)&PopDirectedDripsState, 0xFFFFC1C7);
    result = (unsigned int)dword_140C24070;
    if ( (dword_140C24070 & 4) != 0 )
      return PopDirectedDripsQueryEnabledMitigations(&PopDirectedDripsState);
  }
  return result;
}
