/*
 * XREFs of ACPIDevicePowerProcessPhase5DeviceSubPhase4 @ 0x1C00286C0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qLqss @ 0x1C0003A80 (WPP_RECORDER_SF_qLqss.c)
 *     ACPIDeviceCompleteGenericPhase @ 0x1C000EB80 (ACPIDeviceCompleteGenericPhase.c)
 *     ACPIGet @ 0x1C0010180 (ACPIGet.c)
 */

__int64 __fastcall ACPIDevicePowerProcessPhase5DeviceSubPhase4(__int64 a1)
{
  _QWORD *v1; // rbx
  char v3; // bp
  unsigned int v4; // eax
  const char *v5; // rcx
  unsigned int v6; // esi
  const char *v7; // rdx
  __int64 v8; // rax
  __int64 result; // rax

  v1 = *(_QWORD **)(a1 + 40);
  *(_DWORD *)(a1 + 212) = 7;
  *(_OWORD *)(a1 + 216) = 0LL;
  v3 = 0;
  *(_OWORD *)(a1 + 232) = 0LL;
  *(_QWORD *)(a1 + 248) = 0LL;
  v4 = ACPIGet(
         (__int64)v1,
         1096045407,
         -1610344446,
         0LL,
         0,
         (__int64)ACPIDeviceCompleteGenericPhase,
         a1,
         a1 + 232,
         a1 + 240);
  v5 = (const char *)&unk_1C006FB8B;
  v6 = v4;
  v7 = (const char *)&unk_1C006FB8B;
  if ( v1 )
  {
    v8 = v1[1];
    v3 = (char)v1;
    if ( (v8 & 0x200000000000LL) != 0 )
    {
      v5 = (const char *)v1[76];
      if ( (v8 & 0x400000000000LL) != 0 )
        v7 = (const char *)v1[77];
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qLqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      0xAu,
      0x50u,
      (__int64)&WPP_a8f7cd0141bb322231380cc24ac7ac02_Traceguids,
      a1,
      v6,
      v3,
      v5,
      v7);
  result = 259LL;
  if ( v6 != 259 )
  {
    ACPIDeviceCompleteGenericPhase(0LL, v6, 0LL, a1);
    return 0LL;
  }
  return result;
}
