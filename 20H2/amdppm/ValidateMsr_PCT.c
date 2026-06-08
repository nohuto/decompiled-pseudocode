/*
 * XREFs of ValidateMsr_PCT @ 0x1C002BC58
 * Callers:
 *     ValidateXPssPStates @ 0x1C002CA04 (ValidateXPssPStates.c)
 * Callees:
 *     WPP_RECORDER_SF_DD @ 0x1C0004C9C (WPP_RECORDER_SF_DD.c)
 *     ValidateMsrGenAddr @ 0x1C002BB78 (ValidateMsrGenAddr.c)
 */

__int64 __fastcall ValidateMsr_PCT(__int64 a1)
{
  int v2; // ebx
  unsigned __int16 v3; // r9
  unsigned int Number; // [rsp+28h] [rbp-20h]
  int v6; // [rsp+30h] [rbp-18h]

  v2 = ValidateMsrGenAddr((_BYTE *)a1);
  if ( v2 >= 0 )
  {
    if ( *(_QWORD *)(a1 + 4) )
    {
      if ( !*(_QWORD *)(a1 + 16) )
        return 0;
      v2 = ValidateMsrGenAddr((_BYTE *)(a1 + 12));
      if ( v2 >= 0 )
        return 0;
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return (unsigned int)v2;
      v3 = 36;
      v6 = v2;
    }
    else
    {
      v2 = -1073741811;
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return (unsigned int)v2;
      v3 = 35;
      v6 = -1073741811;
    }
    Number = KeGetPcr()->Prcb.Number;
    goto LABEL_4;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v3 = 34;
    v6 = v2;
    Number = KeGetPcr()->Prcb.Number;
LABEL_4:
    WPP_RECORDER_SF_DD(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      1u,
      v3,
      (__int64)&WPP_ba3a613378173fc61268b8e1c1c8ad8d_Traceguids,
      Number,
      v6);
  }
  return (unsigned int)v2;
}
