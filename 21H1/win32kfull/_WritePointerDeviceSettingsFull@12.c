/*
 * XREFs of _WritePointerDeviceSettingsFull@12 @ 0xF3990
 * Callers:
 *     xxxSystemParametersInfoWorker @ 0x270DA (xxxSystemParametersInfoWorker.c)
 * Callees:
 *     ?SetCustomFlick@@YGHPAUtagCUSTOM_FLICK@@@Z @ 0x16F840 (-SetCustomFlick@@YGHPAUtagCUSTOM_FLICK@@@Z.c)
 *     ?SetFlickMap@@YGHPAUtagFLICK_MAP@@H@Z @ 0x16F93D (-SetFlickMap@@YGHPAUtagFLICK_MAP@@H@Z.c)
 *     ?WritePredictionSettings@@YGHPAUtagDEVICECONFIG_SETTING@@KPBGK@Z @ 0x16FA91 (-WritePredictionSettings@@YGHPAUtagDEVICECONFIG_SETTING@@KPBGK@Z.c)
 */

int __fastcall WritePointerDeviceSettingsFull(int a1, int *a2, int a3)
{
  int result; // eax
  int v4; // ecx
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx
  unsigned int v8; // eax
  unsigned int v9; // eax
  unsigned __int16 *v10; // [esp+0h] [ebp-8h]
  unsigned int v11; // [esp+4h] [ebp-4h]

  result = 0;
  v4 = a1 - 149;
  if ( v4 )
  {
    v5 = v4 - 2;
    if ( v5 )
    {
      v6 = v5 - 2;
      if ( v6 )
      {
        v7 = v6 - 2;
        if ( v7 )
        {
          if ( v7 == 2 )
          {
            v8 = a2[1];
            if ( v8 <= 0x3C )
            {
              dword_2660C0 = a2[1];
              glTOUCH_DRIVER_HW_STACK_LATENCY = v8;
            }
            v9 = a2[2];
            if ( v9 <= 0x3C )
            {
              dword_2660CC = a2[2];
              glTOUCH_DRIVER_HW_STACK_SAMPLETIME = v9;
            }
            dword_2660D8 = a2[3];
            gbTOUCH_DRIVER_HW_STACK_TIMESTAMP = dword_2660D8;
            result = 1;
            if ( a3 )
              return WritePredictionSettings(0, 0, v10, v11);
          }
        }
        else
        {
          return SetCustomFlick((struct tagCUSTOM_FLICK *)v10);
        }
      }
      else
      {
        return SetFlickMap((struct tagFLICK_MAP *)v10, v11);
      }
    }
    else
    {
      dword_2660E8 = *a2;
      dword_2660F4 = a2[1];
      dword_266100 = a2[2];
      dword_26610C = a2[3];
      dword_266118 = a2[4];
      dword_266124 = a2[5];
      dword_266130 = a2[6];
      result = 1;
      if ( (!a3 || (result = WriteSettingValues(7, &gaModeSettings, 7)) != 0) && !gModeMonitor )
        gModeMonitor = 1;
    }
  }
  else
  {
    dword_266140 = *a2;
    dword_26614C = a2[1];
    dword_266158 = a2[2];
    dword_266164 = a2[3];
    dword_266170 = a2[4];
    dword_26617C = a2[5];
    dword_266188 = a2[6];
    dword_266194 = a2[7];
    result = 1;
    if ( (!a3 || (result = WriteSettingValues(4, &gaPenParameters, 8)) != 0) && !gPenMonitor )
      gPenMonitor = 1;
  }
  return result;
}
