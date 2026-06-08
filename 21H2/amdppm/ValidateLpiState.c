/*
 * XREFs of ValidateLpiState @ 0x1C002C7D0
 * Callers:
 *     InitAcpiLpiStates @ 0x1C0037098 (InitAcpiLpiStates.c)
 *     LpiTranslateCoordinatedIdleStates @ 0x1C0037700 (LpiTranslateCoordinatedIdleStates.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001FAC (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_D @ 0x1C0003B54 (WPP_RECORDER_SF_D.c)
 *     IsValidAcpiGenericAddress @ 0x1C002B568 (IsValidAcpiGenericAddress.c)
 */

__int64 __fastcall ValidateLpiState(__int64 a1, char a2)
{
  unsigned int v2; // r9d
  unsigned __int16 v3; // r9
  unsigned int v4; // r8d
  int v5; // ecx
  int v6; // r10d

  v2 = 0;
  if ( *(_DWORD *)(a1 + 12) )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return (unsigned int)-1073741823;
    v3 = 88;
    v4 = 1;
LABEL_4:
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      v4,
      v3,
      (__int64)&WPP_ba3a613378173fc61268b8e1c1c8ad8d_Traceguids);
    return (unsigned int)-1073741823;
  }
  v5 = *(unsigned __int8 *)(a1 + 24);
  if ( (_BYTE)v5 != 127 )
  {
    v6 = 1;
    if ( (_BYTE)v5 == 1 )
    {
      if ( !IsValidAcpiGenericAddress((unsigned __int8 *)&dword_1C0014C3C) )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          return (unsigned int)-1073741823;
        v3 = v6 + 88;
        goto LABEL_10;
      }
    }
    else
    {
      if ( (_BYTE)v5 != 126 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_D(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            2u,
            1u,
            0x5Bu,
            (__int64)&WPP_ba3a613378173fc61268b8e1c1c8ad8d_Traceguids,
            v5);
        return (unsigned int)-1073741823;
      }
      if ( !a2 )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          return (unsigned int)-1073741823;
        v3 = 90;
LABEL_10:
        v4 = v6;
        goto LABEL_4;
      }
    }
  }
  return v2;
}
