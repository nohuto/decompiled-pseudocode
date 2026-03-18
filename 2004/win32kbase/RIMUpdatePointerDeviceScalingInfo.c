/*
 * XREFs of RIMUpdatePointerDeviceScalingInfo @ 0x1C000FBD0
 * Callers:
 *     ?MapToDisplayPath@CInputSpaceRegion@@QEAAXAEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@@Z @ 0x1C000C07C (-MapToDisplayPath@CInputSpaceRegion@@QEAAXAEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@@Z.c)
 *     rimSetDeviceDisplayConfig @ 0x1C016828C (rimSetDeviceDisplayConfig.c)
 * Callees:
 *     EngMulDiv @ 0x1C0011F10 (EngMulDiv.c)
 *     rimConvertCoordinatesWithRounding @ 0x1C0167A40 (rimConvertCoordinatesWithRounding.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMUpdatePointerDeviceScalingInfo(_DWORD *a1, _DWORD *a2, int *a3, __int64 a4)
{
  unsigned int v8; // ebp
  int v9; // edx
  unsigned int v10; // r12d
  unsigned int v11; // r8d
  unsigned int v12; // r11d
  unsigned int v13; // r10d
  unsigned int v14; // r15d
  int v15; // eax
  unsigned int v16; // r14d
  int v17; // r8d
  int v18; // eax
  unsigned int v19; // eax
  INT v20; // ebp
  int v21; // ecx
  int v22; // edx
  int v23; // ecx
  __int64 result; // rax
  int v25; // eax
  unsigned int v26; // r10d
  unsigned int v27; // ebp
  unsigned int v28; // r11d
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  int v37; // edx
  int v38; // ecx
  int v39; // edx
  int v40; // ecx
  unsigned int v41; // [rsp+78h] [rbp+10h]
  INT v42; // [rsp+80h] [rbp+18h]

  if ( !a2[14] )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3, a4);
  if ( !a2[15] )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3, a4);
  if ( !a2[22] )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3, a4);
  v8 = a2[23];
  if ( !v8 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3, a4);
    v8 = a2[23];
  }
  v9 = a2[14];
  v10 = a2[15];
  v11 = a2[22];
  *a3 = v9;
  a3[1] = v10;
  v12 = a2[36];
  v13 = a2[35];
  v14 = a2[38] - v12;
  v15 = a2[27];
  v16 = a2[37] - v13;
  v41 = v12;
  if ( v15 == 4 )
  {
    if ( (v9 << 14) / v10 < (v11 << 14) / v8 )
      v25 = (v9 << 14) / v11;
    else
      v25 = (v10 << 14) / v8;
    v26 = v25 * v13;
    v27 = v25 * v8;
    v16 = (v25 * v16) >> 14;
    v14 = (v25 * v14) >> 14;
    v28 = (v25 * v12) >> 14;
    v19 = (v11 * v25) >> 14;
    v13 = v26 >> 14;
    v8 = v27 >> 14;
    a3[3] = v8;
    v41 = v28;
    a3[2] = v19;
  }
  else if ( v15 == 2 )
  {
    a3[2] = v11;
    v19 = v11;
    a3[3] = v8;
  }
  else
  {
    a3[2] = v9;
    a3[3] = v10;
    v17 = (v9 << 14) / v11;
    v18 = (v10 << 14) / v8;
    v8 = v10;
    v14 = (v18 * v14) >> 14;
    v16 = (v17 * v16) >> 14;
    v13 = (v17 * v13) >> 14;
    v41 = (v12 * v18) >> 14;
    v19 = v9;
  }
  v42 = 0;
  if ( a4 )
  {
    v42 = EngMulDiv(abs32(v9 - v19) + 2 * v13, a1[2] - *a1, 2 * v9);
    v20 = EngMulDiv(abs32(v10 - v8) + 2 * v41, a1[3] - a1[1], 2 * v10);
  }
  else
  {
    v20 = 0;
  }
  a3[2] = v16;
  a3[3] = v14;
  if ( a4 )
  {
    *(_OWORD *)a4 = *(_OWORD *)a1;
    v21 = a3[2];
    if ( *a3 != v21 && !(unsigned int)rimConvertCoordinatesWithRounding(0, *a3, 0, a1[2], v21, (LONG *)(a4 + 8)) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v30, v29, v31, v32);
    v22 = a3[1];
    v23 = a3[3];
    if ( v22 != v23 && !(unsigned int)rimConvertCoordinatesWithRounding(0, v22, 0, a1[3], v23, (LONG *)(a4 + 12)) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v34, v33, v35, v36);
    *(_DWORD *)a4 += v42;
    *(_DWORD *)(a4 + 8) += v42;
    *(_DWORD *)(a4 + 4) += v20;
    *(_DWORD *)(a4 + 12) += v20;
  }
  result = (unsigned int)(a2[26] - 2);
  if ( (result & 0xFFFFFFFD) == 0 )
  {
    v37 = *a3 ^ a3[1];
    v38 = *a3;
    result = (unsigned int)a3[3];
    a3[1] = *a3;
    *a3 = v37 ^ v38;
    v39 = a3[2] ^ result;
    v40 = a3[2];
    a3[3] = v40;
    a3[2] = v39 ^ v40;
  }
  return result;
}
