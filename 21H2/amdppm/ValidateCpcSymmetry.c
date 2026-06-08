/*
 * XREFs of ValidateCpcSymmetry @ 0x1C002C718
 * Callers:
 *     ValidatePerfDomainSymmetry @ 0x1C002CF48 (ValidatePerfDomainSymmetry.c)
 * Callees:
 *     WPP_RECORDER_SF_dds @ 0x1C000A794 (WPP_RECORDER_SF_dds.c)
 *     ValidateRegisterSymmetry @ 0x1C002D648 (ValidateRegisterSymmetry.c)
 */

__int64 __fastcall ValidateCpcSymmetry(char a1, __int64 a2, char a3, __int64 a4)
{
  unsigned int v4; // edi
  __int64 *v5; // rbx
  __int64 v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // r8
  int v14; // [rsp+20h] [rbp-38h]

  v4 = 0;
  v5 = (__int64 *)&off_1C0010238;
  v10 = 15LL;
  do
  {
    if ( !(unsigned __int8)ValidateRegisterSymmetry(*((unsigned int *)v5 - 2) + a2, *((unsigned int *)v5 - 2) + a4) )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_dds((__int64)WPP_GLOBAL_Control->DeviceExtension, v11, v12, 0x42u, v14, a1, a3, *v5);
      v4 = -1073741823;
    }
    v5 += 3;
    --v10;
  }
  while ( v10 );
  return v4;
}
