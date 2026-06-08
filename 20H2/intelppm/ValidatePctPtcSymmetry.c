/*
 * XREFs of ValidatePctPtcSymmetry @ 0x1C0026494
 * Callers:
 *     ValidatePerfDomainSymmetry @ 0x1C0025980 (ValidatePerfDomainSymmetry.c)
 * Callees:
 *     WPP_RECORDER_SF_dds @ 0x1C000A794 (WPP_RECORDER_SF_dds.c)
 *     ValidateRegisterSymmetry @ 0x1C002650C (ValidateRegisterSymmetry.c)
 */

__int64 __fastcall ValidatePctPtcSymmetry(char a1, __int64 a2, char a3, __int64 a4, __int64 a5)
{
  unsigned int v9; // ebx
  __int64 v10; // rdx
  __int64 v11; // r8
  unsigned __int16 v13; // r9
  int v14; // [rsp+20h] [rbp-28h]

  v9 = -1073741823;
  if ( !(unsigned __int8)ValidateRegisterSymmetry(a2, a4) )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return v9;
    v13 = 64;
LABEL_7:
    WPP_RECORDER_SF_dds((__int64)WPP_GLOBAL_Control->DeviceExtension, v10, v11, v13, v14, a1, a3, a5);
    return v9;
  }
  if ( !(unsigned __int8)ValidateRegisterSymmetry(a2 + 12, a4 + 12) )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return v9;
    v13 = 65;
    goto LABEL_7;
  }
  return 0;
}
