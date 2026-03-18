/*
 * XREFs of rimUpdatePointerDeviceOrientation @ 0x1C016849C
 * Callers:
 *     ?rimSetPointerDeviceOutputConfig@@YAXPEAURIMDEV@@PEAUtagHID_POINTER_DEVICE_INFO@@PEAVCLockedInputSpace@@PEAVCLockedInputSpaceRegion@@@Z @ 0x1C0166484 (-rimSetPointerDeviceOutputConfig@@YAXPEAURIMDEV@@PEAUtagHID_POINTER_DEVICE_INFO@@PEAVCLockedInpu.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall rimUpdatePointerDeviceOrientation(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // r9d
  _DWORD *v4; // r11
  _QWORD *v5; // r10
  __int64 result; // rax
  int v7; // edx
  int v8; // eax
  int v9; // edx
  int v10; // ecx
  int v11; // eax
  int v12; // ecx
  int v13; // edx
  int v14; // ecx
  int v15; // ecx
  int v16; // edx
  int v17; // r9d
  int v18; // r9d
  __int64 v19; // r9

  v3 = *(_DWORD *)(a1 + 224);
  v4 = (_DWORD *)a1;
  v5 = *(_QWORD **)(a1 + 344);
  result = (unsigned int)(v3 - 2);
  if ( (result & 0xFFFFFFFD) == 0 )
  {
    a3 = (unsigned int)(*(_DWORD *)(a1 + 176) ^ *(_DWORD *)(a1 + 180));
    v7 = *(_DWORD *)(a1 + 180);
    v8 = *(_DWORD *)(a1 + 184);
    *(_DWORD *)(a1 + 176) = v7;
    *(_DWORD *)(a1 + 180) = a3 ^ v7;
    v9 = v8 ^ *(_DWORD *)(a1 + 188);
    v10 = *(_DWORD *)(a1 + 188);
    v11 = v4[48];
    v4[46] = v10;
    v12 = v9 ^ v10;
    v13 = v11 ^ v4[49];
    v4[47] = v12;
    v14 = v11 ^ v13;
    result = (unsigned int)v4[50];
    v4[48] = v14;
    v15 = v13 ^ v14;
    v16 = v4[51];
    v4[49] = v15;
    a2 = (unsigned int)result ^ v16;
    v4[50] = result ^ a2;
    a1 = (unsigned int)result;
    v4[51] = result;
  }
  if ( v5 )
  {
    v17 = v3 - 1;
    if ( v17 )
    {
      v18 = v17 - 1;
      if ( v18 )
      {
        v19 = (unsigned int)(v18 - 1);
        if ( (_DWORD)v19 )
        {
          if ( (_DWORD)v19 != 1 )
            return MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3, v19);
          result = v5[8];
        }
        else
        {
          result = v5[6];
        }
      }
      else
      {
        result = v5[4];
      }
    }
    else
    {
      result = v5[2];
    }
    v5[10] = result;
  }
  return result;
}
