/*
 * XREFs of PopPepComponentGetResidencyIdleState @ 0x140317F64
 * Callers:
 *     PopPepCompleteComponentActiveActivity @ 0x140317DA0 (PopPepCompleteComponentActiveActivity.c)
 *     PopPepComponentSetResidency @ 0x140572978 (PopPepComponentSetResidency.c)
 *     PopPepIdleTimeoutRoutine @ 0x140572FE0 (PopPepIdleTimeoutRoutine.c)
 *     PopPepRegisterDevice @ 0x1407B07A0 (PopPepRegisterDevice.c)
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
