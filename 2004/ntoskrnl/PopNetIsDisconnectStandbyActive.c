/*
 * XREFs of PopNetIsDisconnectStandbyActive @ 0x1408EEA6C
 * Callers:
 *     PopCaptureSleepStudyStatistics @ 0x14056B118 (PopCaptureSleepStudyStatistics.c)
 *     PopS0LowPowerIdleInfo @ 0x1408E0A2C (PopS0LowPowerIdleInfo.c)
 *     PopPdcCsCheckSystemVolumeDevice @ 0x140A70CA8 (PopPdcCsCheckSystemVolumeDevice.c)
 * Callees:
 *     <none>
 */

bool __fastcall PopNetIsDisconnectStandbyActive(_DWORD *a1)
{
  if ( a1 )
  {
    if ( PopNetStandbyReason )
    {
      switch ( PopNetStandbyReason )
      {
        case 1:
          *a1 = 2;
          break;
        case 2:
          *a1 = 3;
          break;
        case 3:
          *a1 = 4;
          break;
        case 6:
          *a1 = 1;
          break;
        case 7:
          *a1 = 5;
          break;
      }
    }
    else
    {
      *a1 = 0;
    }
  }
  return PopNetStandbyState == 2;
}
