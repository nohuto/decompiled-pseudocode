/*
 * XREFs of ValidatePlatformIdleState @ 0x1C002B1F0
 * Callers:
 *     UpdateKernelPlatformStates @ 0x1C000B34C (UpdateKernelPlatformStates.c)
 *     RegisterKernelPlatformStates @ 0x1C002FC74 (RegisterKernelPlatformStates.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C0003AB4 (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_DD @ 0x1C0004C5C (WPP_RECORDER_SF_DD.c)
 */

__int64 __fastcall ValidatePlatformIdleState(int *a1)
{
  __int64 v1; // rbx
  unsigned int v2; // edx
  _DWORD *v3; // r11
  __int64 v4; // rax
  int v5; // eax
  unsigned __int16 v6; // r9
  unsigned int i; // r11d
  _DWORD *v8; // r14
  __int64 v9; // rax
  unsigned __int16 v10; // r9

  v1 = *((_QWORD *)a1 + 1);
  v2 = 0;
  if ( v1 )
  {
    v3 = *(_DWORD **)(v1 + 1136);
    v4 = *((unsigned __int8 *)a1 + 16);
    if ( (unsigned int)v4 >= *v3 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v5 = *a1;
        v6 = 70;
        goto LABEL_5;
      }
      return (unsigned int)-1073741811;
    }
    if ( (v3[3 * v4 + 1] & 1) == 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v6 = 71;
        goto LABEL_9;
      }
      return (unsigned int)-1073741811;
    }
  }
  for ( i = 0; ; ++i )
  {
    if ( i >= a1[7] )
      return v2;
    v8 = *(_DWORD **)(*(_QWORD *)&a1[4 * i + 10] + 1136LL);
    if ( (unsigned int)LOBYTE(a1[4 * i + 12]) >= *v8 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return (unsigned int)-1073741811;
      v10 = 72;
      goto LABEL_26;
    }
    if ( !BYTE2(a1[4 * i + 12]) )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return (unsigned int)-1073741811;
      v10 = 73;
LABEL_26:
      WPP_RECORDER_SF_DD(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        1u,
        v10,
        (__int64)&WPP_ba3a613378173fc61268b8e1c1c8ad8d_Traceguids,
        *a1,
        i);
      return (unsigned int)-1073741811;
    }
    if ( v1 )
      continue;
    v9 = *((unsigned __int8 *)a1 + 16);
    if ( (unsigned int)v9 >= *v8 )
      break;
    if ( (v8[3 * v9 + 1] & 1) == 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return (unsigned int)-1073741811;
      v6 = 76;
      goto LABEL_9;
    }
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    return (unsigned int)-1073741811;
  v6 = 75;
LABEL_9:
  v5 = *a1;
LABEL_5:
  WPP_RECORDER_SF_D(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    2u,
    1u,
    v6,
    (__int64)&WPP_ba3a613378173fc61268b8e1c1c8ad8d_Traceguids,
    v5);
  return (unsigned int)-1073741811;
}
