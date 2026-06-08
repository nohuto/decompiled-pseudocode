/*
 * XREFs of ValidatePctPtcSymmetry @ 0x1C002CC70
 * Callers:
 *     ValidatePerfDomainSymmetry @ 0x1C002CF48 (ValidatePerfDomainSymmetry.c)
 * Callees:
 *     WPP_RECORDER_SF_dds @ 0x1C000A794 (WPP_RECORDER_SF_dds.c)
 *     ValidateRegisterSymmetry @ 0x1C002D648 (ValidateRegisterSymmetry.c)
 */

__int64 __fastcall ValidatePctPtcSymmetry(char a1, __int64 a2, char a3, __int64 a4, __int64 a5)
{
  unsigned int v9; // ebx
  __int64 v10; // rdx
  __int64 v11; // r8
  unsigned __int16 v12; // r9
  int v14; // [rsp+20h] [rbp-28h]

  v9 = -1073741823;
  if ( (unsigned __int8)ValidateRegisterSymmetry(a2, a4) )
  {
    if ( (unsigned __int8)ValidateRegisterSymmetry(a2 + 12, a4 + 12) )
      return 0;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v12 = 65;
      goto LABEL_4;
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v12 = 64;
LABEL_4:
    WPP_RECORDER_SF_dds((__int64)WPP_GLOBAL_Control->DeviceExtension, v10, v11, v12, v14, a1, a3, a5);
  }
  return v9;
}
