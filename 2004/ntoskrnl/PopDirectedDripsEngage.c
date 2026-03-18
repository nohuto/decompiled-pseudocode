/*
 * XREFs of PopDirectedDripsEngage @ 0x140563404
 * Callers:
 *     PopDirectedDripsNotify @ 0x14077B738 (PopDirectedDripsNotify.c)
 * Callees:
 *     PopFxClearDirectedDripsCandidateDeviceList @ 0x140564BA8 (PopFxClearDirectedDripsCandidateDeviceList.c)
 *     PopDirectedDripsQueryEnabledMitigations @ 0x1407B9464 (PopDirectedDripsQueryEnabledMitigations.c)
 *     PopDirectedDripsNotifyAppsAndServices @ 0x1408DFFC8 (PopDirectedDripsNotifyAppsAndServices.c)
 */

__int64 __fastcall PopDirectedDripsEngage(__int64 a1, char a2, __int64 a3)
{
  __int64 result; // rax

  if ( a2 )
  {
    _InterlockedOr((volatile signed __int32 *)&PopDirectedDripsState, 0xA00u);
    LOBYTE(a3) = 1;
    return PopDirectedDripsNotifyAppsAndServices(&PopDirectedDripsState, &dword_140C249F8, a3);
  }
  else
  {
    PopFxClearDirectedDripsCandidateDeviceList();
    dword_140C24BD8 = 0;
    _InterlockedAnd((volatile signed __int32 *)&PopDirectedDripsState, 0xFFFFC1C7);
    result = (unsigned int)dword_140C249F0;
    if ( (dword_140C249F0 & 4) != 0 )
      return PopDirectedDripsQueryEnabledMitigations(&PopDirectedDripsState);
  }
  return result;
}
