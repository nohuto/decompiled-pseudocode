/*
 * XREFs of PopPepComponentGetResidencyIdleState @ 0x1403469B4
 * Callers:
 *     PopPepCompleteComponentActiveActivity @ 0x1403467F0 (PopPepCompleteComponentActiveActivity.c)
 *     PopPepComponentSetResidency @ 0x14056EF48 (PopPepComponentSetResidency.c)
 *     PopPepIdleTimeoutRoutine @ 0x14056F5B0 (PopPepIdleTimeoutRoutine.c)
 *     PopPepRegisterDevice @ 0x1407A1470 (PopPepRegisterDevice.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PopPepComponentGetResidencyIdleState(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // r8
  bool v4; // zf

  v2 = (unsigned int)(*(_DWORD *)(a1 + 188) - 1);
  if ( !PopPepLowPowerEpoch && *(_DWORD *)(a1 + 188) != 1 )
  {
    do
    {
      if ( *(_QWORD *)(*(_QWORD *)(a1 + 192) + 24 * v2 + 8) <= a2 )
        break;
      v4 = (_DWORD)v2 == 1;
      v2 = (unsigned int)(v2 - 1);
    }
    while ( !v4 );
  }
  return (unsigned int)v2;
}
