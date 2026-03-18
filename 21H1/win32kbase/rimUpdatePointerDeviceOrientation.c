/*
 * XREFs of rimUpdatePointerDeviceOrientation @ 0x1C016E7EC
 * Callers:
 *     ?rimSetPointerDeviceOutputConfig@@YAXPEAURIMDEV@@PEAUtagHID_POINTER_DEVICE_INFO@@PEAVCLockedInputSpace@@PEAVCLockedInputSpaceRegion@@@Z @ 0x1C016C7D4 (-rimSetPointerDeviceOutputConfig@@YAXPEAURIMDEV@@PEAUtagHID_POINTER_DEVICE_INFO@@PEAVCLockedInpu.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall rimUpdatePointerDeviceOrientation(__int64 a1)
{
  int v1; // r9d
  _DWORD *v2; // r11
  _QWORD *v3; // r10
  __int64 result; // rax
  int v5; // r8d
  int v6; // edx
  int v7; // eax
  int v8; // edx
  int v9; // ecx
  int v10; // eax
  int v11; // ecx
  int v12; // edx
  int v13; // ecx
  int v14; // ecx
  int v15; // edx
  int v16; // r9d
  int v17; // r9d
  int v18; // r9d

  v1 = *(_DWORD *)(a1 + 224);
  v2 = (_DWORD *)a1;
  v3 = *(_QWORD **)(a1 + 344);
  result = (unsigned int)(v1 - 2);
  if ( (result & 0xFFFFFFFD) == 0 )
  {
    v5 = *(_DWORD *)(a1 + 176) ^ *(_DWORD *)(a1 + 180);
    v6 = *(_DWORD *)(a1 + 180);
    v7 = *(_DWORD *)(a1 + 184);
    *(_DWORD *)(a1 + 176) = v6;
    *(_DWORD *)(a1 + 180) = v5 ^ v6;
    v8 = v7 ^ *(_DWORD *)(a1 + 188);
    v9 = *(_DWORD *)(a1 + 188);
    v10 = v2[48];
    v2[46] = v9;
    v11 = v8 ^ v9;
    v12 = v10 ^ v2[49];
    v2[47] = v11;
    v13 = v10 ^ v12;
    result = (unsigned int)v2[50];
    v2[48] = v13;
    v14 = v12 ^ v13;
    v15 = v2[51];
    v2[49] = v14;
    v2[50] = v15;
    a1 = (unsigned int)result;
    v2[51] = result;
  }
  if ( v3 )
  {
    v16 = v1 - 1;
    if ( v16 )
    {
      v17 = v16 - 1;
      if ( v17 )
      {
        v18 = v17 - 1;
        if ( v18 )
        {
          if ( v18 != 1 )
            return MicrosoftTelemetryAssertTriggeredNoArgsKM(a1);
          result = v3[8];
        }
        else
        {
          result = v3[6];
        }
      }
      else
      {
        result = v3[4];
      }
    }
    else
    {
      result = v3[2];
    }
    v3[10] = result;
  }
  return result;
}
